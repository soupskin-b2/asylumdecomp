// UnAsyncLoading.cpp: 17 functions
// Placed here by: neighbours 15, file 1, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00567190
int UTexture2D::sub_00567190(void) { return *(int*)((char*)this + 144); }

// @baa 0x005671a0
int UTexture2D::sub_005671a0(void) { return *(int*)((char*)this + 140); }

extern int g_026a1cd8;
// @baa 0x0056b000
bool sub_0056b000(void)
{
    return g_026a1cd8 > 0;
}

extern "C" __declspec(dllimport) int __stdcall QueryPerformanceCounter(void*);
extern QWORD g_026760d8;
extern undefined2 g_01e3f3dc;
void sub_005ec9d0(float);
int sub_006311e0(...);
void* sub_01a375f0(void*, const void*, UINT);
struct C {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10();
    virtual INT TotalSize();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual INT Pre(INT, INT);
    char pad[0x7c-4];
    TArray<WORD> Name;
    char pad2[0x8c-0x88];
    INT TotalSz;
    INT CurrentPos;
    INT P94;
    char pad3[0x9c-0x98];
    INT P9c;
    char pad4[0xa4-0xa0];
    INT Pa4;
    char pad5[0xac-0xa8];
    volatile INT Status;
    void sub_0056b560(void* Dest, INT Count);
};

// @baa 0x0056b560
void C::sub_0056b560(void* Dest, INT Count)
{
    QWORD tmp, tmp2;
    if (CurrentPos + Count > TotalSize()) {
        const TCHAR* n;
        if (Name.Num() != 0) {
            if (Name.Num() <= 0) sub_006311e0("i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0))", "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h", 0x236, &g_01e3f3dc);
            n = (const TCHAR*)Name.GetData();
        } else n = (const TCHAR*)&g_01e3f3dc;
        sub_006311e0("CurrentPos + Count <= TotalSize()", "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnAsyncLoading.cpp", 0x792, L"Seeked past end of file %s (%d / %d)", n, CurrentPos + Count, TotalSize(), TotalSz);
    }
    UBOOL t = 0;
    if (CurrentPos < P94 || CurrentPos + Count > P9c) {
        t = 1;
        g_026760d8++;
        QueryPerformanceCounter(&tmp);
        while (!Pre(CurrentPos, Count)) sub_005ec9d0(0.f);
        if (Status) sub_006311e0("PrecacheReadStatus[CURRENT].GetValue() == 0", "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnAsyncLoading.cpp", 0x7a6, L"");
    }
    while (Status) {
        if (!t) { t = 1; g_026760d8++; QueryPerformanceCounter(&tmp2); }
        sub_005ec9d0(0.f);
    }
    sub_01a375f0(Dest, (void*)(Pa4 - P94 + CurrentPos), Count);
    CurrentPos += Count;
}

struct M_00571830 { void sub_0040fcc0(); };

struct C_00571830 { char pad[12]; M_00571830 m; void sub_00571830(); };

// @baa 0x00571830
void C_00571830::sub_00571830() { m.sub_0040fcc0(); }

struct C_00571890 {
    undefined4 * sub_00571890(undefined4 *);
    int sub_00547da0(int);
};

// @baa 0x00571890
undefined4 * C_00571890::sub_00571890(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  ((C_00571890 *)(((char *)this + 0xc)))->sub_00547da0((int)(param_2 + 3));
  return param_1;
}

struct M_00575820 { void sub_005710b0(); };

struct C_00575820 { char pad[24]; M_00575820 m; void sub_00575820(); };

// @baa 0x00575820
void C_00575820::sub_00575820() { m.sub_005710b0(); }

struct C_005758b0 {
    int sub_005758b0(int);
};

// @baa 0x005758b0
int C_005758b0::sub_005758b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_005758d0 {
    int sub_005758d0(int);
};

// @baa 0x005758d0
int C_005758d0::sub_005758d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_005758e0 {
    int sub_005758e0();
};

// @baa 0x005758e0
int C_005758e0::sub_005758e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00575900 {
    int sub_00575900();
};

// @baa 0x00575900
int C_00575900::sub_00575900(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

// @baa 0x005759d0
int UState::sub_005759d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x00575a60
int UState::sub_00575a60(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x14;
}

struct TBitArray {
    int* AllocatorData;
    int NumBits;
    int MaxBits;
    int InlineData[4];
};

struct FBitIterator {
    int WordIndex;
    int Mask;
    const int* WordData;
    int UnvisitedMask;
    int CurrentIndex;
    int BaseIndex;

    FBitIterator(const TBitArray& Array, int StartIndex)
        : WordIndex(StartIndex >> 5)
        , Mask(1 << (StartIndex & 31))
        , WordData(Array.InlineData)
        , UnvisitedMask(~0 << (StartIndex & 31))
        , CurrentIndex(StartIndex)
        , BaseIndex(StartIndex & ~31)
    {
    }
    void FindFirstSetBit();
    void Advance()
    {
        UnvisitedMask &= ~Mask;
        FindFirstSetBit();
    }
};

struct TConstSetBitIterator_00575cb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00575cb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00575cb0& operator++();
};

TConstSetBitIterator_00575cb0::TConstSetBitIterator_00575cb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00575cb0
TConstSetBitIterator_00575cb0& TConstSetBitIterator_00575cb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00575d00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00575d00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00575d00& operator++();
};

TConstSetBitIterator_00575d00::TConstSetBitIterator_00575d00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00575d00
TConstSetBitIterator_00575d00& TConstSetBitIterator_00575d00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00575d50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00575d50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00575d50& operator++();
};

TConstSetBitIterator_00575d50::TConstSetBitIterator_00575d50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00575d50
TConstSetBitIterator_00575d50& TConstSetBitIterator_00575d50::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x016d2920
void sub_016d2920(void) {  }
