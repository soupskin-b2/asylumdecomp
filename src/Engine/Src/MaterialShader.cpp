// MaterialShader.cpp: 1 function
// Placed here by: file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_006311e0(...);
int sub_00716170(...);
int sub_00a480c0(...);
int sub_00a48210(...);
int sub_00afa590(...);
extern undefined4 g_01fbd344;
// @baa 0x00a49bb0
int sub_00a49bb0(int param_1, int param_2)
{
  if (*(int *)(param_1 + 4) < 0x1eb) {
    sub_006311e0("Ar.Ver() >= VER_MIN_MATERIAL_PIXELSHADER",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialShader.cpp"
                 ,0x1e5,&g_01fbd344);
  }
  sub_00a480c0(param_1,param_2);
  sub_00a48210(param_1,param_2 + 0xc);
  sub_00716170(param_1,param_2 + 0x18);
  sub_00716170(param_1,param_2 + 0x1e);
  sub_00716170(param_1,param_2 + 0x24);
  sub_00716170(param_1,param_2 + 0x2a);
  sub_00716170(param_1,param_2 + 0x30);
  sub_00716170(param_1,param_2 + 0x36);
  sub_00afa590(param_1,param_2 + 0x3c);
  sub_00716170(param_1,param_2 + 0x5a);
  sub_00716170(param_1,param_2 + 0x60);
  sub_00716170(param_1,param_2 + 0x66);
  return param_1;
}
