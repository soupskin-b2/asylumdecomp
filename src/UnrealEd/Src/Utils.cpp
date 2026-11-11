// Utils.cpp: 1 function
// Placed here by: file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int * sub_0129cff0(int, int);
};

int sub_006311e0(...);
extern undefined4 g_0221b764;
extern undefined4 g_0221b824;
extern undefined4 g_0221b87c;
// @baa 0x0129cff0
int * C::sub_0129cff0(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_2 == 0) {
    sub_006311e0("Window",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\Utils.cpp"
                 ,0x286,&g_0221b764);
  }
  if (param_1[1] == 0) {
    sub_006311e0(&g_0221b87c,
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\Utils.cpp"
                 ,0x287,&g_0221b824);
  }
  return param_1;
}
