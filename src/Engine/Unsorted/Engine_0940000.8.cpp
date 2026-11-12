// Engine_0940000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct IShutdown {
    virtual void NotifyShutdown(INT bValue) = 0;
};

struct sub_00947f70_ {
    IShutdown* NotifyTarget;

    void sub_00947f70()
    {
        if (NotifyTarget)
            NotifyTarget->NotifyShutdown(1);
        NotifyTarget = 0;
    }
};

static sub_00947f70_ g_ShutdownHolder;
// @baa 0x00947f70
void shutdown_notify_helper()
{
    g_ShutdownHolder.sub_00947f70();
}

// The object held at offset 0x9c of the PhAT editor widget exposes a virtual
// method at vtable slot 0x3c (index 15) that returns an INT.
struct FPhATWidgetTarget_
{
    virtual ~FPhATWidgetTarget_();
    virtual void sub_00();
    virtual void sub_0004();
    virtual void sub_0008();
    virtual void sub_000c();
    virtual void sub_0010();
    virtual void sub_0014();
    virtual void sub_0018();
    virtual void sub_001c();
    virtual void sub_0020();
    virtual void sub_0024();
    virtual void sub_0028();
    virtual void sub_002c();
    virtual void sub_0030();
    virtual void sub_0034();
    virtual INT vf_003c();
};

struct FPhATWidget_
{
    char pad_0094[0x9c];
    FPhATWidgetTarget_* vfTarget;   // offset 0x9c
    INT sub_00944fa0();
};

// @baa 0x00944fa0
INT FPhATWidget_::sub_00944fa0()
{
    if (vfTarget != NULL)
        return vfTarget->vf_003c();
    return 0;
}

struct IVirtualTarget
{
	virtual void OnNotify(int InParam);
};

struct OuterClass
{
	IVirtualTarget* Inner;
	void sub_00948000();
};

// @baa 0x00948000
void OuterClass::sub_00948000()
{
	if (Inner != NULL)
		Inner->OnNotify(1);
	Inner = NULL;
}

inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

FArchive& operator<<(FArchive& Ar, FSimpleBox& Box);
// @baa 0x00943a30
 /* 0x00943580 */
FArchive& operator<<(FArchive& Ar, FBoneBounds& B)
{
    return Ar << B.BoneIndex << B.Box;
}
