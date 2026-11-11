// fmod_output_openal.cpp (part 1 of 2): 3 functions
// Placed here by: callers 1, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_017ab8d2();
};

int sub_017c679d(...);
// @baa 0x017ab8d2
undefined4 C::sub_017ab8d2(void)
{
    int param_1 = (int)this;

  char cVar1;
  
  if (*(char *)(param_1 + 0x21e) == '\0') {
    cVar1 = sub_017c679d(0,param_1 + 0x110);
    if (cVar1 == '\0') {
      return 0x3d;
    }
    *(undefined1 *)(param_1 + 0x21e) = 1;
  }
  return 0;
}

struct C_017abb51 {
    int sub_017abb51(undefined4 *);
};

int sub_017ab902(void);
// @baa 0x017abb51
int C_017abb51::sub_017abb51(undefined4 * param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = 0x25;
  }
  else {
    if ((*(char *)(param_1 + 0x2c) == '\0') && (iVar1 = sub_017ab902(), iVar1 != 0)) {
      return iVar1;
    }
    *param_2 = *(undefined4 *)(param_1 + 0x228);
    iVar1 = 0;
  }
  return iVar1;
}

struct HINSTANCE__ { long unused; };

typedef HINSTANCE__* HINSTANCE;

typedef HINSTANCE HMODULE;

extern HMODULE g_027b7cc4;
extern "C" __declspec(dllimport) int __stdcall FreeLibrary(HMODULE);
// @baa 0x017c6e7e
void sub_017c6e7e(void)
{
	if (g_027b7cc4 != NULL)
	{
		FreeLibrary(g_027b7cc4);
		g_027b7cc4 = NULL;
	}
}
