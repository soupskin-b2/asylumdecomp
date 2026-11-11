// Engine_0890000.cpp (part 2 of 2): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_0089c3b0(byte);
};

int sub_0053dfa0(...);
int sub_00897b80(void);
// @baa 0x0089c3b0
undefined4 C::sub_0089c3b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00897b80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01ebe858[];
extern char g_01f4d798[];
struct C_0089dcb0 { C_0089dcb0* sub_005c7a20(void); };

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
    AInfo* sub_0089dcb0(void);
};

// @baa 0x0089dcb0
AInfo* AInfo::sub_0089dcb0(void)
{
    ((C_0089dcb0*)this)->sub_005c7a20();
    *(volatile INT*)this = (INT)g_01ebe858;
    DetachFence = 0;
    *(INT*)this = (INT)g_01f4d798;
    return this;
}
