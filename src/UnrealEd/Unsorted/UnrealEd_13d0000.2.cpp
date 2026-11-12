// UnrealEd_13d0000.cpp (part 2 of 4): 9 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    undefined4 sub_013dced0(byte);
};

int sub_0053dfa0(...);
int sub_011157c0(void);
// @baa 0x013dced0
undefined4 C::sub_013dced0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011157c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00c38ac0(void);
// @baa 0x013def70
undefined4 UObject::sub_013def70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x013def90
undefined4 UObject::sub_013def90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x013df3c0
undefined4 UObject::sub_013df3c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

INT sub_00dd9e40(void* Value);
struct C_013de900
{
    char pad_00[0xc];
    void* Value;

    INT sub_013de900();
};

// @baa 0x013de900
INT C_013de900::sub_013de900()
{
    return sub_00dd9e40(Value);
}

INT sub_00dbddd0(void* Value);
struct C_013deb40
{
    char pad_00[0xc];
    void* Value;

    INT sub_013deb40();
};

// @baa 0x013deb40
INT C_013deb40::sub_013deb40()
{
    return sub_00dbddd0(Value);
}

struct C_013debb0
{
    char pad_00[0xc];
    void* Value;

    INT sub_013debb0();
};

// @baa 0x013debb0
INT C_013debb0::sub_013debb0()
{
    return sub_00dbddd0(Value);
}

class wxEvent
{
public:
    __declspec(dllimport) void Skip(bool Skip);
};

// @baa 0x013dc5c0
void __stdcall sub_013dc5c0(wxEvent* Event)
{
    Event->Skip(true);
}

// sub_013d2d30: if A (0x190) is set, tail-dispatch B->sub_00cc65f0 (B at 0x1e8);
// else tail-dispatch this->sub_013cbbe0.
struct EngineDispatcher_
{
    BYTE _pad[0x1e8];
    void* sub_00cc65f0();
};

struct EngineDispatchHost_
{
    BYTE _pad0[0x190];
    EngineDispatcher_* B;   // 0x190 (read as pointer, null test)
    BYTE _pad1[0x54];
    EngineDispatcher_* C;   // 0x1e8 (object the taken path dispatches on)

    void* sub_013cbbe0();
    void* sub_013d2d30();
};

// @baa 0x013d2d30
void* EngineDispatchHost_::sub_013d2d30()
{
    if (B == NULL)
        return sub_013cbbe0();
    return C->sub_00cc65f0();
}
