// MaterialInstanceConstant.cpp: 3 functions
// Placed here by: file 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

extern int g_02604330;
extern unsigned short g_01e3f3dc;
extern int g_026b2194;
extern char g_026b24c0[];
int sub_00715880();
int sub_006311e0(...);
struct RC { virtual void v0(); virtual void v1(); };

struct Skip : RC { int sz; Skip(int s){sz=s;} virtual void v0(); };

struct Ctx {
  int a; char *ptr; char *end;
  Ctx(void *q, int n);
  void sub_00542ad0();
  ~Ctx();
};

struct Ctx2 {
  int a; char *ptr; char *end;
  Ctx2 *sub_00542a10(void *q, int n);
  void sub_005470a0();
};

struct Cmd : RC {
  int a; int b; int c; int d;
  Cmd(int x, int *p, int e){ a=x; b=p[0]; c=p[1]; d=e; }
  virtual void v0();
  ~Cmd(){}
  void sub_00700390();
};

inline void *operator new(unsigned, void *p){return p;}

// @baa 0x00702330
void sub_00702330(int arg1, int *arg2)
{
  int e = arg2[2];
  if (!sub_00715880()) sub_006311e0("IsInGameThread()", "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialInstanceConstant.cpp", 0x2b, &g_01e3f3dc);
  if (g_026b2194) {
    Ctx c(g_026b24c0, 0x14);
    unsigned s = c.end - c.ptr;
    if (s < 0x14) {
      if (s < 8) sub_006311e0("AllocationContext.GetAllocatedSize() >= sizeof(FSkipRenderCommand)", "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialInstanceConstant.cpp", 0x2b, &g_01e3f3dc);
      if (c.ptr) new(c.ptr) Skip(c.end - c.ptr);
      c.sub_00542ad0();
      Ctx2 c2; Ctx2 *r = c2.sub_00542a10(g_026b24c0, 0x14);
      if (r->ptr) new(r->ptr) Cmd(arg1, arg2, e);
      c2.sub_005470a0();
    } else {
      if (c.ptr) new(c.ptr) Cmd(arg1, arg2, e);
    }
  } else {
    Cmd cmd(arg1, arg2, e);
    cmd.sub_00700390();
  }
}

// @baa 0x007116d0
IMPLEMENT_CLASS_AT(UMaterialInstanceConstant, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\MaterialInstanceConstant.cpp", 10);

// @baa 0x007116e0
