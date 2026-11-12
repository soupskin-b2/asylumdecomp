// Engine_0940000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

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
