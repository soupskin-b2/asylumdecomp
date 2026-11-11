// Engine_1dd0000.cpp (part 1 of 28): 45 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01a37872(...);
int sub_01e21e70(...);
// @baa 0x01dd0730
void sub_01dd0730(void)
{
  sub_01a37872(&sub_01e21e70);
  return;
}

class wxFileName;
class wxFileName {
    public:
    public: __declspec(dllimport) wxFileName();
    friend void sub_01dd0740(void);
};

int sub_01e21c50(...);
extern undefined4 g_02617470;
// @baa 0x01dd0740
void sub_01dd0740(void)
{
  ((wxFileName *)((wxFileName *)&g_02617470))->wxFileName::wxFileName();
  sub_01a37872(&sub_01e21c50);
  return;
}

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) wxString(wchar_t const *);
    friend void sub_01dd0760(void);
};

int sub_01e21c60(void);
extern undefined4 g_02617444;
extern undefined4 wxEmptyString_exref;
// @baa 0x01dd0760
void sub_01dd0760(void)
{
  ((wxString *)((wxString *)&g_02617444))->wxString::wxString(*(wchar_t **)wxEmptyString_exref);
  sub_01a37872(&sub_01e21c60);
  return;
}

extern undefined4 g_025d4470;
extern undefined4 sm_eventTable_exref;
// @baa 0x01dd0780
void sub_01dd0780(void)
{
  g_025d4470 = sm_eventTable_exref;
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd0790(void);
};

struct wxEventTable {
    public:
};

int sub_01e21c80(...);
extern undefined4 g_02617600;
// @baa 0x01dd0790
void sub_01dd0790(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02617600))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4470));
  sub_01a37872(&sub_01e21c80);
  return;
}

extern __declspec(dllimport) int const wxEVT_SIZE;
extern __declspec(dllimport) int const wxEVT_NULL;
int sub_004053e0(void);
extern undefined4 g_02617448;
extern undefined4 g_0261744c;
extern undefined4 g_02617450;
extern undefined4 g_02617454;
extern undefined4 g_02617458;
extern undefined4 g_0261745c;
extern undefined4 g_02617460;
extern undefined4 g_02617464;
extern undefined4 g_02617468;
extern undefined4 g_0261746c;
// @baa 0x01dd07b0
void sub_01dd07b0(void)
{
  g_02617448 = 0xffffffff;
  g_0261744c = 0xffffffff;
  g_02617450 = (undefined4)(sub_004053e0);
  g_02617454 = 0;
  g_02617458 = (undefined4)((&wxEVT_SIZE));
  g_0261745c = 0;
  g_02617460 = 0;
  g_02617464 = 0;
  g_02617468 = 0;
  g_0261746c = (undefined4)((&wxEVT_NULL));
  return;
}

class wxClassInfo;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd0800(void);
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd0800(void);
};

int sub_0041d880(void);
int sub_01e21c90(void);
extern undefined4 g_02617050;
extern undefined4 g_02617054;
extern undefined4 g_02617058;
extern undefined4 g_0261705c;
extern undefined4 g_02617060;
extern undefined4 g_02617064;
// @baa 0x01dd0800
void sub_01dd0800(void)
{
  g_0261705c = (undefined4)((&wxWindow::ms_classInfo));
  g_02617050 = (undefined4)(L"FxRenderWidgetUE3");
  g_02617054 = 0x16c;
  g_02617058 = (undefined4)(sub_0041d880);
  g_02617060 = 0;
  g_02617064 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02617050);
  ((wxClassInfo *)((wxClassInfo *)&g_02617050))->wxClassInfo::Register();
  sub_01a37872(&sub_01e21c90);
  return;
}

extern undefined4 g_025d4468;
// @baa 0x01dd0860
void sub_01dd0860(void)
{
  g_025d4468 = sm_eventTable_exref;
  return;
}

extern int g_01e2c2c4;
extern int g_025d4478;
// @baa 0x01dd0910
void sub_01dd0910() { g_025d4478 = g_01e2c2c4; }

extern __declspec(dllimport) int const wxEVT_LEFT_DCLICK;
int sub_00405670(void);
extern undefined4 g_02617490;
extern undefined4 g_02617494;
extern undefined4 g_02617498;
extern undefined4 g_0261749c;
extern undefined4 g_026174a0;
extern undefined4 g_026174a4;
extern undefined4 g_026174a8;
extern undefined4 g_026174ac;
extern undefined4 g_026174b0;
extern undefined4 g_026174b4;
// @baa 0x01dd0940
void sub_01dd0940(void)
{
  g_02617490 = 0xffffffff;
  g_02617494 = 0xffffffff;
  g_02617498 = (undefined4)(sub_00405670);
  g_0261749c = 0;
  g_026174a0 = (undefined4)((&wxEVT_LEFT_DCLICK));
  g_026174a4 = 0;
  g_026174a8 = 0;
  g_026174ac = 0;
  g_026174b0 = 0;
  g_026174b4 = (undefined4)((&wxEVT_NULL));
  return;
}

extern int g_025d4488;
// @baa 0x01dd0990
void sub_01dd0990() { g_025d4488 = g_01e2c2c4; }

extern int g_01e2b4e8;
extern int g_025d4480;
// @baa 0x01dd0a60
void sub_01dd0a60() { g_025d4480 = g_01e2b4e8; }

class wxColour;
class wxColour {
    public:
    public: __declspec(dllimport) wxColour(unsigned char,unsigned char,unsigned char,unsigned char);
    friend void sub_01dd1090(void);
};

int sub_01e21ce0(void);
extern undefined4 g_0261703c;
// @baa 0x01dd1090
void sub_01dd1090(void)
{
  ((wxColour *)((wxColour *)&g_0261703c))->wxColour::wxColour(0xff, '\0', '\0', 0xff);
  sub_01a37872(&sub_01e21ce0);
  return;
}

extern undefined4 g_026175f0;
extern undefined4 g_026175f4;
extern undefined4 g_026175f8;
extern undefined4 g_026175fc;
// @baa 0x01dd11a0
void sub_01dd11a0(void)
{
  g_026175f0 = 0xffffffff;
  g_026175f4 = 0xffffffff;
  g_026175f8 = 0x280;
  g_026175fc = 0x1e0;
  return;
}

extern int g_01e2b4cc;
extern int g_025d4460;
// @baa 0x01dd1250
void sub_01dd1250() { g_025d4460 = g_01e2b4cc; }

int sub_01e21df0(void);
// @baa 0x01dd13f0
void sub_01dd13f0(void)
{
  sub_01a37872(&sub_01e21df0);
  return;
}

int sub_01e21dc0(void);
// @baa 0x01dd1400
void sub_01dd1400(void)
{
  sub_01a37872(&sub_01e21dc0);
  return;
}

int sub_01e21e60(...);
// @baa 0x01dd14a0
void sub_01dd14a0(void)
{
  sub_01a37872(&sub_01e21e60);
  return;
}

int sub_01e21e20(void);
// @baa 0x01dd14b0
void sub_01dd14b0(void)
{
  sub_01a37872(&sub_01e21e20);
  return;
}

int sub_01e22200(...);
// @baa 0x01dd1680
void sub_01dd1680(void)
{
  sub_01a37872(&sub_01e22200);
  return;
}

extern int g_025d4908;
// @baa 0x01dd1690
void sub_01dd1690() { g_025d4908 = g_01e2b4cc; }

extern int g_025d48e8;
// @baa 0x01dd17a0
void sub_01dd17a0() { g_025d48e8 = g_01e2b4cc; }

extern int g_025d4928;
// @baa 0x01dd1b30
void sub_01dd1b30() { g_025d4928 = g_01e2b4cc; }

extern undefined4 g_025d48f8;
// @baa 0x01dd1c40
void sub_01dd1c40(void)
{
  g_025d48f8 = sm_eventTable_exref;
  return;
}

extern undefined4 g_025d4988;
// @baa 0x01dd1ed0
void sub_01dd1ed0(void)
{
  g_025d4988 = sm_eventTable_exref;
  return;
}

extern __declspec(dllimport) int const wxEVT_CHAR;
int sub_00453710(void);
extern undefined4 g_026185a8;
extern undefined4 g_026185ac;
extern undefined4 g_026185b0;
extern undefined4 g_026185b4;
extern undefined4 g_026185b8;
extern undefined4 g_026185bc;
extern undefined4 g_026185c0;
extern undefined4 g_026185c4;
extern undefined4 g_026185c8;
extern undefined4 g_026185cc;
// @baa 0x01dd1f00
void sub_01dd1f00(void)
{
  g_026185a8 = 0xffffffff;
  g_026185ac = 0xffffffff;
  g_026185b0 = (undefined4)(sub_00453710);
  g_026185b4 = 0;
  g_026185b8 = (undefined4)((&wxEVT_CHAR));
  g_026185bc = 0;
  g_026185c0 = 0;
  g_026185c4 = 0;
  g_026185c8 = 0;
  g_026185cc = (undefined4)((&wxEVT_NULL));
  return;
}

extern undefined4 g_025d4948;
// @baa 0x01dd1fb0
void sub_01dd1fb0(void)
{
  g_025d4948 = sm_eventTable_exref;
  return;
}

extern int g_01e2a14c;
extern int g_025d4918;
// @baa 0x01dd20b0
void sub_01dd20b0() { g_025d4918 = g_01e2a14c; }

extern __declspec(dllimport) int const wxEVT_COMMAND_RADIOBOX_SELECTED;
int sub_00431ce0(...);
extern undefined4 g_02618208;
extern undefined4 g_0261820c;
extern undefined4 g_02618210;
extern undefined4 g_02618214;
extern undefined4 g_02618218;
extern undefined4 g_0261821c;
extern undefined4 g_02618220;
extern undefined4 g_02618224;
extern undefined4 g_02618228;
extern undefined4 g_0261822c;
// @baa 0x01dd20e0
void sub_01dd20e0(void)
{
  g_02618208 = 0x1889;
  g_0261820c = 0xffffffff;
  g_02618210 = (undefined4)(&sub_00431ce0);
  g_02618214 = 0;
  g_02618218 = (undefined4)((&wxEVT_COMMAND_RADIOBOX_SELECTED));
  g_0261821c = 0;
  g_02618220 = 0;
  g_02618224 = 0;
  g_02618228 = 0;
  g_0261822c = (undefined4)((&wxEVT_NULL));
  return;
}

extern int g_025d4958;
// @baa 0x01dd2140
void sub_01dd2140() { g_025d4958 = g_01e2a14c; }

extern int g_025d4910;
// @baa 0x01dd2240
void sub_01dd2240() { g_025d4910 = g_01e2a14c; }

extern int g_025d48d8;
// @baa 0x01dd2310
void sub_01dd2310() { g_025d48d8 = g_01e2a14c; }

extern int g_025d4938;
// @baa 0x01dd23c0
void sub_01dd23c0() { g_025d4938 = g_01e2a14c; }

extern int g_025d4900;
// @baa 0x01dd2490
void sub_01dd2490() { g_025d4900 = g_01e2a14c; }

extern int g_025d4960;
// @baa 0x01dd2570
void sub_01dd2570() { g_025d4960 = g_01e2a14c; }

extern int g_025d49a0;
// @baa 0x01dd2680
void sub_01dd2680() { g_025d49a0 = g_01e2b4cc; }

extern int g_025d4968;
// @baa 0x01dd27e0
void sub_01dd27e0() { g_025d4968 = g_01e2b4cc; }

extern int g_025d4950;
// @baa 0x01dd2910
void sub_01dd2910() { g_025d4950 = g_01e2b4cc; }

extern int g_025d4970;
// @baa 0x01dd2bf0
void sub_01dd2bf0() { g_025d4970 = g_01e2b4cc; }

__declspec(dllimport) int wxNewEventType();
extern undefined4 g_0261762c;
// @baa 0x01dd2ca0
void sub_01dd2ca0(void)
{
  g_0261762c = wxNewEventType();
  return;
}

extern undefined4 g_025d48e0;
// @baa 0x01dd2d10
void sub_01dd2d10(void)
{
  g_025d48e0 = sm_eventTable_exref;
  return;
}

extern undefined4 g_025d48f0;
// @baa 0x01dd2fa0
void sub_01dd2fa0(void)
{
  g_025d48f0 = sm_eventTable_exref;
  return;
}

extern int g_01e2a15c;
extern int g_025d4990;
// @baa 0x01dd32b0
void sub_01dd32b0() { g_025d4990 = g_01e2a15c; }

extern int g_025d4980;
// @baa 0x01dd33c0
void sub_01dd33c0() { g_025d4980 = g_01e2b4cc; }

extern int g_025d4930;
// @baa 0x01dd3620
void sub_01dd3620() { g_025d4930 = g_01e2b4e8; }
