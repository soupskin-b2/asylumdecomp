// Core_1e10000.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

extern unsigned char __cdecl sub_0059f5f0(int Index, int* State);
extern int g_025ebeec;
extern unsigned char g_026e1798;
// @baa 0x01e15780
void sub_01e15780()
{
    g_026e1798 = sub_0059f5f0(0xfa0, &g_025ebeec);
}

extern "C" int __cdecl sub_01a37872(int (*fn)(void));
extern "C" int sub_01e27590(void);
struct S_005ee0b0
{
	void sub_005ee0b0(const wchar_t* Name);
};

extern S_005ee0b0 g_026dfd10;
// @baa 0x01e11fc0
void sub_01e11fc0(void)
{
	g_026dfd10.sub_005ee0b0(0);
	sub_01a37872(sub_01e27590);
}

extern float g_025eabc0;
extern float g_026e139c;
// @baa 0x01e12e00
void sub_01e12e00(void)
{
    g_026e139c = 1.0f / g_025eabc0;
}

extern float g_025ec138;
extern float g_026e1c2c;
// @baa 0x01e15920
void sub_01e15920(void)
{
	g_026e1c2c = 1.0f / g_025ec138;
}

extern float g_025ec238;
extern float g_026e1dac;
// @baa 0x01e15a30
void sub_01e15a30(void)
{
	g_026e1dac = 1.0f / g_025ec238;
}

extern float g_025ec378;
extern float g_026e213c;
// @baa 0x01e15bc0
void sub_01e15bc0(void)
{
  g_026e213c = 1.0f / g_025ec378;
}

extern float g_025ec470;
extern float g_026e2380;
// @baa 0x01e15d50
void sub_01e15d50(void)
{
    g_026e2380 = 1.0f / g_025ec470;
}

extern float g_025ef890;
extern float g_026e308c;
// @baa 0x01e1f290
void sub_01e1f290(void)
{
	g_026e308c = 1.0f / g_025ef890;
}
