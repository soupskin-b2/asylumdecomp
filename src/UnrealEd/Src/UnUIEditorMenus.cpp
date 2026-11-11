// UnUIEditorMenus.cpp: 12 functions
// Placed here by: neighbours 12.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_006311e0(...);
int sub_0149bf30(void);
extern undefined4 g_022ad094;
// @baa 0x0149bf80
int sub_0149bf80(void)
{
  int iVar1;
  
  iVar1 = sub_0149bf30();
  if (iVar1 == 0) {
    sub_006311e0("Result",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditorMenus.cpp"
                 ,0x4c,&g_022ad094);
  }
  return iVar1;
}

// @baa 0x0149c240
void sub_0149c240(void) {  }

extern char g_026ddd2c[];
// @baa 0x0149c290
int sub_0149c290(void) { return (int)g_026ddd2c; }

extern char g_026ddd44[];
// @baa 0x0149c2a0
int sub_0149c2a0(void) { return (int)g_026ddd44; }

extern char g_026ddd5c[];
// @baa 0x0149c2b0
int sub_0149c2b0(void) { return (int)g_026ddd5c; }

extern char g_026ddd74[];
// @baa 0x0149c2c0
int sub_0149c2c0(void) { return (int)g_026ddd74; }

extern char g_026ddd8c[];
// @baa 0x0149c2d0
int sub_0149c2d0(void) { return (int)g_026ddd8c; }

extern char g_026ddda4[];
// @baa 0x0149c2e0
int sub_0149c2e0(void) { return (int)g_026ddda4; }

extern char g_026dddbc[];
// @baa 0x0149c2f0
int sub_0149c2f0(void) { return (int)g_026dddbc; }

extern char g_026dddd4[];
// @baa 0x0149c300
int sub_0149c300(void) { return (int)g_026dddd4; }

extern char g_026dddec[];
// @baa 0x0149c310
int sub_0149c310(void) { return (int)g_026dddec; }

struct C {
    undefined4 sub_014c03a0(byte);
};

int sub_0053dfa0(...);
int sub_014be9c0(void);
// @baa 0x014c03a0
undefined4 C::sub_014c03a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014be9c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
