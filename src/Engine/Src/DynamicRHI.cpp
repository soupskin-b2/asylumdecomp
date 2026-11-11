// DynamicRHI.cpp (part 1 of 2): 1 function
// Placed here by: file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00629c10(...);
int sub_0062d090(...);
int sub_006311e0(...);
int sub_00c28ae0(void);
int sub_00eaff70(void);
extern undefined4 g_01ec20f0;
extern undefined4 g_026b0d94;
extern undefined4 g_026b0d98;
extern undefined4 g_026b2200;
// @baa 0x006aa9c0
void sub_006aa9c0(void)
{
  undefined4 uVar1;
  int iVar2;
  
  if (g_026b0d94 == 0) {
    uVar1 = sub_00629c10(L"nullrhi");
    iVar2 = sub_0062d090(uVar1);
    if (iVar2 == 0) {
      g_026b0d94 = sub_00eaff70();
      g_026b0d98 = 0;
    }
    else {
      g_026b0d94 = sub_00c28ae0();
      g_026b2200 = 1;
    }
    if (g_026b0d94 == 0) {
      sub_006311e0("GDynamicRHI",
                   "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DynamicRHI.cpp"
                   ,0x3c,&g_01ec20f0);
    }
  }
  return;
}
