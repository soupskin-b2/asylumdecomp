// FArchiveXML.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// FCollada, FMath/FMTree.h: the AVL tree behind fm::map, instantiated for FArchiveXML's tables of
// per-class XML write functions. The rotations of a node.
struct _xmlNode;
typedef struct _xmlNode xmlNode;

class FUObjectType;
class FCDObject;
typedef int int32;

#define NULL 0
namespace fm
{
	template <class _Kty, class _Ty>
	class pair
	{
	public:
		_Kty first;
		_Ty second;
	};

	template <class KEY, class DATA>
	class tree
	{
	public:
		typedef fm::pair<KEY, DATA> pair;

		class node
		{
		public:
			node* left;
			node* right;
			node* parent;
			int32 weight;
			pair data;

			void rotateLeft()
			{
				node** parentLink = (parent->left == this) ? &parent->left : &parent->right;

				// detach right
				node* oldRight = right;

				// detach right's left and attach to the parent's right.
				node* right_left = right->left;
				right = right_left;
				if (right_left != NULL) right_left->parent = this;

				// attach the right to the double parent.
				oldRight->left = this;

				// attach the parent on the right's left.
				oldRight->parent = parent;
				parent = oldRight;
				(*parentLink) = oldRight;

				// adjust the weights
				weight = weight - 1 - (oldRight->weight > 0 ? oldRight->weight : 0);
				oldRight->weight = oldRight->weight - (0 > -weight ? 0 : -weight) - 1;
			}

			void rotateRight()
			{
				node** parentLink = (parent->left == this) ? &parent->left : &parent->right;

				// detach left
				node* oldLeft = left;

				// detach left's right and attach to the parent's left.
				node* left_right = left->right;
				left = left_right;
				if (left_right != NULL) left_right->parent = this;

				// attach the parent on the left's right.
				oldLeft->right = this;

				// attach the left to the double parent.
				oldLeft->parent = parent;
				parent = oldLeft;
				(*parentLink) = oldLeft;

				// adjust the weights
				weight = weight + 1 + (0 > oldLeft->weight ? -oldLeft->weight : 0);
				oldLeft->weight = (oldLeft->weight + 1) + (0 > weight ? 0 : weight);
			}
		};
	};
}

typedef xmlNode* (*XMLWriteFunc)(FCDObject*, xmlNode*);

// @baa 0x0188f0b0
template class fm::tree<const FUObjectType*, XMLWriteFunc>::node;
