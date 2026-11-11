// FMOD_17f0000.cpp (part 2 of 2): 11 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct V_017f6730 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void g();
};

struct O_017f6730 { char pad[16]; V_017f6730* p; void sub_017f6730(); };

// @baa 0x017f6730
void O_017f6730::sub_017f6730() { p->g(); }

struct M_017f6740 { void sub_017fb270(); };

struct C { char pad[44]; M_017f6740 m; void sub_017f6740(); };

// @baa 0x017f6740
void C::sub_017f6740() { m.sub_017fb270(); }

struct M_017f6750 { void sub_017fb020(); };

struct C_017f6750 { char pad[72]; M_017f6750 m; void sub_017f6750(); };

// @baa 0x017f6750
void C_017f6750::sub_017f6750() { m.sub_017fb020(); }

struct M_017f6760 { void sub_017fb040(); };

struct C_017f6760 { char pad[72]; M_017f6760 m; void sub_017f6760(); };

// @baa 0x017f6760
void C_017f6760::sub_017f6760() { m.sub_017fb040(); }

struct V_017f6770 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void g();
};

struct O_017f6770 { char pad[60]; V_017f6770* p; void sub_017f6770(); };

// @baa 0x017f6770
void O_017f6770::sub_017f6770() { p->g(); }

struct M_017f6780 { void sub_017fb610(); };

struct C_017f6780 { char pad[44]; M_017f6780 m; void sub_017f6780(); };

// @baa 0x017f6780
void C_017f6780::sub_017f6780() { m.sub_017fb610(); }

struct M_017f6790 { void sub_017fb660(); };

struct C_017f6790 { char pad[44]; M_017f6790 m; void sub_017f6790(); };

// @baa 0x017f6790
void C_017f6790::sub_017f6790() { m.sub_017fb660(); }

struct C_017f67d0 { int a, b; C_017f67d0(int, int); };

// @baa 0x017f67d0
C_017f67d0::C_017f67d0(int x, int y) : a(x), b(y) {}

struct FMOD_RefCountCondition {
    char pad_00[0x0c];
    DWORD count;
    FMOD_RefCountCondition* sub_017f8580();
};

// @baa 0x017f8580
FMOD_RefCountCondition* FMOD_RefCountCondition::sub_017f8580()
{
    ++count;
    return this;
}

struct C_017fa550 {
    DWORD _0x00;
    FLOAT _0x04;
    void sub_017fa550(FLOAT f);
};

// @baa 0x017fa550
void C_017fa550::sub_017fa550(FLOAT f)
{
    _0x04 = f;
}

struct C_017fbc40 {
    int sub_017fbc40();
    int sub_017fbc10();
    int sub_017fb190();
};

// @baa 0x017fbc40
int C_017fbc40::sub_017fbc40(void)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_017fbc40 *)(this))->sub_017fbc10();
  if (iVar1 == 0) {
    iVar1 = ((C_017fbc40 *)(this))->sub_017fb190();
    if (iVar1 == 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 8) = 1;
      iVar1 = 0;
    }
  }
  return iVar1;
}
