// FMOD_17d0000.cpp (part 2 of 2): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct V_017d7eb0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void g();
};

struct O_017d7eb0 { char pad[320]; V_017d7eb0* p; void sub_017d7eb0(); };

// @baa 0x017d7eb0
void O_017d7eb0::sub_017d7eb0() { p->g(); }

struct V_017db3a0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void g(int a0);
};

struct O_017db3a0 { char pad[320]; V_017db3a0* p; void sub_017db3a0(int a0); };

// @baa 0x017db3a0
void O_017db3a0::sub_017db3a0(int a0) { p->g(a0); }
