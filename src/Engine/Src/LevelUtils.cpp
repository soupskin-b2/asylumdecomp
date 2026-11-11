// LevelUtils.cpp: 4 functions
// Placed here by: file 3, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_006311e0(...);
int sub_006ba520(...);
extern undefined4 g_01ec83b8;
extern undefined4 g_026b62b8;
// @baa 0x006ba780
uint sub_006ba780(int param_1)
{
  int iVar1;
  
  if (param_1 == *(int *)(g_026b62b8 + 0x44)) {
    return 0;
  }
  iVar1 = sub_006ba520(param_1);
  if (iVar1 == 0) {
    sub_006311e0("StreamingLevel : \"Couldn\'t find streaming level\"",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\LevelUtils.cpp"
                 ,0xf0,&g_01ec83b8);
  }
  return *(uint *)(iVar1 + 0x54) >> 6 & 1;
}

// @baa 0x006ba890
uint sub_006ba890(undefined4 param_1)
{
  int iVar1;
  
  iVar1 = sub_006ba520(param_1);
  if (iVar1 != 0) {
    return *(uint *)(iVar1 + 0x54) >> 0x13 & 1;
  }
  return 0;
}

extern undefined4 g_01ec88a8;
// @baa 0x006ba8e0
uint sub_006ba8e0(int param_1)
{
  int iVar1;
  
  if (param_1 == *(int *)(g_026b62b8 + 0x44)) {
    return 1;
  }
  iVar1 = sub_006ba520(param_1);
  if (iVar1 == 0) {
    sub_006311e0("StreamingLevel : \"Couldn\'t find streaming level\"",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\LevelUtils.cpp"
                 ,0x1da,&g_01ec88a8);
  }
  return *(uint *)(iVar1 + 0x54) >> 4 & 1;
}

int sub_006cb3d0(...);
extern undefined4 g_01ec89d8;
// @baa 0x006cb6d0
void sub_006cb6d0(int param_1, undefined4 param_2, undefined4 param_3)
{
  int iVar1;
  
  if ((param_1 != 0) && (param_1 != *(int *)(g_026b62b8 + 0x44))) {
    iVar1 = sub_006ba520(param_1);
    if (iVar1 == 0) {
      sub_006311e0("StreamingLevel : \"Couldn\'t find streaming level\"",
                   "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\LevelUtils.cpp"
                   ,0x231,&g_01ec89d8);
    }
    sub_006cb3d0(iVar1,param_2,param_3);
  }
  return;
}
