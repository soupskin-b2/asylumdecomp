// ProfilerIntegration.cpp: 8 functions
// Placed here by: neighbours 6, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    bool sub_005fe580();
};

int sub_005ec8c0(...);
int sub_005ec8f0(...);
int sub_005f0900(...);
int sub_005f5500(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x005fe580
bool C::sub_005fe580(void)
{
    int param_1 = (int)this;

  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    sub_006311e0("DLLHandle == NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\ProfilerIntegration.cpp"
                 ,0x34,&g_01e3f3dc);
  }
  iVar1 = sub_005ec8c0(L"VtuneApi.dll");
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 != 0) {
    iVar1 = sub_005f0900(iVar1,L"VTPause");
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 == 0) {
      uVar2 = sub_005f0900(*(undefined4 *)(param_1 + 0x14),L"_VTPause@0");
      *(undefined4 *)(param_1 + 0x18) = uVar2;
    }
    iVar1 = sub_005f0900(*(undefined4 *)(param_1 + 0x14),L"VTResume");
    *(int *)(param_1 + 0x1c) = iVar1;
    if (iVar1 == 0) {
      uVar2 = sub_005f0900(*(undefined4 *)(param_1 + 0x14),L"_VTResume@0");
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
    }
    if ((*(int *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 0x1c) == 0)) {
      sub_005ec8f0(*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    sub_005f5500(0,L"Failed to initialize VTuneApi.dll");
  }
  return *(int *)(param_1 + 0x14) != 0;
}

extern char g_01ea6bec[];
struct C_005fe660 { void sub_005fe660(void); };

// @baa 0x005fe660
void C_005fe660::sub_005fe660(void) { *(int*)((char*)this + 0) = (int)g_01ea6bec; }

struct C_005fe670 {
    undefined4 * sub_005fe670(byte);
};

int sub_0053dfa0(...);
// @baa 0x005fe670
undefined4 * C_005fe670::sub_005fe670(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ea6bec);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_005fe6c0 {
    char pad[0x18];
    void (__stdcall *m_fn)(int);
    void sub_005fe6c0();
};

// @baa 0x005fe6c0
void C_005fe6c0::sub_005fe6c0()
{
    m_fn(0);
}

struct C_005fe6d0 {
    char pad[0x18];
    void (__stdcall *fn)(int);
    void sub_005fe6d0();
};

// @baa 0x005fe6d0
void C_005fe6d0::sub_005fe6d0()
{
    fn(-1);
}

struct C_005fe6e0 {
    bool sub_005fe6e0();
};

// @baa 0x005fe6e0
bool C_005fe6e0::sub_005fe6e0(void)
{
    int param_1 = (int)this;
  int iVar1;
  if (*(int *)(param_1 + 0x14) != 0) {
    sub_006311e0("DLLHandle == NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\ProfilerIntegration.cpp"
                 ,0x9b,&g_01e3f3dc);
  }
  iVar1 = sub_005ec8c0(L"aqProf.dll");
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 != 0) {
    iVar1 = sub_005f0900(iVar1,L"EnableProfiling");
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 == 0) {
      sub_005ec8f0(*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    sub_005f5500(0,L"Failed to initialize aqProf.dll");
  }
  return *(int *)(param_1 + 0x14) != 0;
}

struct C_005fe760 {
    void sub_005fe760();
};

// @baa 0x005fe760
void C_005fe760::sub_005fe760(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_01ea6bec);
  return;
}

struct C_005fe770 {
    undefined4 * sub_005fe770(byte);
};

// @baa 0x005fe770
undefined4 * C_005fe770::sub_005fe770(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ea6bec);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
