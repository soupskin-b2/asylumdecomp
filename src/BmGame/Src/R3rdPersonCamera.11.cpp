// R3rdPersonCamera.cpp (part 11 of 12): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_01ebe858[];
extern char g_023813b0[];
struct C { C* sub_005c7a20(void); };

/* ARScarecrowCamera::ARScarecrowCamera(): its base classes declare their constructors out of line in Classes.h, but here the
 * base chain is inlined (UObject(), AActor's vtable and DetachFence), so it is written on a stand-in. */
struct C_0169eab0 {
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
    C_0169eab0* sub_0169eab0(void);
};

// @baa 0x0169eab0
C_0169eab0* C_0169eab0::sub_0169eab0(void)
{
    ((C*)this)->sub_005c7a20();
    *(volatile INT*)this = (INT)g_01ebe858;
    DetachFence = 0;
    *(INT*)this = (INT)g_023813b0;
    return this;
}
