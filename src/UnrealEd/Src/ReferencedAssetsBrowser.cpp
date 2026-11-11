// ReferencedAssetsBrowser.cpp: 18 functions
// Placed here by: neighbours 18.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

class wxListCtrl;
class wxListEvent;
class wxListCtrl {
    public:
    public: __declspec(dllimport) bool SortItems(int (__stdcall*)(long,long,long),long);
    friend struct C;
};

class wxListEvent {
    public:
    public: __declspec(dllimport) int GetColumn() const;
    friend struct C;
};

struct C {
    void sub_013cc1a0(wxListEvent *);
};

int sub_013cb920(void);
int sub_013cbb90(void);
// @baa 0x013cc1a0
void C::sub_013cc1a0(wxListEvent * param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  int iVar2;
  
  iVar2 = ((wxListEvent *)(param_2))->wxListEvent::GetColumn();
  if ((-1 < iVar2) && (iVar2 != 4)) {
    piVar1 = (int *)(param_1 + 0x284);
    if (iVar2 == *(int *)(param_1 + 0x284)) {
      *(uint *)(param_1 + 0x288) = (uint)(*(int *)(param_1 + 0x288) == 0);
    }
    else {
      *piVar1 = iVar2;
      *(undefined4 *)(param_1 + 0x288) = 1;
    }
    if (*(int *)(param_1 + 0x198) == 1) {
      ((wxListCtrl *)(*(wxListCtrl **)(param_1 + 0x1e0)))->wxListCtrl::SortItems((int (__stdcall *)(long,long,long))(sub_013cbb90), (long)piVar1);
      return;
    }
    ((wxListCtrl *)(*(wxListCtrl **)(param_1 + 0x1e0)))->wxListCtrl::SortItems((int (__stdcall *)(long,long,long))(sub_013cb920), (long)piVar1);
  }
  return;
}

struct C_013d3250 {
    void sub_013cc310(int);
    void sub_013d3250();
};

// @baa 0x013d3250
void C_013d3250::sub_013d3250()
{
    this->sub_013cc310(1);
}

void sub_013c8eb0();
// @baa 0x013d3260
void sub_013d3260(void) { sub_013c8eb0(); }

void sub_013c9060();
// @baa 0x013d3270
void sub_013d3270(void) { sub_013c9060(); }

void sub_013c90d0();
// @baa 0x013d3280
void sub_013d3280(void) { sub_013c90d0(); }

void sub_013c9140();
// @baa 0x013d3290
void sub_013d3290(void) { sub_013c9140(); }

struct C_013d33d0 { void sub_013d24c0(int); C_013d33d0 *sub_013d33d0(int); };

// @baa 0x013d33d0
C_013d33d0 *C_013d33d0::sub_013d33d0(int a) { sub_013d24c0(a); return this; }

struct C_013d33f0 { void sub_013c9bc0(int); C_013d33f0 *sub_013d33f0(int); };

// @baa 0x013d33f0
C_013d33f0 *C_013d33f0::sub_013d33f0(int a) { sub_013c9bc0(a); return this; }

struct M_013d3410 { void sub_00d8bc10(); };

struct C_013d3410 { char pad[4]; M_013d3410 m; void sub_013d3410(); };

// @baa 0x013d3410
void C_013d3410::sub_013d3410() { m.sub_00d8bc10(); }

struct M_013d3420 { void sub_013c9140(); };

struct C_013d3420 { char pad[4]; M_013d3420 m; void sub_013d3420(); };

// @baa 0x013d3420
void C_013d3420::sub_013d3420() { m.sub_013c9140(); }

struct M_013d3430 { void sub_00d8bc10(); };

struct C_013d3430 { char pad[4]; M_013d3430 m; void sub_013d3430(); };

// @baa 0x013d3430
void C_013d3430::sub_013d3430() { m.sub_00d8bc10(); }

struct M_013d3440 { void sub_013c9140(); };

struct C_013d3440 { char pad[4]; M_013d3440 m; void sub_013d3440(); };

// @baa 0x013d3440
void C_013d3440::sub_013d3440() { m.sub_013c9140(); }

struct C_013d34b0 { void sub_013c9ca0(int); C_013d34b0 *sub_013d34b0(int); };

// @baa 0x013d34b0
C_013d34b0 *C_013d34b0::sub_013d34b0(int a) { sub_013c9ca0(a); return this; }

struct C_013d34d0 {
    undefined4 sub_013d34d0(byte);
    int sub_00d8bc10();
};

int sub_0053dfa0(...);
// @baa 0x013d34d0
undefined4 C_013d34d0::sub_013d34d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_013d34d0 *)(((char *)this + 4)))->sub_00d8bc10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013d3500 {
    undefined4 sub_013d3500(byte);
    int sub_013c9140();
};

// @baa 0x013d3500
undefined4 C_013d3500::sub_013d3500(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_013d3500 *)(((char *)this + 4)))->sub_013c9140();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013d3530 {
    undefined4 * sub_013d3530(undefined4 *);
    int sub_013d3450(int);
};

// @baa 0x013d3530
undefined4 * C_013d3530::sub_013d3530(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_013d3530 *)(((char *)this + 4)))->sub_013d3450((int)(param_2 + 1));
  return param_1;
}

struct C_013d3550 {
    undefined4 * sub_013d3550(undefined4 *);
    int sub_013c9ca0(int);
};

// @baa 0x013d3550
undefined4 * C_013d3550::sub_013d3550(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_013d3550 *)(((char *)this + 4)))->sub_013c9ca0((int)(param_2 + 1));
  return param_1;
}

int sub_013d25c0(void);
// @baa 0x013d3930
undefined4 UUnrealEdEngine::sub_013d3930(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013d25c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
