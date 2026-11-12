// BmGameLevelTransitionClasses.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct ARLevelVolume_ : public ARLevelVolume
{
    void sub_0158c5b0();
    INT sub_007771e0(INT A);
};

// @baa 0x01591bb0
INT ARLevelVolume::vf_17c(INT A)
{
    if (A != 0)
        ((ARLevelVolume_*)this)->sub_0158c5b0();
    return ((ARLevelVolume_*)this)->sub_007771e0(A);
}

extern float g_025db4c4;
// @baa 0x01557f60
void __stdcall sub_01557f60(FLOAT F)
{
    g_025db4c4 = F;
}

struct C_X_290
{
    BYTE Pad[0x290];
    DWORD F;
};

struct URSeqAct_PrepareMapChangeFromURL_ : public URSeqAct_PrepareMapChangeFromURL
{
    void sub_008bea90();
    C_X_290* sub_008aba50();
};

// @baa 0x0155abb0
void URSeqAct_PrepareMapChangeFromURL::vf_178()
{
    URSeqAct_PrepareMapChangeFromURL_* Self = (URSeqAct_PrepareMapChangeFromURL_*)this;
    C_X_290* X;
    Self->sub_008bea90();
    X = Self->sub_008aba50();
    X->F &= ~0x4004;
}

/* Kit gap: FName has no operator== (UnName.h compares Index and Number). */
inline UBOOL operator==(const FName& A, const FName& B) { return A.Index == B.Index && A.Number == B.Number; }

// @baa 0x0155a3a0
/* A transition connects the levels on either side of it. */
UBOOL ARLevelTransition::IsConnectedToLevel(FName Level)
{
    return Level == LevelInFront || Level == LevelBehind;
}

/* TArray::FindItem(Item, Index) (Array.h); the kit's TArray only has FindItemIndex. */
template<typename T> struct TArrayFindItem_ : public TArray<T>
{
    UBOOL FindItem(const T& Item, INT& Index) const
    {
        const T* const DataEnd = this->GetTypedData() + this->ArrayNum;
        for (const T* Data = this->GetTypedData(); Data < DataEnd; Data++)
        {
            if (*Data == Item)
            {
                Index = (INT)(Data - this->GetTypedData());
                return TRUE;
            }
        }
        return FALSE;
    }
};

// @baa 0x0156d0a0
/* Drops Originator's request for the next level (the level name itself isn't checked). */
void ARGameRI::RemoveNextLevelRequest(FName Level, AActor* Originator)
{
    INT Index;
    if (((TArrayFindItem_<AActor*>&)NextLevelOriginators).FindItem(Originator, Index))
    {
        NextLevelOriginators.Remove(Index);
    }
}
