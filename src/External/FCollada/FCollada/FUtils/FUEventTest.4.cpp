// FUEventTest.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FUTAntisocialCallee { int value; };

struct FUTDumbCaller { };

// FUFunctor1<FUTAntisocialCallee,FUTDumbCaller*,void>  (0x01863ba0)
struct FUFunctor1_01863ba0
{
    FUFunctor1_01863ba0(FUTAntisocialCallee* C, FUTDumbCaller* H) : Callee(C), Handle(H) { }
    virtual void operator()() { }
    FUTAntisocialCallee* Callee;
    FUTDumbCaller* Handle;
};

#pragma optimize("", off)
// @baa 0x01863ba0
void sub_01863bb0()
{
    FUFunctor1_01863ba0 F((FUTAntisocialCallee*)0, (FUTDumbCaller*)0);
}

#pragma optimize("", on)
