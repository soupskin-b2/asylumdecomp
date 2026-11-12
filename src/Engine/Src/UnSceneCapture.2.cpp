// UnSceneCapture.cpp (part 2 of 2): 6 functions
// Placed here by: neighbours 4, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_008c10e0(int);
};

int sub_0053df70(...);
// @baa 0x008c10e0
void C::sub_008c10e0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

void sub_008c5a00();
// @baa 0x008cdf50
void sub_008cdf50(void) { sub_008c5a00(); }

// @baa 0x008ce000
void sub_008ce000(void) { sub_008c5a00(); }

// @baa 0x008ce0f0
void sub_008ce0f0(void) { sub_008c5a00(); }

// @baa 0x008ce1c0
void sub_008ce1c0(void) { sub_008c5a00(); }

// Engine_08d0000.cpp (part 3 of 8): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
extern char g_01ebe858[];
extern char g_01f61488[];
struct C_008dd300 { C_008dd300* sub_005c7a20(void); };

struct AInfo {
    INT Unk00;  // 0x00 vtable ptr
    INT Unk04;
    INT Unk08;
    INT Unk0C;
    INT Unk10;
    INT Unk14;
    INT Unk18;
    INT Unk1C;
    INT Unk20;
    INT Unk24;
    INT Unk28;
    INT Unk2C;
    INT Unk30;
    INT Unk34;
    INT Unk38;
    INT Unk3C;
    INT Unk40;
    INT Unk44;
    INT Unk48;
    INT Unk4C;
    INT Unk50;
    INT Unk54;
    INT Unk58;
    INT Unk5C;
    INT Unk60;
    INT Unk64;
    INT Unk68;
    INT Unk6C;
    INT Unk70;
    INT Unk74;
    INT Unk78;
    INT Unk7C;
    INT Unk80;
    INT Unk84;
    INT DetachFence; // 0x88
    AInfo* sub_008dd300(void);
};

// @baa 0x008dd300
AInfo* AInfo::sub_008dd300(void)
{
    ((C_008dd300*)this)->sub_005c7a20();
    *(volatile INT*)this = (INT)g_01ebe858;
    DetachFence = 0;
    *(INT*)this = (INT)g_01f61488;
    return this;
}
