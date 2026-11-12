// FArchiveXML.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// FCollada, FMath/FMTree.h: the AVL tree behind fm::map, instantiated for FArchiveXML's tables of
// per-class XML load functions.
struct _xmlNode;
typedef struct _xmlNode xmlNode;

class FUObjectType;
class FCDObject;
typedef int int32;

// This FCollada build is linked against the C runtime DLL without its import declarations, so
// malloc is reached through the linker's thunk.
extern "C" void* malloc(size_t size);
inline void* operator new(size_t, void* where) { return where; }

namespace fm
{
	template <class Type1>
	inline Type1* Construct(Type1* o)
	{
		return ::new (o) Type1();
	}

	template <class _Kty, class _Ty>
	class pair
	{
	public:
		_Kty first;
		_Ty second;

		pair() : first(), second() {}
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

			node() : left(NULL), right(NULL), parent(NULL), weight(0) {}

			void rotateLeft();
			void rotateRight();
		};

		class iterator
		{
			node* currentNode;

		public:
			iterator(node* n) : currentNode(n) {}
		};

	private:
		node* root;
		size_t sized;

	public:
		iterator insert(const KEY& key, const DATA& data)
		{
			// First step: look for an already existing entry.
			node** insertNode = &root->right;
			node* parent = root;
			while (*insertNode != NULL)
			{
				parent = *insertNode;
				if (key < parent->data.first) insertNode = &parent->left;
				else if (key == parent->data.first)
				{
					parent->data.second = data;
					return iterator(parent);
				}
				else insertNode = &parent->right;
			}

			// Insert the new node.
			node* n = *insertNode = (node*) malloc(sizeof(node));
			fm::Construct(n);
			n->parent = parent;
			n->data.first = key;
			n->data.second = data;
			++sized;

			// Balance the tree.
			parent->weight += (*insertNode == parent->right) ? 1 : -1;
			node* it = parent;
			while (it != root)
			{
				// Check whether we need to balance this node.
				if (it->weight > 1)
				{
					if (it->right->weight < 0) it->right->rotateRight();
					it->rotateLeft();
					break;
				}
				else if (it->weight < -1)
				{
					if (it->left->weight > 0) it->left->rotateLeft();
					it->rotateRight();
					break;
				}
				else if (it->weight == 0) break; // No height change.

				// Go up one level.
				it->parent->weight += (it == it->parent->right) ? 1 : -1;
				it = it->parent;
			}

			return iterator(n);
		}
	};
}

typedef bool (*XMLLoadFunc)(FCDObject*, xmlNode*);

// @baa 0x01891c20
template class fm::tree<const FUObjectType*, XMLLoadFunc>;
