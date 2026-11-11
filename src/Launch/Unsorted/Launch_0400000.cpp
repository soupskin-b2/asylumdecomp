// Launch_0400000.cpp (part 1 of 2): 20 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

typedef struct OA_BUF { char pad[128]; } OA_BUF;

OA_BUF *sub_01a38732(void);
int sub_01a37ef2(char *f, const char *fmt, const char *s);
int g_027d4dec;
void (*g_027d4dc0)(void);
// @baa 0x00401800
void sub_00401800(void) {
    if (!g_027d4dec) {
        sub_01a37ef2((char *)sub_01a38732() + 0x40, "ERROR: %s\n", "OA not initialized.");
        return;
    }
    if (g_027d4dc0)
        return g_027d4dc0();
    return;
}

extern "C" void *__cdecl memcpy(void *, const void *, unsigned int);
// @baa 0x00401870
void sub_00401870(void * param_1, void * param_2, int param_3)
{
  memcpy(param_1,param_2,param_3 * 2);
  return;
}

// @baa 0x00401880
undefined4 sub_00401880(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x00401890
void sub_00401890(void)
{
    return;
}

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) int Cmp(wchar_t const *) const;
    friend bool sub_004018d0(wxString * param_1, wchar_t * param_2);
};

// @baa 0x004018d0
bool sub_004018d0(wxString * param_1, wchar_t * param_2)
{
  int iVar1;
  
  iVar1 = ((wxString *)(param_1))->wxString::Cmp(param_2);
  return iVar1 != 0;
}

extern "C" float10 fabs(float10);
// @baa 0x00401900
float10 sub_00401900(float param_1)
{
    return fabs(param_1);
}

double sub_01a37606(double);
// @baa 0x00401930
float10 sub_00401930(float param_1)
{
  double dVar1;
  
  dVar1 = sub_01a37606((double)param_1);
  return (float10)dVar1;
}

// @baa 0x00401970
float10 sub_00401970(float param_1)
{
    return fabs(param_1);
}

// @baa 0x00401980
float10 sub_00401980(float param_1)
{
  double dVar1;
  
  dVar1 = sub_01a37606((double)param_1);
  return (float10)dVar1;
}

void sub_01a375f0();
// @baa 0x004019f0
void sub_004019f0(void) { sub_01a375f0(); }

void sub_01a37612();
// @baa 0x00401a10
void sub_00401a10(void) { sub_01a37612(); }

// @baa 0x00401ab0
int sub_00401ab0(char * param_1)
{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  return (int)param_1 - (int)pcVar1;
}

// @baa 0x00401ad0
void sub_00401ad0(void * param_1, void * param_2, int param_3)
{
  memcpy(param_1,param_2,param_3 * 2);
  return;
}

int sub_00401830(const ushort *a, const ushort *b, int n);
// @baa 0x00401ae0
int sub_00401ae0(const ushort *a, const ushort *b, int n) { return sub_00401830(a, b, n); }

// @baa 0x00401b10
void sub_00401b10(int param_1, int param_2)
{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = param_2 - 1;
  if (uVar2 != 0) {
    do {
      *(byte *)(uVar1 + param_1) = *(byte *)(uVar1 + param_1) ^ *(byte *)(uVar2 + param_1);
      *(byte *)(uVar2 + param_1) = *(byte *)(uVar2 + param_1) ^ *(byte *)(uVar1 + param_1);
      *(byte *)(uVar1 + param_1) = *(byte *)(uVar1 + param_1) ^ *(byte *)(uVar2 + param_1);
      uVar1 = uVar1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar1 < uVar2);
  }
  return;
}

// @baa 0x00401c00
float10 sub_00401c00(float param_1)
{
    return fabs(param_1);
}

// @baa 0x00401c30
float10 sub_00401c30(float param_1)
{
  double dVar1;
  
  dVar1 = sub_01a37606((double)param_1);
  return (float10)dVar1;
}

// @baa 0x00401cb0
int sub_00401cb0(char * param_1)
{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  return (int)param_1 - (int)pcVar1;
}

// @baa 0x00401cd0
void sub_00401cd0(void) { sub_01a375f0(); }

class wxEvent;
class wxEvtHandler {
public:
    __declspec(dllimport) void AddPendingEvent(wxEvent& event);
};

// @baa 0x004019d0
void sub_004019d0(wxEvtHandler* Dest, wxEvent* Event)
{
    if (Dest) {
        Dest->AddPendingEvent(*Event);
    }
}
