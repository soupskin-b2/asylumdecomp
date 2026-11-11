// Engine_1a20000.cpp (part 2 of 3): 40 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FDelegate;
struct FObj {
    int Unk00; // 0x00
    int Unk04; // 0x04
    void (__stdcall *Handler)(FDelegate*); // 0x08
};

struct FDelegate {
    FObj* Obj; // 0x00
};

struct C {
    FDelegate* Delegate; // 0x00
    void sub_01a27ff0();
};

// @baa 0x01a27ff0
void C::sub_01a27ff0()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a28030 {
    FDelegate* Delegate; // 0x00
    void sub_01a28030();
};

// @baa 0x01a28030
void C_01a28030::sub_01a28030()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a28060 {
    FDelegate* Delegate; // 0x00
    void sub_01a28060();
};

// @baa 0x01a28060
void C_01a28060::sub_01a28060()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a28090 {
    FDelegate* Delegate; // 0x00
    void sub_01a28090();
};

// @baa 0x01a28090
void C_01a28090::sub_01a28090()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a280e0 {
    FDelegate* Delegate; // 0x00
    void sub_01a280e0();
};

// @baa 0x01a280e0
void C_01a280e0::sub_01a280e0()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a28110 {
    FDelegate* Delegate; // 0x00
    void sub_01a28110();
};

// @baa 0x01a28110
void C_01a28110::sub_01a28110()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a28140 {
    FDelegate* Delegate; // 0x00
    void sub_01a28140();
};

// @baa 0x01a28140
void C_01a28140::sub_01a28140()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a28180 {
    FDelegate* Delegate; // 0x00
    void sub_01a28180();
};

// @baa 0x01a28180
void C_01a28180::sub_01a28180()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a281d0 {
    FDelegate* Delegate; // 0x00
    void sub_01a281d0();
};

// @baa 0x01a281d0
void C_01a281d0::sub_01a281d0()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a28200 {
    FDelegate* Delegate; // 0x00
    void sub_01a28200();
};

// @baa 0x01a28200
void C_01a28200::sub_01a28200()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a28230 {
    FDelegate* Delegate; // 0x00
    void sub_01a28230();
};

// @baa 0x01a28230
void C_01a28230::sub_01a28230()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a28280 {
    FDelegate* Delegate; // 0x00
    void sub_01a28280();
};

// @baa 0x01a28280
void C_01a28280::sub_01a28280()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a282b0 {
    FDelegate* Delegate; // 0x00
    void sub_01a282b0();
};

// @baa 0x01a282b0
void C_01a282b0::sub_01a282b0()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a287c0 {
    FDelegate* Delegate; // 0x00
    void sub_01a287c0();
};

// @baa 0x01a287c0
void C_01a287c0::sub_01a287c0()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a28800 {
    FDelegate* Delegate; // 0x00
    void sub_01a28800();
};

// @baa 0x01a28800
void C_01a28800::sub_01a28800()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a28830 {
    FDelegate* Delegate; // 0x00
    void sub_01a28830();
};

// @baa 0x01a28830
void C_01a28830::sub_01a28830()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a291e0 {
    FDelegate* Delegate; // 0x00
    void sub_01a291e0();
};

// @baa 0x01a291e0
void C_01a291e0::sub_01a291e0()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a29b20 {
    FDelegate* Delegate; // 0x00
    void sub_01a29b20();
};

// @baa 0x01a29b20
void C_01a29b20::sub_01a29b20()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a29b30 {
    FDelegate* Delegate; // 0x00
    void sub_01a29b30();
};

// @baa 0x01a29b30
void C_01a29b30::sub_01a29b30()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a29bb0 {
    FDelegate* Delegate; // 0x00
    void sub_01a29bb0();
};

// @baa 0x01a29bb0
void C_01a29bb0::sub_01a29bb0()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a29bc0 {
    FDelegate* Delegate; // 0x00
    void sub_01a29bc0();
};

// @baa 0x01a29bc0
void C_01a29bc0::sub_01a29bc0()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a29bd0 {
    FDelegate* Delegate; // 0x00
    void sub_01a29bd0();
};

// @baa 0x01a29bd0
void C_01a29bd0::sub_01a29bd0()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a29be0 {
    FDelegate* Delegate; // 0x00
    void sub_01a29be0();
};

// @baa 0x01a29be0
void C_01a29be0::sub_01a29be0()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a29c10 {
    FDelegate* Delegate; // 0x00
    void sub_01a29c10();
};

// @baa 0x01a29c10
void C_01a29c10::sub_01a29c10()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a29c20 {
    FDelegate* Delegate; // 0x00
    void sub_01a29c20();
};

// @baa 0x01a29c20
void C_01a29c20::sub_01a29c20()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a29c30 {
    FDelegate* Delegate; // 0x00
    void sub_01a29c30();
};

// @baa 0x01a29c30
void C_01a29c30::sub_01a29c30()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a29c40 {
    FDelegate* Delegate; // 0x00
    void sub_01a29c40();
};

// @baa 0x01a29c40
void C_01a29c40::sub_01a29c40()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a29c50 {
    FDelegate* Delegate; // 0x00
    void sub_01a29c50();
};

// @baa 0x01a29c50
void C_01a29c50::sub_01a29c50()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a29c60 {
    FDelegate* Delegate; // 0x00
    void sub_01a29c60();
};

// @baa 0x01a29c60
void C_01a29c60::sub_01a29c60()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a29c70 {
    FDelegate* Delegate; // 0x00
    void sub_01a29c70();
};

// @baa 0x01a29c70
void C_01a29c70::sub_01a29c70()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_01a29e80();
};

// @baa 0x01a29e80
S *S::sub_01a29e80()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_01a29f90 {
    FDelegate* Delegate; // 0x00
    void sub_01a29f90();
};

// @baa 0x01a29f90
void C_01a29f90::sub_01a29f90()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a2a050 {
    FDelegate* Delegate; // 0x00
    void sub_01a2a050();
};

// @baa 0x01a2a050
void C_01a2a050::sub_01a2a050()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a2a060 {
    FDelegate* Delegate; // 0x00
    void sub_01a2a060();
};

// @baa 0x01a2a060
void C_01a2a060::sub_01a2a060()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct S_01a2a630 {
    int Unk00;
};

extern void __cdecl sub_01a298b0(struct S_01a2a630 const &Ref, int Value);
// @baa 0x01a2a630
void __stdcall sub_01a2a630(struct S_01a2a630 const &Ref)
{
    sub_01a298b0(Ref, 0);
}

struct S_01a2a6f0 {
    int Unk00;
};

extern void __cdecl sub_01a29920(struct S_01a2a6f0 const &Ref, int Value);
// @baa 0x01a2a6f0
void __stdcall sub_01a2a6f0(struct S_01a2a6f0 const &Ref)
{
    sub_01a29920(Ref, 0);
}

struct C_01a2aaa0 {
    FDelegate* Delegate; // 0x00
    void sub_01a2aaa0();
};

// @baa 0x01a2aaa0
void C_01a2aaa0::sub_01a2aaa0()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a2b180 {
    FDelegate* Delegate; // 0x00
    void sub_01a2b180();
};

// @baa 0x01a2b180
void C_01a2b180::sub_01a2b180()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct C_01a2b4b0 {
    FDelegate* Delegate; // 0x00
    void sub_01a2b4b0();
};

// @baa 0x01a2b4b0
void C_01a2b4b0::sub_01a2b4b0()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

struct S_01a2b4c0 {
    INT Unk00;
    INT Unk04;
    S_01a2b4c0 *sub_01a2b4c0();
};

// @baa 0x01a2b4c0
S_01a2b4c0 *S_01a2b4c0::sub_01a2b4c0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}
