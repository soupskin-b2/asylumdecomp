// FUEventTest.cpp: 32 functions
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

// FMTailLink_01863d20: the tail of a circular list, which points back at its anchor.
struct FMTailLink_01863d20
{
	void* Anchor;
	FMTailLink_01863d20* Self;
};

// FMListAnchor_01863d20: an entry pointer and a circular link list rooted at the anchor.
struct FMListAnchor_01863d20
{
	void* Head;
	int Count;
	FMTailLink_01863d20 Tail;
	FMListAnchor_01863d20();
};

// @baa 0x01863d20
FMListAnchor_01863d20::FMListAnchor_01863d20()
{
	Head = NULL;
	Count = 0;
	Tail.Anchor = NULL;
	Tail.Self = &Tail;
}

// FMTailLink_01863d40: the tail of a circular list, which points back at its anchor.
struct FMTailLink_01863d40
{
	void* Anchor;
	FMTailLink_01863d40* Self;
};

// FMListAnchor_01863d40: an entry pointer and a circular link list rooted at the anchor.
struct FMListAnchor_01863d40
{
	void* Head;
	int Count;
	FMTailLink_01863d40 Tail;
	FMListAnchor_01863d40();
};

// @baa 0x01863d40
FMListAnchor_01863d40::FMListAnchor_01863d40()
{
	Head = NULL;
	Count = 0;
	Tail.Anchor = NULL;
	Tail.Self = &Tail;
}

// FMTailLink_01863d60: the tail of a circular list, which points back at its anchor.
struct FMTailLink_01863d60
{
	void* Anchor;
	FMTailLink_01863d60* Self;
};

// FMListAnchor_01863d60: an entry pointer and a circular link list rooted at the anchor.
struct FMListAnchor_01863d60
{
	void* Head;
	int Count;
	FMTailLink_01863d60 Tail;
	FMListAnchor_01863d60();
};

// @baa 0x01863d60
FMListAnchor_01863d60::FMListAnchor_01863d60()
{
	Head = NULL;
	Count = 0;
	Tail.Anchor = NULL;
	Tail.Self = &Tail;
}

// FMArray: the start of the array's storage, asserting that it holds anything.
struct FMArray_
{
	int Unused;
	unsigned int Size;
	void* Data;
	void* GetData();
};

void FMAssert(const char* File, int Line);
// @baa 0x01863ab0
void* FMArray_::GetData()
{
	if (Size <= 0)
	{
		FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1ef);
	}
	return Data;
}

// FMArray_01863ad0: bounds-asserting access to the array's elements.
struct FMArray_01863ad0
{
	int Unused;
	unsigned int Size;
	int* Data;
	int* GetLast();
};

// @baa 0x01863ad0
int* FMArray_01863ad0::GetLast()
{
	if (Size <= 0)
	{
		FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1f4);
	}
	return &Data[Size - 1];
}

// FMArray_01863b00: bounds-asserting access to the array's elements.
struct FMArray_01863b00
{
	int Unused;
	unsigned int Size;
	void* Data;
	void* GetData();
};

// @baa 0x01863b00
void* FMArray_01863b00::GetData()
{
	if (Size <= 0)
	{
		FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1ef);
	}
	return Data;
}

// FMArray_01863b20: bounds-asserting access to the array's elements.
struct FMArray_01863b20
{
	int Unused;
	unsigned int Size;
	int* Data;
	int* GetLast();
};

// @baa 0x01863b20
int* FMArray_01863b20::GetLast()
{
	if (Size <= 0)
	{
		FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1f4);
	}
	return &Data[Size - 1];
}

// FMArray_01863cf0: the last element, asserting the array holds one.
struct FMArray_01863cf0
{
	int Unused;
	unsigned int Size;
	int* Data;
	int* GetLast();
};

// @baa 0x01863cf0
int* FMArray_01863cf0::GetLast()
{
	if (Size <= 0)
	{
		FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1f4);
	}
	return &Data[Size - 1];
}

// FMArray_01863b70: the last element, asserting the array holds one.
struct FMArray_01863b70
{
	int Unused;
	unsigned int Size;
	int* Data;
	int* GetLast();
};

// @baa 0x01863b70
int* FMArray_01863b70::GetLast()
{
	if (Size <= 0)
	{
		FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1f4);
	}
	return &Data[Size - 1];
}

// FMArray_01863b50: the array's storage, asserting it is not empty.
struct FMArray_01863b50
{
	int Unused;
	unsigned int Size;
	void* Data;
	void* GetData();
};

// @baa 0x01863b50
void* FMArray_01863b50::GetData()
{
	if (Size <= 0)
	{
		FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1ef);
	}
	return Data;
}

// FMArray_01863cd0: the array's storage, asserting it is not empty.
struct FMArray_01863cd0
{
	int Unused;
	unsigned int Size;
	void* Data;
	void* GetData();
};

// @baa 0x01863cd0
void* FMArray_01863cd0::GetData()
{
	if (Size <= 0)
	{
		FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1ef);
	}
	return Data;
}

// FMArray_01863460: element access, asserting the index is in range.
struct FMArray_01863460
{
	int Unused;
	unsigned int Size;
	int* Data;
	int& Get(UINT Index);
};

// @baa 0x01863460
int& FMArray_01863460::Get(UINT Index)
{
	if (Index >= Size)
	{
		FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1fa);
	}
	return Data[Index];
}

// FMArray_01863490: element access, asserting the index is in range.
struct FMArray_01863490
{
	int Unused;
	unsigned int Size;
	int* Data;
	int& Get(UINT Index);
};

// @baa 0x01863490
int& FMArray_01863490::Get(UINT Index)
{
	if (Index >= Size)
	{
		FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1fa);
	}
	return Data[Index];
}

// FMArray_018634c0: element access, asserting the index is in range.
struct FMArray_018634c0
{
	int Unused;
	unsigned int Size;
	int* Data;
	int& Get(UINT Index);
};

// @baa 0x018634c0
int& FMArray_018634c0::Get(UINT Index)
{
	if (Index >= Size)
	{
		FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1fa);
	}
	return Data[Index];
}

// FMArray_018634f0: element access, asserting the index is in range.
struct FMArray_018634f0
{
	int Unused;
	unsigned int Size;
	int* Data;
	int& Get(UINT Index);
};

// @baa 0x018634f0
int& FMArray_018634f0::Get(UINT Index)
{
	if (Index >= Size)
	{
		FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1fa);
	}
	return Data[Index];
}

// FMArray_01863520: element access, asserting the index is in range.
struct FMArray_01863520
{
	int Unused;
	unsigned int Size;
	int* Data;
	int& Get(UINT Index);
};

// @baa 0x01863520
int& FMArray_01863520::Get(UINT Index)
{
	if (Index >= Size)
	{
		FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1fa);
	}
	return Data[Index];
}

// FMArray_01863550: element access, asserting the index is in range.
struct FMArray_01863550
{
	int Unused;
	unsigned int Size;
	int* Data;
	int& Get(UINT Index);
};

// @baa 0x01863550
int& FMArray_01863550::Get(UINT Index)
{
	if (Index >= Size)
	{
		FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1fa);
	}
	return Data[Index];
}

// FMArray_018635f0: element access, asserting the index is in range.
struct FMArray_018635f0
{
	int Unused;
	unsigned int Size;
	int* Data;
	int& Get(UINT Index);
};

// @baa 0x018635f0
int& FMArray_018635f0::Get(UINT Index)
{
	if (Index >= Size)
	{
		FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1fa);
	}
	return Data[Index];
}

// FMArray_01863620: element access, asserting the index is in range.
struct FMArray_01863620
{
	int Unused;
	unsigned int Size;
	int* Data;
	int& Get(UINT Index);
};

// @baa 0x01863620
int& FMArray_01863620::Get(UINT Index)
{
	if (Index >= Size)
	{
		FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1fa);
	}
	return Data[Index];
}

// FMArray_01863db0: the write position just past the last element, or null for an empty array.
struct FMArray_01863db0
{
	int Unused;
	unsigned int Size;
	int* Data;
	int* GetEnd();
};

// @baa 0x01863db0
int* FMArray_01863db0::GetEnd()
{
	if (Size != 0)
	{
		if (Size <= 0)
		{
			FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1f4);
		}
		return &Data[Size];
	}
	return NULL;
}

// FMArray_01863e90: the write position just past the last element, or null for an empty array.
struct FMArray_01863e90
{
	int Unused;
	unsigned int Size;
	int* Data;
	int* GetEnd();
};

// @baa 0x01863e90
int* FMArray_01863e90::GetEnd()
{
	if (Size != 0)
	{
		if (Size <= 0)
		{
			FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1f4);
		}
		return &Data[Size];
	}
	return NULL;
}

// FMArray_01863d80: a non-null view of the array's storage, or null when it is empty.
struct FMArray_01863d80
{
	int Unused;
	unsigned int Size;
	void* Data;
	void* GetStorage();
};

// @baa 0x01863d80
void* FMArray_01863d80::GetStorage()
{
	if (Size != 0)
	{
		if (Size <= 0)
		{
			FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1ef);
		}
		return Data;
	}
	return NULL;
}

// FMArray_01863e60: a non-null view of the array's storage, or null when it is empty.
struct FMArray_01863e60
{
	int Unused;
	unsigned int Size;
	void* Data;
	void* GetStorage();
};

// @baa 0x01863e60
void* FMArray_01863e60::GetStorage()
{
	if (Size != 0)
	{
		if (Size <= 0)
		{
			FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1ef);
		}
		return Data;
	}
	return NULL;
}

// FMArray_01863f40: a non-null view of the array's storage, or null when it is empty.
struct FMArray_01863f40
{
	int Unused;
	unsigned int Size;
	void* Data;
	void* GetStorage();
};

// @baa 0x01863f40
void* FMArray_01863f40::GetStorage()
{
	if (Size != 0)
	{
		if (Size <= 0)
		{
			FMAssert("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 0x1ef);
		}
		return Data;
	}
	return NULL;
}
