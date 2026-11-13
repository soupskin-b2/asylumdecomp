// FUEventTest.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// 0x01863930: constructor of FUFunctor0<FUTAntisocialCallee, void>
// Stores its vtable, then the two bound arguments.
struct FUFunctor0_FUTAntisocialCallee {
    virtual int operator()(int A0, int A1) = 0;
    FUFunctor0_FUTAntisocialCallee(void* A0, void* A1);
    void* m_A0;
    void* m_A1;
};

// @baa 0x01863930
// @baa 0x01863930
FUFunctor0_FUTAntisocialCallee::FUFunctor0_FUTAntisocialCallee(void* A0, void* A1)
{
    m_A0 = A0;
    m_A1 = A1;
}

// FUFunctor2<FUTAntisocialCallee,FUTDumbCaller*,long,void>: a two-slot bound functor.
// Its layout is a vtable pointer, the caller pointer and the bound value. The constructor
// at 0x018639c0 initializes all three.
class FUFunctor2_018639c0
{
public:
    virtual void Call();
    void*  Caller;    // 0x04
    long   Value;     // 0x08

    FUFunctor2_018639c0(void* InCaller, long InValue);
};

// @baa 0x018639c0
// 0x018639c0
FUFunctor2_018639c0::FUFunctor2_018639c0(void* InCaller, long InValue)
{
    Caller = InCaller;
    Value = InValue;
}

// FUFunctor2<FUTCallee,long,long,void> (FUEventTest.cpp)
struct FUFunctor2_
{
    virtual void operator()(long A, long B);
    long A;
    long B;
    FUFunctor2_(long ArgA, long ArgB);
};

// 0x01863880
FUFunctor2_::FUFunctor2_(long ArgA, long ArgB)
    : A(ArgA), B(ArgB)
{
}

// @baa 0x01863880
void FUFunctor2_::operator()(long A, long B)
{
}

// FUEvent: a null callback and three false flags, cleared from the last one back.
struct FListener_
{
	void* Callback;
	BYTE Third;
	BYTE Second;
	BYTE First;
	FListener_();
};

// @baa 0x01863380
FListener_::FListener_()
{
	Callback = NULL;
	First = 0;
	Second = 0;
	Third = 0;
}

// FMTailLink: the tail of a circular list, which points back at its anchor.
struct FMTailLink_
{
	void* Anchor;
	FMTailLink_* Self;
};

// FMListAnchor: an entry count and a circular link list rooted at the anchor.
struct FMListAnchor_
{
	void* Head;
	int Count;
	FMTailLink_ Tail;
	FMListAnchor_();
};

// @baa 0x01863760
FMListAnchor_::FMListAnchor_()
{
	Head = NULL;
	Count = 0;
	Tail.Anchor = NULL;
	Tail.Self = &Tail;
}

// FMTailLink_01863790: the tail of a circular list, which points back at its anchor.
struct FMTailLink_01863790
{
	void* Anchor;
	FMTailLink_01863790* Self;
};

// FMListAnchor_01863790: an entry pointer and a circular link list rooted at the anchor.
struct FMListAnchor_01863790
{
	void* Head;
	int Count;
	FMTailLink_01863790 Tail;
	FMListAnchor_01863790();
};

// @baa 0x01863790
FMListAnchor_01863790::FMListAnchor_01863790()
{
	Head = NULL;
	Count = 0;
	Tail.Anchor = NULL;
	Tail.Self = &Tail;
}

// FMTailLink_018637c0: the tail of a circular list, which points back at its anchor.
struct FMTailLink_018637c0
{
	void* Anchor;
	FMTailLink_018637c0* Self;
};

// FMListAnchor_018637c0: an entry pointer and a circular link list rooted at the anchor.
struct FMListAnchor_018637c0
{
	void* Head;
	int Count;
	FMTailLink_018637c0 Tail;
	FMListAnchor_018637c0();
};

// @baa 0x018637c0
FMListAnchor_018637c0::FMListAnchor_018637c0()
{
	Head = NULL;
	Count = 0;
	Tail.Anchor = NULL;
	Tail.Self = &Tail;
}

// FMTailLink_01863ca0: the tail of a circular list, which points back at its anchor.
struct FMTailLink_01863ca0
{
	void* Anchor;
	FMTailLink_01863ca0* Self;
};

// FMListAnchor_01863ca0: an entry pointer and a circular link list rooted at the anchor.
struct FMListAnchor_01863ca0
{
	void* Head;
	int Count;
	FMTailLink_01863ca0 Tail;
	FMListAnchor_01863ca0();
};

// @baa 0x01863ca0
FMListAnchor_01863ca0::FMListAnchor_01863ca0()
{
	Head = NULL;
	Count = 0;
	Tail.Anchor = NULL;
	Tail.Self = &Tail;
}
