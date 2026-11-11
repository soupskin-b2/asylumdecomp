// KismetMenus.cpp: 6 functions
// Placed here by: neighbours 5, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_025e8688[];
// @baa 0x01190560
int sub_01190560(void) { return (int)g_025e8688; }

extern char g_026d18b8[];
// @baa 0x01190570
int sub_01190570(void) { return (int)g_026d18b8; }

struct wxFrame
{
    virtual __declspec(dllimport) ~wxFrame();
};

extern char g_021dd2a0[4];
 // this class's vtable, at 0x01e4b000
struct C : wxFrame
{
    void sub_01190580();
};

// @baa 0x01190580
void C::sub_01190580()
{
    ((void**)this)[0] = (void*)g_021dd2a0;
    this->wxFrame::~wxFrame();
}

extern char g_026d1934[];
// @baa 0x01190590
int sub_01190590(void) { return (int)g_026d1934; }

// @baa 0x011905a0
int sub_011905a0(int a0) { return a0; }

struct C_011905b0 {
    void sub_011905b0(undefined4, undefined4, undefined4, undefined4);
    int sub_011159b0(int, int, int, int);
};

int sub_006311e0(...);
extern undefined4 g_021da544;
// @baa 0x011905b0
void C_011905b0::sub_011905b0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    int param_1 = (int)this;
  int iVar1;
  *(undefined4 *)(param_1 + 0x21c) = param_4;
  iVar1 = ((C_011905b0 *)(this))->sub_011159b0(param_2, param_3, 0, param_5);
  if (iVar1 == 0) {
    sub_006311e0("bSuccess",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\KismetMenus.cpp"
                 ,0x587,&g_021da544);
  }
  return;
}
