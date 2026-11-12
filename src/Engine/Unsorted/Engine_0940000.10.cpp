// Engine_0940000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* FArchive (UnArc.h) up to ArForceByteSwapping. ByteOrderSerialize is restated as UnArc.h has it
 * inline: this file's copy is inlined, while the kit only knows the out-of-line one (0x0053ea70). */
class FArchive_ : public FArchive
{
public:
    FArchive& ByteOrderSerialize(void* V, INT Length)
    {
        if (ArForceByteSwapping)
        {
            // serialize the bytes in reverse order
            for (INT i = Length - 1; i >= 0; i--)
            {
                Serialize((BYTE*)V + i, 1);
            }
        }
        else
        {
            Serialize(V, Length);
        }
        return *this;
    }

private:
    BYTE OpaqueArchiveState[0x48 - 0x18]; /* ArIsTransacting .. ArPortFlags, as far as this needs */
    UBOOL ArForceByteSwapping;            /* 0x48 */
};

inline FArchive& operator<<(FArchive& Ar, FLOAT& F) { return ((FArchive_&)Ar).ByteOrderSerialize(&F, sizeof(F)); }

/* UnkDOP.h */
#define NUM_PLANES 3
/* FkDOP (UnkDOP.h): an axis-aligned bounding volume (a kDOP with 3 plane pairs). Not in the kit. */
struct FkDOP
{
    FLOAT Min[NUM_PLANES];
    FLOAT Max[NUM_PLANES];

    friend FArchive& operator<<(FArchive& Ar, FkDOP& kDOP);
};

// @baa 0x00949d60
FArchive& operator<<(FArchive& Ar, FkDOP& kDOP)
{
    for (INT nPlane = 0; nPlane < NUM_PLANES; nPlane++)
    {
        Ar << kDOP.Min[nPlane];
    }
    for (INT nPlane = 0; nPlane < NUM_PLANES; nPlane++)
    {
        Ar << kDOP.Max[nPlane];
    }
    return Ar;
}

struct SSub_008076c0 {
    void sub_008076c0(int A, int B, int C); // 0x008076c0, ret 0x1c
};

struct S0094c800 {
    char _Pad[0x260];
    SSub_008076c0 _Sub;

    void sub_0094c800(int A, int B) {
        _Sub.sub_008076c0(A, B, 0x1c);
    }
};

// @baa 0x0094c800
extern "C" void g_KeepAlive_0094c800() {
    S0094c800* Self = 0;
    Self->sub_0094c800(0, 1);
}

// @baa 0x00944aa0
/* Slot 0x280 (unnamed in the kit): stops any FaceFX animation on the head mesh. */
void ASkeletalMeshActor::vf_280()
{
	if (HeadMesh)
	{
		HeadMesh->StopFaceFXAnim();
	}
}
