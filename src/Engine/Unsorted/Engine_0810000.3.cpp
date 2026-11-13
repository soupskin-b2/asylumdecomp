// Engine_0810000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct Singleton_026b0d94
{
    virtual void sub_f000() = 0;
    virtual void sub_f001() = 0;
    virtual void sub_f002() = 0;
    virtual void sub_f003() = 0;
    virtual void sub_f004() = 0;
    virtual void sub_f005() = 0;
    virtual void sub_f006() = 0;
    virtual void sub_f007() = 0;
    virtual void sub_f008() = 0;
    virtual void sub_f009() = 0;
    virtual void sub_f010() = 0;
    virtual void sub_f011() = 0;
    virtual void sub_f012() = 0;
    virtual void sub_f013() = 0;
    virtual void sub_f014() = 0;
    virtual void sub_f015() = 0;
    virtual void sub_f016() = 0;
    virtual void sub_f017() = 0;
    virtual void sub_f018() = 0;
    virtual void sub_f019() = 0;
    virtual void sub_f020() = 0;
    virtual void sub_f021() = 0;
    virtual void sub_f022() = 0;
    virtual void sub_f023() = 0;
    virtual void sub_f024() = 0;
    virtual void sub_f025() = 0;
    virtual void sub_f026() = 0;
    virtual void sub_f027() = 0;
    virtual void sub_f028() = 0;
    virtual void sub_f029() = 0;
    virtual void sub_f030() = 0;
    virtual void sub_f031() = 0;
    virtual void sub_f032() = 0;
    virtual void sub_f033() = 0;
    virtual void sub_f034() = 0;
    virtual void sub_f035() = 0;
    virtual void sub_f036() = 0;
    virtual void sub_f037() = 0;
    virtual void sub_f038() = 0;
    virtual void sub_f039() = 0;
    virtual void sub_f040() = 0;
    virtual void sub_f041() = 0;
    virtual void sub_f042() = 0;
    virtual void sub_f043() = 0;
    virtual void sub_f044() = 0;
    virtual void sub_f045() = 0;
    virtual void sub_f046() = 0;
    virtual void sub_f047() = 0;
    virtual void sub_f048() = 0;
    virtual void sub_f049() = 0;
    virtual void sub_f050() = 0;
    virtual void sub_f051() = 0;
    virtual void sub_f052() = 0;
    virtual void sub_f053() = 0;
    virtual void sub_f054() = 0;
    virtual void sub_f055() = 0;
    virtual void sub_f056() = 0;
    virtual void sub_f057() = 0;
    virtual void sub_f058() = 0;
    virtual void sub_f059() = 0;
    virtual void sub_f060() = 0;
    virtual void sub_f061() = 0;
    virtual void sub_f062() = 0;
    virtual void sub_f063() = 0;
    virtual void sub_f064() = 0;
    virtual void sub_f065() = 0;
    virtual void sub_f066() = 0;
    virtual void sub_f067() = 0;
    virtual void sub_f068() = 0;
    virtual void sub_f069() = 0;
    virtual void sub_f070() = 0;
    virtual void sub_f071() = 0;
    virtual void sub_f072() = 0;
    virtual void sub_f073() = 0;
    virtual void sub_f074() = 0;
    virtual void sub_f075() = 0;
    virtual void sub_f076() = 0;
    virtual void sub_f077() = 0;
    virtual void sub_f078() = 0;
    virtual void sub_f079() = 0;
    virtual void sub_f080() = 0;
    virtual void sub_f081() = 0;
    virtual void sub_f082() = 0;
    virtual void sub_f083() = 0;
    virtual void sub_f084() = 0;
    virtual void sub_f085() = 0;
    virtual void sub_f086() = 0;
    virtual void sub_f087() = 0;
    virtual void sub_f088() = 0;
    virtual void sub_f089() = 0;
    virtual void sub_f090() = 0;
    virtual void sub_f091() = 0;
    virtual void sub_f092() = 0;
    virtual void sub_f093() = 0;
    virtual void sub_f094() = 0;
    virtual void sub_f095() = 0;
    virtual void sub_f096() = 0;
    virtual void sub_f097() = 0;
    virtual void sub_f098() = 0;
    virtual void sub_f099() = 0;
    virtual void sub_f100() = 0;
    virtual void sub_f101() = 0;
    virtual void sub_f102() = 0;
    virtual void sub_f103() = 0;
    virtual void sub_f104() = 0;
    virtual void sub_f105() = 0;
    virtual void sub_f106() = 0;
    virtual void sub_f107() = 0;
    virtual void sub_f108() = 0;
    virtual void sub_f109() = 0;
    virtual void sub_f110() = 0;
    virtual void sub_f111() = 0;
    virtual void sub_f112() = 0;
    virtual void sub_f113() = 0;
    virtual void sub_f114() = 0;
    virtual void sub_f115() = 0;
    virtual void sub_f116() = 0;
    virtual void sub_f117() = 0;
    virtual void sub_f118() = 0;
    virtual void sub_f119() = 0;
    virtual void sub_f120() = 0;
    virtual void sub_f121() = 0;
    virtual void sub_f122() = 0;
    virtual void sub_f123() = 0;
    virtual void sub_f124() = 0;
    virtual void sub_f125() = 0;
    virtual void sub_f126() = 0;
    virtual void sub_f127() = 0;
    virtual void sub_f128() = 0;
    virtual void sub_f129() = 0;
    virtual void sub_f130() = 0;
    virtual void sub_f131() = 0;
    virtual void sub_f132() = 0;
    virtual void sub_f133() = 0;
    virtual void sub_f134() = 0;
    virtual void sub_f135() = 0;
    virtual void sub_f136() = 0;
    virtual void sub_f137() = 0;
    virtual void sub_f138() = 0;
    virtual void sub_f139() = 0;
    virtual void sub_f140() = 0;
    virtual void sub_f141() = 0;
    virtual void sub_238(DWORD Value) = 0;
};

extern Singleton_026b0d94* g_026b0d94;
struct C_SingletonClient
{
    void* Pad_00;
    DWORD Field_04;
    void sub_008136d0();
};

// @baa 0x008136d0
void C_SingletonClient::sub_008136d0()
{
    if (Field_04 != 0)
    {
        g_026b0d94->sub_238(Field_04);
    }
}

/* Kit gaps: FString::Printf (VarArgs.h; this no-argument instance is out of line, 00604700) and FString's
 * operator* (UnString.h) aren't declared, nor is the navigation list check (UnPath.cpp, 009cb9d0). */
struct FString_ : public FString
{
	static FString Printf(const TCHAR* Fmt);
	FORCEINLINE const TCHAR* operator*() const { return Num() ? &(*this)(0) : TEXT(""); }
};

void VerifyNavList(const TCHAR* DebugTxt, UBOOL bArg);
// @baa 0x00815340
	/* 0x009cb9d0 */
void AWorldInfo::VerifyNavList()
{
	::VerifyNavList(*(const FString_&)FString_::Printf(TEXT("From script...")), FALSE);
}
