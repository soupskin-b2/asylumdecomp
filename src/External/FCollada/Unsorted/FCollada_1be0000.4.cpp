// FCollada_1be0000.cpp (part 4 of 4): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01bb53d0(...);
int sub_01be6320(...);
int sub_01be6420(...);
// @baa 0x01bee450
undefined4 * sub_01bee450(int param_1, int param_2)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)sub_01bb53d0(1,4);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  if (param_2 == 0) {
    param_2 = param_1;
  }
  if (param_2 < 10) {
    param_2 = 10;
  }
  uVar2 = sub_01be6320(param_2,0x14);
  *puVar1 = uVar2;
  sub_01be6420(uVar2);
  return puVar1;
}

extern "C" __declspec(dllimport) void* __cdecl malloc(unsigned int Size);
// @baa 0x01be1af0
void* sub_01be1af0()
{
    return malloc(16);
}

extern "C" __declspec(dllimport) void __stdcall InitializeCriticalSection(void* Section);
extern char g_027d4e80[];
// @baa 0x01be1b00
void sub_01be1b00()
{
    InitializeCriticalSection(g_027d4e80);
}
