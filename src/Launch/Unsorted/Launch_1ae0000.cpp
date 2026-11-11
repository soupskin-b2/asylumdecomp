// Launch_1ae0000.cpp (part 1 of 3): 42 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

#pragma pack(push, 1)
struct _iobuf { char * _ptr; int _cnt; char * _base; int _flag; int _file; int _charbuf; int _bufsiz; char * _tmpfname; };

#pragma pack(pop)
typedef _iobuf FILE;

extern undefined4 g_027ca584;
extern "C" __declspec(dllimport) int fopen(...);
extern "C" __declspec(dllimport) int fclose(...);
// @baa 0x01aee600
undefined4 sub_01aee600(char * param_1)
{
  FILE *_File;
  
  g_027ca584 = (undefined4)(param_1);
  _File = (FILE *)(fopen(param_1,"r"));
  if (_File == (FILE *)0x0) {
    return 0xfffffff3;
  }
  fclose(_File);
  return 0;
}

struct C {
    int sub_01aeeaa0(int);
};

// @baa 0x01aeeaa0
int C::sub_01aeeaa0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01aeeab0 {
    int sub_01aeeab0(int);
};

// @baa 0x01aeeab0
int C_01aeeab0::sub_01aeeab0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01aeeac0 { int sub_01aeeac0(void); };

// @baa 0x01aeeac0
int C_01aeeac0::sub_01aeeac0(void) { return *(int*)((char*)this + 4); }

struct C_01aeead0 { int sub_01aeead0(void); };

// @baa 0x01aeead0
int C_01aeead0::sub_01aeead0(void) { return *(int*)((char*)this + 0); }

struct C_01aeeae0 { int sub_01aeeae0(void); };

// @baa 0x01aeeae0
int C_01aeeae0::sub_01aeeae0(void) { return *(int*)((char*)this + 4); }

struct C_01aeeaf0 {
    int sub_01aeeaf0(int);
};

// @baa 0x01aeeaf0
int C_01aeeaf0::sub_01aeeaf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01aeeb00 { int sub_01aeeb00(void); };

// @baa 0x01aeeb00
int C_01aeeb00::sub_01aeeb00(void) { return *(int*)((char*)this + 4); }

struct C_01aeeb20 {
    int sub_01aeeb20(int);
};

// @baa 0x01aeeb20
int C_01aeeb20::sub_01aeeb20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01aeeb30 {
    int sub_01aeeb30(int);
};

// @baa 0x01aeeb30
int C_01aeeb30::sub_01aeeb30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01aeeb40 { int sub_01aeeb40(void); };

// @baa 0x01aeeb40
int C_01aeeb40::sub_01aeeb40(void) { return *(int*)((char*)this + 4); }

struct C_01aeeb60 {
    int sub_01aeeb60(int *, int *);
};

// @baa 0x01aeeb60
int C_01aeeb60::sub_01aeeb60(int * param_2, int * param_3)
{
    int * param_1 = (int *)this;

  return *param_3 * 0x10 + *(int *)(*param_1 + *param_2 * 4);
}

struct C_01aeeb80 { int sub_01aeeb80(void); };

// @baa 0x01aeeb80
int C_01aeeb80::sub_01aeeb80(void) { return *(int*)((char*)this + 8); }

struct C_01aeeb90 { int sub_01aeeb90(void); };

// @baa 0x01aeeb90
int C_01aeeb90::sub_01aeeb90(void) { return *(int*)((char*)this + 4); }

struct C_01aeebb0 {
    int sub_01aeebb0(int);
};

// @baa 0x01aeebb0
int C_01aeebb0::sub_01aeebb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01aeebc0 {
    int sub_01aeebc0(int);
};

// @baa 0x01aeebc0
int C_01aeebc0::sub_01aeebc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01aeebd0 { int sub_01aeebd0(void); };

// @baa 0x01aeebd0
int C_01aeebd0::sub_01aeebd0(void) { return *(int*)((char*)this + 4); }

struct C_01aeebe0 {
    void sub_01aeebe0(int);
};

extern "C" __declspec(dllimport) int free(...);
extern "C" __declspec(dllimport) int realloc(...);
extern "C" __declspec(dllimport) int malloc(...);
// @baa 0x01aeebe0
void C_01aeebe0::sub_01aeebe0(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  void *pvVar1;
  
  param_1[2] = param_2;
  if (param_2 == 0) {
    if ((void *)*param_1 != (void *)0x0) {
      free((void *)*param_1);
      *param_1 = 0;
      return;
    }
  }
  else {
    if ((void *)*param_1 != (void *)0x0) {
      pvVar1 = (void *)(realloc((void *)*param_1,param_2 * 0x18));
      *param_1 = (undefined4)(pvVar1);
      return;
    }
    pvVar1 = (void *)(malloc(param_2 * 0x18));
    *param_1 = (undefined4)(pvVar1);
  }
  return;
}

struct C_01aeec50 {
    int sub_01aeec50(int);
};

// @baa 0x01aeec50
int C_01aeec50::sub_01aeec50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01aeec60 {
    void sub_01aeec60(int);
};

// @baa 0x01aeec60
void C_01aeec60::sub_01aeec60(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  void *pvVar1;
  
  param_1[2] = param_2;
  if (param_2 == 0) {
    if ((void *)*param_1 != (void *)0x0) {
      free((void *)*param_1);
      *param_1 = 0;
      return;
    }
  }
  else {
    if ((void *)*param_1 != (void *)0x0) {
      pvVar1 = (void *)(realloc((void *)*param_1,param_2 * 0xc));
      *param_1 = (undefined4)(pvVar1);
      return;
    }
    pvVar1 = (void *)(malloc(param_2 * 0xc));
    *param_1 = (undefined4)(pvVar1);
  }
  return;
}

struct C_01aeecc0 {
    void sub_01aeecc0(int);
};

// @baa 0x01aeecc0
void C_01aeecc0::sub_01aeecc0(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  void *pvVar1;
  
  param_1[2] = param_2;
  if (param_2 == 0) {
    if ((void *)*param_1 != (void *)0x0) {
      free((void *)*param_1);
      *param_1 = 0;
      return;
    }
  }
  else {
    if ((void *)*param_1 != (void *)0x0) {
      pvVar1 = (void *)(realloc((void *)*param_1,param_2 * 0xc));
      *param_1 = (undefined4)(pvVar1);
      return;
    }
    pvVar1 = (void *)(malloc(param_2 * 0xc));
    *param_1 = (undefined4)(pvVar1);
  }
  return;
}

struct C_01aeed30 {
    void sub_01aeed30(int);
};

// @baa 0x01aeed30
void C_01aeed30::sub_01aeed30(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  void *pvVar1;
  
  param_1[2] = param_2;
  if (param_2 == 0) {
    if ((void *)*param_1 != (void *)0x0) {
      free((void *)*param_1);
      *param_1 = 0;
      return;
    }
  }
  else {
    if ((void *)*param_1 != (void *)0x0) {
      pvVar1 = (void *)(realloc((void *)*param_1,param_2 * 4));
      *param_1 = (undefined4)(pvVar1);
      return;
    }
    pvVar1 = (void *)(malloc(param_2 * 4));
    *param_1 = (undefined4)(pvVar1);
  }
  return;
}

struct C_01aeed90 {
    int sub_01aeed90(int);
};

// @baa 0x01aeed90
int C_01aeed90::sub_01aeed90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01aeeda0 { int sub_01aeeda0(void); };

// @baa 0x01aeeda0
int C_01aeeda0::sub_01aeeda0(void) { return *(int*)((char*)this + 4); }

struct C_01aeedb0 { int sub_01aeedb0(void); };

// @baa 0x01aeedb0
int C_01aeedb0::sub_01aeedb0(void) { return *(int*)((char*)this + 4); }

struct C_01aeedc0 {
    int sub_01aeedc0(int);
};

// @baa 0x01aeedc0
int C_01aeedc0::sub_01aeedc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01aeedd0 { int sub_01aeedd0(void); };

// @baa 0x01aeedd0
int C_01aeedd0::sub_01aeedd0(void) { return *(int*)((char*)this + 4); }

struct C_01aeede0 {
    undefined4 sub_01aeede0();
};

// @baa 0x01aeede0
undefined4 C_01aeede0::sub_01aeede0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if (param_1[1] == 0) {
    return 0;
  }
  return *param_1;
}

struct C_01aeee70 {
    int sub_01aeee70(int);
};

// @baa 0x01aeee70
int C_01aeee70::sub_01aeee70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01aeee80 {
    int sub_01aeee80(int);
};

// @baa 0x01aeee80
int C_01aeee80::sub_01aeee80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01aeee90 { int sub_01aeee90(void); };

// @baa 0x01aeee90
int C_01aeee90::sub_01aeee90(void) { return *(int*)((char*)this + 4); }

struct C_01aeeea0 { int sub_01aeeea0(void); };

// @baa 0x01aeeea0
int C_01aeeea0::sub_01aeeea0(void) { return *(int*)((char*)this + 4); }

struct C_01aeeeb0 {
    int sub_01aeeeb0(int);
};

// @baa 0x01aeeeb0
int C_01aeeeb0::sub_01aeeeb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01aeeec0 {
    int sub_01aeeec0(int);
};

// @baa 0x01aeeec0
int C_01aeeec0::sub_01aeeec0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01aeeed0 { int sub_01aeeed0(void); };

// @baa 0x01aeeed0
int C_01aeeed0::sub_01aeeed0(void) { return *(int*)((char*)this + 4); }

struct C_01aeeee0 {
    undefined4 sub_01aeeee0();
};

// @baa 0x01aeeee0
undefined4 C_01aeeee0::sub_01aeeee0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if (param_1[1] == 0) {
    return 0;
  }
  return *param_1;
}

struct C_01aeef70 {
    undefined4 sub_01aeef70();
};

int sub_01aee0a0(void);
// @baa 0x01aeef70
undefined4 C_01aeef70::sub_01aeef70(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_01aee0a0();
  return param_1;
}

struct C_01aeef80 {
    int sub_01aeef80(int *, int *);
};

// @baa 0x01aeef80
int C_01aeef80::sub_01aeef80(int * param_2, int * param_3)
{
    int * param_1 = (int *)this;

  return param_1[2] + (*param_2 * *param_1 + *param_3) * 4;
}

void sub_00eb4e60();
// @baa 0x01aeefa0
void sub_01aeefa0(void) { sub_00eb4e60(); }

struct C_01aef050 { void sub_01aef050(void); };

// @baa 0x01aef050
void C_01aef050::sub_01aef050(void) { *(int*)((char*)this + 4) = 0; }

struct C_01aef340 {
    void sub_01aef340();
};

// @baa 0x01aef340
void C_01aef340::sub_01aef340(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[1] = 0;
  param_1[2] = 0;
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_01aeff80 {
    void sub_01aeff80();
};

// @baa 0x01aeff80
void C_01aeff80::sub_01aeff80(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}
