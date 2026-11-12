// FUFunctorTest.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// 01865490: FUFunctor1<FUTestClass,long,void> constructor.
// Stores the vtable pointer, the class pointer (FUTestClass*) and the long value.
class FTestClass;
struct FUFunctorTestLong
{
    FUFunctorTestLong(FTestClass* InTestClass, long InValue);

    virtual void operator()();

private:
    FTestClass* TestClass;
    long Value;
};

// @baa 0x01865490
// 0x01865490
FUFunctorTestLong::FUFunctorTestLong(FTestClass* InTestClass, long InValue)
    : TestClass(InTestClass)
    , Value(InValue)
{
}

struct FUFunctor0_FUTestClass_void
{
	virtual void Test();

	void *First;
	void *Second;

	FUFunctor0_FUTestClass_void(void *InFirst, void *InSecond);
};

// @baa 0x01865400
FUFunctor0_FUTestClass_void::FUFunctor0_FUTestClass_void(void *InFirst, void *InSecond)
	: First(InFirst)
	, Second(InSecond)
{
}

// 0x01865520: constructor for FUFunctor2<FUTestClass, long, long const &, void>
// (External/FCollada/FCollada/FUtils/FUFunctorTest.cpp)
// Layout: +0x00 vtable, +0x04 TestClass*, +0x08 Long.
struct FUTestClass;
struct FUFunctor2 {
    FUFunctor2(FUTestClass* InTestClass, long InLong);
    virtual void operator()() const;
private:
    FUTestClass* TestClass;
    long Long;
};

// @baa 0x01865520
FUFunctor2::FUFunctor2(FUTestClass* InTestClass, long InLong)
    : TestClass(InTestClass),
      Long(InLong)
{
}

// 0x018656a0: constructor of FUFunctor0<FUTestClass2, void>
// Stores its vtable, then the two bound arguments.
struct FUFunctor0_FUTestClass2 {
    virtual int operator()(int A0, int A1) = 0;
    FUFunctor0_FUTestClass2(void* A0, void* A1);
    void* m_A0;
    void* m_A1;
};

// @baa 0x018656a0
// @baa 0x018656a0
FUFunctor0_FUTestClass2::FUFunctor0_FUTestClass2(void* A0, void* A1)
{
    m_A0 = A0;
    m_A1 = A1;
}

// 018657d0: ctor of FUFunctor2<FUTestClass2,long,long_const_,void>
// Stores two stored arguments, plus the vtable of the (virtual) functor.
struct FUFunctor2_018657d0 {
    int Arg1; // 0x04
    int Arg2; // 0x08
    virtual void operator()() {}

    FUFunctor2_018657d0(int a1, int a2);
};

// @baa 0x018657d0
FUFunctor2_018657d0::FUFunctor2_018657d0(int a1, int a2) : Arg1(a1), Arg2(a2)
{
}

// A two-slot bound functor used in the FCollada unit tests: its layout is a
// vtable pointer, the caller pointer and the bound value. The constructor at
// 0x01865730 initializes all three.
class FUFunctor2_01865730
{
public:
    virtual void Call();
    void*  Caller;    // 0x04
    long   Value;     // 0x08

    FUFunctor2_01865730(void* InCaller, long InValue);
};

// @baa 0x01865730
// 0x01865730
FUFunctor2_01865730::FUFunctor2_01865730(void* InCaller, long InValue)
{
    Caller = InCaller;
    Value = InValue;
}

// 0x018655b0: constructor of FUFunctor1<FUTestClass,long,long>
// (External/FCollada/FCollada/FUtils/FUFunctorTest.cpp)
extern char g_023eaedc[];
 // FUFunctor1<FUTestClass,long,long>::vftable
struct FUFunctor1LL {
    void** Vtable;
    long First;
    long Second;

    // 0x018655b0
    FUFunctor1LL* sub_018655b0(long A, long B);
};

// @baa 0x018655b0
FUFunctor1LL* FUFunctor1LL::sub_018655b0(long A, long B)
{
    Vtable = (void**)&g_023eaedc;
    First = A;
    Second = B;
    return this;
}
