// FxRenderWidgetUE3.cpp (part 2 of 2): 8 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00410220(int);
};

extern "C" __declspec(dllimport) int memmove(...);
// @baa 0x00410220
void C::sub_00410220(int param_2)
{
    int * param_1 = (int *)this;

  void *_Dst;
  
  _Dst = (void *)(*param_1 + param_2 * 4);
  memmove(_Dst,(void *)((int)_Dst + 4),(param_1[2] - param_2) * 4 - 4);
  param_1[2] = param_1[2] + -1;
  *(undefined4 *)(*param_1 + param_1[2] * 4) = 0;
  return;
}

struct FWidgetItem
{
	UINT Unknown;
	UINT Count;
};

// @baa 0x00410dc0
UINT sub_00410dc0(FWidgetItem* Item)
{
	return (Item->Count * 16) / 8;
}

// @baa 0x00410210
UINT sub_00410210(FWidgetItem* Item)
{
	return (Item->Count * 16) / 8;
}

struct __declspec(dllimport) wxDialogBase {
protected:
    void EndDialog(int);
};

struct C_0040fa30 : public wxDialogBase {
    void sub_0040bc60();
    void sub_0040fa30(int);
};

// @baa 0x0040fa30
void C_0040fa30::sub_0040fa30(int)
{
    sub_0040bc60();
    EndDialog(0x13ec);
}

int sub_01ab3290(void*, int);
struct FArray_00410840
{
    void* Data;
    int Count;
    void sub_00410840();
};

// @baa 0x00410840
void FArray_00410840::sub_00410840()
{
    if (Data)
        sub_01ab3290(Data, Count * 8);
    Data = 0;
    Count = 0;
}

struct FIntArray_0040fe90
{
    int* Data;
    int Num;
    int sub_0040fe90(const int& Value);
};

// @baa 0x0040fe90
int FIntArray_0040fe90::sub_0040fe90(const int& Value)
{
    int* End = Data + Num;
    for (int* p = Data; p < End; p++)
    {
        if (*p == Value)
            return (int)(p - Data);
    }
    return -1;
}

int sub_01ab3960(int);
int sub_01a375f0(void*, void*, int);
struct FArray_004101c0
{
    void* Data;
    unsigned int Num;
    FArray_004101c0& sub_004101c0(FArray_004101c0& Src);
};

// @baa 0x004101c0
FArray_004101c0& FArray_004101c0::sub_004101c0(FArray_004101c0& Src)
{
    Data = 0;
    Num = Src.Num;
    unsigned int Size = Num * 8;
    if (Num > 0 && Size > 0)
    {
        Data = (void*)sub_01ab3960(Size);
        if (Data && Src.Data)
            sub_01a375f0(Data, Src.Data, Size);
    }
    return *this;
}

typedef void (__thiscall *PUpdateFunc)(void*, float, float);

struct Outer_004112d0
{
    char pad[0x1bc];
    void* Listener;
    char pad2[0x314 - 0x1c0];
    int CallCount;
};

struct C_004112d0
{
    char pad[0x160];
    Outer_004112d0* field_160;
    void sub_0040f110();
    void sub_004112d0(float);
};

// @baa 0x004112d0
void C_004112d0::sub_004112d0(float Param)
{
    if (field_160)
    {
        field_160->CallCount++;
        if (field_160->Listener)
        {
            PUpdateFunc Fn = (PUpdateFunc)((void**)*(void**)field_160->Listener)[0x134 / 4];
            Fn(field_160->Listener, Param, 1.0f);
        }
        sub_0040f110();
    }
}
