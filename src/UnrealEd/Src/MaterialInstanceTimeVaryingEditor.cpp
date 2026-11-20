// MaterialInstanceTimeVaryingEditor.cpp: 12 functions
// Placed here by: class 6, callers 4, neighbours 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0140ada0
IMPLEMENT_CLASS_AT(UMaterialEditorInstanceTimeVarying, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\MaterialInstanceTimeVaryingEditor.cpp", 22);

// @baa 0x0140aeb0
UBOOL UMaterialEditorInstanceTimeVarying::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0140aec0
UBOOL UMaterialEditorInstanceTimeVarying::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_014144b0(); };

// @baa 0x014144b0
void C::sub_014144b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01414510 { void* Data; int Num; int Max; void sub_01414510(); };

// @baa 0x01414510
void C_01414510::sub_01414510() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01414570 { void* Data; int Num; int Max; void sub_01414570(); };

// @baa 0x01414570
void C_01414570::sub_01414570() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_014145d0 { void* Data; int Num; int Max; void sub_014145d0(); };

// @baa 0x014145d0
void C_014145d0::sub_014145d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_005c7a20(void);
extern undefined * g_022814d8;
struct C_01420e40 { undefined4 * sub_01420e40(void); };
// @baa 0x01420e40
undefined4 * C_01420e40::sub_01420e40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022814d8);
  return param_1;
}

// @baa 0x01420e60
// @baa 0x01420f20
// @baa 0x01422100
// @baa 0x014226f0
