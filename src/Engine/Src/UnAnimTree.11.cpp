// UnAnimTree.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* Kit gaps, with UE3's definitions (UnName.h): FName has no comparison operators and no EName. */
enum EName_ { NAME_None_ = 0 };

inline UBOOL operator==(const FName& A, const FName& B) { return A.Index == B.Index && A.Number == B.Number; }

inline UBOOL operator!=(const FName& A, EName_ N) { return A.Index != N || A.Number != 0; }

/* Out-of-line code Classes.h doesn't declare. */
struct FAnimNodeArray : public TArray<UAnimNode*>
{
	~FAnimNodeArray();					/* 00920d10, TArray<UAnimNode*>::~TArray */
};

struct UAnimNode_ : public UAnimNode
{
	void sub_00c4b530(TArray<UAnimNode*>& Nodes);		/* GetNodes */
};

struct UAnimNodeSynch_ : public UAnimNodeSynch
{
	void sub_00c62830(UAnimNodeSequence* SeqNode, FName GroupName);	/* RemoveNodeFromGroup */
	void sub_00c56250(UAnimNodeSequence* SeqNode, FName GroupName);	/* AddNodeToGroup */
};

/* Cast<UAnimNodeSynch> is the out-of-line instantiation at 00c7f910. */
extern template UAnimNodeSynch* Cast<UAnimNodeSynch>(UObject* Src);
/* UAnimNodeSlot::AddToSynchGroup isn't declared in Classes.h. */
struct UAnimNodeSlot_ : public UAnimNodeSlot
{
	UAnimNodeSequence* sub_00c7ccb0();			/* GetCustomAnimNodeSeq */
	void AddToSynchGroup(FName GroupName);
};

// @baa 0x00c803f0
void UAnimNodeSlot_::AddToSynchGroup(FName GroupName)
{
	UAnimNodeSequence* SeqNode = sub_00c7ccb0();

	// nothing to do without a custom animation, or if it's already in that group
	if (!SeqNode || SeqNode->SynchGroupName == GroupName)
	{
		return;
	}

	// find the tree's synch node the first time
	if (!SynchNode)
	{
		FAnimNodeArray Nodes;
		((UAnimNode_*)SkelComponent->Animations)->sub_00c4b530(Nodes);
		for (INT i = 0; i < Nodes.Num(); i++)
		{
			SynchNode = Cast<UAnimNodeSynch>(Nodes(i));
			if (SynchNode)
			{
				break;
			}
		}
	}

	if (SynchNode)
	{
		// leave the old group
		if (SeqNode->SynchGroupName != NAME_None_)
		{
			((UAnimNodeSynch_*)SynchNode)->sub_00c62830(SeqNode, SeqNode->SynchGroupName);
		}

		// and join the new one
		if (GroupName != NAME_None_)
		{
			((UAnimNodeSynch_*)SynchNode)->sub_00c56250(SeqNode, GroupName);
		}
	}
}
