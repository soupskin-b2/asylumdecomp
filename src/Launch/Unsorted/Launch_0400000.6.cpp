// Launch_0400000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Wx.h"

// @baa 0x004019a0
/* wx's inline wxGetTranslation(const wxChar*, const wxChar*), out of line */
const wxChar* sub_004019a0(const wxChar* sz, const wxChar* domain)
{
	wxLocale* pLoc = wxGetLocale();
	if (pLoc)
		return pLoc->GetString(sz, domain);
	else
		return sz;
}
