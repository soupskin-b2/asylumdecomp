// CommonGameClasses.cpp (part 10 of 12): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_01ebe858[];
extern char g_022e0238[];
struct C { C* sub_005c7a20(void); };

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
    AInfo* sub_01530660(void);
};

// @baa 0x01530660
AInfo* AInfo::sub_01530660(void)
{
    ((C*)this)->sub_005c7a20();
    *(volatile INT*)this = (INT)g_01ebe858;
    DetachFence = 0;
    *(INT*)this = (INT)g_022e0238;
    return this;
}
