// Core_1e00000.cpp (part 1 of 160): 161 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e00030(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e260b0(void);
extern undefined4 g_021e35cc;
extern undefined4 g_026d2338;
// @baa 0x01e00030
void sub_01e00030(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d2338))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_021e35cc));
  sub_01a37872(&sub_01e260b0);
  return;
}

extern int g_01e2b4e8;
extern int g_025e86c8;
// @baa 0x01e00130
void sub_01e00130() { g_025e86c8 = g_01e2b4e8; }

class wxClassInfo;
class wxFrame;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e00220(void);
};

class wxFrame {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e00220(void);
};

class wxObject {
    public:
};

int sub_011c4370(void);
int sub_01e260f0(void);
extern undefined4 g_026d24b0;
// @baa 0x01e00220
void sub_01e00220(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d24b0))->wxClassInfo::wxClassInfo(L"WxPropertyWindowFrame", (wxClassInfo *)(&wxFrame::ms_classInfo), (wxClassInfo *)0x0, 0x1b4, (wxObject *(__cdecl *)(void))(sub_011c4370));
  sub_01a37872(&sub_01e260f0);
  return;
}

extern int g_025e86d0;
// @baa 0x01e00250
void sub_01e00250() { g_025e86d0 = g_01e2b4e8; }

extern undefined4 g_025e86d8;
extern undefined4 sm_eventTable_exref;
// @baa 0x01e003d0
void sub_01e003d0(void)
{
  g_025e86d8 = sm_eventTable_exref;
  return;
}

extern undefined4 g_025e86e0;
// @baa 0x01e005d0
void sub_01e005d0(void)
{
  g_025e86e0 = sm_eventTable_exref;
  return;
}

extern int g_01e2ab08;
extern int g_025e870c;
// @baa 0x01e00b60
void sub_01e00b60() { g_025e870c = g_01e2ab08; }

extern int g_01e2a14c;
extern int g_025e8714;
// @baa 0x01e00bd0
void sub_01e00bd0() { g_025e8714 = g_01e2a14c; }

extern int g_025e871c;
// @baa 0x01e00d20
void sub_01e00d20() { g_025e871c = g_01e2a14c; }

extern int g_025e8724;
// @baa 0x01e00f20
void sub_01e00f20() { g_025e8724 = g_01e2a14c; }

extern int g_025e872c;
// @baa 0x01e01050
void sub_01e01050() { g_025e872c = g_01e2b4e8; }

extern int g_025e8734;
// @baa 0x01e01140
void sub_01e01140() { g_025e8734 = g_01e2a14c; }

extern undefined4 g_025e873c;
// @baa 0x01e01510
void sub_01e01510(void)
{
  g_025e873c = sm_eventTable_exref;
  return;
}

extern int g_025e8744;
// @baa 0x01e01580
void sub_01e01580() { g_025e8744 = g_01e2a14c; }

extern int g_01e29cc4;
extern int g_025e874c;
// @baa 0x01e017b0
void sub_01e017b0() { g_025e874c = g_01e29cc4; }

extern int g_025e8754;
// @baa 0x01e01820
void sub_01e01820() { g_025e8754 = g_01e2b4e8; }

int sub_01e26360(...);
// @baa 0x01e01c70
void sub_01e01c70(void)
{
  sub_01a37872(&sub_01e26360);
  return;
}

extern int g_025e8bb4;
// @baa 0x01e01c80
void sub_01e01c80() { g_025e8bb4 = g_01e2b4e8; }

extern int g_01e2ab18;
extern int g_025e8bbc;
// @baa 0x01e01e10
void sub_01e01e10() { g_025e8bbc = g_01e2ab18; }

extern int g_01e2b4cc;
extern int g_025e8bc4;
// @baa 0x01e024a0
void sub_01e024a0() { g_025e8bc4 = g_01e2b4cc; }

extern int g_01e2ab0c;
extern int g_025e8bcc;
// @baa 0x01e02920
void sub_01e02920() { g_025e8bcc = g_01e2ab0c; }

extern undefined4 g_025e8bd4;
// @baa 0x01e029b0
void sub_01e029b0(void)
{
  g_025e8bd4 = sm_eventTable_exref;
  return;
}

int sub_01e26430(...);
// @baa 0x01e041c0
void sub_01e041c0(void)
{
  sub_01a37872(&sub_01e26430);
  return;
}

extern undefined4 g_025e8cb4;
// @baa 0x01e04200
void sub_01e04200(void)
{
  g_025e8cb4 = sm_eventTable_exref;
  return;
}

extern int g_025e8cbc;
// @baa 0x01e042e0
void sub_01e042e0() { g_025e8cbc = g_01e2b4e8; }

extern int g_025e8cc4;
// @baa 0x01e043c0
void sub_01e043c0() { g_025e8cc4 = g_01e2b4cc; }

extern int g_025e8ccc;
// @baa 0x01e04470
void sub_01e04470() { g_025e8ccc = g_01e2b4cc; }

int sub_01e26440(...);
// @baa 0x01e04620
void sub_01e04620(void)
{
  sub_01a37872(&sub_01e26440);
  return;
}

extern undefined4 g_025e8cd4;
// @baa 0x01e04670
void sub_01e04670(void)
{
  g_025e8cd4 = sm_eventTable_exref;
  return;
}

__declspec(dllimport) int wxNewEventType();
extern undefined4 g_026d5154;
// @baa 0x01e04740
void sub_01e04740(void)
{
  g_026d5154 = wxNewEventType();
  return;
}

extern char g_025e8c70[];
extern unsigned char g_026d5178;
unsigned char sub_0059f5f0(int, int);
// @baa 0x01e04750
void sub_01e04750() { g_026d5178 = sub_0059f5f0(-1, (int)g_025e8c70); }

extern char g_025e8c74[];
extern unsigned char g_026d5179;
// @baa 0x01e04770
void sub_01e04770() { g_026d5179 = sub_0059f5f0(-1, (int)g_025e8c74); }

extern char g_025e8c78[];
extern unsigned char g_026d517a;
// @baa 0x01e04790
void sub_01e04790() { g_026d517a = sub_0059f5f0(-1, (int)g_025e8c78); }

extern char g_025e8c7c[];
extern unsigned char g_026d517b;
// @baa 0x01e047b0
void sub_01e047b0() { g_026d517b = sub_0059f5f0(-1, (int)g_025e8c7c); }

extern char g_025e8c80[];
extern unsigned char g_026d517c;
// @baa 0x01e047d0
void sub_01e047d0() { g_026d517c = sub_0059f5f0(-1, (int)g_025e8c80); }

int sub_01e26540(...);
// @baa 0x01e04810
void sub_01e04810(void)
{
  sub_01a37872(&sub_01e26540);
  return;
}

extern undefined4 g_025e8d34;
// @baa 0x01e048b0
void sub_01e048b0(void)
{
  g_025e8d34 = sm_eventTable_exref;
  return;
}

extern int g_025e8d3c;
// @baa 0x01e04a80
void sub_01e04a80() { g_025e8d3c = g_01e2a14c; }

extern int g_025e8d44;
// @baa 0x01e04af0
void sub_01e04af0() { g_025e8d44 = g_01e2a14c; }

extern int g_025e8d4c;
// @baa 0x01e04b60
void sub_01e04b60() { g_025e8d4c = g_01e2a14c; }

extern int g_01e29f90;
extern int g_025e8d54;
// @baa 0x01e04bb0
void sub_01e04bb0() { g_025e8d54 = g_01e29f90; }

int sub_01e26520(...);
// @baa 0x01e04c80
void sub_01e04c80(void)
{
  sub_01a37872(&sub_01e26520);
  return;
}

int sub_01e26530(...);
// @baa 0x01e04c90
void sub_01e04c90(void)
{
  sub_01a37872(&sub_01e26530);
  return;
}

extern undefined4 g_025e8df0;
// @baa 0x01e05610
void sub_01e05610(void)
{
  g_025e8df0 = sm_eventTable_exref;
  return;
}

int sub_01e265d0(...);
// @baa 0x01e057a0
void sub_01e057a0(void)
{
  sub_01a37872(&sub_01e265d0);
  return;
}

int sub_01e265a0(...);
// @baa 0x01e057b0
void sub_01e057b0(void)
{
  sub_01a37872(&sub_01e265a0);
  return;
}

int sub_01e265e0(...);
// @baa 0x01e057c0
void sub_01e057c0(void)
{
  sub_01a37872(&sub_01e265e0);
  return;
}

int sub_01e265b0(...);
// @baa 0x01e057d0
void sub_01e057d0(void)
{
  sub_01a37872(&sub_01e265b0);
  return;
}

extern int g_025e8df8;
// @baa 0x01e057e0
void sub_01e057e0() { g_025e8df8 = g_01e2ab18; }

extern undefined4 g_025e8e00;
// @baa 0x01e05830
void sub_01e05830(void)
{
  g_025e8e00 = sm_eventTable_exref;
  return;
}

extern undefined4 g_025e8e08;
// @baa 0x01e058a0
void sub_01e058a0(void)
{
  g_025e8e08 = sm_eventTable_exref;
  return;
}

int sub_01e265c0(...);
// @baa 0x01e05910
void sub_01e05910(void)
{
  sub_01a37872(&sub_01e265c0);
  return;
}

extern int g_025e8ec8;
// @baa 0x01e06850
void sub_01e06850() { g_025e8ec8 = g_01e2b4cc; }

extern undefined4 g_025e8ed0;
// @baa 0x01e068c0
void sub_01e068c0(void)
{
  g_025e8ed0 = sm_eventTable_exref;
  return;
}

extern int g_025e8ed8;
// @baa 0x01e07040
void sub_01e07040() { g_025e8ed8 = g_01e2ab18; }

extern undefined4 g_025e8ee0;
// @baa 0x01e07090
void sub_01e07090(void)
{
  g_025e8ee0 = sm_eventTable_exref;
  return;
}

extern undefined4 g_025e8ee8;
// @baa 0x01e07100
void sub_01e07100(void)
{
  g_025e8ee8 = sm_eventTable_exref;
  return;
}

extern int g_025e8ef4;
// @baa 0x01e083a0
void sub_01e083a0() { g_025e8ef4 = g_01e2ab18; }

extern int g_025e8efc;
// @baa 0x01e08700
void sub_01e08700() { g_025e8efc = g_01e2ab18; }

int sub_01e266c0(...);
// @baa 0x01e08750
void sub_01e08750(void)
{
  sub_01a37872(&sub_01e266c0);
  return;
}

int sub_01e266d0(...);
// @baa 0x01e08760
void sub_01e08760(void)
{
  sub_01a37872(&sub_01e266d0);
  return;
}

int sub_01e266e0(...);
// @baa 0x01e08770
void sub_01e08770(void)
{
  sub_01a37872(&sub_01e266e0);
  return;
}

extern undefined4 g_025e8f0c;
// @baa 0x01e08ac0
void sub_01e08ac0(void)
{
  g_025e8f0c = sm_eventTable_exref;
  return;
}

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) wxString(wxString const &);
    friend void sub_01e08f10(void);
};

int sub_01e267f0(void);
extern undefined4 g_026d83f0;
extern undefined4 g_026d83f8;
// @baa 0x01e08f10
void sub_01e08f10(void)
{
  ((wxString *)((wxString *)&g_026d83f8))->wxString::wxString(*(const wxString *)((wxString *)&g_026d83f0));
  sub_01a37872(&sub_01e267f0);
  return;
}

extern int g_025e8f14;
// @baa 0x01e08f50
void sub_01e08f50() { g_025e8f14 = g_01e2b4cc; }

extern int g_025e8f1c;
// @baa 0x01e08fc0
void sub_01e08fc0() { g_025e8f1c = g_01e2b4cc; }

int sub_01e26880(...);
// @baa 0x01e09780
void sub_01e09780(void)
{
  sub_01a37872(&sub_01e26880);
  return;
}

int sub_01e26890(...);
// @baa 0x01e09790
void sub_01e09790(void)
{
  sub_01a37872(&sub_01e26890);
  return;
}

extern int g_025e8f24;
// @baa 0x01e097e0
void sub_01e097e0() { g_025e8f24 = g_01e2a14c; }

extern int g_025e8f2c;
// @baa 0x01e09a30
void sub_01e09a30() { g_025e8f2c = g_01e2a14c; }

extern int g_025e8fa0;
// @baa 0x01e09e60
void sub_01e09e60() { g_025e8fa0 = g_01e2b4cc; }

struct D
{
    void sub_01114e80();
    void sub_01ab58f0();
};

extern D g_026d8f84;
void sub_01e26990();
extern "C" int __cdecl onexit(void (*pfn)(void));
// @baa 0x01e0a100
void sub_01e0a100()
{
    g_026d8f84.sub_01114e80();
    onexit(sub_01e26990);
}

extern D g_026d8f8c;
void sub_01e26980();
// @baa 0x01e0a120
void sub_01e0a120()
{
    g_026d8f8c.sub_01114e80();
    onexit(sub_01e26980);
}

extern int g_025e8fa8;
// @baa 0x01e0a140
void sub_01e0a140() { g_025e8fa8 = g_01e2a14c; }

extern undefined4 g_025e8fb0;
// @baa 0x01e0a1d0
void sub_01e0a1d0(void)
{
  g_025e8fb0 = sm_eventTable_exref;
  return;
}

int sub_01e269b0(...);
// @baa 0x01e0a780
void sub_01e0a780(void)
{
  sub_01a37872(&sub_01e269b0);
  return;
}

int sub_01e269a0(...);
// @baa 0x01e0a790
void sub_01e0a790(void)
{
  sub_01a37872(&sub_01e269a0);
  return;
}

extern int g_025e8fb8;
// @baa 0x01e0ad00
void sub_01e0ad00() { g_025e8fb8 = g_01e2b4cc; }

extern int g_025e8fc0;
// @baa 0x01e0adb0
void sub_01e0adb0() { g_025e8fc0 = g_01e2b4cc; }

extern int g_025e8fc8;
// @baa 0x01e0aee0
void sub_01e0aee0() { g_025e8fc8 = g_01e2b4cc; }

extern int g_01e2c2c4;
extern int g_025e8fd0;
// @baa 0x01e0af70
void sub_01e0af70() { g_025e8fd0 = g_01e2c2c4; }

extern int g_025e8fd8;
// @baa 0x01e0b050
void sub_01e0b050() { g_025e8fd8 = g_01e2b4cc; }

extern int g_025e8fe0;
// @baa 0x01e0b380
void sub_01e0b380() { g_025e8fe0 = g_01e2b4cc; }

extern int g_01e2af00;
extern int g_025e8fe8;
// @baa 0x01e0b410
void sub_01e0b410() { g_025e8fe8 = g_01e2af00; }

extern int g_025e8ff0;
// @baa 0x01e0b480
void sub_01e0b480() { g_025e8ff0 = g_01e2af00; }

extern int g_025e8ff8;
// @baa 0x01e0b4f0
void sub_01e0b4f0() { g_025e8ff8 = g_01e2af00; }

extern int g_025e9000;
// @baa 0x01e0b5b0
void sub_01e0b5b0() { g_025e9000 = g_01e2b4cc; }

extern int g_025e9008;
// @baa 0x01e0b990
void sub_01e0b990() { g_025e9008 = g_01e2b4cc; }

extern int g_025e9010;
// @baa 0x01e0bac0
void sub_01e0bac0() { g_025e9010 = g_01e2b4cc; }

extern int g_025e9018;
// @baa 0x01e0bb50
void sub_01e0bb50() { g_025e9018 = g_01e2b4cc; }

extern int g_025e9020;
// @baa 0x01e0bbc0
void sub_01e0bbc0() { g_025e9020 = g_01e2b4e8; }

extern int g_025e9028;
// @baa 0x01e0bc90
void sub_01e0bc90() { g_025e9028 = g_01e2a14c; }

extern int g_025e9030;
// @baa 0x01e0be40
void sub_01e0be40() { g_025e9030 = g_01e2a14c; }

extern int g_01e2a15c;
extern int g_025e9038;
// @baa 0x01e0c010
void sub_01e0c010() { g_025e9038 = g_01e2a15c; }

extern int g_025e9040;
// @baa 0x01e0c290
void sub_01e0c290() { g_025e9040 = g_01e2b4cc; }

extern int g_025e9048;
// @baa 0x01e0c350
void sub_01e0c350() { g_025e9048 = g_01e2b4cc; }

extern undefined4 g_025e9050;
// @baa 0x01e0c440
void sub_01e0c440(void)
{
  g_025e9050 = sm_eventTable_exref;
  return;
}

extern int g_025e9058;
// @baa 0x01e0c5f0
void sub_01e0c5f0() { g_025e9058 = g_01e2a14c; }

extern undefined4 g_025e9080;
// @baa 0x01e0c720
void sub_01e0c720(void)
{
  g_025e9080 = sm_eventTable_exref;
  return;
}

extern undefined4 g_025e9088;
// @baa 0x01e0c7f0
void sub_01e0c7f0(void)
{
  g_025e9088 = sm_eventTable_exref;
  return;
}

extern int g_025e9090;
// @baa 0x01e0c910
void sub_01e0c910() { g_025e9090 = g_01e2b4cc; }

extern undefined4 g_025e9098;
// @baa 0x01e0ca60
void sub_01e0ca60(void)
{
  g_025e9098 = sm_eventTable_exref;
  return;
}

int sub_01e26df0(...);
// @baa 0x01e0d010
void sub_01e0d010(void)
{
  sub_01a37872(&sub_01e26df0);
  return;
}

int sub_01e26e20(...);
// @baa 0x01e0d020
void sub_01e0d020(void)
{
  sub_01a37872(&sub_01e26e20);
  return;
}

int sub_01e26e00(...);
// @baa 0x01e0d030
void sub_01e0d030(void)
{
  sub_01a37872(&sub_01e26e00);
  return;
}

int sub_01e26e10(...);
// @baa 0x01e0d040
void sub_01e0d040(void)
{
  sub_01a37872(&sub_01e26e10);
  return;
}

extern int g_025e90b4;
// @baa 0x01e0d670
void sub_01e0d670() { g_025e90b4 = g_01e2b4e8; }

class wxColour;
class wxColour {
    public:
    public: __declspec(dllimport) wxColour(unsigned char,unsigned char,unsigned char,unsigned char);
    friend void sub_01e0d700(void);
};

int sub_01e26cf0(void);
extern undefined4 g_026db120;
// @baa 0x01e0d700
void sub_01e0d700(void)
{
  ((wxColour *)((wxColour *)&g_026db120))->wxColour::wxColour(0xff, 0xda, 0xab, 0xff);
  sub_01a37872(&sub_01e26cf0);
  return;
}

extern int g_025e90bc;
// @baa 0x01e0d790
void sub_01e0d790() { g_025e90bc = g_01e2ab0c; }

extern int g_025e90c4;
// @baa 0x01e0d830
void sub_01e0d830() { g_025e90c4 = g_01e2b4e8; }

extern int g_025e90cc;
// @baa 0x01e0d9a0
void sub_01e0d9a0() { g_025e90cc = g_01e2b4cc; }

extern int g_025e90d4;
// @baa 0x01e0da10
void sub_01e0da10() { g_025e90d4 = g_01e2b4cc; }

extern int g_025e90dc;
// @baa 0x01e0da80
void sub_01e0da80() { g_025e90dc = g_01e2b4cc; }

extern int g_025e90e4;
// @baa 0x01e0daf0
void sub_01e0daf0() { g_025e90e4 = g_01e2b4cc; }

extern int g_025e90ec;
// @baa 0x01e0db60
void sub_01e0db60() { g_025e90ec = g_01e2b4cc; }

extern int g_025e90f4;
// @baa 0x01e0dbb0
void sub_01e0dbb0() { g_025e90f4 = g_01e2b4cc; }

extern int g_025e90fc;
// @baa 0x01e0dc00
void sub_01e0dc00() { g_025e90fc = g_01e2b4cc; }

extern int g_025e9104;
// @baa 0x01e0dc70
void sub_01e0dc70() { g_025e9104 = g_01e2b4cc; }

extern int g_025e910c;
// @baa 0x01e0dce0
void sub_01e0dce0() { g_025e910c = g_01e2b4cc; }

extern int g_025e9114;
// @baa 0x01e0dd50
void sub_01e0dd50() { g_025e9114 = g_01e2b4e8; }

extern int g_025e911c;
// @baa 0x01e0de20
void sub_01e0de20() { g_025e911c = g_01e2b4cc; }

extern int g_025e9300;
// @baa 0x01e0de90
void sub_01e0de90() { g_025e9300 = g_01e2b4cc; }

extern int g_025e9308;
// @baa 0x01e0df40
void sub_01e0df40() { g_025e9308 = g_01e2b4cc; }

extern int g_025e9310;
// @baa 0x01e0e010
void sub_01e0e010() { g_025e9310 = g_01e2b4cc; }

extern int g_025e9318;
// @baa 0x01e0e2c0
void sub_01e0e2c0() { g_025e9318 = g_01e2b4cc; }

int sub_01e26fd0(...);
// @baa 0x01e0e350
void sub_01e0e350(void)
{
  sub_01a37872(&sub_01e26fd0);
  return;
}

extern int g_025e9320;
// @baa 0x01e0e620
void sub_01e0e620() { g_025e9320 = g_01e2b4cc; }

extern int g_025e9328;
// @baa 0x01e0e690
void sub_01e0e690() { g_025e9328 = g_01e2b4cc; }

extern int g_025e9330;
// @baa 0x01e0e720
void sub_01e0e720() { g_025e9330 = g_01e2b4cc; }

extern int g_025e9338;
// @baa 0x01e0e790
void sub_01e0e790() { g_025e9338 = g_01e2b4cc; }

extern int g_025e9340;
// @baa 0x01e0e7e0
void sub_01e0e7e0() { g_025e9340 = g_01e2b4cc; }

extern int g_025e9348;
// @baa 0x01e0e850
void sub_01e0e850() { g_025e9348 = g_01e2b4cc; }

int sub_01e26fb0(void);
// @baa 0x01e0e8c0
void sub_01e0e8c0(void)
{
  sub_01a37872(&sub_01e26fb0);
  return;
}

extern int g_025e9350;
// @baa 0x01e0e9b0
void sub_01e0e9b0() { g_025e9350 = g_01e2b4cc; }

extern int g_025e9358;
// @baa 0x01e0ea20
void sub_01e0ea20() { g_025e9358 = g_01e2b4cc; }

extern int g_025e9360;
// @baa 0x01e0eab0
void sub_01e0eab0() { g_025e9360 = g_01e2b4e8; }

int sub_01e26fe0(...);
// @baa 0x01e0ef70
void sub_01e0ef70(void)
{
  sub_01a37872(&sub_01e26fe0);
  return;
}

int sub_01e27000(...);
// @baa 0x01e0ef80
void sub_01e0ef80(void)
{
  sub_01a37872(&sub_01e27000);
  return;
}

int sub_01e26ff0(...);
// @baa 0x01e0ef90
void sub_01e0ef90(void)
{
  sub_01a37872(&sub_01e26ff0);
  return;
}

extern undefined4 g_025e9368;
// @baa 0x01e0efa0
void sub_01e0efa0(void)
{
  g_025e9368 = sm_eventTable_exref;
  return;
}

extern int g_025e9370;
// @baa 0x01e0f130
void sub_01e0f130() { g_025e9370 = g_01e2ab18; }

extern undefined4 g_025e9378;
// @baa 0x01e0f180
void sub_01e0f180(void)
{
  g_025e9378 = sm_eventTable_exref;
  return;
}

extern int g_025e9380;
// @baa 0x01e0f1f0
void sub_01e0f1f0() { g_025e9380 = g_01e2b4cc; }

extern int g_025e9388;
// @baa 0x01e0f240
void sub_01e0f240() { g_025e9388 = g_01e2b4cc; }

int sub_01e27110(...);
// @baa 0x01e0f2f0
void sub_01e0f2f0(void)
{
  sub_01a37872(&sub_01e27110);
  return;
}

extern int g_025e93b4;
// @baa 0x01e0f380
void sub_01e0f380() { g_025e93b4 = g_01e2b4cc; }

extern int g_025e93bc;
// @baa 0x01e0f430
void sub_01e0f430() { g_025e93bc = g_01e2b4cc; }

extern int g_025e93c4;
// @baa 0x01e0f4c0
void sub_01e0f4c0() { g_025e93c4 = g_01e2b4cc; }

extern int g_025e93cc;
// @baa 0x01e0f590
void sub_01e0f590() { g_025e93cc = g_01e2b4cc; }

int sub_01e270c0(...);
// @baa 0x01e0f700
void sub_01e0f700(void)
{
  sub_01a37872(&sub_01e270c0);
  return;
}

int sub_01e270d0(...);
// @baa 0x01e0f710
void sub_01e0f710(void)
{
  sub_01a37872(&sub_01e270d0);
  return;
}

int sub_01e270e0(...);
// @baa 0x01e0f720
void sub_01e0f720(void)
{
  sub_01a37872(&sub_01e270e0);
  return;
}

int sub_01e270f0(...);
// @baa 0x01e0f730
void sub_01e0f730(void)
{
  sub_01a37872(&sub_01e270f0);
  return;
}

int sub_01e27100(...);
// @baa 0x01e0f740
void sub_01e0f740(void)
{
  sub_01a37872(&sub_01e27100);
  return;
}

int sub_01e27120(...);
// @baa 0x01e0f750
void sub_01e0f750(void)
{
  sub_01a37872(&sub_01e27120);
  return;
}

int sub_01e27130(...);
// @baa 0x01e0f760
void sub_01e0f760(void)
{
  sub_01a37872(&sub_01e27130);
  return;
}

extern int g_025e93d4;
// @baa 0x01e0f770
void sub_01e0f770() { g_025e93d4 = g_01e2b4cc; }

extern undefined4 g_025e93dc;
// @baa 0x01e0f7e0
void sub_01e0f7e0(void)
{
  g_025e93dc = sm_eventTable_exref;
  return;
}

extern int g_025e93e4;
// @baa 0x01e0f850
void sub_01e0f850() { g_025e93e4 = g_01e2b4cc; }

extern int g_025e93ec;
// @baa 0x01e0fb80
void sub_01e0fb80() { g_025e93ec = g_01e2a14c; }

extern int g_025e93f4;
// @baa 0x01e0fd80
void sub_01e0fd80() { g_025e93f4 = g_01e2a14c; }
