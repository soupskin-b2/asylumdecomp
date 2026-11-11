// Core_1dd0000.cpp (part 1 of 42): 455 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

class wxClassInfo;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd3810(void);
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd3810(void);
};

int sub_00455620(void);
int sub_01a37872(...);
int sub_01e22180(void);
extern undefined4 g_02618650;
extern undefined4 g_02618654;
extern undefined4 g_02618658;
extern undefined4 g_0261865c;
extern undefined4 g_02618660;
extern undefined4 g_02618664;
// @baa 0x01dd3810
void sub_01dd3810(void)
{
  g_0261865c = (undefined4)((&wxWindow::ms_classInfo));
  g_02618650 = (undefined4)(L"FxFunctionEditor");
  g_02618654 = 0x194;
  g_02618658 = (undefined4)(sub_00455620);
  g_02618660 = 0;
  g_02618664 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02618650);
  ((wxClassInfo *)((wxClassInfo *)&g_02618650))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22180);
  return;
}

extern undefined4 g_025d4998;
extern undefined4 sm_eventTable_exref;
// @baa 0x01dd3870
void sub_01dd3870(void)
{
  g_025d4998 = sm_eventTable_exref;
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd3880(void);
};

struct wxEventTable {
    public:
};

int sub_01e22190(void);
extern undefined4 g_02617a68;
// @baa 0x01dd3880
void sub_01dd3880(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02617a68))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4998));
  sub_01a37872(&sub_01e22190);
  return;
}

extern int g_01e2b4cc;
extern int g_025d4940;
// @baa 0x01dd3980
void sub_01dd3980() { g_025d4940 = g_01e2b4cc; }

extern int g_025d4978;
// @baa 0x01dd3aa0
void sub_01dd3aa0() { g_025d4978 = g_01e2b4cc; }

extern int g_025d4920;
// @baa 0x01dd3c10
void sub_01dd3c10() { g_025d4920 = g_01e2b4cc; }

extern undefined4 g_025d4e30;
// @baa 0x01dd3e90
void sub_01dd3e90(void)
{
  g_025d4e30 = sm_eventTable_exref;
  return;
}

int sub_01e223e0(void);
// @baa 0x01dd40b0
void sub_01dd40b0(void)
{
  sub_01a37872(&sub_01e223e0);
  return;
}

extern int g_01e2a20c;
extern int g_025d4e20;
// @baa 0x01dd40c0
void sub_01dd40c0() { g_025d4e20 = g_01e2a20c; }

extern __declspec(dllimport) int const wxEVT_NULL;
extern undefined4 g_02663984;
extern undefined4 g_02663988;
extern undefined4 g_0266398c;
extern undefined4 g_02663990;
extern undefined4 g_02663994;
// @baa 0x01dd40f0
void sub_01dd40f0(void)
{
  g_02663984 = 0;
  g_02663988 = 0;
  g_0266398c = 0;
  g_02663990 = 0;
  g_02663994 = (undefined4)((&wxEVT_NULL));
  return;
}

int sub_01e22410(void);
// @baa 0x01dd4120
void sub_01dd4120(void)
{
  sub_01a37872(&sub_01e22410);
  return;
}

int sub_01e225c0(...);
// @baa 0x01dd41d0
void sub_01dd41d0(void)
{
  sub_01a37872(&sub_01e225c0);
  return;
}

int sub_01e225a0(...);
// @baa 0x01dd41e0
void sub_01dd41e0(void)
{
  sub_01a37872(&sub_01e225a0);
  return;
}

int sub_01e22330(void);
// @baa 0x01dd41f0
void sub_01dd41f0(void)
{
  sub_01a37872(&sub_01e22330);
  return;
}

int sub_01e22360(void);
// @baa 0x01dd4200
void sub_01dd4200(void)
{
  sub_01a37872(&sub_01e22360);
  return;
}

int sub_01e22390(...);
// @baa 0x01dd4210
void sub_01dd4210(void)
{
  sub_01a37872(&sub_01e22390);
  return;
}

int sub_01e22590(...);
// @baa 0x01dd4220
void sub_01dd4220(void)
{
  sub_01a37872(&sub_01e22590);
  return;
}

int sub_01e225b0(...);
// @baa 0x01dd4230
void sub_01dd4230(void)
{
  sub_01a37872(&sub_01e225b0);
  return;
}

int sub_01e224e0(void);
// @baa 0x01dd4240
void sub_01dd4240(void)
{
  sub_01a37872(&sub_01e224e0);
  return;
}

int sub_01e22440(void);
// @baa 0x01dd4250
void sub_01dd4250(void)
{
  sub_01a37872(&sub_01e22440);
  return;
}

struct D
{
    void sub_01ab3bf0();
    void sub_01ab58f0();
};

extern D g_026639d4;
void sub_01e222c0();
extern "C" int __cdecl onexit(void (*pfn)(void));
// @baa 0x01dd4260
void sub_01dd4260()
{
    g_026639d4.sub_01ab3bf0();
    onexit(sub_01e222c0);
}

extern D g_026638e0;
void sub_01e222d0();
// @baa 0x01dd4280
void sub_01dd4280()
{
    g_026638e0.sub_01ab3bf0();
    onexit(sub_01e222d0);
}

extern int g_025d4e28;
// @baa 0x01dd4300
void sub_01dd4300() { g_025d4e28 = g_01e2b4cc; }

extern __declspec(dllimport) int const wxEVT_COMMAND_CHOICE_SELECTED;
int sub_004881d0(void);
extern undefined4 g_02663c8c;
extern undefined4 g_02663c90;
extern undefined4 g_02663c94;
extern undefined4 g_02663c98;
extern undefined4 g_02663c9c;
extern undefined4 g_02663ca0;
extern undefined4 g_02663ca4;
extern undefined4 g_02663ca8;
extern undefined4 g_02663cac;
extern undefined4 g_02663cb0;
// @baa 0x01dd4330
void sub_01dd4330(void)
{
  g_02663c8c = 0x18c9;
  g_02663c90 = 0xffffffff;
  g_02663c94 = (undefined4)(sub_004881d0);
  g_02663c98 = 0;
  g_02663c9c = (undefined4)((&wxEVT_COMMAND_CHOICE_SELECTED));
  g_02663ca0 = 0;
  g_02663ca4 = 0;
  g_02663ca8 = 0;
  g_02663cac = 0;
  g_02663cb0 = (undefined4)((&wxEVT_NULL));
  return;
}

int sub_01e22490(void);
// @baa 0x01dd4390
void sub_01dd4390(void)
{
  sub_01a37872(&sub_01e22490);
  return;
}

int sub_01e223a0(void);
// @baa 0x01dd43d0
void sub_01dd43d0(void)
{
  sub_01a37872(&sub_01e223a0);
  return;
}

int sub_01e223d0(...);
// @baa 0x01dd43e0
void sub_01dd43e0(void)
{
  sub_01a37872(&sub_01e223d0);
  return;
}

extern int g_01e2c2c4;
extern int g_025d4e38;
// @baa 0x01dd43f0
void sub_01dd43f0() { g_025d4e38 = g_01e2c2c4; }

extern __declspec(dllimport) int const wxEVT_TIMER;
int sub_00464cf0(void);
extern undefined4 g_026638f0;
extern undefined4 g_026638f4;
extern undefined4 g_026638f8;
extern undefined4 g_026638fc;
extern undefined4 g_02663900;
extern undefined4 g_02663904;
extern undefined4 g_02663908;
extern undefined4 g_0266390c;
extern undefined4 g_02663910;
extern undefined4 g_02663914;
// @baa 0x01dd4420
void sub_01dd4420(void)
{
  g_026638f0 = 0x401;
  g_026638f4 = 0xffffffff;
  g_026638f8 = (undefined4)(&sub_00464cf0);
  g_026638fc = 0;
  g_02663900 = (undefined4)((&wxEVT_TIMER));
  g_02663904 = 0;
  g_02663908 = 0;
  g_0266390c = 0;
  g_02663910 = 0;
  g_02663914 = (undefined4)((&wxEVT_NULL));
  return;
}

int sub_01e22650(...);
// @baa 0x01dd4640
void sub_01dd4640(void)
{
  sub_01a37872(&sub_01e22650);
  return;
}

extern __declspec(dllimport) int const wxEVT_COMMAND_LIST_COL_CLICK;
int sub_004d09d0(void);
extern undefined4 g_02664b24;
extern undefined4 g_02664b28;
extern undefined4 g_02664b2c;
extern undefined4 g_02664b30;
extern undefined4 g_02664b34;
extern undefined4 g_02664b38;
extern undefined4 g_02664b3c;
extern undefined4 g_02664b40;
extern undefined4 g_02664b44;
extern undefined4 g_02664b48;
// @baa 0x01dd47f0
void sub_01dd47f0(void)
{
  g_02664b24 = 0x1794;
  g_02664b28 = 0xffffffff;
  g_02664b2c = (undefined4)(sub_004d09d0);
  g_02664b30 = 0;
  g_02664b34 = (undefined4)((&wxEVT_COMMAND_LIST_COL_CLICK));
  g_02664b38 = 0;
  g_02664b3c = 0;
  g_02664b40 = 0;
  g_02664b44 = 0;
  g_02664b48 = (undefined4)((&wxEVT_NULL));
  return;
}

extern int g_025d4edc;
// @baa 0x01dd4ac0
void sub_01dd4ac0() { g_025d4edc = g_01e2c2c4; }

extern __declspec(dllimport) int const wxEVT_RIGHT_DOWN;
int sub_004cbf50(void);
extern undefined4 g_02664b64;
extern undefined4 g_02664b68;
extern undefined4 g_02664b6c;
extern undefined4 g_02664b70;
extern undefined4 g_02664b74;
extern undefined4 g_02664b78;
extern undefined4 g_02664b7c;
extern undefined4 g_02664b80;
extern undefined4 g_02664b84;
extern undefined4 g_02664b88;
// @baa 0x01dd4af0
void sub_01dd4af0(void)
{
  g_02664b64 = 0xffffffff;
  g_02664b68 = 0xffffffff;
  g_02664b6c = (undefined4)(&sub_004cbf50);
  g_02664b70 = 0;
  g_02664b74 = (undefined4)((&wxEVT_RIGHT_DOWN));
  g_02664b78 = 0;
  g_02664b7c = 0;
  g_02664b80 = 0;
  g_02664b84 = 0;
  g_02664b88 = (undefined4)((&wxEVT_NULL));
  return;
}

extern __declspec(dllimport) int const wxEVT_HELP;
int sub_004bb0b0(void);
extern undefined4 g_02664b8c;
extern undefined4 g_02664b90;
extern undefined4 g_02664b94;
extern undefined4 g_02664b98;
extern undefined4 g_02664b9c;
extern undefined4 g_02664ba0;
extern undefined4 g_02664ba4;
extern undefined4 g_02664ba8;
extern undefined4 g_02664bac;
extern undefined4 g_02664bb0;
// @baa 0x01dd4d80
void sub_01dd4d80(void)
{
  g_02664b8c = 0xffffffff;
  g_02664b90 = 5999;
  g_02664b94 = (undefined4)(sub_004bb0b0);
  g_02664b98 = 0;
  g_02664b9c = (undefined4)((&wxEVT_HELP));
  g_02664ba0 = 0;
  g_02664ba4 = 0;
  g_02664ba8 = 0;
  g_02664bac = 0;
  g_02664bb0 = (undefined4)((&wxEVT_NULL));
  return;
}

extern undefined4 g_025d4f0c;
// @baa 0x01dd4f80
void sub_01dd4f80(void)
{
  g_025d4f0c = sm_eventTable_exref;
  return;
}

extern int g_025d4f04;
// @baa 0x01dd52f0
void sub_01dd52f0() { g_025d4f04 = g_01e2b4cc; }

extern undefined4 g_025d4ee4;
// @baa 0x01dd5600
void sub_01dd5600(void)
{
  g_025d4ee4 = sm_eventTable_exref;
  return;
}

extern undefined4 g_025d4ef4;
// @baa 0x01dd5880
void sub_01dd5880(void)
{
  g_025d4ef4 = sm_eventTable_exref;
  return;
}

int sub_01e22900(...);
// @baa 0x01dd5e20
void sub_01dd5e20(void)
{
  sub_01a37872(&sub_01e22900);
  return;
}

extern int g_01e29cc4;
extern int g_025d4efc;
// @baa 0x01dd5e90
void sub_01dd5e90() { g_025d4efc = g_01e29cc4; }

int sub_01e228d0(void);
// @baa 0x01dd5f90
void sub_01dd5f90(void)
{
  sub_01a37872(&sub_01e228d0);
  return;
}

extern int g_025d4eec;
// @baa 0x01dd6000
void sub_01dd6000() { g_025d4eec = g_01e29cc4; }

extern undefined4 g_025d4f54;
// @baa 0x01dd62c0
void sub_01dd62c0(void)
{
  g_025d4f54 = sm_eventTable_exref;
  return;
}

extern undefined4 g_02664f3c;
extern undefined4 g_02664f40;
// @baa 0x01dd66f0
void sub_01dd66f0(void)
{
  g_02664f3c = 0;
  g_02664f40 = 0;
  return;
}

extern undefined4 g_0266525c;
extern undefined4 g_02665260;
// @baa 0x01dd6700
void sub_01dd6700(void)
{
  g_0266525c = 0xe;
  g_02665260 = 0x12;
  return;
}

extern undefined4 g_02664f34;
extern undefined4 g_02664f38;
// @baa 0x01dd6720
void sub_01dd6720(void)
{
  g_02664f34 = 0;
  g_02664f38 = 10;
  return;
}

extern undefined4 g_02665264;
extern undefined4 g_02665268;
// @baa 0x01dd6740
void sub_01dd6740(void)
{
  g_02665264 = 0x1e0;
  g_02665268 = 0;
  return;
}

extern undefined4 g_02664f2c;
extern undefined4 g_02664f30;
// @baa 0x01dd6760
void sub_01dd6760(void)
{
  g_02664f2c = 0;
  g_02664f30 = 0x30;
  return;
}

extern undefined4 g_026651c4;
extern undefined4 g_026651c8;
// @baa 0x01dd6780
void sub_01dd6780(void)
{
  g_026651c4 = 0;
  g_026651c8 = 0x18;
  return;
}

extern undefined4 g_0266540c;
extern undefined4 g_02665410;
extern undefined4 g_02665414;
extern undefined4 g_02665418;
// @baa 0x01dd67a0
void sub_01dd67a0(void)
{
  g_0266540c = 0;
  g_02665410 = 0;
  g_02665414 = 0;
  g_02665418 = 0;
  return;
}

extern int g_025d4f5c;
// @baa 0x01dd6820
void sub_01dd6820() { g_025d4f5c = g_01e2b4cc; }

extern undefined4 g_025d4f1c;
// @baa 0x01dd69b0
void sub_01dd69b0(void)
{
  g_025d4f1c = sm_eventTable_exref;
  return;
}

extern undefined4 g_025d4f3c;
// @baa 0x01dd6c10
void sub_01dd6c10(void)
{
  g_025d4f3c = sm_eventTable_exref;
  return;
}

extern int g_025d4f2c;
// @baa 0x01dd6db0
void sub_01dd6db0() { g_025d4f2c = g_01e2b4cc; }

extern int g_025d4f34;
// @baa 0x01dd6ec0
void sub_01dd6ec0() { g_025d4f34 = g_01e29cc4; }

extern undefined4 g_025d4f4c;
// @baa 0x01dd7050
void sub_01dd7050(void)
{
  g_025d4f4c = sm_eventTable_exref;
  return;
}

extern undefined4 g_025d4f44;
// @baa 0x01dd7220
void sub_01dd7220(void)
{
  g_025d4f44 = sm_eventTable_exref;
  return;
}

int sub_01e22ab0(void);
// @baa 0x01dd7660
void sub_01dd7660(void)
{
  sub_01a37872(&sub_01e22ab0);
  return;
}

int sub_01e22ae0(void);
// @baa 0x01dd7670
void sub_01dd7670(void)
{
  sub_01a37872(&sub_01e22ae0);
  return;
}

extern int g_025d4f24;
// @baa 0x01dd76e0
void sub_01dd76e0() { g_025d4f24 = g_01e2b4cc; }

extern int g_025d4f64;
// @baa 0x01dd7890
void sub_01dd7890() { g_025d4f64 = g_01e2b4cc; }

extern undefined4 g_025d4f78;
// @baa 0x01dd7b50
void sub_01dd7b50(void)
{
  g_025d4f78 = sm_eventTable_exref;
  return;
}

extern undefined4 g_025d4fa8;
// @baa 0x01dd7dd0
void sub_01dd7dd0(void)
{
  g_025d4fa8 = sm_eventTable_exref;
  return;
}

extern undefined4 g_025d4f88;
// @baa 0x01dd7fa0
void sub_01dd7fa0(void)
{
  g_025d4f88 = sm_eventTable_exref;
  return;
}

extern undefined4 g_025d4fb0;
// @baa 0x01dd8220
void sub_01dd8220(void)
{
  g_025d4fb0 = sm_eventTable_exref;
  return;
}

extern __declspec(dllimport) int const wxEVT_SIZE;
extern __declspec(dllimport) int const wxEVT_LEFT_UP;
extern __declspec(dllimport) int const wxEVT_PAINT;
extern __declspec(dllimport) int const wxEVT_COMMAND_TEXT_ENTER;
extern __declspec(dllimport) int const wxEVT_COMMAND_BUTTON_CLICKED;
extern __declspec(dllimport) int const wxEVT_COMMAND_MENU_SELECTED;
void sub_00511920(void);
void sub_00511930(void);
void sub_005119c0(void);
void sub_0051d6a0(void);
void sub_0051d700(void);
void sub_00522740(void);
void sub_00522c90(void);
void sub_00524b00(void);
void sub_00524bc0(void);
extern int g_0261762c;
struct E { int type, id, last; void *fn; void *data; };

extern E g_0266593c[];
#define F(x) ((void*)&x)
// @baa 0x01dd8250
void sub_01dd8250(void)
{
  E *t = g_0266593c;
  t[0].id=-1; t[0].last=-1; t[0].fn=F(sub_00511920); t[0].data=0;
  t[1].type=(int)&wxEVT_SIZE; t[1].id=-1; t[1].last=-1; t[1].fn=F(sub_00511930); t[1].data=0;
  t[2].type=(int)&wxEVT_LEFT_UP; t[2].id=-1; t[2].last=-1; t[2].fn=F(sub_005119c0); t[2].data=0;
  t[3].type=(int)&wxEVT_PAINT; t[3].id=0x1845; t[3].last=-1; t[3].fn=F(sub_00524b00); t[3].data=0;
  t[4].type=(int)&wxEVT_COMMAND_TEXT_ENTER; t[4].id=0x1844; t[4].last=-1; t[4].fn=F(sub_0051d6a0); t[4].data=0;
  t[5].type=(int)&wxEVT_COMMAND_BUTTON_CLICKED; t[5].id=0x1844; t[5].last=-1; t[5].fn=F(sub_00522740); t[5].data=0;
  t[6].type=(int)F(g_0261762c); t[6].id=0x1843; t[6].last=-1; t[6].fn=F(sub_00524bc0); t[6].data=0;
  t[7].type=(int)&wxEVT_COMMAND_BUTTON_CLICKED; t[7].id=0x1842; t[7].last=-1; t[7].fn=F(sub_0051d700); t[7].data=0;
  t[8].type=(int)&wxEVT_COMMAND_BUTTON_CLICKED; t[8].id=0x183d; t[8].last=0x1841; t[8].fn=F(sub_00522c90); t[8].data=0;
  t[9].type=(int)&wxEVT_COMMAND_MENU_SELECTED; t[9].id=0; t[9].last=0; t[9].fn=0; t[9].data=0;
  t[10].type=(int)&wxEVT_NULL;
}

extern undefined4 g_025d4fb8;
// @baa 0x01dd8450
void sub_01dd8450(void)
{
  g_025d4fb8 = sm_eventTable_exref;
  return;
}

extern int g_01e2a14c;
extern int g_025d4f98;
// @baa 0x01dd8550
void sub_01dd8550() { g_025d4f98 = g_01e2a14c; }

extern int g_025d4fc0;
// @baa 0x01dd86a0
void sub_01dd86a0() { g_025d4fc0 = g_01e2a14c; }

extern int g_025d4fa0;
// @baa 0x01dd87b0
void sub_01dd87b0() { g_025d4fa0 = g_01e2a14c; }

extern __declspec(dllimport) int const wxEVT_WIZARD_PAGE_CHANGING;
int sub_00537980(void);
extern undefined4 g_02665c34;
extern undefined4 g_02665c38;
extern undefined4 g_02665c3c;
extern undefined4 g_02665c40;
extern undefined4 g_02665c44;
extern undefined4 g_02665c48;
extern undefined4 g_02665c4c;
extern undefined4 g_02665c50;
extern undefined4 g_02665c54;
extern undefined4 g_02665c58;
// @baa 0x01dd87e0
void sub_01dd87e0(void)
{
  g_02665c34 = 0xffffffff;
  g_02665c38 = 0xffffffff;
  g_02665c3c = (undefined4)(sub_00537980);
  g_02665c40 = 0;
  g_02665c44 = (undefined4)((&wxEVT_WIZARD_PAGE_CHANGING));
  g_02665c48 = 0;
  g_02665c4c = 0;
  g_02665c50 = 0;
  g_02665c54 = 0;
  g_02665c58 = (undefined4)((&wxEVT_NULL));
  return;
}

extern undefined4 g_025d4f70;
// @baa 0x01dd8830
void sub_01dd8830(void)
{
  g_025d4f70 = sm_eventTable_exref;
  return;
}

int sub_00510710(void);
extern undefined4 g_02665a08;
extern undefined4 g_02665a0c;
extern undefined4 g_02665a10;
extern undefined4 g_02665a14;
extern undefined4 g_02665a18;
extern undefined4 g_02665a1c;
extern undefined4 g_02665a20;
extern undefined4 g_02665a24;
extern undefined4 g_02665a28;
extern undefined4 g_02665a2c;
// @baa 0x01dd8860
void sub_01dd8860(void)
{
  g_02665a08 = 0xffffffff;
  g_02665a0c = 0xffffffff;
  g_02665a10 = (undefined4)(sub_00510710);
  g_02665a14 = 0;
  g_02665a18 = (undefined4)((&wxEVT_SIZE));
  g_02665a1c = 0;
  g_02665a20 = 0;
  g_02665a24 = 0;
  g_02665a28 = 0;
  g_02665a2c = (undefined4)((&wxEVT_NULL));
  return;
}

extern undefined4 g_025d4fd0;
// @baa 0x01dd8910
void sub_01dd8910(void)
{
  g_025d4fd0 = sm_eventTable_exref;
  return;
}

extern int g_025d4fc8;
// @baa 0x01dd8d70
void sub_01dd8d70() { g_025d4fc8 = g_01e2b4cc; }

extern undefined4 g_025d4f90;
// @baa 0x01dd8e80
void sub_01dd8e80(void)
{
  g_025d4f90 = sm_eventTable_exref;
  return;
}

extern undefined4 g_025d4f80;
// @baa 0x01dd93c0
void sub_01dd93c0(void)
{
  g_025d4f80 = sm_eventTable_exref;
  return;
}

int sub_01e22d50(void);
// @baa 0x01dd9790
void sub_01dd9790(void)
{
  sub_01a37872(&sub_01e22d50);
  return;
}

int sub_01e22d60(void);
// @baa 0x01dd97a0
void sub_01dd97a0(void)
{
  sub_01a37872(&sub_01e22d60);
  return;
}

int sub_01e22d70(void);
extern undefined4 g_025d579c;
extern undefined4 g_025d57a0;
extern undefined4 g_025d57a4;
extern undefined4 g_025d6820;
extern undefined4 g_025d6824;
extern undefined4 g_025d682c;
// @baa 0x01dd97b0
void sub_01dd97b0(void)
{
  g_025d579c = g_025d6824;
  g_025d57a0 = g_025d6820;
  g_025d57a4 = g_025d682c;
  sub_01a37872(&sub_01e22d70);
  return;
}

struct D_01dd97e0
{
    void sub_005f92a0();
    void sub_01ab58f0();
};

extern D_01dd97e0 g_02676128;
void sub_01e22db0();
// @baa 0x01dd97e0
void sub_01dd97e0()
{
    g_02676128.sub_005f92a0();
    onexit(sub_01e22db0);
}

int sub_01e22d80(...);
// @baa 0x01dd9800
void sub_01dd9800(void)
{
  sub_01a37872(&sub_01e22d80);
  return;
}

struct D_01dd9830 { void sub_005c3500(); };

extern D_01dd9830 g_026761a8;
// @baa 0x01dd9830
void sub_01dd9830() { g_026761a8.sub_005c3500(); }

int sub_01e22da0(...);
// @baa 0x01dd9840
void sub_01dd9840(void)
{
  sub_01a37872(&sub_01e22da0);
  return;
}

extern undefined4 g_02686250;
extern "C" __declspec(dllimport) int TlsAlloc(...);
// @baa 0x01dd9950
void sub_01dd9950(void)
{
  g_02686250 = TlsAlloc();
  return;
}

int sub_01e22d30(void);
// @baa 0x01dd9960
void sub_01dd9960(void)
{
  sub_01a37872(&sub_01e22d30);
  return;
}

int sub_00542c70(void);
extern undefined4 g_0268625c;
// @baa 0x01dd9990
void sub_01dd9990(void)
{
  g_0268625c = sub_00542c70();
  return;
}

int sub_01e22e20(...);
// @baa 0x01dd99d0
void sub_01dd99d0(void)
{
  sub_01a37872(&sub_01e22e20);
  return;
}

int sub_0059dea0(void);
extern undefined4 g_026888a0;
extern undefined4 g_0268d758;
// @baa 0x01dd9a20
void sub_01dd9a20(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01dd9a50
void sub_01dd9a50(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

int sub_01e22e60(...);
// @baa 0x01dd9ac0
void sub_01dd9ac0(void)
{
  sub_01a37872(&sub_01e22e60);
  return;
}

int sub_01e22e40(...);
// @baa 0x01dd9ad0
void sub_01dd9ad0(void)
{
  sub_01a37872(&sub_01e22e40);
  return;
}

int sub_01e22ea0(...);
// @baa 0x01dd9ae0
void sub_01dd9ae0(void)
{
  sub_01a37872(&sub_01e22ea0);
  return;
}

extern undefined4 g_025d6080;
extern undefined4 g_026889a4;
extern undefined4 g_0268d094;
// @baa 0x01dd9af0
void sub_01dd9af0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026889a4 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x41;
    g_026889a4 = g_025d6080;
    return;
  }
  g_026889a4 = g_025d6080;
  return;
}

extern undefined4 g_025d6084;
// @baa 0x01dd9b40
void sub_01dd9b40(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026888a0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0;
    g_026888a0 = g_025d6084;
    return;
  }
  g_026888a0 = g_025d6084;
  return;
}

extern undefined4 g_025d608c;
extern undefined4 g_026888a8;
// @baa 0x01dd9be0
void sub_01dd9be0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026888a8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 2;
    g_026888a8 = g_025d608c;
    return;
  }
  g_026888a8 = g_025d608c;
  return;
}

extern undefined4 g_025d6090;
extern undefined4 g_026889c0;
// @baa 0x01dd9c30
void sub_01dd9c30(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026889c0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x48;
    g_026889c0 = g_025d6090;
    return;
  }
  g_026889c0 = g_025d6090;
  return;
}

extern undefined4 g_025d6094;
extern undefined4 g_026889c4;
// @baa 0x01dd9c80
void sub_01dd9c80(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026889c4 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x49;
    g_026889c4 = g_025d6094;
    return;
  }
  g_026889c4 = g_025d6094;
  return;
}

extern undefined4 g_025d6098;
extern undefined4 g_026889e4;
// @baa 0x01dd9cd0
void sub_01dd9cd0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026889e4 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x51;
    g_026889e4 = g_025d6098;
    return;
  }
  g_026889e4 = g_025d6098;
  return;
}

extern undefined4 g_025d609c;
extern undefined4 g_026888e8;
// @baa 0x01dd9d20
void sub_01dd9d20(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026888e8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x12;
    g_026888e8 = g_025d609c;
    return;
  }
  g_026888e8 = g_025d609c;
  return;
}

extern undefined4 g_025d60a0;
extern undefined4 g_02688908;
// @baa 0x01dd9d70
void sub_01dd9d70(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688908 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x1a;
    g_02688908 = g_025d60a0;
    return;
  }
  g_02688908 = g_025d60a0;
  return;
}

extern undefined4 g_025d60a4;
extern undefined4 g_026888e0;
// @baa 0x01dd9dc0
void sub_01dd9dc0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026888e0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x10;
    g_026888e0 = g_025d60a4;
    return;
  }
  g_026888e0 = g_025d60a4;
  return;
}

extern undefined4 g_025d60a8;
extern undefined4 g_02688978;
// @baa 0x01dd9e10
void sub_01dd9e10(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688978 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x36;
    g_02688978 = g_025d60a8;
    return;
  }
  g_02688978 = g_025d60a8;
  return;
}

extern undefined4 g_025d60ac;
extern undefined4 g_02688984;
// @baa 0x01dd9e60
void sub_01dd9e60(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688984 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x39;
    g_02688984 = g_025d60ac;
    return;
  }
  g_02688984 = g_025d60ac;
  return;
}

extern undefined4 g_025d60b0;
extern undefined4 g_026889f0;
// @baa 0x01dd9eb0
void sub_01dd9eb0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026889f0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x54;
    g_026889f0 = g_025d60b0;
    return;
  }
  g_026889f0 = g_025d60b0;
  return;
}

extern undefined4 g_025d60b4;
extern undefined4 g_026889f4;
// @baa 0x01dd9f00
void sub_01dd9f00(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026889f4 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x55;
    g_026889f4 = g_025d60b4;
    return;
  }
  g_026889f4 = g_025d60b4;
  return;
}

extern undefined4 g_025d60b8;
extern undefined4 g_026889fc;
// @baa 0x01dd9f50
void sub_01dd9f50(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026889fc != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x57;
    g_026889fc = g_025d60b8;
    return;
  }
  g_026889fc = g_025d60b8;
  return;
}

extern undefined4 g_025d60bc;
extern undefined4 g_026889f8;
// @baa 0x01dd9fa0
void sub_01dd9fa0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026889f8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x56;
    g_026889f8 = g_025d60bc;
    return;
  }
  g_026889f8 = g_025d60bc;
  return;
}

extern undefined4 g_025d60c0;
extern undefined4 g_026889a0;
// @baa 0x01dd9ff0
void sub_01dd9ff0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026889a0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x40;
    g_026889a0 = g_025d60c0;
    return;
  }
  g_026889a0 = g_025d60c0;
  return;
}

extern undefined4 g_025d60c4;
extern undefined4 g_026889b8;
// @baa 0x01dda040
void sub_01dda040(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026889b8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x46;
    g_026889b8 = g_025d60c4;
    return;
  }
  g_026889b8 = g_025d60c4;
  return;
}

extern undefined4 g_025d60c8;
extern undefined4 g_026889bc;
// @baa 0x01dda090
void sub_01dda090(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026889bc != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x47;
    g_026889bc = g_025d60c8;
    return;
  }
  g_026889bc = g_025d60c8;
  return;
}

extern undefined4 g_025d60cc;
extern undefined4 g_02688954;
// @baa 0x01dda0e0
void sub_01dda0e0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688954 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x2d;
    g_02688954 = g_025d60cc;
    return;
  }
  g_02688954 = g_025d60cc;
  return;
}

extern undefined4 g_025d60d0;
extern undefined4 g_02688974;
// @baa 0x01dda130
void sub_01dda130(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688974 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x35;
    g_02688974 = g_025d60d0;
    return;
  }
  g_02688974 = g_025d60d0;
  return;
}

extern undefined4 g_025d60d4;
extern undefined4 g_026889ec;
// @baa 0x01dda180
void sub_01dda180(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026889ec != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x53;
    g_026889ec = g_025d60d4;
    return;
  }
  g_026889ec = g_025d60d4;
  return;
}

extern undefined4 g_025d60d8;
extern undefined4 g_026888cc;
// @baa 0x01dda1d0
void sub_01dda1d0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026888cc != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xb;
    g_026888cc = g_025d60d8;
    return;
  }
  g_026888cc = g_025d60d8;
  return;
}

extern undefined4 g_025d60dc;
extern undefined4 g_02688988;
// @baa 0x01dda220
void sub_01dda220(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688988 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x3a;
    g_02688988 = g_025d60dc;
    return;
  }
  g_02688988 = g_025d60dc;
  return;
}

extern undefined4 g_025d60e0;
extern undefined4 g_02688960;
// @baa 0x01dda270
void sub_01dda270(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688960 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x30;
    g_02688960 = g_025d60e0;
    return;
  }
  g_02688960 = g_025d60e0;
  return;
}

extern undefined4 g_025d60e4;
extern undefined4 g_026889c8;
// @baa 0x01dda2c0
void sub_01dda2c0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026889c8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x4a;
    g_026889c8 = g_025d60e4;
    return;
  }
  g_026889c8 = g_025d60e4;
  return;
}

extern undefined4 g_025d60e8;
extern undefined4 g_02688944;
// @baa 0x01dda310
void sub_01dda310(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688944 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x29;
    g_02688944 = g_025d60e8;
    return;
  }
  g_02688944 = g_025d60e8;
  return;
}

extern undefined4 g_025d60ec;
extern undefined4 g_026888f8;
// @baa 0x01dda360
void sub_01dda360(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026888f8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x16;
    g_026888f8 = g_025d60ec;
    return;
  }
  g_026888f8 = g_025d60ec;
  return;
}

extern undefined4 g_025d60f0;
extern undefined4 g_026888c0;
// @baa 0x01dda3b0
void sub_01dda3b0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026888c0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 8;
    g_026888c0 = g_025d60f0;
    return;
  }
  g_026888c0 = g_025d60f0;
  return;
}

extern undefined4 g_025d60f4;
extern undefined4 g_026888b4;
// @baa 0x01dda400
void sub_01dda400(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026888b4 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 5;
    g_026888b4 = g_025d60f4;
    return;
  }
  g_026888b4 = g_025d60f4;
  return;
}

extern undefined4 g_025d60f8;
extern undefined4 g_026888c8;
// @baa 0x01dda450
void sub_01dda450(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026888c8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 10;
    g_026888c8 = g_025d60f8;
    return;
  }
  g_026888c8 = g_025d60f8;
  return;
}

extern undefined4 g_025d60fc;
extern undefined4 g_026888b8;
// @baa 0x01dda4a0
void sub_01dda4a0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026888b8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 6;
    g_026888b8 = g_025d60fc;
    return;
  }
  g_026888b8 = g_025d60fc;
  return;
}

extern undefined4 g_025d6100;
extern undefined4 g_026888bc;
// @baa 0x01dda4f0
void sub_01dda4f0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026888bc != (undefined4)&sub_0059dea0) {
    g_0268d094 = 7;
    g_026888bc = g_025d6100;
    return;
  }
  g_026888bc = g_025d6100;
  return;
}

extern undefined4 g_025d6104;
extern undefined4 g_026889b4;
// @baa 0x01dda540
void sub_01dda540(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026889b4 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x45;
    g_026889b4 = g_025d6104;
    return;
  }
  g_026889b4 = g_025d6104;
  return;
}

extern undefined4 g_025d6108;
extern undefined4 g_026888c4;
// @baa 0x01dda590
void sub_01dda590(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026888c4 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 9;
    g_026888c4 = g_025d6108;
    return;
  }
  g_026888c4 = g_025d6108;
  return;
}

extern undefined4 g_025d610c;
extern undefined4 g_026888d4;
// @baa 0x01dda5e0
void sub_01dda5e0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026888d4 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xd;
    g_026888d4 = g_025d610c;
    return;
  }
  g_026888d4 = g_025d610c;
  return;
}

extern undefined4 g_025d6110;
extern undefined4 g_026888dc;
// @baa 0x01dda630
void sub_01dda630(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026888dc != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xf;
    g_026888dc = g_025d6110;
    return;
  }
  g_026888dc = g_025d6110;
  return;
}

extern undefined4 g_025d6114;
extern undefined4 g_026888f0;
// @baa 0x01dda680
void sub_01dda680(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026888f0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x14;
    g_026888f0 = g_025d6114;
    return;
  }
  g_026888f0 = g_025d6114;
  return;
}

extern undefined4 g_025d6118;
extern undefined4 g_026888fc;
// @baa 0x01dda6d0
void sub_01dda6d0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026888fc != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x17;
    g_026888fc = g_025d6118;
    return;
  }
  g_026888fc = g_025d6118;
  return;
}

extern undefined4 g_025d611c;
extern undefined4 g_02688904;
// @baa 0x01dda720
void sub_01dda720(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688904 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x19;
    g_02688904 = g_025d611c;
    return;
  }
  g_02688904 = g_025d611c;
  return;
}

extern undefined4 g_025d6120;
extern undefined4 g_026889e0;
// @baa 0x01dda770
void sub_01dda770(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026889e0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x50;
    g_026889e0 = g_025d6120;
    return;
  }
  g_026889e0 = g_025d6120;
  return;
}

extern undefined4 g_025d6124;
extern undefined4 g_0268890c;
// @baa 0x01dda7c0
void sub_01dda7c0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_0268890c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x1b;
    g_0268890c = g_025d6124;
    return;
  }
  g_0268890c = g_025d6124;
  return;
}

extern undefined4 g_025d6128;
extern undefined4 g_02688910;
// @baa 0x01dda810
void sub_01dda810(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688910 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x1c;
    g_02688910 = g_025d6128;
    return;
  }
  g_02688910 = g_025d6128;
  return;
}

extern undefined4 g_025d612c;
extern undefined4 g_0268897c;
// @baa 0x01dda860
void sub_01dda860(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_0268897c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x37;
    g_0268897c = g_025d612c;
    return;
  }
  g_0268897c = g_025d612c;
  return;
}

extern undefined4 g_025d6130;
extern undefined4 g_026889a8;
// @baa 0x01dda8b0
void sub_01dda8b0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026889a8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x42;
    g_026889a8 = g_025d6130;
    return;
  }
  g_026889a8 = g_025d6130;
  return;
}

extern undefined4 g_025d6134;
extern undefined4 g_026889ac;
// @baa 0x01dda900
void sub_01dda900(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026889ac != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x43;
    g_026889ac = g_025d6134;
    return;
  }
  g_026889ac = g_025d6134;
  return;
}

extern undefined4 g_025d6138;
extern undefined4 g_026889b0;
// @baa 0x01dda950
void sub_01dda950(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026889b0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x44;
    g_026889b0 = g_025d6138;
    return;
  }
  g_026889b0 = g_025d6138;
  return;
}

extern undefined4 g_025d613c;
extern undefined4 g_02688968;
// @baa 0x01dda9a0
void sub_01dda9a0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688968 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x32;
    g_02688968 = g_025d613c;
    return;
  }
  g_02688968 = g_025d613c;
  return;
}

extern undefined4 g_025d6140;
extern undefined4 g_0268896c;
// @baa 0x01dda9f0
void sub_01dda9f0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_0268896c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x33;
    g_0268896c = g_025d6140;
    return;
  }
  g_0268896c = g_025d6140;
  return;
}

extern undefined4 g_025d6144;
extern undefined4 g_0268898c;
// @baa 0x01ddaa40
void sub_01ddaa40(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_0268898c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x3b;
    g_0268898c = g_025d6144;
    return;
  }
  g_0268898c = g_025d6144;
  return;
}

extern undefined4 g_025d6148;
extern undefined4 g_02688990;
// @baa 0x01ddaa90
void sub_01ddaa90(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688990 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x3c;
    g_02688990 = g_025d6148;
    return;
  }
  g_02688990 = g_025d6148;
  return;
}

extern undefined4 g_025d614c;
extern undefined4 g_02688994;
// @baa 0x01ddaae0
void sub_01ddaae0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688994 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x3d;
    g_02688994 = g_025d614c;
    return;
  }
  g_02688994 = g_025d614c;
  return;
}

extern undefined4 g_025d6150;
extern undefined4 g_02688998;
// @baa 0x01ddab30
void sub_01ddab30(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688998 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x3e;
    g_02688998 = g_025d6150;
    return;
  }
  g_02688998 = g_025d6150;
  return;
}

extern undefined4 g_025d6154;
extern undefined4 g_02688914;
// @baa 0x01ddab80
void sub_01ddab80(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688914 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x1d;
    g_02688914 = g_025d6154;
    return;
  }
  g_02688914 = g_025d6154;
  return;
}

extern undefined4 g_025d6158;
extern undefined4 g_02688918;
// @baa 0x01ddabd0
void sub_01ddabd0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688918 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x1e;
    g_02688918 = g_025d6158;
    return;
  }
  g_02688918 = g_025d6158;
  return;
}

extern undefined4 g_025d615c;
extern undefined4 g_0268891c;
// @baa 0x01ddac20
void sub_01ddac20(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_0268891c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x1f;
    g_0268891c = g_025d615c;
    return;
  }
  g_0268891c = g_025d615c;
  return;
}

extern undefined4 g_025d6160;
extern undefined4 g_02688970;
// @baa 0x01ddac70
void sub_01ddac70(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688970 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x34;
    g_02688970 = g_025d6160;
    return;
  }
  g_02688970 = g_025d6160;
  return;
}

extern undefined4 g_025d6164;
extern undefined4 g_02688920;
// @baa 0x01ddacc0
void sub_01ddacc0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688920 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x20;
    g_02688920 = g_025d6164;
    return;
  }
  g_02688920 = g_025d6164;
  return;
}

extern undefined4 g_025d6168;
extern undefined4 g_026889cc;
// @baa 0x01ddad10
void sub_01ddad10(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026889cc != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x4b;
    g_026889cc = g_025d6168;
    return;
  }
  g_026889cc = g_025d6168;
  return;
}

extern undefined4 g_025d616c;
extern undefined4 g_02688924;
// @baa 0x01ddad60
void sub_01ddad60(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688924 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x21;
    g_02688924 = g_025d616c;
    return;
  }
  g_02688924 = g_025d616c;
  return;
}

extern undefined4 g_025d6170;
extern undefined4 g_02688930;
// @baa 0x01ddadb0
void sub_01ddadb0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688930 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x24;
    g_02688930 = g_025d6170;
    return;
  }
  g_02688930 = g_025d6170;
  return;
}

extern undefined4 g_025d6174;
extern undefined4 g_02688934;
// @baa 0x01ddae00
void sub_01ddae00(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688934 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x25;
    g_02688934 = g_025d6174;
    return;
  }
  g_02688934 = g_025d6174;
  return;
}

extern undefined4 g_025d6178;
extern undefined4 g_02688938;
// @baa 0x01ddae50
void sub_01ddae50(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688938 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x26;
    g_02688938 = g_025d6178;
    return;
  }
  g_02688938 = g_025d6178;
  return;
}

extern undefined4 g_025d617c;
extern undefined4 g_0268893c;
// @baa 0x01ddaea0
void sub_01ddaea0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_0268893c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x27;
    g_0268893c = g_025d617c;
    return;
  }
  g_0268893c = g_025d617c;
  return;
}

extern undefined4 g_025d6180;
extern undefined4 g_02688940;
// @baa 0x01ddaef0
void sub_01ddaef0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688940 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x28;
    g_02688940 = g_025d6180;
    return;
  }
  g_02688940 = g_025d6180;
  return;
}

extern undefined4 g_025d6184;
extern undefined4 g_02688948;
// @baa 0x01ddaf40
void sub_01ddaf40(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688948 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x2a;
    g_02688948 = g_025d6184;
    return;
  }
  g_02688948 = g_025d6184;
  return;
}

extern undefined4 g_025d6188;
extern undefined4 g_0268899c;
// @baa 0x01ddaf90
void sub_01ddaf90(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_0268899c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x3f;
    g_0268899c = g_025d6188;
    return;
  }
  g_0268899c = g_025d6188;
  return;
}

extern undefined4 g_025d618c;
extern undefined4 g_02688950;
// @baa 0x01ddafe0
void sub_01ddafe0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688950 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x2c;
    g_02688950 = g_025d618c;
    return;
  }
  g_02688950 = g_025d618c;
  return;
}

extern undefined4 g_025d6190;
extern undefined4 g_02688958;
// @baa 0x01ddb030
void sub_01ddb030(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688958 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x2e;
    g_02688958 = g_025d6190;
    return;
  }
  g_02688958 = g_025d6190;
  return;
}

extern undefined4 g_025d6194;
extern undefined4 g_026888ec;
// @baa 0x01ddb080
void sub_01ddb080(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026888ec != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x13;
    g_026888ec = g_025d6194;
    return;
  }
  g_026888ec = g_025d6194;
  return;
}

extern undefined4 g_025d6198;
extern undefined4 g_02688980;
// @baa 0x01ddb0d0
void sub_01ddb0d0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688980 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x38;
    g_02688980 = g_025d6198;
    return;
  }
  g_02688980 = g_025d6198;
  return;
}

extern undefined4 g_025d619c;
extern undefined4 g_026889e8;
// @baa 0x01ddb120
void sub_01ddb120(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026889e8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x52;
    g_026889e8 = g_025d619c;
    return;
  }
  g_026889e8 = g_025d619c;
  return;
}

// @baa 0x01ddb170
void sub_01ddb170(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61a0;
extern undefined4 g_026884a0;
extern undefined4 g_02688588;
extern undefined4 g_0268d098;
extern undefined4 g_0268d75c;
// @baa 0x01ddb1a0
void sub_01ddb1a0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_02688588 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x3a;
    g_02688588 = g_025d61a0;
    return;
  }
  g_02688588 = g_025d61a0;
  return;
}

// @baa 0x01ddb1f0
void sub_01ddb1f0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61a4;
extern undefined4 g_0268858c;
// @baa 0x01ddb220
void sub_01ddb220(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_0268858c != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x3b;
    g_0268858c = g_025d61a4;
    return;
  }
  g_0268858c = g_025d61a4;
  return;
}

// @baa 0x01ddb270
void sub_01ddb270(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61a8;
extern undefined4 g_02688590;
// @baa 0x01ddb2a0
void sub_01ddb2a0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_02688590 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x3c;
    g_02688590 = g_025d61a8;
    return;
  }
  g_02688590 = g_025d61a8;
  return;
}

// @baa 0x01ddb2f0
void sub_01ddb2f0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61ac;
extern undefined4 g_026885e8;
// @baa 0x01ddb320
void sub_01ddb320(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885e8 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x52;
    g_026885e8 = g_025d61ac;
    return;
  }
  g_026885e8 = g_025d61ac;
  return;
}

// @baa 0x01ddb370
void sub_01ddb370(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61b0;
extern undefined4 g_02688594;
// @baa 0x01ddb3a0
void sub_01ddb3a0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_02688594 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x3d;
    g_02688594 = g_025d61b0;
    return;
  }
  g_02688594 = g_025d61b0;
  return;
}

// @baa 0x01ddb3f0
void sub_01ddb3f0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61b4;
extern undefined4 g_02688598;
// @baa 0x01ddb420
void sub_01ddb420(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_02688598 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x3e;
    g_02688598 = g_025d61b4;
    return;
  }
  g_02688598 = g_025d61b4;
  return;
}

// @baa 0x01ddb470
void sub_01ddb470(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61b8;
extern undefined4 g_0268859c;
// @baa 0x01ddb4a0
void sub_01ddb4a0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_0268859c != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x3f;
    g_0268859c = g_025d61b8;
    return;
  }
  g_0268859c = g_025d61b8;
  return;
}

// @baa 0x01ddb4f0
void sub_01ddb4f0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61bc;
extern undefined4 g_026885ec;
// @baa 0x01ddb520
void sub_01ddb520(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885ec != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x53;
    g_026885ec = g_025d61bc;
    return;
  }
  g_026885ec = g_025d61bc;
  return;
}

// @baa 0x01ddb570
void sub_01ddb570(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61c0;
extern undefined4 g_026885a0;
// @baa 0x01ddb5a0
void sub_01ddb5a0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885a0 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x40;
    g_026885a0 = g_025d61c0;
    return;
  }
  g_026885a0 = g_025d61c0;
  return;
}

// @baa 0x01ddb5f0
void sub_01ddb5f0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61c4;
extern undefined4 g_026885a4;
// @baa 0x01ddb620
void sub_01ddb620(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885a4 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x41;
    g_026885a4 = g_025d61c4;
    return;
  }
  g_026885a4 = g_025d61c4;
  return;
}

// @baa 0x01ddb670
void sub_01ddb670(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61c8;
extern undefined4 g_026885a8;
// @baa 0x01ddb6a0
void sub_01ddb6a0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885a8 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x42;
    g_026885a8 = g_025d61c8;
    return;
  }
  g_026885a8 = g_025d61c8;
  return;
}

// @baa 0x01ddb6f0
void sub_01ddb6f0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61cc;
extern undefined4 g_026885f0;
// @baa 0x01ddb720
void sub_01ddb720(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885f0 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x54;
    g_026885f0 = g_025d61cc;
    return;
  }
  g_026885f0 = g_025d61cc;
  return;
}

// @baa 0x01ddb770
void sub_01ddb770(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61d0;
extern undefined4 g_026885ac;
// @baa 0x01ddb7a0
void sub_01ddb7a0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885ac != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x43;
    g_026885ac = g_025d61d0;
    return;
  }
  g_026885ac = g_025d61d0;
  return;
}

// @baa 0x01ddb7f0
void sub_01ddb7f0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61d4;
extern undefined4 g_026885b0;
// @baa 0x01ddb820
void sub_01ddb820(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885b0 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x44;
    g_026885b0 = g_025d61d4;
    return;
  }
  g_026885b0 = g_025d61d4;
  return;
}

// @baa 0x01ddb870
void sub_01ddb870(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61d8;
extern undefined4 g_026885b4;
// @baa 0x01ddb8a0
void sub_01ddb8a0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885b4 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x45;
    g_026885b4 = g_025d61d8;
    return;
  }
  g_026885b4 = g_025d61d8;
  return;
}

// @baa 0x01ddb8f0
void sub_01ddb8f0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61dc;
extern undefined4 g_026885f4;
// @baa 0x01ddb920
void sub_01ddb920(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885f4 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x55;
    g_026885f4 = g_025d61dc;
    return;
  }
  g_026885f4 = g_025d61dc;
  return;
}

// @baa 0x01ddb970
void sub_01ddb970(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61e0;
extern undefined4 g_026885bc;
// @baa 0x01ddb9a0
void sub_01ddb9a0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885bc != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x47;
    g_026885bc = g_025d61e0;
    return;
  }
  g_026885bc = g_025d61e0;
  return;
}

// @baa 0x01ddb9f0
void sub_01ddb9f0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61e4;
extern undefined4 g_026885b8;
// @baa 0x01ddba20
void sub_01ddba20(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885b8 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x46;
    g_026885b8 = g_025d61e4;
    return;
  }
  g_026885b8 = g_025d61e4;
  return;
}

// @baa 0x01ddba70
void sub_01ddba70(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61e8;
extern undefined4 g_026885f8;
// @baa 0x01ddbaa0
void sub_01ddbaa0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885f8 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x56;
    g_026885f8 = g_025d61e8;
    return;
  }
  g_026885f8 = g_025d61e8;
  return;
}

// @baa 0x01ddbaf0
void sub_01ddbaf0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61ec;
extern undefined4 g_0268857c;
// @baa 0x01ddbb20
void sub_01ddbb20(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_0268857c != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x37;
    g_0268857c = g_025d61ec;
    return;
  }
  g_0268857c = g_025d61ec;
  return;
}

// @baa 0x01ddbb70
void sub_01ddbb70(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61f0;
extern undefined4 g_02688580;
// @baa 0x01ddbba0
void sub_01ddbba0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_02688580 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x38;
    g_02688580 = g_025d61f0;
    return;
  }
  g_02688580 = g_025d61f0;
  return;
}

// @baa 0x01ddbbf0
void sub_01ddbbf0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61f4;
extern undefined4 g_02688578;
// @baa 0x01ddbc20
void sub_01ddbc20(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_02688578 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x36;
    g_02688578 = g_025d61f4;
    return;
  }
  g_02688578 = g_025d61f4;
  return;
}

// @baa 0x01ddbc70
void sub_01ddbc70(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61f8;
extern undefined4 g_02688608;
// @baa 0x01ddbca0
void sub_01ddbca0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_02688608 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x5a;
    g_02688608 = g_025d61f8;
    return;
  }
  g_02688608 = g_025d61f8;
  return;
}

// @baa 0x01ddbcf0
void sub_01ddbcf0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d61fc;
extern undefined4 g_026885c0;
// @baa 0x01ddbd20
void sub_01ddbd20(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885c0 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x48;
    g_026885c0 = g_025d61fc;
    return;
  }
  g_026885c0 = g_025d61fc;
  return;
}

// @baa 0x01ddbd70
void sub_01ddbd70(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d6200;
extern undefined4 g_026885fc;
// @baa 0x01ddbda0
void sub_01ddbda0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885fc != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x57;
    g_026885fc = g_025d6200;
    return;
  }
  g_026885fc = g_025d6200;
  return;
}

// @baa 0x01ddbdf0
void sub_01ddbdf0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d6204;
extern undefined4 g_02688620;
// @baa 0x01ddbe20
void sub_01ddbe20(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_02688620 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x60;
    g_02688620 = g_025d6204;
    return;
  }
  g_02688620 = g_025d6204;
  return;
}

// @baa 0x01ddbe70
void sub_01ddbe70(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d6208;
extern undefined4 g_026885c4;
// @baa 0x01ddbea0
void sub_01ddbea0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885c4 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x49;
    g_026885c4 = g_025d6208;
    return;
  }
  g_026885c4 = g_025d6208;
  return;
}

// @baa 0x01ddbef0
void sub_01ddbef0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d620c;
extern undefined4 g_026885c8;
// @baa 0x01ddbf20
void sub_01ddbf20(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885c8 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x4a;
    g_026885c8 = g_025d620c;
    return;
  }
  g_026885c8 = g_025d620c;
  return;
}

// @baa 0x01ddbf70
void sub_01ddbf70(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d6210;
extern undefined4 g_026885cc;
// @baa 0x01ddbfa0
void sub_01ddbfa0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885cc != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x4b;
    g_026885cc = g_025d6210;
    return;
  }
  g_026885cc = g_025d6210;
  return;
}

// @baa 0x01ddbff0
void sub_01ddbff0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d6214;
extern undefined4 g_026885d0;
// @baa 0x01ddc020
void sub_01ddc020(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885d0 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x4c;
    g_026885d0 = g_025d6214;
    return;
  }
  g_026885d0 = g_025d6214;
  return;
}

extern undefined4 g_025d6218;
extern undefined4 g_02688aa4;
// @baa 0x01ddc070
void sub_01ddc070(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688aa4 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x81;
    g_02688aa4 = g_025d6218;
    return;
  }
  g_02688aa4 = g_025d6218;
  return;
}

extern undefined4 g_025d621c;
extern undefined4 g_02688c68;
// @baa 0x01ddc0c0
void sub_01ddc0c0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c68 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xf2;
    g_02688c68 = g_025d621c;
    return;
  }
  g_02688c68 = g_025d621c;
  return;
}

extern undefined4 g_025d6220;
extern undefined4 g_02688c6c;
// @baa 0x01ddc110
void sub_01ddc110(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c6c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xf3;
    g_02688c6c = g_025d6220;
    return;
  }
  g_02688c6c = g_025d6220;
  return;
}

extern undefined4 g_025d6224;
extern undefined4 g_02688aa8;
// @baa 0x01ddc160
void sub_01ddc160(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688aa8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x82;
    g_02688aa8 = g_025d6224;
    return;
  }
  g_02688aa8 = g_025d6224;
  return;
}

extern undefined4 g_025d6228;
extern undefined4 g_02688aac;
// @baa 0x01ddc1b0
void sub_01ddc1b0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688aac != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x83;
    g_02688aac = g_025d6228;
    return;
  }
  g_02688aac = g_025d6228;
  return;
}

extern undefined4 g_025d622c;
extern undefined4 g_02688ab0;
// @baa 0x01ddc200
void sub_01ddc200(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688ab0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x84;
    g_02688ab0 = g_025d622c;
    return;
  }
  g_02688ab0 = g_025d622c;
  return;
}

extern undefined4 g_025d6230;
extern undefined4 g_02688ab4;
// @baa 0x01ddc250
void sub_01ddc250(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688ab4 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x85;
    g_02688ab4 = g_025d6230;
    return;
  }
  g_02688ab4 = g_025d6230;
  return;
}

extern undefined4 g_025d6234;
extern undefined4 g_02688bb8;
// @baa 0x01ddc2a0
void sub_01ddc2a0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688bb8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xc6;
    g_02688bb8 = g_025d6234;
    return;
  }
  g_02688bb8 = g_025d6234;
  return;
}

extern undefined4 g_025d6238;
extern undefined4 g_02688ab8;
// @baa 0x01ddc2f0
void sub_01ddc2f0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688ab8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x86;
    g_02688ab8 = g_025d6238;
    return;
  }
  g_02688ab8 = g_025d6238;
  return;
}

extern undefined4 g_025d623c;
extern undefined4 g_02688abc;
// @baa 0x01ddc340
void sub_01ddc340(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688abc != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x87;
    g_02688abc = g_025d623c;
    return;
  }
  g_02688abc = g_025d623c;
  return;
}

extern undefined4 g_025d6240;
extern undefined4 g_02688ac0;
// @baa 0x01ddc390
void sub_01ddc390(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688ac0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x88;
    g_02688ac0 = g_025d6240;
    return;
  }
  g_02688ac0 = g_025d6240;
  return;
}

extern undefined4 g_025d6244;
extern undefined4 g_02688ac4;
// @baa 0x01ddc3e0
void sub_01ddc3e0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688ac4 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x89;
    g_02688ac4 = g_025d6244;
    return;
  }
  g_02688ac4 = g_025d6244;
  return;
}

extern undefined4 g_025d6248;
extern undefined4 g_02688ac8;
// @baa 0x01ddc430
void sub_01ddc430(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688ac8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x8a;
    g_02688ac8 = g_025d6248;
    return;
  }
  g_02688ac8 = g_025d6248;
  return;
}

extern undefined4 g_025d624c;
extern undefined4 g_02688acc;
// @baa 0x01ddc480
void sub_01ddc480(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688acc != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x8b;
    g_02688acc = g_025d624c;
    return;
  }
  g_02688acc = g_025d624c;
  return;
}

extern undefined4 g_025d6250;
extern undefined4 g_02688ad0;
// @baa 0x01ddc4d0
void sub_01ddc4d0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688ad0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x8c;
    g_02688ad0 = g_025d6250;
    return;
  }
  g_02688ad0 = g_025d6250;
  return;
}

extern undefined4 g_025d6254;
extern undefined4 g_02688ad4;
// @baa 0x01ddc520
void sub_01ddc520(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688ad4 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x8d;
    g_02688ad4 = g_025d6254;
    return;
  }
  g_02688ad4 = g_025d6254;
  return;
}

extern undefined4 g_025d6258;
extern undefined4 g_02688bb0;
// @baa 0x01ddc570
void sub_01ddc570(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688bb0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xc4;
    g_02688bb0 = g_025d6258;
    return;
  }
  g_02688bb0 = g_025d6258;
  return;
}

extern undefined4 g_025d625c;
extern undefined4 g_02688adc;
// @baa 0x01ddc5c0
void sub_01ddc5c0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688adc != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x8f;
    g_02688adc = g_025d625c;
    return;
  }
  g_02688adc = g_025d625c;
  return;
}

extern undefined4 g_025d6260;
extern undefined4 g_02688ae0;
// @baa 0x01ddc610
void sub_01ddc610(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688ae0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x90;
    g_02688ae0 = g_025d6260;
    return;
  }
  g_02688ae0 = g_025d6260;
  return;
}

extern undefined4 g_025d6264;
extern undefined4 g_02688ae4;
// @baa 0x01ddc660
void sub_01ddc660(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688ae4 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x91;
    g_02688ae4 = g_025d6264;
    return;
  }
  g_02688ae4 = g_025d6264;
  return;
}

extern undefined4 g_025d6268;
extern undefined4 g_02688c94;
// @baa 0x01ddc6b0
void sub_01ddc6b0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c94 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xfd;
    g_02688c94 = g_025d6268;
    return;
  }
  g_02688c94 = g_025d6268;
  return;
}

extern undefined4 g_025d626c;
extern undefined4 g_02688ae8;
// @baa 0x01ddc700
void sub_01ddc700(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688ae8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x92;
    g_02688ae8 = g_025d626c;
    return;
  }
  g_02688ae8 = g_025d626c;
  return;
}

extern undefined4 g_025d6270;
extern undefined4 g_02688aec;
// @baa 0x01ddc750
void sub_01ddc750(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688aec != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x93;
    g_02688aec = g_025d6270;
    return;
  }
  g_02688aec = g_025d6270;
  return;
}

extern undefined4 g_025d6274;
extern undefined4 g_02688af0;
// @baa 0x01ddc7a0
void sub_01ddc7a0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688af0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x94;
    g_02688af0 = g_025d6274;
    return;
  }
  g_02688af0 = g_025d6274;
  return;
}

extern undefined4 g_025d6278;
extern undefined4 g_02688af4;
// @baa 0x01ddc7f0
void sub_01ddc7f0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688af4 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x95;
    g_02688af4 = g_025d6278;
    return;
  }
  g_02688af4 = g_025d6278;
  return;
}

extern undefined4 g_025d627c;
extern undefined4 g_02688af8;
// @baa 0x01ddc840
void sub_01ddc840(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688af8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x96;
    g_02688af8 = g_025d627c;
    return;
  }
  g_02688af8 = g_025d627c;
  return;
}

extern undefined4 g_025d6280;
extern undefined4 g_02688afc;
// @baa 0x01ddc890
void sub_01ddc890(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688afc != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x97;
    g_02688afc = g_025d6280;
    return;
  }
  g_02688afc = g_025d6280;
  return;
}

extern undefined4 g_025d6284;
extern undefined4 g_02688b00;
// @baa 0x01ddc8e0
void sub_01ddc8e0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b00 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x98;
    g_02688b00 = g_025d6284;
    return;
  }
  g_02688b00 = g_025d6284;
  return;
}

extern undefined4 g_025d6288;
extern undefined4 g_02688b04;
// @baa 0x01ddc930
void sub_01ddc930(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b04 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x99;
    g_02688b04 = g_025d6288;
    return;
  }
  g_02688b04 = g_025d6288;
  return;
}

extern undefined4 g_025d628c;
extern undefined4 g_02688b08;
// @baa 0x01ddc980
void sub_01ddc980(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b08 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x9a;
    g_02688b08 = g_025d628c;
    return;
  }
  g_02688b08 = g_025d628c;
  return;
}

extern undefined4 g_025d6290;
extern undefined4 g_02688b0c;
// @baa 0x01ddc9d0
void sub_01ddc9d0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b0c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x9b;
    g_02688b0c = g_025d6290;
    return;
  }
  g_02688b0c = g_025d6290;
  return;
}

extern undefined4 g_025d6294;
extern undefined4 g_02688b10;
// @baa 0x01ddca20
void sub_01ddca20(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b10 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x9c;
    g_02688b10 = g_025d6294;
    return;
  }
  g_02688b10 = g_025d6294;
  return;
}

extern undefined4 g_025d6298;
extern undefined4 g_02688b14;
// @baa 0x01ddca70
void sub_01ddca70(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b14 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x9d;
    g_02688b14 = g_025d6298;
    return;
  }
  g_02688b14 = g_025d6298;
  return;
}

extern undefined4 g_025d629c;
extern undefined4 g_02688b18;
// @baa 0x01ddcac0
void sub_01ddcac0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b18 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x9e;
    g_02688b18 = g_025d629c;
    return;
  }
  g_02688b18 = g_025d629c;
  return;
}

extern undefined4 g_025d62a0;
extern undefined4 g_02688b1c;
// @baa 0x01ddcb10
void sub_01ddcb10(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b1c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x9f;
    g_02688b1c = g_025d62a0;
    return;
  }
  g_02688b1c = g_025d62a0;
  return;
}

extern undefined4 g_025d62a4;
extern undefined4 g_02688b20;
// @baa 0x01ddcb60
void sub_01ddcb60(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b20 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xa0;
    g_02688b20 = g_025d62a4;
    return;
  }
  g_02688b20 = g_025d62a4;
  return;
}

extern undefined4 g_025d62a8;
extern undefined4 g_02688b24;
// @baa 0x01ddcbb0
void sub_01ddcbb0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b24 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xa1;
    g_02688b24 = g_025d62a8;
    return;
  }
  g_02688b24 = g_025d62a8;
  return;
}

extern undefined4 g_025d62ac;
extern undefined4 g_02688b28;
// @baa 0x01ddcc00
void sub_01ddcc00(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b28 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xa2;
    g_02688b28 = g_025d62ac;
    return;
  }
  g_02688b28 = g_025d62ac;
  return;
}

extern undefined4 g_025d62b0;
extern undefined4 g_02688b2c;
// @baa 0x01ddcc50
void sub_01ddcc50(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b2c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xa3;
    g_02688b2c = g_025d62b0;
    return;
  }
  g_02688b2c = g_025d62b0;
  return;
}

extern undefined4 g_025d62b4;
extern undefined4 g_02688b30;
// @baa 0x01ddcca0
void sub_01ddcca0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b30 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xa4;
    g_02688b30 = g_025d62b4;
    return;
  }
  g_02688b30 = g_025d62b4;
  return;
}

extern undefined4 g_025d62b8;
extern undefined4 g_02688b34;
// @baa 0x01ddccf0
void sub_01ddccf0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b34 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xa5;
    g_02688b34 = g_025d62b8;
    return;
  }
  g_02688b34 = g_025d62b8;
  return;
}

extern undefined4 g_025d62bc;
extern undefined4 g_02688b38;
// @baa 0x01ddcd40
void sub_01ddcd40(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b38 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xa6;
    g_02688b38 = g_025d62bc;
    return;
  }
  g_02688b38 = g_025d62bc;
  return;
}

extern undefined4 g_025d62c0;
extern undefined4 g_02688b3c;
// @baa 0x01ddcd90
void sub_01ddcd90(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b3c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xa7;
    g_02688b3c = g_025d62c0;
    return;
  }
  g_02688b3c = g_025d62c0;
  return;
}

extern undefined4 g_025d62c4;
extern undefined4 g_02688c84;
// @baa 0x01ddcde0
void sub_01ddcde0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c84 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xf9;
    g_02688c84 = g_025d62c4;
    return;
  }
  g_02688c84 = g_025d62c4;
  return;
}

extern undefined4 g_025d62c8;
extern undefined4 g_02688c88;
// @baa 0x01ddce30
void sub_01ddce30(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c88 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xfa;
    g_02688c88 = g_025d62c8;
    return;
  }
  g_02688c88 = g_025d62c8;
  return;
}

extern undefined4 g_025d62cc;
extern undefined4 g_02688c8c;
// @baa 0x01ddce80
void sub_01ddce80(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c8c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xfb;
    g_02688c8c = g_025d62cc;
    return;
  }
  g_02688c8c = g_025d62cc;
  return;
}

// @baa 0x01ddced0
void sub_01ddced0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d62d4;
extern undefined4 g_02688b44;
// @baa 0x01ddcf00
void sub_01ddcf00(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b44 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xa9;
    g_02688b44 = g_025d62d4;
    return;
  }
  g_02688b44 = g_025d62d4;
  return;
}

extern undefined4 g_025d62d8;
extern undefined4 g_02688b48;
// @baa 0x01ddcf50
void sub_01ddcf50(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b48 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xaa;
    g_02688b48 = g_025d62d8;
    return;
  }
  g_02688b48 = g_025d62d8;
  return;
}

extern undefined4 g_025d62dc;
extern undefined4 g_02688b4c;
// @baa 0x01ddcfa0
void sub_01ddcfa0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b4c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xab;
    g_02688b4c = g_025d62dc;
    return;
  }
  g_02688b4c = g_025d62dc;
  return;
}

extern undefined4 g_025d62e0;
extern undefined4 g_02688b50;
// @baa 0x01ddcff0
void sub_01ddcff0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b50 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xac;
    g_02688b50 = g_025d62e0;
    return;
  }
  g_02688b50 = g_025d62e0;
  return;
}

extern undefined4 g_025d62e4;
extern undefined4 g_02688b54;
// @baa 0x01ddd040
void sub_01ddd040(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b54 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xad;
    g_02688b54 = g_025d62e4;
    return;
  }
  g_02688b54 = g_025d62e4;
  return;
}

extern undefined4 g_025d62e8;
extern undefined4 g_02688b58;
// @baa 0x01ddd090
void sub_01ddd090(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b58 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xae;
    g_02688b58 = g_025d62e8;
    return;
  }
  g_02688b58 = g_025d62e8;
  return;
}

extern undefined4 g_025d62ec;
extern undefined4 g_02688b5c;
// @baa 0x01ddd0e0
void sub_01ddd0e0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b5c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xaf;
    g_02688b5c = g_025d62ec;
    return;
  }
  g_02688b5c = g_025d62ec;
  return;
}

extern undefined4 g_025d62f0;
extern undefined4 g_02688b60;
// @baa 0x01ddd130
void sub_01ddd130(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b60 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xb0;
    g_02688b60 = g_025d62f0;
    return;
  }
  g_02688b60 = g_025d62f0;
  return;
}

extern undefined4 g_025d62f4;
extern undefined4 g_02688b64;
// @baa 0x01ddd180
void sub_01ddd180(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b64 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xb1;
    g_02688b64 = g_025d62f4;
    return;
  }
  g_02688b64 = g_025d62f4;
  return;
}

extern undefined4 g_025d62f8;
extern undefined4 g_02688b68;
// @baa 0x01ddd1d0
void sub_01ddd1d0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b68 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xb2;
    g_02688b68 = g_025d62f8;
    return;
  }
  g_02688b68 = g_025d62f8;
  return;
}

extern undefined4 g_025d62fc;
extern undefined4 g_02688b6c;
// @baa 0x01ddd220
void sub_01ddd220(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b6c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xb3;
    g_02688b6c = g_025d62fc;
    return;
  }
  g_02688b6c = g_025d62fc;
  return;
}

extern undefined4 g_025d6300;
extern undefined4 g_02688b70;
// @baa 0x01ddd270
void sub_01ddd270(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b70 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xb4;
    g_02688b70 = g_025d6300;
    return;
  }
  g_02688b70 = g_025d6300;
  return;
}

extern undefined4 g_025d6304;
extern undefined4 g_02688b74;
// @baa 0x01ddd2c0
void sub_01ddd2c0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b74 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xb5;
    g_02688b74 = g_025d6304;
    return;
  }
  g_02688b74 = g_025d6304;
  return;
}

extern undefined4 g_025d6308;
extern undefined4 g_02688be8;
// @baa 0x01ddd310
void sub_01ddd310(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688be8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xd2;
    g_02688be8 = g_025d6308;
    return;
  }
  g_02688be8 = g_025d6308;
  return;
}

extern undefined4 g_025d630c;
extern undefined4 g_02688b78;
// @baa 0x01ddd360
void sub_01ddd360(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b78 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xb6;
    g_02688b78 = g_025d630c;
    return;
  }
  g_02688b78 = g_025d630c;
  return;
}

extern undefined4 g_025d6310;
extern undefined4 g_02688b7c;
// @baa 0x01ddd3b0
void sub_01ddd3b0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b7c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xb7;
    g_02688b7c = g_025d6310;
    return;
  }
  g_02688b7c = g_025d6310;
  return;
}

extern undefined4 g_025d6314;
extern undefined4 g_02688b80;
// @baa 0x01ddd400
void sub_01ddd400(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b80 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xb8;
    g_02688b80 = g_025d6314;
    return;
  }
  g_02688b80 = g_025d6314;
  return;
}

extern undefined4 g_025d6318;
extern undefined4 g_02688b84;
// @baa 0x01ddd450
void sub_01ddd450(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b84 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xb9;
    g_02688b84 = g_025d6318;
    return;
  }
  g_02688b84 = g_025d6318;
  return;
}

extern undefined4 g_025d631c;
extern undefined4 g_02688b88;
// @baa 0x01ddd4a0
void sub_01ddd4a0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b88 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xba;
    g_02688b88 = g_025d631c;
    return;
  }
  g_02688b88 = g_025d631c;
  return;
}

extern undefined4 g_025d6320;
extern undefined4 g_02688b8c;
// @baa 0x01ddd4f0
void sub_01ddd4f0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b8c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xbb;
    g_02688b8c = g_025d6320;
    return;
  }
  g_02688b8c = g_025d6320;
  return;
}

// @baa 0x01ddd540
void sub_01ddd540(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d6328;
extern undefined4 g_02688b90;
// @baa 0x01ddd570
void sub_01ddd570(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b90 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xbc;
    g_02688b90 = g_025d6328;
    return;
  }
  g_02688b90 = g_025d6328;
  return;
}

// @baa 0x01ddd5c0
void sub_01ddd5c0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d6330;
extern undefined4 g_02688b94;
// @baa 0x01ddd5f0
void sub_01ddd5f0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b94 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xbd;
    g_02688b94 = g_025d6330;
    return;
  }
  g_02688b94 = g_025d6330;
  return;
}

extern undefined4 g_025d6334;
extern undefined4 g_02688b98;
// @baa 0x01ddd640
void sub_01ddd640(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b98 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xbe;
    g_02688b98 = g_025d6334;
    return;
  }
  g_02688b98 = g_025d6334;
  return;
}

// @baa 0x01ddd690
void sub_01ddd690(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d633c;
extern undefined4 g_02688b9c;
// @baa 0x01ddd6c0
void sub_01ddd6c0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b9c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xbf;
    g_02688b9c = g_025d633c;
    return;
  }
  g_02688b9c = g_025d633c;
  return;
}

extern undefined4 g_025d6340;
extern undefined4 g_02688ba0;
// @baa 0x01ddd710
void sub_01ddd710(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688ba0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xc0;
    g_02688ba0 = g_025d6340;
    return;
  }
  g_02688ba0 = g_025d6340;
  return;
}

extern undefined4 g_025d6344;
extern undefined4 g_02688ba4;
// @baa 0x01ddd760
void sub_01ddd760(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688ba4 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xc1;
    g_02688ba4 = g_025d6344;
    return;
  }
  g_02688ba4 = g_025d6344;
  return;
}

extern undefined4 g_025d6348;
extern undefined4 g_02688ba8;
// @baa 0x01ddd7b0
void sub_01ddd7b0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688ba8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xc2;
    g_02688ba8 = g_025d6348;
    return;
  }
  g_02688ba8 = g_025d6348;
  return;
}

// @baa 0x01ddd800
void sub_01ddd800(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d6350;
extern undefined4 g_02688bbc;
// @baa 0x01ddd830
void sub_01ddd830(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688bbc != (undefined4)&sub_0059dea0) {
    g_0268d094 = 199;
    g_02688bbc = g_025d6350;
    return;
  }
  g_02688bbc = g_025d6350;
  return;
}

// @baa 0x01ddd880
void sub_01ddd880(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddd8b0
void sub_01ddd8b0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d635c;
extern undefined4 g_02688bac;
// @baa 0x01ddd8e0
void sub_01ddd8e0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688bac != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xc3;
    g_02688bac = g_025d635c;
    return;
  }
  g_02688bac = g_025d635c;
  return;
}

extern undefined4 g_025d6360;
extern undefined4 g_02688c70;
// @baa 0x01ddd930
void sub_01ddd930(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c70 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xf4;
    g_02688c70 = g_025d6360;
    return;
  }
  g_02688c70 = g_025d6360;
  return;
}

extern undefined4 g_025d6364;
extern undefined4 g_02688c74;
// @baa 0x01ddd980
void sub_01ddd980(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c74 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xf5;
    g_02688c74 = g_025d6364;
    return;
  }
  g_02688c74 = g_025d6364;
  return;
}

extern undefined4 g_025d6368;
extern undefined4 g_02688c78;
// @baa 0x01ddd9d0
void sub_01ddd9d0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c78 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xf6;
    g_02688c78 = g_025d6368;
    return;
  }
  g_02688c78 = g_025d6368;
  return;
}

extern undefined4 g_025d636c;
extern undefined4 g_02688c7c;
// @baa 0x01ddda20
void sub_01ddda20(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c7c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xf7;
    g_02688c7c = g_025d636c;
    return;
  }
  g_02688c7c = g_025d636c;
  return;
}

// @baa 0x01ddda70
void sub_01ddda70(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01dddaa0
void sub_01dddaa0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01dddad0
void sub_01dddad0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d637c;
extern undefined4 g_02688928;
// @baa 0x01dddb00
void sub_01dddb00(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688928 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x22;
    g_02688928 = g_025d637c;
    return;
  }
  g_02688928 = g_025d637c;
  return;
}

extern undefined * g_025d6380;
extern undefined4 g_0268892c;
// @baa 0x01dddb50
void sub_01dddb50(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_0268892c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x23;
    g_0268892c = (undefined4)(g_025d6380);
    return;
  }
  g_0268892c = (undefined4)(g_025d6380);
  return;
}

// @baa 0x01dddba0
void sub_01dddba0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01dddbd0
void sub_01dddbd0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01dddc00
void sub_01dddc00(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01dddc30
void sub_01dddc30(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01dddc60
void sub_01dddc60(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01dddc90
void sub_01dddc90(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01dddcc0
void sub_01dddcc0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01dddcf0
void sub_01dddcf0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01dddd20
void sub_01dddd20(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01dddd50
void sub_01dddd50(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d63a8;
extern undefined4 g_026885d4;
// @baa 0x01dddd80
void sub_01dddd80(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885d4 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x4d;
    g_026885d4 = g_025d63a8;
    return;
  }
  g_026885d4 = g_025d63a8;
  return;
}

// @baa 0x01ddddd0
void sub_01ddddd0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d63ac;
extern undefined4 g_026885d8;
// @baa 0x01ddde00
void sub_01ddde00(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885d8 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x4e;
    g_026885d8 = g_025d63ac;
    return;
  }
  g_026885d8 = g_025d63ac;
  return;
}

// @baa 0x01ddde50
void sub_01ddde50(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d63b0;
extern undefined4 g_026885dc;
// @baa 0x01ddde80
void sub_01ddde80(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885dc != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x4f;
    g_026885dc = g_025d63b0;
    return;
  }
  g_026885dc = g_025d63b0;
  return;
}

// @baa 0x01ddded0
void sub_01ddded0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d63b4;
extern undefined4 g_02688600;
// @baa 0x01dddf00
void sub_01dddf00(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_02688600 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x58;
    g_02688600 = g_025d63b4;
    return;
  }
  g_02688600 = g_025d63b4;
  return;
}

// @baa 0x01dddf50
void sub_01dddf50(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d63b8;
extern undefined4 g_026885e0;
// @baa 0x01dddf80
void sub_01dddf80(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885e0 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x50;
    g_026885e0 = g_025d63b8;
    return;
  }
  g_026885e0 = g_025d63b8;
  return;
}

// @baa 0x01dddfd0
void sub_01dddfd0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d63bc;
extern undefined4 g_026885e4;
// @baa 0x01dde000
void sub_01dde000(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_026885e4 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x51;
    g_026885e4 = g_025d63bc;
    return;
  }
  g_026885e4 = g_025d63bc;
  return;
}

// @baa 0x01dde050
void sub_01dde050(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d63c0;
extern undefined4 g_02688584;
// @baa 0x01dde080
void sub_01dde080(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_02688584 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x39;
    g_02688584 = g_025d63c0;
    return;
  }
  g_02688584 = g_025d63c0;
  return;
}

// @baa 0x01dde0d0
void sub_01dde0d0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d63c4;
extern undefined4 g_02688604;
// @baa 0x01dde100
void sub_01dde100(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d75c == 0) {
    puVar2 = &g_026884a0;
    for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d75c = 1;
  }
  if (g_02688604 != (undefined4)&sub_0059dea0) {
    g_0268d098 = 0x59;
    g_02688604 = g_025d63c4;
    return;
  }
  g_02688604 = g_025d63c4;
  return;
}

extern undefined4 g_025d63c8;
extern undefined4 g_02688bec;
// @baa 0x01dde150
void sub_01dde150(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688bec != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xd3;
    g_02688bec = g_025d63c8;
    return;
  }
  g_02688bec = g_025d63c8;
  return;
}

extern undefined4 g_025d63cc;
extern undefined4 g_02688bf0;
// @baa 0x01dde1a0
void sub_01dde1a0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688bf0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xd4;
    g_02688bf0 = g_025d63cc;
    return;
  }
  g_02688bf0 = g_025d63cc;
  return;
}

extern undefined4 g_025d63d0;
extern undefined4 g_02688bf4;
// @baa 0x01dde1f0
void sub_01dde1f0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688bf4 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xd5;
    g_02688bf4 = g_025d63d0;
    return;
  }
  g_02688bf4 = g_025d63d0;
  return;
}

extern undefined4 g_025d63d4;
extern undefined4 g_02688d40;
// @baa 0x01dde240
void sub_01dde240(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688d40 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x128;
    g_02688d40 = g_025d63d4;
    return;
  }
  g_02688d40 = g_025d63d4;
  return;
}

extern undefined4 g_025d63d8;
extern undefined4 g_02688bf8;
// @baa 0x01dde290
void sub_01dde290(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688bf8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xd6;
    g_02688bf8 = g_025d63d8;
    return;
  }
  g_02688bf8 = g_025d63d8;
  return;
}

extern undefined4 g_025d63dc;
extern undefined4 g_02688bfc;
// @baa 0x01dde2e0
void sub_01dde2e0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688bfc != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xd7;
    g_02688bfc = g_025d63dc;
    return;
  }
  g_02688bfc = g_025d63dc;
  return;
}

extern undefined4 g_025d63e0;
extern undefined4 g_02688c00;
// @baa 0x01dde330
void sub_01dde330(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c00 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xd8;
    g_02688c00 = g_025d63e0;
    return;
  }
  g_02688c00 = g_025d63e0;
  return;
}

extern undefined4 g_025d63e4;
extern undefined4 g_02688cec;
// @baa 0x01dde380
void sub_01dde380(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688cec != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x113;
    g_02688cec = g_025d63e4;
    return;
  }
  g_02688cec = g_025d63e4;
  return;
}

extern undefined4 g_025d63e8;
extern undefined4 g_02688cf0;
// @baa 0x01dde3d0
void sub_01dde3d0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688cf0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x114;
    g_02688cf0 = g_025d63e8;
    return;
  }
  g_02688cf0 = g_025d63e8;
  return;
}

extern undefined4 g_025d63ec;
extern undefined4 g_02688c04;
// @baa 0x01dde420
void sub_01dde420(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c04 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xd9;
    g_02688c04 = g_025d63ec;
    return;
  }
  g_02688c04 = g_025d63ec;
  return;
}

extern undefined4 g_025d63f0;
extern undefined4 g_02688c08;
// @baa 0x01dde470
void sub_01dde470(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c08 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xda;
    g_02688c08 = g_025d63f0;
    return;
  }
  g_02688c08 = g_025d63f0;
  return;
}

extern undefined4 g_025d63f4;
extern undefined4 g_02688c0c;
// @baa 0x01dde4c0
void sub_01dde4c0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c0c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xdb;
    g_02688c0c = g_025d63f4;
    return;
  }
  g_02688c0c = g_025d63f4;
  return;
}

extern undefined4 g_025d63f8;
extern undefined4 g_02688c10;
// @baa 0x01dde510
void sub_01dde510(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c10 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xdc;
    g_02688c10 = g_025d63f8;
    return;
  }
  g_02688c10 = g_025d63f8;
  return;
}

extern undefined4 g_025d63fc;
extern undefined4 g_02688c14;
// @baa 0x01dde560
void sub_01dde560(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c14 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xdd;
    g_02688c14 = g_025d63fc;
    return;
  }
  g_02688c14 = g_025d63fc;
  return;
}

extern undefined4 g_025d6400;
extern undefined4 g_02688d44;
// @baa 0x01dde5b0
void sub_01dde5b0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688d44 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x129;
    g_02688d44 = g_025d6400;
    return;
  }
  g_02688d44 = g_025d6400;
  return;
}

extern undefined4 g_025d6404;
extern undefined4 g_02688c18;
// @baa 0x01dde600
void sub_01dde600(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c18 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xde;
    g_02688c18 = g_025d6404;
    return;
  }
  g_02688c18 = g_025d6404;
  return;
}

extern undefined4 g_025d6408;
extern undefined4 g_02688c1c;
// @baa 0x01dde650
void sub_01dde650(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c1c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xdf;
    g_02688c1c = g_025d6408;
    return;
  }
  g_02688c1c = g_025d6408;
  return;
}

extern undefined4 g_025d640c;
extern undefined4 g_02688c20;
// @baa 0x01dde6a0
void sub_01dde6a0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c20 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xe0;
    g_02688c20 = g_025d640c;
    return;
  }
  g_02688c20 = g_025d640c;
  return;
}

extern undefined4 g_025d6410;
extern undefined4 g_02688c24;
// @baa 0x01dde6f0
void sub_01dde6f0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c24 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xe1;
    g_02688c24 = g_025d6410;
    return;
  }
  g_02688c24 = g_025d6410;
  return;
}

// @baa 0x01dde740
void sub_01dde740(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01dde770
void sub_01dde770(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01dde7a0
void sub_01dde7a0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined * g_025d6420;
extern undefined4 g_02688c28;
// @baa 0x01dde7d0
void sub_01dde7d0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c28 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xe2;
    g_02688c28 = (undefined4)(g_025d6420);
    return;
  }
  g_02688c28 = (undefined4)(g_025d6420);
  return;
}

// @baa 0x01dde820
void sub_01dde820(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01dde850
void sub_01dde850(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01dde880
void sub_01dde880(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01dde8b0
void sub_01dde8b0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01dde8e0
void sub_01dde8e0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d6438;
extern undefined4 g_02688c90;
// @baa 0x01dde910
void sub_01dde910(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c90 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xfc;
    g_02688c90 = g_025d6438;
    return;
  }
  g_02688c90 = g_025d6438;
  return;
}

extern undefined4 g_025d643c;
extern undefined4 g_02688da0;
// @baa 0x01dde960
void sub_01dde960(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688da0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x140;
    g_02688da0 = g_025d643c;
    return;
  }
  g_02688da0 = g_025d643c;
  return;
}

extern undefined4 g_025d6440;
extern undefined4 g_02688d50;
// @baa 0x01dde9b0
void sub_01dde9b0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688d50 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 300;
    g_02688d50 = g_025d6440;
    return;
  }
  g_02688d50 = g_025d6440;
  return;
}

extern undefined4 g_025d6444;
extern undefined4 g_0268a010;
// @baa 0x01ddea00
void sub_01ddea00(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_0268a010 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x5dc;
    g_0268a010 = g_025d6444;
    return;
  }
  g_0268a010 = g_025d6444;
  return;
}

extern undefined4 g_025d6448;
extern undefined4 g_0268a014;
// @baa 0x01ddea50
void sub_01ddea50(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_0268a014 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x5dd;
    g_0268a014 = g_025d6448;
    return;
  }
  g_0268a014 = g_025d6448;
  return;
}

extern undefined4 g_025d644c;
extern undefined4 g_02688ad8;
// @baa 0x01ddeaa0
void sub_01ddeaa0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688ad8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x8e;
    g_02688ad8 = g_025d644c;
    return;
  }
  g_02688ad8 = g_025d644c;
  return;
}

extern undefined4 g_025d6450;
extern undefined4 g_02688bcc;
// @baa 0x01ddeaf0
void sub_01ddeaf0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688bcc != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xcb;
    g_02688bcc = g_025d6450;
    return;
  }
  g_02688bcc = g_025d6450;
  return;
}

extern undefined4 g_025d6454;
extern undefined4 g_02688d1c;
// @baa 0x01ddeb40
void sub_01ddeb40(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688d1c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x11f;
    g_02688d1c = g_025d6454;
    return;
  }
  g_02688d1c = g_025d6454;
  return;
}

extern undefined4 g_025d6458;
extern undefined4 g_02688d20;
// @baa 0x01ddeb90
void sub_01ddeb90(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688d20 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x120;
    g_02688d20 = g_025d6458;
    return;
  }
  g_02688d20 = g_025d6458;
  return;
}

extern undefined4 g_025d645c;
extern undefined4 g_02688d24;
// @baa 0x01ddebe0
void sub_01ddebe0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688d24 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x121;
    g_02688d24 = g_025d645c;
    return;
  }
  g_02688d24 = g_025d645c;
  return;
}

extern undefined4 g_025d6460;
extern undefined4 g_02688d28;
// @baa 0x01ddec30
void sub_01ddec30(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688d28 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x122;
    g_02688d28 = g_025d6460;
    return;
  }
  g_02688d28 = g_025d6460;
  return;
}

extern undefined4 g_025d6464;
extern undefined4 g_02688d2c;
// @baa 0x01ddec80
void sub_01ddec80(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688d2c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x123;
    g_02688d2c = g_025d6464;
    return;
  }
  g_02688d2c = g_025d6464;
  return;
}

extern undefined4 g_025d6468;
extern undefined4 g_02688d90;
// @baa 0x01ddecd0
void sub_01ddecd0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688d90 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x13c;
    g_02688d90 = g_025d6468;
    return;
  }
  g_02688d90 = g_025d6468;
  return;
}

extern undefined4 g_025d646c;
extern undefined4 g_02688d94;
// @baa 0x01dded20
void sub_01dded20(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688d94 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x13d;
    g_02688d94 = g_025d646c;
    return;
  }
  g_02688d94 = g_025d646c;
  return;
}

extern undefined4 g_025d6470;
extern undefined4 g_02688d98;
// @baa 0x01dded70
void sub_01dded70(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688d98 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x13e;
    g_02688d98 = g_025d6470;
    return;
  }
  g_02688d98 = g_025d6470;
  return;
}

extern undefined4 g_025d6474;
extern undefined4 g_02688d9c;
// @baa 0x01ddedc0
void sub_01ddedc0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688d9c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x13f;
    g_02688d9c = g_025d6474;
    return;
  }
  g_02688d9c = g_025d6474;
  return;
}

extern undefined4 g_025d6478;
extern undefined4 g_02688c34;
// @baa 0x01ddee10
void sub_01ddee10(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c34 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xe5;
    g_02688c34 = g_025d6478;
    return;
  }
  g_02688c34 = g_025d6478;
  return;
}

extern undefined * g_025d647c;
extern undefined4 g_02688c38;
// @baa 0x01ddee60
void sub_01ddee60(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c38 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xe6;
    g_02688c38 = (undefined4)(g_025d647c);
    return;
  }
  g_02688c38 = (undefined4)(g_025d647c);
  return;
}

// @baa 0x01ddeeb0
void sub_01ddeeb0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddeee0
void sub_01ddeee0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddef10
void sub_01ddef10(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddef40
void sub_01ddef40(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddef70
void sub_01ddef70(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddefa0
void sub_01ddefa0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddefd0
void sub_01ddefd0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddf000
void sub_01ddf000(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddf030
void sub_01ddf030(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddf060
void sub_01ddf060(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddf090
void sub_01ddf090(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddf0c0
void sub_01ddf0c0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddf0f0
void sub_01ddf0f0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddf120
void sub_01ddf120(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddf150
void sub_01ddf150(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddf180
void sub_01ddf180(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddf1b0
void sub_01ddf1b0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d64c4;
extern undefined4 g_02688cd8;
// @baa 0x01ddf1e0
void sub_01ddf1e0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688cd8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x10e;
    g_02688cd8 = g_025d64c4;
    return;
  }
  g_02688cd8 = g_025d64c4;
  return;
}

extern undefined4 g_025d64c8;
extern undefined4 g_02688cdc;
// @baa 0x01ddf230
void sub_01ddf230(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688cdc != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x10f;
    g_02688cdc = g_025d64c8;
    return;
  }
  g_02688cdc = g_025d64c8;
  return;
}

extern undefined4 g_025d64cc;
extern undefined4 g_026888d8;
// @baa 0x01ddf280
void sub_01ddf280(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_026888d8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xe;
    g_026888d8 = g_025d64cc;
    return;
  }
  g_026888d8 = g_025d64cc;
  return;
}

extern undefined4 g_025d64d0;
extern undefined4 g_02688a60;
// @baa 0x01ddf2d0
void sub_01ddf2d0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688a60 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x70;
    g_02688a60 = g_025d64d0;
    return;
  }
  g_02688a60 = g_025d64d0;
  return;
}

extern undefined4 g_025d64d4;
extern undefined4 g_02688b40;
// @baa 0x01ddf320
void sub_01ddf320(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688b40 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xa8;
    g_02688b40 = g_025d64d4;
    return;
  }
  g_02688b40 = g_025d64d4;
  return;
}

extern undefined4 g_025d64d8;
extern undefined4 g_02688a6c;
// @baa 0x01ddf370
void sub_01ddf370(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688a6c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x73;
    g_02688a6c = g_025d64d8;
    return;
  }
  g_02688a6c = g_025d64d8;
  return;
}

extern undefined4 g_025d64dc;
extern undefined4 g_02688a70;
// @baa 0x01ddf3c0
void sub_01ddf3c0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688a70 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x74;
    g_02688a70 = g_025d64dc;
    return;
  }
  g_02688a70 = g_025d64dc;
  return;
}

extern undefined4 g_025d64e0;
extern undefined4 g_02688a80;
// @baa 0x01ddf410
void sub_01ddf410(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688a80 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x78;
    g_02688a80 = g_025d64e0;
    return;
  }
  g_02688a80 = g_025d64e0;
  return;
}

extern undefined4 g_025d64e4;
extern undefined4 g_02688a84;
// @baa 0x01ddf460
void sub_01ddf460(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688a84 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x79;
    g_02688a84 = g_025d64e4;
    return;
  }
  g_02688a84 = g_025d64e4;
  return;
}

extern undefined4 g_025d64e8;
extern undefined4 g_02688a88;
// @baa 0x01ddf4b0
void sub_01ddf4b0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688a88 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x7a;
    g_02688a88 = g_025d64e8;
    return;
  }
  g_02688a88 = g_025d64e8;
  return;
}

extern undefined4 g_025d64ec;
extern undefined4 g_02688a8c;
// @baa 0x01ddf500
void sub_01ddf500(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688a8c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x7b;
    g_02688a8c = g_025d64ec;
    return;
  }
  g_02688a8c = g_025d64ec;
  return;
}

extern undefined4 g_025d64f0;
extern undefined4 g_02688a90;
// @baa 0x01ddf550
void sub_01ddf550(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688a90 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x7c;
    g_02688a90 = g_025d64f0;
    return;
  }
  g_02688a90 = g_025d64f0;
  return;
}

extern undefined4 g_025d64f4;
extern undefined4 g_02688da8;
// @baa 0x01ddf5a0
void sub_01ddf5a0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688da8 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x142;
    g_02688da8 = g_025d64f4;
    return;
  }
  g_02688da8 = g_025d64f4;
  return;
}

extern undefined4 g_025d64f8;
extern undefined4 g_02688dac;
// @baa 0x01ddf5f0
void sub_01ddf5f0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688dac != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x143;
    g_02688dac = g_025d64f8;
    return;
  }
  g_02688dac = g_025d64f8;
  return;
}

extern undefined4 g_025d64fc;
extern undefined4 g_02688db0;
// @baa 0x01ddf640
void sub_01ddf640(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688db0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x144;
    g_02688db0 = g_025d64fc;
    return;
  }
  g_02688db0 = g_025d64fc;
  return;
}

extern undefined4 g_025d6500;
extern undefined4 g_02688a94;
// @baa 0x01ddf690
void sub_01ddf690(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688a94 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x7d;
    g_02688a94 = g_025d6500;
    return;
  }
  g_02688a94 = g_025d6500;
  return;
}

extern undefined4 g_025d6504;
extern undefined4 g_02688a98;
// @baa 0x01ddf6e0
void sub_01ddf6e0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688a98 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x7e;
    g_02688a98 = g_025d6504;
    return;
  }
  g_02688a98 = g_025d6504;
  return;
}

extern undefined4 g_025d6508;
extern undefined4 g_02688a9c;
// @baa 0x01ddf730
void sub_01ddf730(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688a9c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x7f;
    g_02688a9c = g_025d6508;
    return;
  }
  g_02688a9c = g_025d6508;
  return;
}

extern undefined4 g_025d650c;
extern undefined4 g_02688aa0;
// @baa 0x01ddf780
void sub_01ddf780(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688aa0 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x80;
    g_02688aa0 = g_025d650c;
    return;
  }
  g_02688aa0 = g_025d650c;
  return;
}

extern undefined4 g_025d6510;
extern undefined4 g_02688c48;
// @baa 0x01ddf7d0
void sub_01ddf7d0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c48 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xea;
    g_02688c48 = g_025d6510;
    return;
  }
  g_02688c48 = g_025d6510;
  return;
}

extern undefined4 g_025d6514;
extern undefined4 g_02688c4c;
// @baa 0x01ddf820
void sub_01ddf820(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c4c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xeb;
    g_02688c4c = g_025d6514;
    return;
  }
  g_02688c4c = g_025d6514;
  return;
}

extern undefined4 g_025d6518;
extern undefined4 g_02688c58;
// @baa 0x01ddf870
void sub_01ddf870(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c58 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xee;
    g_02688c58 = g_025d6518;
    return;
  }
  g_02688c58 = g_025d6518;
  return;
}

extern undefined4 g_025d651c;
extern undefined4 g_02688c50;
// @baa 0x01ddf8c0
void sub_01ddf8c0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c50 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xec;
    g_02688c50 = g_025d651c;
    return;
  }
  g_02688c50 = g_025d651c;
  return;
}

extern undefined4 g_025d6520;
extern undefined4 g_02688c54;
// @baa 0x01ddf910
void sub_01ddf910(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c54 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xed;
    g_02688c54 = g_025d6520;
    return;
  }
  g_02688c54 = g_025d6520;
  return;
}

extern undefined4 g_025d6524;
extern undefined4 g_02688bc4;
// @baa 0x01ddf960
void sub_01ddf960(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688bc4 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xc9;
    g_02688bc4 = g_025d6524;
    return;
  }
  g_02688bc4 = g_025d6524;
  return;
}

// @baa 0x01ddf9b0
void sub_01ddf9b0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddf9e0
void sub_01ddf9e0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d6530;
extern undefined4 g_02688c98;
// @baa 0x01ddfa10
void sub_01ddfa10(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c98 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xfe;
    g_02688c98 = g_025d6530;
    return;
  }
  g_02688c98 = g_025d6530;
  return;
}

extern undefined4 g_025d6534;
extern undefined4 g_02688c9c;
// @baa 0x01ddfa60
void sub_01ddfa60(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c9c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xff;
    g_02688c9c = g_025d6534;
    return;
  }
  g_02688c9c = g_025d6534;
  return;
}

extern undefined4 g_025d6538;
extern undefined4 g_02688a68;
// @baa 0x01ddfab0
void sub_01ddfab0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688a68 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x72;
    g_02688a68 = g_025d6538;
    return;
  }
  g_02688a68 = g_025d6538;
  return;
}

extern undefined4 g_025d653c;
extern undefined4 g_02688a7c;
// @baa 0x01ddfb00
void sub_01ddfb00(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688a7c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x77;
    g_02688a7c = g_025d653c;
    return;
  }
  g_02688a7c = g_025d653c;
  return;
}

// @baa 0x01ddfb50
void sub_01ddfb50(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddfb80
void sub_01ddfb80(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d6548;
extern undefined4 g_02688c3c;
// @baa 0x01ddfbb0
void sub_01ddfbb0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c3c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xe7;
    g_02688c3c = g_025d6548;
    return;
  }
  g_02688c3c = g_025d6548;
  return;
}

extern undefined * g_025d654c;
extern undefined4 g_02688c40;
// @baa 0x01ddfc00
void sub_01ddfc00(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688c40 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0xe8;
    g_02688c40 = (undefined4)(g_025d654c);
    return;
  }
  g_02688c40 = (undefined4)(g_025d654c);
  return;
}

// @baa 0x01ddfc50
void sub_01ddfc50(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddfc80
void sub_01ddfc80(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddfcb0
void sub_01ddfcb0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddfce0
void sub_01ddfce0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddfd10
void sub_01ddfd10(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddfd40
void sub_01ddfd40(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddfd70
void sub_01ddfd70(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddfda0
void sub_01ddfda0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddfdd0
void sub_01ddfdd0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddfe00
void sub_01ddfe00(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

// @baa 0x01ddfe30
void sub_01ddfe30(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  return;
}

extern undefined4 g_025d657c;
extern undefined4 g_02688a20;
// @baa 0x01ddfe60
void sub_01ddfe60(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688a20 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x60;
    g_02688a20 = g_025d657c;
    return;
  }
  g_02688a20 = g_025d657c;
  return;
}

extern undefined4 g_025d6580;
extern undefined4 g_02688a24;
// @baa 0x01ddfeb0
void sub_01ddfeb0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688a24 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x61;
    g_02688a24 = g_025d6580;
    return;
  }
  g_02688a24 = g_025d6580;
  return;
}

extern undefined4 g_025d6584;
extern undefined4 g_02688a28;
// @baa 0x01ddff00
void sub_01ddff00(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688a28 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x62;
    g_02688a28 = g_025d6584;
    return;
  }
  g_02688a28 = g_025d6584;
  return;
}

extern undefined4 g_025d6588;
extern undefined4 g_02688a2c;
// @baa 0x01ddff50
void sub_01ddff50(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688a2c != (undefined4)&sub_0059dea0) {
    g_0268d094 = 99;
    g_02688a2c = g_025d6588;
    return;
  }
  g_02688a2c = g_025d6588;
  return;
}

extern undefined4 g_025d658c;
extern undefined4 g_02688a30;
// @baa 0x01ddffa0
void sub_01ddffa0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688a30 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 100;
    g_02688a30 = g_025d658c;
    return;
  }
  g_02688a30 = g_025d658c;
  return;
}

extern undefined4 g_025d6590;
extern undefined4 g_02688a34;
// @baa 0x01ddfff0
void sub_01ddfff0(void)
{
  int iVar1;
  undefined4 *puVar2;
  
  if (g_0268d758 == 0) {
    puVar2 = &g_026888a0;
    for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = (undefined4)(&sub_0059dea0);
      puVar2 = puVar2 + 1;
    }
    g_0268d758 = 1;
  }
  if (g_02688a34 != (undefined4)&sub_0059dea0) {
    g_0268d094 = 0x65;
    g_02688a34 = g_025d6590;
    return;
  }
  g_02688a34 = g_025d6590;
  return;
}
