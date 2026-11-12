// FMOD_1780000.cpp (part 2 of 2): 20 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x017821cb
undefined4 sub_017821cb(int param_1, int * param_2)
{
  if (param_1 == 0) {
    return 0x24;
  }
  if (param_2 == (int *)0x0) {
    return 0x25;
  }
  *param_2 = param_1;
  return 0;
}

struct C {
    undefined4 sub_01782241(undefined4 *);
};

// @baa 0x01782241
undefined4 C::sub_01782241(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x10);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_01782258 {
    undefined4 sub_01782258(int);
};

// @baa 0x01782258
undefined4 C_01782258::sub_01782258(int param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 < -1) {
    uVar1 = 0x25;
  }
  else {
    *(int *)(param_1 + 0x28) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0178226e {
    undefined4 sub_0178226e(undefined4 *);
};

// @baa 0x0178226e
undefined4 C_0178226e::sub_0178226e(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x28);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_01782323 {
    undefined4 sub_01782323(undefined4 *);
};

// @baa 0x01782323
undefined4 C_01782323::sub_01782323(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x2c);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0178243a {
    undefined4 sub_0178243a();
    int sub_0176b810(int);
};

// @baa 0x0178243a
undefined4 C_0178243a::sub_0178243a(void)
{
    int param_1 = (int)this;
  undefined4 *puVar1;
  for (puVar1 = *(undefined4 **)(param_1 + 0x18); puVar1 != (undefined4 *)(param_1 + 0x18);
      puVar1 = (undefined4 *)*puVar1) {
    ((C_0178243a *)((*(char **)((char *)this + 0x10))))->sub_0176b810(puVar1[2]);
  }
  return 0;
}

struct C_017824bf {
    undefined4 sub_017824bf(int, undefined4 *);
};

// @baa 0x017824bf
undefined4 C_017824bf::sub_017824bf(int param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    for (puVar1 = *(undefined4 **)(param_1 + 0x18); puVar1 != (undefined4 *)(param_1 + 0x18);
        puVar1 = (undefined4 *)*puVar1) {
      if (iVar2 == param_2) {
        *param_3 = puVar1[2];
        return 0;
      }
      iVar2 = iVar2 + 1;
    }
  }
  return 0x25;
}

struct C_017824f0 {
    undefined4 sub_017824f0(int *);
};

// @baa 0x017824f0
undefined4 C_017824f0::sub_017824f0(int * param_2)
{
    int param_1 = (int)this;

  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0x25;
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 0x18);
    *param_2 = 0;
    for (; puVar1 != (undefined4 *)(param_1 + 0x18); puVar1 = (undefined4 *)*puVar1) {
      *param_2 = *param_2 + *(int *)(puVar1[2] + 0x11c);
    }
    uVar2 = 0;
  }
  return uVar2;
}

struct C_0178252d {
    undefined4 sub_0178252d(undefined4 *);
};

// @baa 0x0178252d
undefined4 C_0178252d::sub_0178252d(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x14);
    uVar1 = 0;
  }
  return uVar1;
}

int sub_017ad486(...);
// @baa 0x01782ac8
undefined4 sub_01782ac8(int param_1)
{
  if (param_1 == -1) {
    return 0x25;
  }
  sub_017ad486(param_1);
  return 0;
}

int sub_017ad623(...);
// @baa 0x01782ae0
undefined4 sub_01782ae0(int param_1)
{
  if (param_1 == -1) {
    return 0x25;
  }
  sub_017ad623(param_1,0xffffffff);
  return 0;
}

int sub_017ad674(...);
// @baa 0x01782afb
undefined4 sub_01782afb(int param_1)
{
  if (param_1 == -1) {
    return 0x25;
  }
  sub_017ad674(param_1,1,0);
  return 0;
}

struct C_01782e0c {
    undefined4 sub_01782e0c(undefined4 *);
};

// @baa 0x01782e0c
undefined4 C_01782e0c::sub_01782e0c(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 4);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_01782e23 {
    undefined4 sub_01782e23(undefined4 *);
};

// @baa 0x01782e23
undefined4 C_01782e23::sub_01782e23(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 8);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_01782ed4 {
    undefined4 sub_01782ed4(undefined4, undefined4 *);
};

// @baa 0x01782ed4
undefined4 C_01782ed4::sub_01782ed4(undefined4 param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x19c) = 0;
  *param_3 = 0;
  return 0;
}

struct C_0178f97d {
    void sub_0178f97d(undefined4, uint, int *);
    int sub_0177edb2(int, int, int, int, int);
};

// @baa 0x0178f97d
void C_0178f97d::sub_0178f97d(undefined4 param_2, uint param_3, int * param_4)
{
    int param_1 = (int)this;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x100) == 2) {
    ((C_0178f97d *)(this))->sub_0177edb2(*(undefined4 *)(param_1 + 0xfc), param_2, 2, param_3 >> 1, (int)(param_4));
    *param_4 = *param_4 << 1;
  }
  else {
    sub_0177edb2(*(undefined4 *)(param_1 + 0xfc), param_2, 1, param_3, (int)(param_4));
  }
  return;
}

typedef void * HANDLE;

extern "C" __declspec(dllimport) int __stdcall CloseHandle(HANDLE hObject);
// @baa 0x01782849
int sub_01782849(HANDLE hObject)
{
	if (hObject == (HANDLE)-1)
		return 0x13;
	CloseHandle(hObject);
	return 0;
}

typedef unsigned long ULONG_PTR;

typedef long LONG;

#pragma pack(push, 1)
struct _RTL_CRITICAL_SECTION
{
	void * DebugInfo;
	LONG LockCount;
	LONG RecursionCount;
	HANDLE OwningThread;
	HANDLE LockSemaphore;
	ULONG_PTR SpinCount;
};

#pragma pack(pop)
typedef _RTL_CRITICAL_SECTION * LPCRITICAL_SECTION;

extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(LPCRITICAL_SECTION Section);
// @baa 0x01782a6b
// 37 = ERROR_LOCK_VIOLATION
int sub_01782a6b(LPCRITICAL_SECTION Section)
{
	if (Section == (LPCRITICAL_SECTION)0x0)
		return 0x25;
	EnterCriticalSection(Section);
	return 0;
}

#pragma pack(push, 1)
struct _LIST_ENTRY { _LIST_ENTRY *Flink; _LIST_ENTRY *Blink; };

#pragma pack(pop)
typedef _LIST_ENTRY LIST_ENTRY;

typedef void *HANDLE_01782a83;

typedef unsigned long long ULONG_PTR_01782a83;

#pragma pack(push, 1)
struct _RTL_CRITICAL_SECTION_01782a83 {
    void *DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE_01782a83 OwningThread;
    HANDLE_01782a83 LockSemaphore;
    ULONG_PTR_01782a83 SpinCount;
};

#pragma pack(pop)
typedef _RTL_CRITICAL_SECTION_01782a83 *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION_01782a83;

extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION_01782a83 lpCriticalSection);
// @baa 0x01782a83
INT sub_01782a83(LPCRITICAL_SECTION_01782a83 cs)
{
    if (cs == NULL)
        return 0x25; // ERROR_LOCK_VIOLATION
    LeaveCriticalSection(cs);
    return 0;
}

extern "C" __declspec(dllimport) void __stdcall Sleep(unsigned long Milliseconds);
// @baa 0x01782931
INT sub_01782931(unsigned long Milliseconds)
{
    Sleep(Milliseconds);
    return 0;
}
