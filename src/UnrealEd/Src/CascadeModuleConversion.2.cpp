// CascadeModuleConversion.cpp (part 2 of 3): 1 function
// Placed here by: file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

int sub_012c00a0(int, int, int, float);
unsigned int sub_012c0130(int, int, int, float);
int sub_012c1fa0(int, int, int, float);
int sub_012ceeb0(int, int, int, float);
int sub_012d1fe0(int, int, int, float);
extern const wchar_t g_0222c2bc[];
extern const wchar_t g_0222c3ac[];
extern const wchar_t g_0222c498[];
extern const wchar_t g_0222c5a8[];
extern const wchar_t g_0222c6d8[];
extern const char g_0222c2c0[];
extern const char g_0222c3b0[];
extern const char g_0222c4a0[];
extern const char g_0222c5b0[];
extern const char g_0222c6e0[];
// @baa 0x012d2540
int sub_012d2540(int TargetVariable, int HighVariable, int LowVariable, float Amount)
{
    if (TargetVariable == 0)
    {
        appFailAssert("TargetVariable", g_0222c2c0, 0xc99, g_0222c2bc);
    }
    if (HighVariable == 0)
    {
        appFailAssert("HighVariable", g_0222c3b0, 0xc9a, g_0222c3ac);
    }
    if (LowVariable == 0)
    {
        appFailAssert("LowVariable", g_0222c4a0, 0xc9b, g_0222c498);
    }
    if (*(int*)(TargetVariable + 8) != *(int*)(HighVariable + 8))
    {
        appFailAssert("TargetVariable->Type == HighVariable->Type", g_0222c5b0, 0xc9c, g_0222c5a8);
    }
    if (*(int*)(TargetVariable + 8) != *(int*)(LowVariable + 8))
    {
        appFailAssert("TargetVariable->Type == LowVariable->Type", g_0222c6e0, 0xc9d, g_0222c6d8);
    }

    switch (*(int*)(TargetVariable + 8))
    {
    case 0:
        break;
    case 1:
        return sub_012c00a0(TargetVariable, HighVariable, LowVariable, Amount);
    case 2:
        *(float*)(TargetVariable + 0xc) =
            (1.0f - Amount) * *(float*)(LowVariable + 0xc) + *(float*)(HighVariable + 0xc) * Amount;
        break;
    case 3:
        return sub_012c0130(TargetVariable, HighVariable, LowVariable, Amount);
    case 4:
        return sub_012c1fa0(TargetVariable, HighVariable, LowVariable, Amount);
    case 5:
        return sub_012ceeb0(TargetVariable, HighVariable, LowVariable, Amount);
    case 6:
        return sub_012d1fe0(TargetVariable, HighVariable, LowVariable, Amount);
    default:
        return 0;
    }
    return 1;
}
