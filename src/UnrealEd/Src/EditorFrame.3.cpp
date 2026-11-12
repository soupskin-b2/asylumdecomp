// EditorFrame.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Wx.h"

int sub_0113a870(int);
struct C_0113aa40 {
	void sub_0113aa40(wxEvent* Event)
	{
		sub_0113a870(Event->GetId() - 0x437d);
	}
};

// @baa 0x0113aa40
void KeepAlive(C_0113aa40* Self)
{
	Self->sub_0113aa40(reinterpret_cast<wxEvent*>(0));
}
