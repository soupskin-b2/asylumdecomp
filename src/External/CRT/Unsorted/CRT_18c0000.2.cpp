// CRT_18c0000.cpp (part 2 of 3): 149 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { C* sub_018c86a0(void); };

// @baa 0x018c86a0
C* C::sub_018c86a0(void) { *(int*)((char*)this + 0) = 0; return this; }

extern undefined1 g_027b835c;
// @baa 0x018c8860
void sub_018c8860(undefined1 param_1)
{
  g_027b835c = param_1;
  return;
}

extern undefined4 g_025fe69c;
// @baa 0x018c8870
void sub_018c8870(undefined4 param_1)
{
  g_025fe69c = param_1;
  return;
}

extern undefined1 g_025fe6a0;
// @baa 0x018c8880
void sub_018c8880(undefined1 param_1)
{
  g_025fe6a0 = param_1;
  return;
}

extern undefined4 g_027b8358;
// @baa 0x018c8890
void sub_018c8890(undefined4 param_1)
{
  g_027b8358 = param_1;
  return;
}

struct C_018c8a40 {
    int sub_018c8a40();
};

// @baa 0x018c8a40
int C_018c8a40::sub_018c8a40(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

struct C_018c8a90 {
    int sub_018c8a90();
};

// @baa 0x018c8a90
int C_018c8a90::sub_018c8a90(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

struct C_018c8ae0 {
    int sub_018c8ae0();
};

// @baa 0x018c8ae0
int C_018c8ae0::sub_018c8ae0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

struct C_018c8b30 { C_018c8b30* sub_018c8b30(void); };

// @baa 0x018c8b30
C_018c8b30* C_018c8b30::sub_018c8b30(void) { return this; }

struct C_018c8b40 {
    int sub_018c8b40();
};

// @baa 0x018c8b40
int C_018c8b40::sub_018c8b40(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 1;
}

struct C_018c8b60 { C_018c8b60* sub_018c8b60(void); };

// @baa 0x018c8b60
C_018c8b60* C_018c8b60::sub_018c8b60(void) { return this; }

struct C_018c8b70 { C_018c8b70* sub_018c8b70(void); };

// @baa 0x018c8b70
C_018c8b70* C_018c8b70::sub_018c8b70(void) { return this; }

struct C_018c8b80 { C_018c8b80* sub_018c8b80(void); };

// @baa 0x018c8b80
C_018c8b80* C_018c8b80::sub_018c8b80(void) { return this; }

struct C_018c8c90 { C_018c8c90* sub_018c8c90(int a0); };

// @baa 0x018c8c90
C_018c8c90* C_018c8c90::sub_018c8c90(int a0) { return this; }

// @baa 0x018c8e00
int sub_018c8e00(void) { return 1073741823; }

struct C_018c8e10 {
    int sub_018c8e10();
};

// @baa 0x018c8e10
int C_018c8e10::sub_018c8e10(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 1;
}

// @baa 0x018c8e30
int sub_018c8e30(void) { return 2147483647; }

// @baa 0x018c8e40
int sub_018c8e40(void) { return 1073741823; }

// @baa 0x018c8e50
int sub_018c8e50(void) { return 1073741823; }

struct C_018c8ed0 { C_018c8ed0* sub_018c8ed0(void); };

// @baa 0x018c8ed0
C_018c8ed0* C_018c8ed0::sub_018c8ed0(void) { *(int*)((char*)this + 0) = 0; return this; }

class std;
class std {
    public:
    class exception {
        public:
        public: __declspec(dllimport) exception(std::exception const &);
        friend struct C_018c9060;
    };
};

#pragma pack(push, 1)
struct exception { char _pad0[1]; };

#pragma pack(pop)
struct C_018c9060 {
    exception * sub_018c9060(exception *);
};

extern undefined4 g_02405274;
// @baa 0x018c9060
exception * C_018c9060::sub_018c9060(exception * param_2)
{
    exception * param_1 = (exception *)this;
  ((std::exception *)(param_1))->std::exception::exception(*(const std::exception *)(param_2));
  *(undefined ***)param_1 = (undefined **)((&g_02405274));
  return param_1;
}

// @baa 0x018c9090
void sub_018c9090(void) {  }

// @baa 0x018c90a0
int sub_018c90a0(int a0) { return a0; }

// @baa 0x018c90f0
void sub_018c90f0(void) {  }

// @baa 0x018c9140
void sub_018c9140(void) {  }

// @baa 0x018c9160
void sub_018c9160(void) {  }

// @baa 0x018c9170
int sub_018c9170(int a0) { return *(int*)a0; }

extern "C" __declspec(dllimport) int memmove_s(...);
// @baa 0x018c9180
void * sub_018c9180(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  
  iVar1 = param_2 - (int)param_1 >> 1;
  _Dst = (void *)(param_3 + iVar1 * -2);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 2,param_1,iVar1 * 2);
  }
  return _Dst;
}

// @baa 0x018c91b0
int sub_018c91b0(int a0) { return a0; }

struct C_018c9250 { C_018c9250* sub_018c9250(int a0); };

// @baa 0x018c9250
C_018c9250* C_018c9250::sub_018c9250(int a0) { return this; }

struct C_018c9260 { C_018c9260* sub_018c9260(int a0); };

// @baa 0x018c9260
C_018c9260* C_018c9260::sub_018c9260(int a0) { return this; }

struct C_018c9270 { C_018c9270* sub_018c9270(int a0); };

// @baa 0x018c9270
C_018c9270* C_018c9270::sub_018c9270(int a0) { return this; }

struct C_018c9280 { C_018c9280* sub_018c9280(int a0); };

// @baa 0x018c9280
C_018c9280* C_018c9280::sub_018c9280(int a0) { return this; }

// @baa 0x018c9290
int sub_018c9290(void) { return 1073741823; }

// @baa 0x018c92c0
int sub_018c92c0(void) { return 2147483647; }

// @baa 0x018c9310
int sub_018c9310(void) { return 1073741823; }

// @baa 0x018c9320
int sub_018c9320(void) { return 1073741823; }

// @baa 0x018c9420
void sub_018c9420(void) {  }

// @baa 0x018c9430
void sub_018c9430(void) {  }

// @baa 0x018c9440
void sub_018c9440(void) {  }

// @baa 0x018c9450
void sub_018c9450(void) {  }

// @baa 0x018c9460
int sub_018c9460(int a0) { return *(int*)a0; }

// @baa 0x018c9470
void * sub_018c9470(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  
  iVar1 = param_2 - (int)param_1 >> 1;
  _Dst = (void *)(param_3 + iVar1 * -2);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 2,param_1,iVar1 * 2);
  }
  return _Dst;
}

// @baa 0x018c9640
void __stdcall sub_018c9640(int a0, int a1) {  }

// @baa 0x018c9650
void __stdcall sub_018c9650(int a0, int a1) {  }

// @baa 0x018c9660
void __stdcall sub_018c9660(int a0, int a1) {  }

// @baa 0x018c9670
void __stdcall sub_018c9670(int a0, int a1) {  }

// @baa 0x018c9730
void sub_018c9730(undefined2 * param_1, undefined2 * param_2, undefined2 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x018c9750
void * sub_018c9750(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  
  iVar1 = param_2 - (int)param_1 >> 1;
  _Dst = (void *)(param_3 + iVar1 * -2);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 2,param_1,iVar1 * 2);
  }
  return _Dst;
}

struct C_018c9820 {
    void sub_018c9820();
};

int sub_00402660(...);
// @baa 0x018c9820
void C_018c9820::sub_018c9820(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

struct C_018c9850 {
    void sub_018c9850();
};

// @baa 0x018c9850
void C_018c9850::sub_018c9850(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

struct C_018c9880 {
    void sub_018c9880();
};

// @baa 0x018c9880
void C_018c9880::sub_018c9880(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

struct C_018c98b0 {
    void sub_018c98b0();
};

// @baa 0x018c98b0
void C_018c98b0::sub_018c98b0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

struct C_018c9a00 {
    void sub_018c9a00();
};

// @baa 0x018c9a00
void C_018c9a00::sub_018c9a00(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

struct C_018c9a30 {
    void sub_018c9a30();
};

// @baa 0x018c9a30
void C_018c9a30::sub_018c9a30(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

struct C_018c9a60 {
    void sub_018c9a60();
};

// @baa 0x018c9a60
void C_018c9a60::sub_018c9a60(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

struct C_018c9a90 {
    void sub_018c9a90();
};

// @baa 0x018c9a90
void C_018c9a90::sub_018c9a90(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

struct C_018c9b20 {
    void sub_018c9b20();
};

// @baa 0x018c9b20
void C_018c9b20::sub_018c9b20(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x10) != 0) {
    sub_00402660(*(int *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

struct C_018c9b80 {
    int sub_018c9b80(byte);
};

// @baa 0x018c9b80
int C_018c9b80::sub_018c9b80(byte param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x10) != 0) {
    sub_00402660(*(int *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018ca940 {
    void sub_018ca940();
};

int sub_00402680(...);
// @baa 0x018ca940
void C_018ca940::sub_018ca940(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00402680(*param_1);
  *param_1 = 0;
  return;
}

struct C_018caa20 {
    void sub_018caa20();
};

// @baa 0x018caa20
void C_018caa20::sub_018caa20(void)
{
    int * param_1 = (int *)this;

  *param_1 = *param_1 + -1;
  if (*param_1 == 0) {
    sub_00402660(param_1);
  }
  return;
}

// @baa 0x018caa90
int sub_018caa90(int * param_1, int * param_2)
{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if (((((iVar2 == iVar1) || (iVar2 == param_1[1])) || (iVar2 == param_1[2])) &&
      (((iVar2 = param_2[1], iVar2 == iVar1 || (iVar2 == param_1[1])) || (iVar2 == param_1[2])))) &&
     (((iVar2 = param_2[2], iVar2 == iVar1 || (iVar2 == param_1[1])) || (iVar2 == param_1[2])))) {
    iVar2 = -1;
  }
  return iVar2;
}

struct C_018cab50 {
    undefined4 sub_018cab50(int);
};

// @baa 0x018cab50
undefined4 C_018cab50::sub_018cab50(int param_2)
{
    int param_1 = (int)this;

  if ((*(int *)(param_2 + 0xc) < 0) &&
     ((*(int *)(param_1 + 0x20) < 0 || (*(int *)(param_2 + 0x14) != *(int *)(param_1 + 0x20))))) {
    return 0;
  }
  return 1;
}

struct C_018caed0 {
    int sub_018caed0();
};

// @baa 0x018caed0
int C_018caed0::sub_018caed0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
}

struct C_018caf50 {
    int sub_018caf50();
};

// @baa 0x018caf50
int C_018caf50::sub_018caf50(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
}

struct C_018caf70 { C_018caf70* sub_018caf70(void); };

// @baa 0x018caf70
C_018caf70* C_018caf70::sub_018caf70(void) { return this; }

struct C_018caf80 {
    int sub_018caf80();
};

// @baa 0x018caf80
int C_018caf80::sub_018caf80(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
}

struct C_018cafa0 {
    int sub_018cafa0();
};

// @baa 0x018cafa0
int C_018cafa0::sub_018cafa0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
}

// @baa 0x018cafc0
int sub_018cafc0(int param_1)
{
  return param_1 + 0x11;
}

// @baa 0x018cafd0
int sub_018cafd0(int a0) { return a0; }

// @baa 0x018cafe0
int sub_018cafe0(int param_1)
{
  return param_1 + 8;
}

// @baa 0x018caff0
int sub_018caff0(int a0) { return a0; }

struct C_018cb050 { int sub_018cb050(void); };

// @baa 0x018cb050
int C_018cb050::sub_018cb050(void) { return *(int*)((char*)this + 4); }

// @baa 0x018cb0b0
int sub_018cb0b0(int param_1)
{
  return param_1 + 8;
}

// @baa 0x018cb140
int sub_018cb140(int param_1)
{
  return param_1 + 0x10;
}

// @baa 0x018cb150
int sub_018cb150(int param_1)
{
  return param_1 + 4;
}

// @baa 0x018cb160
int sub_018cb160(int param_1)
{
  return param_1 + 0xc;
}

// @baa 0x018cb170
int sub_018cb170(void) { return 1073741823; }

struct C_018cb180 { int sub_018cb180(void); };

// @baa 0x018cb180
int C_018cb180::sub_018cb180(void) { return *(int*)((char*)this + 4); }

struct C_018cb190 {
    int sub_018cb190();
};

// @baa 0x018cb190
int C_018cb190::sub_018cb190(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) + 8;
}

struct C_018cb1b0 { C_018cb1b0* sub_018cb1b0(void); };

// @baa 0x018cb1b0
C_018cb1b0* C_018cb1b0::sub_018cb1b0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x018cb1c0
int sub_018cb1c0(int a0) { return a0; }

struct C_018cb1d0 {
    int sub_018cb1d0();
};

// @baa 0x018cb1d0
int C_018cb1d0::sub_018cb1d0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
}

// @baa 0x018cb1f0
int sub_018cb1f0(void) { return 1073741823; }

struct C_018cb200 {
    int sub_018cb200(int *);
};

extern "C" __declspec(dllimport) int _invalid_parameter_noinfo(...);
// @baa 0x018cb200
int C_018cb200::sub_018cb200(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_018cb260 {
    int sub_018cb260(int *);
};

// @baa 0x018cb260
int C_018cb260::sub_018cb260(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 1;
}

struct C_018cb290 {
    int sub_018cb290(int *);
};

// @baa 0x018cb290
int C_018cb290::sub_018cb290(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_018cb2f0 {
    int sub_018cb2f0(int *);
};

// @baa 0x018cb2f0
int C_018cb2f0::sub_018cb2f0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_018cb350 { C_018cb350* sub_018cb350(void); };

// @baa 0x018cb350
C_018cb350* C_018cb350::sub_018cb350(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018cb360 { C_018cb360* sub_018cb360(void); };

// @baa 0x018cb360
C_018cb360* C_018cb360::sub_018cb360(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018cb370 { C_018cb370* sub_018cb370(void); };

// @baa 0x018cb370
C_018cb370* C_018cb370::sub_018cb370(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018cb4f0 { C_018cb4f0* sub_018cb4f0(void); };

// @baa 0x018cb4f0
C_018cb4f0* C_018cb4f0::sub_018cb4f0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_018cb500 { C_018cb500* sub_018cb500(int a0); };

// @baa 0x018cb500
C_018cb500* C_018cb500::sub_018cb500(int a0) { return this; }

// @baa 0x018cb580
void sub_018cb580(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x018cb610
void sub_018cb610(undefined1 * param_1, undefined1 * param_2)
{
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_018cb630 { C_018cb630* sub_018cb630(int a0); };

// @baa 0x018cb630
C_018cb630* C_018cb630::sub_018cb630(int a0) { return this; }

// @baa 0x018cb6b0
void sub_018cb6b0(void) {  }

// @baa 0x018cb6c0
void sub_018cb6c0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x018cb6e0
int sub_018cb6e0(int a0) { return a0; }

// @baa 0x018cb730
int sub_018cb730(int a0) { return a0; }

// @baa 0x018cb780
void sub_018cb780(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x018cb7b0
int sub_018cb7b0(int a0) { return a0; }

// @baa 0x018cb810
void sub_018cb810(void) {  }

// @baa 0x018cb820
void sub_018cb820(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x018cb850
void sub_018cb850(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x018cb880
void sub_018cb880(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x018cb8a0
int sub_018cb8a0(int a0) { return a0; }

// @baa 0x018cb8c0
int sub_018cb8c0(int a0) { return *(int*)a0; }

// @baa 0x018cb8d0
int sub_018cb8d0(int a0) { return *(int*)a0; }

// @baa 0x018cb9c0
int sub_018cb9c0(int a0) { return a0; }

// @baa 0x018cb9d0
int sub_018cb9d0(int a0) { return a0; }

struct C_018cb9e0 { int sub_018cb9e0(void); };

// @baa 0x018cb9e0
int C_018cb9e0::sub_018cb9e0(void) { return *(int*)((char*)this + 4); }

int sub_018cbb70(...);
// @baa 0x018cbbd0
int sub_018cbbd0(undefined4 param_1, int param_2, int param_3, int param_4)
{
  int iVar1;
  
  iVar1 = sub_018cbb70(param_1,param_2,param_3);
  if ((iVar1 == 0) && (param_2 == param_3)) {
    return 0;
  }
  if (*(int *)(iVar1 + 4) == param_4) {
    return *(int *)(iVar1 + 8);
  }
  return *(int *)(iVar1 + 4);
}

struct C_018cc920 { C_018cc920* sub_018cc920(int a0); };

// @baa 0x018cc920
C_018cc920* C_018cc920::sub_018cc920(int a0) { return this; }

// @baa 0x018cc930
int sub_018cc930(int param_1)
{
  return param_1 + 0xc;
}

struct C_018cc940 {
    int sub_018cc940();
};

// @baa 0x018cc940
int C_018cc940::sub_018cc940(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) + 4;
}

// @baa 0x018cc980
int sub_018cc980(void) { return 1073741823; }

struct C_018cc9e0 {
    void sub_018cc9e0(int);
};

// @baa 0x018cc9e0
void C_018cc9e0::sub_018cc9e0(int param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_2 + 8);
  *(int *)(param_2 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x11) == '\0') {
    *(int *)(*piVar1 + 4) = param_2;
  }
  piVar1[1] = *(int *)(param_2 + 4);
  if (param_2 == *(int *)(*(int *)(param_1 + 4) + 4)) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2 = *(int **)(param_2 + 4);
  if (param_2 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_2;
    *(int **)(param_2 + 4) = piVar1;
    return;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_2;
  *(int **)(param_2 + 4) = piVar1;
  return;
}

struct C_018cca30 {
    void sub_018cca30(int *);
};

// @baa 0x018cca30
void C_018cca30::sub_018cca30(int * param_2)
{
    int param_1 = (int)this;

  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  *param_2 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x11) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_2;
  }
  *(int *)(iVar1 + 4) = param_2[1];
  if (param_2 == *(int **)(*(int *)(param_1 + 4) + 4)) {
    *(int *)(*(int *)(param_1 + 4) + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_2[1];
  if (param_2 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_2;
    param_2[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_2;
  param_2[1] = iVar1;
  return;
}

// @baa 0x018cca90
void __stdcall sub_018cca90(int a0) {  }

struct C_018ccaa0 {
    int * sub_018ccaa0(int, int);
};

// @baa 0x018ccaa0
int * C_018ccaa0::sub_018ccaa0(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == 0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = param_3;
  return param_1;
}

struct C_018ccb00 {
    int sub_018ccb00(int *);
};

// @baa 0x018ccb00
int C_018ccb00::sub_018ccb00(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_018ccb60 {
    int sub_018ccb60(int *);
};

// @baa 0x018ccb60
int C_018ccb60::sub_018ccb60(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 1;
}

struct C_018ccb90 {
    int sub_018ccb90(int *);
};

// @baa 0x018ccb90
int C_018ccb90::sub_018ccb90(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_018ccbf0 {
    int sub_018ccbf0(int *);
};

// @baa 0x018ccbf0
int C_018ccbf0::sub_018ccbf0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

struct C_018ccec0 { C_018ccec0* sub_018ccec0(int a0, int a1); };

// @baa 0x018ccec0
C_018ccec0* C_018ccec0::sub_018ccec0(int a0, int a1) { return this; }

// @baa 0x018cced0
void __stdcall sub_018cced0(int a0) {  }

struct C_018ccf40 {
    undefined4 sub_018ccf40();
};

int sub_018cb510(void);
// @baa 0x018ccf40
undefined4 C_018ccf40::sub_018ccf40(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_018cb510();
  return param_1;
}

// @baa 0x018ccf50
void sub_018ccf50(void) {  }

// @baa 0x018ccf60
int sub_018ccf60(int a0) { return *(int*)a0; }

// @baa 0x018ccf70
int sub_018ccf70(int a0) { return *(int*)a0; }

struct C_018cd260 {
    int * sub_018cd260(int, int);
};

// @baa 0x018cd260
int * C_018cd260::sub_018cd260(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  *param_1 = 0;
  param_1[1] = param_2;
  if (param_3 == 0) {
    _invalid_parameter_noinfo();
  }
  *param_1 = param_3;
  return param_1;
}

// @baa 0x018cd2c0
void __stdcall sub_018cd2c0(int a0, int a1) {  }

struct C_018cd310 {
    undefined4 sub_018cd310();
};

int sub_018ccc40(void);
// @baa 0x018cd310
undefined4 C_018cd310::sub_018cd310(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_018ccc40();
  return param_1;
}

struct C_018cd520 { C_018cd520* sub_018cd520(int a0, int a1); };

// @baa 0x018cd520
C_018cd520* C_018cd520::sub_018cd520(int a0, int a1) { return this; }

struct C_018cd5b0 {
    undefined4 sub_018cd5b0();
};

// @baa 0x018cd5b0
undefined4 C_018cd5b0::sub_018cd5b0(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_018cb510();
  return param_1;
}

// @baa 0x018cd670
void sub_018cd670(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x018cd700
void sub_018cd700(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x018cd720
void * sub_018cd720(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}

// @baa 0x018cd750
void sub_018cd750(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

// @baa 0x018cd770
void * sub_018cd770(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}

// @baa 0x018cd7a0
void sub_018cd7a0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

struct C_018cdaa0 {
    void sub_018cdaa0();
};

// @baa 0x018cdaa0
void C_018cdaa0::sub_018cdaa0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

struct C_018cdbc0 {
    void sub_018cdbc0(int *);
};

// @baa 0x018cdbc0
void C_018cdbc0::sub_018cdbc0(int * param_2)
{
    int param_1 = (int)this;

  param_2[1] = **(int **)(param_1 + 4);
  *param_2 = param_1;
  return;
}

struct C_018cde10 {
    undefined4 sub_018cde10();
};

// @baa 0x018cde10
undefined4 C_018cde10::sub_018cde10(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_018ccc40();
  return param_1;
}

struct C_018cdf10 {
    void sub_018cdf10();
};

int sub_018cd4e0(void);
// @baa 0x018cdf10
void C_018cdf10::sub_018cdf10(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = sub_018cd4e0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

struct C_018cdf40 { C_018cdf40* sub_018cdf40(int a0, int a1); };

// @baa 0x018cdf40
C_018cdf40* C_018cdf40::sub_018cdf40(int a0, int a1) { return this; }

struct C_018ce470 {
    void sub_018ce470();
};

// @baa 0x018ce470
void C_018ce470::sub_018ce470(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

struct C_018ce550 {
    void sub_018ce550();
};

// @baa 0x018ce550
void C_018ce550::sub_018ce550(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) != 0) {
    sub_00402660(*(int *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}
