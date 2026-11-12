// UnrealEd_12d0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Wx.h"

struct USplitterWindowHost {
    BYTE _pad[0x300];
    wxSplitterWindow* Splitter;
    INT CachedSashPosition;

    void sub_012decf0(INT Param);
};

// @baa 0x012decf0
void USplitterWindowHost::sub_012decf0(INT Param)
{
    CachedSashPosition = Splitter->GetSashPosition();
}
