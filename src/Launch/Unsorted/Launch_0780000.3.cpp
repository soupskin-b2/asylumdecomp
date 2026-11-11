// Launch_0780000.cpp (part 3 of 4): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct UObj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
template<class T>
struct TArray {
    T *Data;
    INT ArrayNum;
    INT ArrayMax;
    INT Num() const { return ArrayNum; }
    T& operator[](INT i)
    {
        if (!(i >= 0 && (i < ArrayNum || (i == 0 && ArrayNum == 0))))
            sub_006311e0("i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0))",
                         "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h",
                         0x230, &g_01e3f3dc);
        return Data[i];
    }
};

struct C {
    int unk0;
    TArray<UObj*> Array;
    void sub_0078f290();
};

// @baa 0x0078f290
void C::sub_0078f290(void)
{
    for (INT i = 0; i < Array.Num(); i++)
        Array[i]->v3();
}
