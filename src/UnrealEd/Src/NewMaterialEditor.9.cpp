// NewMaterialEditor.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct FMaterialEditorObject {
    void sub_007374f0(int Arg);
    void sub_00737390(int Arg);
};

extern FMaterialEditorObject g_026b2554;
extern FMaterialEditorObject g_026b22ac;
// @baa 0x00739720
void sub_00739720()
{
    g_026b2554.sub_007374f0(0);
    g_026b22ac.sub_00737390(0);
}
