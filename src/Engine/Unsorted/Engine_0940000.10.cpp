// Engine_0940000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_NO_ARCHIVE_OPERATORS /* this file inlines ByteOrderSerialize: its own operator<< below */
#include "ue3/Classes.h"
#include "ue3/SkeletalMesh.h"

/* ByteOrderSerialize is restated as UnArc.h has it
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

};

inline FArchive& operator<<(FArchive& Ar, FLOAT& F) { return ((FArchive_&)Ar).ByteOrderSerialize(&F, sizeof(F)); }

/* UnkDOP.h */
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
/* Slot 0x280: stops any FaceFX animation on the head mesh. */
void ASkeletalMeshActor::PreviewActorStopFaceFX()
{
	if (HeadMesh)
	{
		HeadMesh->StopFaceFXAnim();
	}
}
