// TTFontImport.cpp (part 1 of 2): 36 functions
// Placed here by: neighbours 19, class 12, file 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Map.h"

int sub_005e1960(...);
int sub_00d19740(...);
int sub_00d19800(void);
extern undefined4 g_026667a8;
extern undefined4 g_026c5648;
// @baa 0x00ec2f00
void sub_00ec2f00(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026c5648 == 0) {
    g_026c5648 = sub_00d19740(L"Engine");
    sub_00d19800();
  }
  sub_005e1960(g_026c5648,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00ec6800
IMPLEMENT_CLASS_AT(UTrueTypeFontFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\TTFontImport.cpp", 9);

// @baa 0x00ec6910
UBOOL UTrueTypeFontFactory::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00ec6920
UBOOL UTrueTypeFontFactory::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ec6960
UBOOL UTrueTypeMultiFontFactory::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00ed81e0
// @baa 0x00ed8240
// @baa 0x00eda690
IMPLEMENT_CLASS_AT(UTrueTypeMultiFontFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\TTFontImport.cpp", 10);

// @baa 0x00eda720
struct C {
    void sub_00edc860();
    int sub_00ed7440(int);
};

// @baa 0x00edc860
void C::sub_00edc860(void)
{
    int param_1 = (int)this;
  ((C *)((*(char **)((char *)this + 0x10))))->sub_00ed7440(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00edc880 {
    void sub_00edc880();
    int sub_00ed74c0(int);
};

// @baa 0x00edc880
void C_00edc880::sub_00edc880(void)
{
    int param_1 = (int)this;
  ((C_00edc880 *)((*(char **)((char *)this + 0x10))))->sub_00ed74c0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00edc8a0 {
    void sub_00edc8a0();
    int sub_00ed7710(int);
};

// @baa 0x00edc8a0
void C_00edc8a0::sub_00edc8a0(void)
{
    int param_1 = (int)this;
  ((C_00edc8a0 *)((*(char **)((char *)this + 0x10))))->sub_00ed7710(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00edcfb0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00edcfb0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00edcfb0
FSparseArrayConstIt_00edcfb0::FSparseArrayConstIt_00edcfb0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

void sub_00ed7ff0();
// @baa 0x00edd4a0
void sub_00edd4a0(void) { sub_00ed7ff0(); }

struct C_00edd4d0 { C_00edd4d0* sub_00edd4d0(void); };

// @baa 0x00edd4d0
C_00edd4d0* C_00edd4d0::sub_00edd4d0(void) { return this; }

// @baa 0x00edd4e0
// @baa 0x00edd500
// @baa 0x00eddf10
// @baa 0x00eddfd0
struct C_00ede940 {
    void sub_00ede940(undefined4);
    int sub_00edb560();
};

int sub_0183dec0(...);
// @baa 0x00ede940
void C_00ede940::sub_00ede940(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_0183dec0(*param_1,param_2);
  ((C_00ede940 *)(this))->sub_00edb560();
  return;
}

struct C_00edfe00 {
    int sub_00edfe00();
};

int sub_00ed7ab0(void);
// @baa 0x00edfe00
int C_00edfe00::sub_00edfe00(void)
{
    int param_1 = (int)this;

  sub_00ed7ab0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00edfe20 {
    int sub_00edfe20();
};

int sub_00ed7b10(void);
// @baa 0x00edfe20
int C_00edfe20::sub_00edfe20(void)
{
    int param_1 = (int)this;

  sub_00ed7b10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00edfe40 {
    int sub_00edfe40();
};

int sub_00ed7b70(void);
// @baa 0x00edfe40
int C_00edfe40::sub_00edfe40(void)
{
    int param_1 = (int)this;

  sub_00ed7b70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00edff20 {
    int sub_00edff20();
};

int sub_00ed7bd0(void);
// @baa 0x00edff20
int C_00edff20::sub_00edff20(void)
{
    int param_1 = (int)this;

  sub_00ed7bd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00ee0020
IMPLEMENT_CLASS_AT(UBrushBuilder, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UBrushBuilder.cpp", 155);

int sub_005c7a20(void);
extern undefined * g_02132968;
struct C_00ee00b0 { undefined4 * sub_00ee00b0(void); };
// @baa 0x00ee00b0
undefined4 * C_00ee00b0::sub_00ee00b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02132968);
  return param_1;
}

// @baa 0x00ee00d0
extern undefined * g_02132aa8;
struct C_00ee00f0 { undefined4 * sub_00ee00f0(void); };
// @baa 0x00ee00f0
undefined4 * C_00ee00f0::sub_00ee00f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02132aa8);
  return param_1;
}

// @baa 0x00ee0110
IMPLEMENT_CLASS_AT(UCubeBuilder, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UBrushBuilder.cpp", 157);

// @baa 0x00ee0170
int sub_00ec6430(void);
int sub_00edd540(...);
extern undefined4 g_026ccb80;
// @baa 0x00ee01a0
int sub_00ee01a0(void)
{
  if (g_026ccb80 == 0) {
    g_026ccb80 = sub_00edd540(L"Editor");
    sub_00ec6430();
  }
  return g_026ccb80;
}

int sub_00ec6800(void);
int sub_00eddf10(...);
extern undefined4 g_026ccb84;
// @baa 0x00ee01d0
int sub_00ee01d0(void)
{
  if (g_026ccb84 == 0) {
    g_026ccb84 = sub_00eddf10(L"Editor");
    sub_00ec6800();
  }
  return g_026ccb84;
}

// @baa 0x00ee0610
// @baa 0x00ee0720
UBOOL UTrueTypeMultiFontFactory::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ec9c20
void UTrueTypeFontFactory::InitializeIntrinsicPropertyValues()
{
	SupportedClass = UFont::StaticClass();
	bCreateNew = TRUE;
	bEditAfterNew = TRUE;
	AutoPriority = INDEX_NONE;
	Description = TEXT("Font Imported From TrueType");
}

// @baa 0x00ec9c70
void UTrueTypeMultiFontFactory::InitializeIntrinsicPropertyValues()
{
	/* UTrueTypeFontFactory::InitializeIntrinsicPropertyValues, inlined */
	SupportedClass = UFont::StaticClass();
	bCreateNew = TRUE;
	bEditAfterNew = TRUE;
	AutoPriority = INDEX_NONE;
	Description = TEXT("Font Imported From TrueType");
	SupportedClass = UMultiFont::StaticClass();
	Description = TEXT("MultiFont Imported From TrueType");
}
