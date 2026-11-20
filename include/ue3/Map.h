/* UE3's hashed containers as this build has them (Core/Inc/BitArray.h, SparseArray.h, Set.h, Map.h),
 * recovered from the game's code. Opt in with   #include "ue3/Map.h"   (it includes Classes.h).
 *
 * Layouts (sizes in bytes):
 *   TBitArray<>        0x1c  { DWORD InlineData[4]; DWORD* SecondaryData; INT NumBits; INT MaxBits; }
 *   TSparseArray<T>    0x30  { TArray<element or free-list link> Data; TBitArray<> AllocationFlags;
 *                              INT FirstFreeIndex; INT NumFreeIndices; }
 *   TSet<T>            0x3c  { TSparseArray<FElement> Elements; FSetElementId Hash[1 inline] + heap pointer;
 *                              INT HashSize; }   FElement = { T Value; FSetElementId HashNextId; INT HashIndex; }
 *   TMap<K,V>          0x3c  a TSet of { K Key; V Value; } pairs (TMultiMap, TLookupMap the same)
 * The engine's checks name the game's file and line (checkAt), as its asserts do:
 *   BitArray.h 254 Remove(BaseIndex, Count), 295 operator()(i), 303 operator()(i) const
 *   SparseArray.h 105 Remove(Index, Count)        (Map.h 1175 is TLookupMap's, not ported yet)
 * Members the game calls out of line (TBitArray::Realloc and AddItem, FindFirstSetBit, TSet::Rehash
 * and HashElement, the inline allocator's ResizeAllocation ...) are written as the engine wrote them:
 * the compiler makes the same choice. A member that doesn't produce the original's code is a header
 * bug: fix it here.
 *
 * Hashes (GetTypeHash): INT/DWORD and the like are themselves, FName is its index (Core's maps; a few
 * Engine sets hash Index + Number * 23, see src/Engine/Src/UnSkeletalTools.cpp), FString is appStrihash,
 * pointers and UObject* go through PointerHash.
 *
 * Verified against the game (each compiles to the original's bytes as an explicit instantiation,
 * e.g.  template FSetElementId TSet<TMap<FName,INT>::FPair, TMap<FName,INT>::KeyFuncs>::FindId(const FName&) const;):
 *   0054f3b0 TBitArray::operator()   00553910 TBitArray::AddItem    00549550 TBitArray::Realloc
 *   0054f600 FindFirstSetBit         00552b90 TSparseArray::TConstIterator ctor
 *   00555710 TSparseArray::Add       00552300 TSparseArray::Remove  005464d0 TInlineAllocator<1>::ResizeAllocation
 *   00558820 TSet::Rehash            0055a430 TSet::ConditionalRehash  0055bc90 TSet::Add (FString key)
 *   00573920 TSet::FindId (FName)    0054d220 TSet::FindId (FString)   005413d0 PointerHash<UObject>
 *   007776e0 ~TSet, 007725f0 ~TSparseArray (with #define BAA_OUTLINE_ALLOC: they call appFree out of line)
 * Not yet: 0054d2b0 TSet::HashElement for FString keys differs in register choice only.
 * A script mirror field (FMap_Mirror ...) is the real container through MirrorAs<> at the end.
 */
#pragma once
#include "Classes.h"
#include "AppMath.h"

#ifndef BAA_UE3_MAP
#define BAA_UE3_MAP

#define BAA_BITARRAY_FILE    "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\BitArray.h"
#define BAA_SPARSEARRAY_FILE "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\SparseArray.h"
/* check() as the engine's header had it at File(Line) */
#define checkAt(expr, File, Line) { if (!(expr)) appFailAssert(#expr, File, Line, TEXT("")); }
#define BAA_MAP_FILE         "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Map.h"

typedef INT  PTRINT;  /* UnVcWin32.h: integers the size of a pointer */
typedef UINT UPTRINT;

/*-----------------------------------------------------------------------------
	UnTemplate.h / UnTypeTraits.h pieces the containers use
-----------------------------------------------------------------------------*/

/* A if it isn't NULL, otherwise B, without a branch. */
template<typename ReferencedType>
FORCEINLINE ReferencedType* IfAThenAElseB(ReferencedType* A, ReferencedType* B)
{
	const PTRINT IntA = reinterpret_cast<PTRINT>(A);
	const PTRINT IntB = reinterpret_cast<PTRINT>(B);
	const PTRINT MaskB = -(!IntA);
	return reinterpret_cast<ReferencedType*>(IntA | (MaskB & IntB));
}

template<bool Predicate, typename TrueClass, typename FalseClass> class TChooseClass;
template<typename TrueClass, typename FalseClass> class TChooseClass<true, TrueClass, FalseClass> { public: typedef TrueClass Result; };
template<typename TrueClass, typename FalseClass> class TChooseClass<false, TrueClass, FalseClass> { public: typedef FalseClass Result; };

template<typename T> struct TIsPointerType { enum { Value = false }; };
template<typename T> struct TIsPointerType<T*> { enum { Value = true }; };
template<typename T> struct TIsPointerType<T* const> { enum { Value = true }; };
template<typename T> struct TIsArithmeticType { enum { Value = false }; };
#define BAA_ARITHMETIC(T) template<> struct TIsArithmeticType<T> { enum { Value = true }; }; \
	template<> struct TIsArithmeticType<const T> { enum { Value = true }; };
BAA_ARITHMETIC(float) BAA_ARITHMETIC(double) BAA_ARITHMETIC(long double) BAA_ARITHMETIC(char)
BAA_ARITHMETIC(signed char) BAA_ARITHMETIC(unsigned char) BAA_ARITHMETIC(short) BAA_ARITHMETIC(unsigned short)
BAA_ARITHMETIC(int) BAA_ARITHMETIC(unsigned int) BAA_ARITHMETIC(long) BAA_ARITHMETIC(unsigned long)
BAA_ARITHMETIC(__int64) BAA_ARITHMETIC(unsigned __int64) BAA_ARITHMETIC(wchar_t) BAA_ARITHMETIC(bool)
#undef BAA_ARITHMETIC
template<typename T> struct TIsPODType { enum { Value = __is_pod(T) || __is_enum(T) || TIsArithmeticType<T>::Value || TIsPointerType<T>::Value }; };

/* How a T is passed: by value when it's arithmetic, a pointer, or a POD no bigger than a pointer;
 * otherwise by const reference. */
template<typename T, bool TypeIsSmall> struct TCallTraitsParamTypeHelper { typedef const T& ParamType; typedef const T& ConstParamType; };
template<typename T> struct TCallTraitsParamTypeHelper<T, true> { typedef const T ParamType; typedef const T ConstParamType; };
template<typename T> struct TCallTraitsParamTypeHelper<T*, true> { typedef T* ParamType; typedef const T* ConstParamType; };
template<typename T> struct TCallTraits
{
	enum { PassByValue = TIsArithmeticType<T>::Value || TIsPointerType<T>::Value || (TIsPODType<T>::Value && sizeof(T) <= sizeof(void*)) };
	typedef typename TCallTraitsParamTypeHelper<T, PassByValue>::ParamType ParamType;
	typedef typename TCallTraitsParamTypeHelper<T, PassByValue>::ConstParamType ConstPointerType;
};
template<typename T> struct TContainerTraits
{
	typedef typename TCallTraits<T>::ParamType ConstInitType;
	typedef typename TCallTraits<T>::ConstPointerType ConstPointerType;
	enum { NeedsConstructor = TTypeInfo<T>::NeedsConstructor };
	enum { NeedsDestructor = TTypeInfo<T>::NeedsDestructor };
};

/* Destroys A and copy-constructs B in its place (TSet::Add replacing an element). */
template<typename T> void Move(T& A, typename TContainerTraits<T>::ConstInitType B)
{
	A.~T();
	new(&A) T(B);
}

/* Bytes with T's size and alignment, for storage constructed in place. */
template<INT Size, UINT Alignment> struct TAlignedBytes;
template<INT Size> struct TAlignedBytes<Size, 1> { BYTE Pad[Size]; };
template<INT Size> struct TAlignedBytes<Size, 2> { __declspec(align(2)) struct TPadding { BYTE Pad[Size]; }; TPadding Padding; };
template<INT Size> struct TAlignedBytes<Size, 4> { __declspec(align(4)) struct TPadding { BYTE Pad[Size]; }; TPadding Padding; };
template<INT Size> struct TAlignedBytes<Size, 8> { __declspec(align(8)) struct TPadding { BYTE Pad[Size]; }; TPadding Padding; };
template<INT Size> struct TAlignedBytes<Size, 16> { __declspec(align(16)) struct TPadding { BYTE Pad[Size]; }; TPadding Padding; };
template<typename ElementType> struct TTypeCompatibleBytes : public TAlignedBytes<sizeof(ElementType), __alignof(ElementType)> {};

/* appCeilLogTwo / appRoundUpToPowerOfTwo: AppMath.h */

/*-----------------------------------------------------------------------------
	Hashes
-----------------------------------------------------------------------------*/

/* Bob Jenkins' mix of a pointer (out of line per type: 005413d0, 00569d00 ...). */
template<class T>
inline DWORD PointerHash(const T* Key, DWORD C = 0)
{
#define mix(a,b,c) \
{ \
  a -= b; a -= c; a ^= (c>>13); \
  b -= c; b -= a; b ^= (a<<8); \
  c -= a; c -= b; c ^= (b>>13); \
  a -= b; a -= c; a ^= (c>>12);  \
  b -= c; b -= a; b ^= (a<<16); \
  c -= a; c -= b; c ^= (b>>5); \
  a -= b; a -= c; a ^= (c>>3);  \
  b -= c; b -= a; b ^= (a<<10); \
  c -= a; c -= b; c ^= (b>>15); \
}
	DWORD A;
	DWORD B;
	A = B = 0x9e3779b9;
	A += reinterpret_cast<UPTRINT>(Key);
	mix(A,B,C);
	return C;
#undef mix
}

inline DWORD GetTypeHash(const BYTE A)    { return A; }
inline DWORD GetTypeHash(const SBYTE A)   { return A; }
inline DWORD GetTypeHash(const WORD A)    { return A; }
inline DWORD GetTypeHash(const SWORD A)   { return A; }
inline DWORD GetTypeHash(const INT A)     { return A; }
inline DWORD GetTypeHash(const DWORD A)   { return A; }
inline DWORD GetTypeHash(const QWORD A)   { return (DWORD)A + ((DWORD)(A >> 32) * 23); }
inline DWORD GetTypeHash(const SQWORD A)  { return (DWORD)A + ((DWORD)(A >> 32) * 23); }
inline DWORD GetTypeHash(const TCHAR* S)  { return appStrihash(S); }
inline DWORD GetTypeHash(const void* A)   { return (DWORD)(PTRINT)A; }
inline DWORD GetTypeHash(const FName N)   { return N.GetIndex(); }
inline DWORD GetTypeHash(const FString& S) { return appStrihash(*S); }
inline DWORD GetTypeHash(const UObject* A) { return PointerHash(A); }

/*-----------------------------------------------------------------------------
	Allocators (ContainerAllocationPolicies.h)
-----------------------------------------------------------------------------*/

/* Up to NumInlineElements in the container itself, more on the heap (FHeapAllocation, Array.h). */
template<UINT NumInlineElements>
class TInlineAllocator
{
public:
	template<typename ElementType>
	class ForElementType
	{
	public:
		ForElementType() {}

		FORCEINLINE ElementType* GetAllocation() const
		{
			return IfAThenAElseB<ElementType>((ElementType*)SecondaryData.GetAllocation(), GetInlineElements());
		}
		void ResizeAllocation(INT PreviousNumElements, INT NumElements, INT NumBytesPerElement) /* <1>: 005464d0, <4>: 005466c0 */
		{
			const INT PreviousNumBytes = PreviousNumElements * NumBytesPerElement;

			// Check if the new allocation will fit in the inline data area.
			if (NumElements <= NumInlineElements)
			{
				// If the old allocation wasn't in the inline data area, move it into the inline data area.
				if (SecondaryData.GetAllocation())
				{
					appMemcpy(GetInlineElements(), SecondaryData.GetAllocation(), PreviousNumBytes);

					// Free the old indirect allocation.
					SecondaryData.ResizeAllocation(0, 0, NumBytesPerElement);
				}
			}
			else
			{
				if (!SecondaryData.GetAllocation())
				{
					// Allocate new indirect memory for the data.
					SecondaryData.ResizeAllocation(0, NumElements, NumBytesPerElement);

					// Move the data out of the inline data area into the new allocation.
					appMemcpy(SecondaryData.GetAllocation(), GetInlineElements(), PreviousNumBytes);
				}
				else
				{
					// Reallocate the indirect data for the new size.
					SecondaryData.ResizeAllocation(PreviousNumElements, NumElements, NumBytesPerElement);
				}
			}
		}
		INT CalculateSlack(INT NumElements, INT NumAllocatedElements, INT NumBytesPerElement) const
		{
			// If the elements use less space than the inline allocation, only use the inline allocation as slack.
			if (NumElements <= NumInlineElements)
			{
				return NumInlineElements;
			}
			else
			{
				return SecondaryData.CalculateSlack(NumElements, NumAllocatedElements, NumBytesPerElement);
			}
		}

	private:
		ForElementType(const ForElementType&);
		ForElementType& operator=(const ForElementType&);

		/* The data is here while it fits, */
		TTypeCompatibleBytes<ElementType> InlineData[NumInlineElements];
		/* and on the heap once it doesn't. */
		FHeapAllocation SecondaryData;

		ElementType* GetInlineElements() const { return (ElementType*)InlineData; }
	};
};

/* Bit arrays keep 4 DWORDs (128 bits) inline. */
class FDefaultBitArrayAllocator : public TInlineAllocator<4> {};

/* A set's hash: one bucket inline; the bucket count grows with the elements, as a power of two. */
class FDefaultSetAllocator
{
public:
	enum { AverageNumberOfElementsPerHashBucket = 2 };
	enum { BaseNumberOfHashBuckets = 8 };
	enum { MinNumberOfHashedElements = 4 };

	static FORCEINLINE UINT GetNumberOfHashBuckets(UINT NumHashedElements)
	{
		if (NumHashedElements >= MinNumberOfHashedElements)
		{
			return appRoundUpToPowerOfTwo(NumHashedElements / AverageNumberOfElementsPerHashBucket + BaseNumberOfHashBuckets);
		}
		return 1;
	}

	typedef TInlineAllocator<1> HashAllocator;
};

/*-----------------------------------------------------------------------------
	TBitArray (BitArray.h)
-----------------------------------------------------------------------------*/

enum { NumBitsPerDWORD = 32 };
enum { NumBitsPerDWORDLogTwo = 5 };

/* A reference to one bit of a TBitArray. */
class FBitReference
{
public:
	FORCEINLINE FBitReference(DWORD& InData, DWORD InMask) : Data(InData), Mask(InMask) {}

	FORCEINLINE operator UBOOL() const { return (Data & Mask) != 0; }
	FORCEINLINE void operator=(const UBOOL NewValue)
	{
		if (NewValue)
		{
			Data |= Mask;
		}
		else
		{
			Data &= ~Mask;
		}
	}

private:
	DWORD& Data;
	DWORD Mask;
};

/* A const reference to one bit of a TBitArray. */
class FConstBitReference
{
public:
	FORCEINLINE FConstBitReference(const DWORD& InData, DWORD InMask) : Data(InData), Mask(InMask) {}

	FORCEINLINE operator UBOOL() const { return (Data & Mask) != 0; }

private:
	const DWORD& Data;
	DWORD Mask;
};

/* A bit's position: which DWORD, and the bit's mask in it. */
class FRelativeBitReference
{
public:
	FORCEINLINE explicit FRelativeBitReference(INT BitIndex)
		: DWORDIndex(BitIndex >> NumBitsPerDWORDLogTwo)
		, Mask(1 << (BitIndex & (NumBitsPerDWORD - 1)))
	{}

	INT DWORDIndex;
	DWORD Mask;
};

template<typename Allocator = FDefaultBitArrayAllocator> class TConstSetBitIterator;

/* An array of bits, 128 of them inline. */
template<typename Allocator = FDefaultBitArrayAllocator>
class TBitArray : public Allocator::template ForElementType<DWORD>
{
	typedef typename Allocator::template ForElementType<DWORD> Super;
public:
	template<typename> friend class TConstSetBitIterator;

	explicit TBitArray(const UBOOL Value = FALSE, const INT InNumBits = 0)
		: NumBits(0)
		, MaxBits(0)
	{
		Init(Value, InNumBits);
	}

	TBitArray(const TBitArray& Copy)
		: NumBits(0)
		, MaxBits(0)
	{
		*this = Copy;
	}

	TBitArray& operator=(const TBitArray& Copy)
	{
		// check for self assignment since we don't use swap() mechanic
		if (this == &Copy)
		{
			return *this;
		}

		Empty(Copy.Num());
		NumBits = MaxBits = Copy.NumBits;
		if (NumBits)
		{
			const INT NumDWORDs = (MaxBits + NumBitsPerDWORD - 1) / NumBitsPerDWORD;
			Realloc(0);
			appMemcpy(GetData(), Copy.GetData(), NumDWORDs * sizeof(DWORD));
		}
		return *this;
	}

	friend FArchive& operator<<(FArchive& Ar, TBitArray& BitArray)
	{
		// serialize number of bits
		Ar << BitArray.NumBits;

		if (Ar.IsLoading())
		{
			// no need for slop when reading
			BitArray.MaxBits = BitArray.NumBits;

			// allocate room for new bits
			BitArray.Realloc(0);
		}

		// calc the number of dwords for all the bits
		const INT NumDWORDs = (BitArray.NumBits + NumBitsPerDWORD - 1) / NumBitsPerDWORD;

		// serialize the data as one big chunk
		Ar.Serialize(BitArray.GetData(), NumDWORDs * sizeof(DWORD));

		return Ar;
	}

	/* Adds a bit; returns its index. (00553910) The game's copy keeps the new count in a register over
	 * the slack call and works out the allocated DWORDs only when the 4 inline ones aren't enough: the
	 * inline allocator's CalculateSlack, written out with the count in a local. */
	INT AddItem(const UBOOL Value)
	{
		const INT Index = NumBits;
		const UBOOL bReallocate = (NumBits + 1) > MaxBits;

		const INT NewNumBits = ++NumBits;

		if (bReallocate)
		{
			// Allocate memory for the new bits.
			const INT NumDWORDs = (NewNumBits + NumBitsPerDWORD - 1) / NumBitsPerDWORD;
			UINT MaxDWORDs;
			if (NumDWORDs <= 4u)
			{
				MaxDWORDs = 4;
			}
			else
			{
				MaxDWORDs = DefaultCalculateSlack(NumDWORDs, (MaxBits + NumBitsPerDWORD - 1) / NumBitsPerDWORD, sizeof(DWORD));
			}
			MaxBits = MaxDWORDs * NumBitsPerDWORD;
			Realloc(NewNumBits - 1);
		}

		(*this)(Index) = Value;

		return Index;
	}

	/* Removes every bit, leaving room for ExpectedNumBits. */
	void Empty(INT ExpectedNumBits = 0)
	{
		NumBits = 0;

		// If the expected number of bits doesn't match the allocated number of bits, reallocate.
		if (MaxBits != ExpectedNumBits)
		{
			MaxBits = ExpectedNumBits;
			Realloc(0);
		}
	}

	/* Resets the array to InNumBits bits, all Value. */
	void Init(UBOOL Value, INT InNumBits)
	{
		Empty(InNumBits);
		if (InNumBits)
		{
			NumBits = InNumBits;
			memset(GetData(), Value ? 0xff : 0, (NumBits + NumBitsPerDWORD - 1) / NumBitsPerDWORD * sizeof(DWORD));
		}
	}

	/* Removes NumBitsToRemove bits from BaseIndex, moving the later ones down. */
	void Remove(INT BaseIndex, INT NumBitsToRemove = 1)
	{
		checkAt(BaseIndex >= 0 && BaseIndex + NumBitsToRemove <= NumBits, BAA_BITARRAY_FILE, 254);

		// Until otherwise necessary, this is an obviously correct implementation rather than an efficient implementation.
		INT WriteIndex = 0;
		for (INT ReadIndex = 0; ReadIndex < NumBits; ReadIndex++)
		{
			if (ReadIndex < BaseIndex || ReadIndex >= BaseIndex + NumBitsToRemove)
			{
				if (WriteIndex != ReadIndex)
				{
					(*this)(WriteIndex) = (UBOOL)(*this)(ReadIndex);
				}
				WriteIndex++;
			}
		}
		NumBits -= NumBitsToRemove;
	}

	void CountBytes(FArchive& Ar)
	{
		Ar.CountBytes(
			(NumBits / NumBitsPerDWORD) * sizeof(DWORD),
			(MaxBits / NumBitsPerDWORD) * sizeof(DWORD)
			);
	}

	INT Num() const { return NumBits; }

	/* One bit, checked. (0054f3b0) */
	FORCEINLINE FBitReference operator()(INT Index)
	{
		checkAt(Index>=0 && Index<NumBits, BAA_BITARRAY_FILE, 295);
		return FBitReference(
			GetData()[Index / NumBitsPerDWORD],
			1 << (Index & (NumBitsPerDWORD - 1))
			);
	}
	FORCEINLINE const FConstBitReference operator()(INT Index) const
	{
		checkAt(Index>=0 && Index<NumBits, BAA_BITARRAY_FILE, 303);
		return FConstBitReference(
			GetData()[Index / NumBitsPerDWORD],
			1 << (Index & (NumBitsPerDWORD - 1))
			);
	}

	FORCEINLINE const DWORD* GetData() const { return (DWORD*)this->GetAllocation(); }
	FORCEINLINE DWORD* GetData() { return (DWORD*)this->GetAllocation(); }

private:
	INT NumBits;
	INT MaxBits;

	/* Resizes the storage to MaxBits, zeroing the new DWORDs. (00549550) */
	void Realloc(INT PreviousNumBits)
	{
		const INT PreviousNumDWORDs = (PreviousNumBits + NumBitsPerDWORD - 1) / NumBitsPerDWORD;
		const INT MaxDWORDs = (MaxBits + NumBitsPerDWORD - 1) / NumBitsPerDWORD;

		this->ResizeAllocation(PreviousNumDWORDs, MaxDWORDs, sizeof(DWORD));

		if (MaxDWORDs)
		{
			// Reset the newly allocated slack DWORDs.
			appMemzero((DWORD*)this->GetAllocation() + PreviousNumDWORDs, (MaxDWORDs - PreviousNumDWORDs) * sizeof(DWORD));
		}
	}
};

/* Visits the set bits of a TBitArray in order: GetIndex() is the current one, false once past the end. */
template<typename Allocator>
class TConstSetBitIterator : public FRelativeBitReference
{
public:
	TConstSetBitIterator(const TBitArray<Allocator>& InArray, INT StartIndex = 0) /* 00552b90 */
		: FRelativeBitReference(StartIndex)
		, Array(InArray)
		, UnvisitedBitMask((~0) << (StartIndex & (NumBitsPerDWORD - 1)))
		, CurrentBitIndex(StartIndex)
		, BaseBitIndex(StartIndex & ~(NumBitsPerDWORD - 1))
	{
		FindFirstSetBit();
	}

	FORCEINLINE TConstSetBitIterator& operator++()
	{
		// Mark the current bit as visited.
		UnvisitedBitMask &= ~this->Mask;

		// Find the first set bit that hasn't been visited yet.
		FindFirstSetBit();

		return *this;
	}

	FORCEINLINE operator UBOOL() const { return CurrentBitIndex < Array.Num(); }
	FORCEINLINE INT GetIndex() const { return CurrentBitIndex; }

private:
	const TBitArray<Allocator>& Array;
	DWORD UnvisitedBitMask;
	INT CurrentBitIndex;
	INT BaseBitIndex;

	/* Moves to the first set bit at or after the current one. (0054f600) */
	void FindFirstSetBit()
	{
		static const DWORD EmptyArrayData = 0;
		const DWORD* ArrayData = IfAThenAElseB(Array.GetData(), &EmptyArrayData);

		// Advance to the next non-zero DWORD.
		DWORD RemainingBitMask = ArrayData[this->DWORDIndex] & UnvisitedBitMask;
		while (!RemainingBitMask)
		{
			this->DWORDIndex++;
			BaseBitIndex += NumBitsPerDWORD;
			if (this->DWORDIndex > (Array.Num() - 1) / NumBitsPerDWORD)
			{
				// We've advanced past the end of the array.
				CurrentBitIndex = Array.Num();
				return;
			}

			RemainingBitMask = ArrayData[this->DWORDIndex];
			UnvisitedBitMask = ~0;
		}

		// The lowest set bit of the remaining mask.
		this->Mask = RemainingBitMask & ~(RemainingBitMask - 1);

		// Compute the index of the set bit.
		CurrentBitIndex = BaseBitIndex + NumBitsPerDWORD - 1 - appCountLeadingZeros(this->Mask);
	}
};

/*-----------------------------------------------------------------------------
	TSparseArray (SparseArray.h)
-----------------------------------------------------------------------------*/

/* Where TSparseArray::Add put the new element: construct it with  new(Allocation) T(...). */
struct FSparseArrayAllocationInfo
{
	INT Index;
	void* Pointer;
};
inline void* operator new(size_t Size, const FSparseArrayAllocationInfo& Allocation) throw() /* throw(): the caller tests the pointer, as the game's code does */
{
	return Allocation.Pointer;
}

/* An array whose removed elements leave holes (reused by the next Add); indices stay valid. */
template<typename ElementType>
class TSparseArray
{
public:
	typedef TBitArray<> AllocationBitArrayType;

	TSparseArray()
		: FirstFreeIndex(0)
		, NumFreeIndices(0)
	{}

	TSparseArray(const TSparseArray& InCopy)
		: FirstFreeIndex(0)
		, NumFreeIndices(0)
	{
		*this = InCopy;
	}

	~TSparseArray()
	{
		// Destruct the elements in the array.
		Empty();
	}

	TSparseArray& operator=(const TSparseArray& InCopy)
	{
		if (this != &InCopy)
		{
			// Reallocate the array.
			Empty(InCopy.GetMaxIndex());
			Data.Add(InCopy.GetMaxIndex());

			// Copy the other array's element allocation state.
			FirstFreeIndex = InCopy.FirstFreeIndex;
			NumFreeIndices = InCopy.NumFreeIndices;
			AllocationFlags = InCopy.AllocationFlags;

			// Determine whether we need per element construction or bulk copy is fine
			if (TContainerTraits<ElementType>::NeedsConstructor)
			{
				// Use the inplace new to copy the element to an array element
				for (INT Index = 0; Index < InCopy.GetMaxIndex(); Index++)
				{
					const FElementOrFreeListLink& SourceElement = InCopy.GetData(Index);
					FElementOrFreeListLink& DestElement = GetData(Index);
					if (InCopy.IsAllocated(Index))
					{
						::new((BYTE*)&DestElement.ElementData) ElementType(*(ElementType*)&SourceElement.ElementData);
					}
					else
					{
						DestElement.NextFreeIndex = SourceElement.NextFreeIndex;
					}
				}
			}
			else
			{
				// Use the much faster path for types that allow it
				appMemcpy(Data.GetData(), InCopy.Data.GetTypedData(), sizeof(FElementOrFreeListLink) * InCopy.GetMaxIndex());
			}
		}
		return *this;
	}

	/* Allocates room for an element (a free slot first); construct it with new(Allocation). (00555710) */
	FSparseArrayAllocationInfo Add()
	{
		FSparseArrayAllocationInfo Result;

		if (NumFreeIndices > 0)
		{
			// Remove the first unallocated element from the free list.
			Result.Index = FirstFreeIndex;
			FirstFreeIndex = GetData(FirstFreeIndex).NextFreeIndex;
			--NumFreeIndices;
		}
		else
		{
			// Add a new element.
			Result.Index = Data.Add(1);
			AllocationFlags.AddItem(TRUE);
		}

		Result.Pointer = &GetData(Result.Index).ElementData;

		// Flag the element as allocated.
		AllocationFlags(Result.Index) = TRUE;

		return Result;
	}

	/* Adds a copy of Element; returns its index. */
	INT AddItem(typename TContainerTraits<ElementType>::ConstInitType Element)
	{
		FSparseArrayAllocationInfo Allocation = Add();
		new(Allocation) ElementType(Element);
		return Allocation.Index;
	}

	/* Removes Count elements from BaseIndex (each must be allocated). (00552300) */
	void Remove(INT BaseIndex, INT Count = 1)
	{
		for (INT Index = 0; Index < Count; Index++)
		{
			checkAt(AllocationFlags(BaseIndex + Index), BAA_SPARSEARRAY_FILE, 105);

			// Destruct the element being removed.
			if (TContainerTraits<ElementType>::NeedsDestructor)
			{
				(*this)(BaseIndex + Index).~ElementType();
			}

			// Mark the element as free and add it to the free element list.
			GetData(BaseIndex + Index).NextFreeIndex = NumFreeIndices > 0 ? FirstFreeIndex : INDEX_NONE;
			FirstFreeIndex = BaseIndex + Index;
			++NumFreeIndices;
			AllocationFlags(BaseIndex + Index) = FALSE;
		}
	}

	/* Removes every element, leaving room for ExpectedNumElements. */
	void Empty(INT ExpectedNumElements = 0)
	{
		// Destruct the allocated elements.
		if (TContainerTraits<ElementType>::NeedsDestructor)
		{
			for (TIterator It(*this); It; ++It)
			{
				ElementType& Element = *It;
				Element.~ElementType();
			}
		}

		// Free the allocated elements.
		Data.Empty(ExpectedNumElements);
		FirstFreeIndex = 0;
		NumFreeIndices = 0;
		AllocationFlags.Empty(ExpectedNumElements);
	}

	void CountBytes(FArchive& Ar)
	{
		Ar.CountBytes(Data.ArrayNum * sizeof(FElementOrFreeListLink), Data.ArrayMax * sizeof(FElementOrFreeListLink)); /* TArray::CountBytes */
		AllocationFlags.CountBytes(Ar);
	}

	friend FArchive& operator<<(FArchive& Ar, TSparseArray& Array)
	{
		Array.CountBytes(Ar);
		if (Ar.IsLoading())
		{
			// Load array.
			INT NewNumElements = 0;
			Ar << NewNumElements;
			Array.Empty(NewNumElements);
			for (INT ElementIndex = 0; ElementIndex < NewNumElements; ElementIndex++)
			{
				Ar << *::new(Array.Add()) ElementType;
			}
		}
		else
		{
			// Save array.
			INT NewNumElements = Array.Num();
			Ar << NewNumElements;
			for (TIterator It(Array); It; ++It)
			{
				Ar << *It;
			}
		}
		return Ar;
	}

	ElementType& operator()(INT Index)
	{
		checkSlow(Index >= 0);
		checkSlow(Index < Data.Num());
		return *(ElementType*)&GetData(Index).ElementData;
	}
	const ElementType& operator()(INT Index) const
	{
		checkSlow(Index >= 0);
		checkSlow(Index < Data.Num());
		return *(ElementType*)&GetData(Index).ElementData;
	}

	UBOOL IsAllocated(INT Index) const { return AllocationFlags(Index); }
	INT GetMaxIndex() const { return Data.Num(); }
	INT Num() const { return Data.Num() - NumFreeIndices; }

private:
	template<bool bConst>
	class TBaseIterator
	{
	private:
		typedef typename TChooseClass<bConst, const TSparseArray, TSparseArray>::Result ArrayType;
		typedef typename TChooseClass<bConst, const ElementType, ElementType>::Result ItElementType;

	public:
		TBaseIterator(ArrayType& InArray, INT StartIndex = 0)
			: Array(InArray)
			, BitArrayIt(InArray.AllocationFlags, StartIndex)
		{}

		FORCEINLINE TBaseIterator& operator++()
		{
			// Iterate to the next set allocation flag.
			++BitArrayIt;
			return *this;
		}
		FORCEINLINE INT GetIndex() const { return BitArrayIt.GetIndex(); }
		FORCEINLINE operator UBOOL() const { return BitArrayIt; }
		FORCEINLINE ItElementType& operator*() const { return Array(GetIndex()); }
		FORCEINLINE ItElementType* operator->() const { return &Array(GetIndex()); }

	protected:
		ArrayType& Array;
		TConstSetBitIterator<> BitArrayIt;
	};

public:
	/* Iterates over the allocated elements. */
	class TIterator : public TBaseIterator<false>
	{
	public:
		TIterator(TSparseArray& InArray, INT StartIndex = 0) : TBaseIterator<false>(InArray, StartIndex) {}

		/* Removes the current element from the array. */
		void RemoveCurrent()
		{
			this->Array.Remove(this->GetIndex());
		}
	};

	/* Iterates over the allocated elements of a const array. */
	class TConstIterator : public TBaseIterator<true>
	{
	public:
		TConstIterator(const TSparseArray& InArray, INT StartIndex = 0) : TBaseIterator<true>(InArray, StartIndex) {}
	};

private:
	/* An element, or the index of the next free slot while it's unallocated. */
	union FElementOrFreeListLink
	{
		TTypeCompatibleBytes<ElementType> ElementData;
		INT NextFreeIndex;
	};

	TArray<FElementOrFreeListLink> Data;
	AllocationBitArrayType AllocationFlags;

	/* The first free slot (meaningful while NumFreeIndices > 0); the free slots form a list through
	 * NextFreeIndex. */
	INT FirstFreeIndex;
	INT NumFreeIndices;

	FElementOrFreeListLink& GetData(INT Index) { return ((FElementOrFreeListLink*)Data.GetData())[Index]; }
	const FElementOrFreeListLink& GetData(INT Index) const { return ((const FElementOrFreeListLink*)Data.GetTypedData())[Index]; }
};

/*-----------------------------------------------------------------------------
	TSet (Set.h)
-----------------------------------------------------------------------------*/

/* A set's key functions: the key of an element, the key's hash, whether two keys match. */
template<typename ElementType, typename InKeyType, UBOOL bInAllowDuplicateKeys = FALSE>
struct BaseKeyFuncs
{
	typedef InKeyType KeyType;
	enum { bAllowDuplicateKeys = bInAllowDuplicateKeys };
};

/* The element is its own key. */
template<typename ElementType, UBOOL bInAllowDuplicateKeys = FALSE>
struct DefaultKeyFuncs : BaseKeyFuncs<ElementType, ElementType, bInAllowDuplicateKeys>
{
	typedef typename TCallTraits<ElementType>::ParamType KeyInitType;
	typedef typename TCallTraits<ElementType>::ParamType ElementInitType;

	static FORCEINLINE KeyInitType GetSetKey(ElementInitType Element) { return Element; }
	static FORCEINLINE UBOOL Matches(KeyInitType A, KeyInitType B) { return A == B; }
	static FORCEINLINE DWORD GetKeyHash(KeyInitType Key) { return GetTypeHash(Key); }
};

/* An element's id in a set: its index in the set's sparse array (INDEX_NONE for none). */
class FSetElementId
{
public:
	FORCEINLINE FSetElementId() : Index(INDEX_NONE) {}
	FORCEINLINE explicit FSetElementId(INT InIndex) : Index(InIndex) {}

	FORCEINLINE UBOOL IsValidId() const { return Index != INDEX_NONE; }
	FORCEINLINE friend UBOOL operator==(const FSetElementId& A, const FSetElementId& B) { return A.Index == B.Index; }
	FORCEINLINE operator INT() const { return Index; }

	INT Index;
};

/* A hashed set of elements (unique keys unless the KeyFuncs allow duplicates). */
template<typename InElementType, typename KeyFuncs = DefaultKeyFuncs<InElementType>, typename Allocator = FDefaultSetAllocator>
class TSet
{
	typedef InElementType ElementType;
	typedef typename KeyFuncs::KeyInitType KeyInitType;
	typedef typename KeyFuncs::ElementInitType ElementInitType;

public:
	TSet() : HashSize(0) {}

	TSet(const TSet& Copy) : HashSize(0)
	{
		*this = Copy;
	}

	~TSet()
	{
		HashSize = 0;
	}

	TSet& operator=(const TSet& Copy)
	{
		if (this != &Copy)
		{
			Empty(Copy.Num());
			for (TConstIterator CopyIt(Copy); CopyIt; ++CopyIt)
			{
				Add(*CopyIt);
			}
		}
		return *this;
	}

	/* Removes every element, leaving room for ExpectedNumElements. */
	void Empty(INT ExpectedNumElements = 0)
	{
		// Empty the elements array, and reallocate it for the expected number of elements.
		Elements.Empty(ExpectedNumElements);

		// Resize the hash to the desired size for the expected number of elements.
		if (!ConditionalRehash(ExpectedNumElements, TRUE))
		{
			// If the hash was already the desired size, clear the references to the elements that have now been removed.
			for (INT HashIndex = 0; HashIndex < HashSize; HashIndex++)
			{
				GetTypedHash(HashIndex) = FSetElementId();
			}
		}
	}

	/* Rebuilds the hash (after elements were removed through an iterator). */
	void Relax()
	{
		ConditionalRehash(Elements.Num(), TRUE);
	}

	void CountBytes(FArchive& Ar)
	{
		Elements.CountBytes(Ar);
		Ar.CountBytes(HashSize * sizeof(INT), HashSize * sizeof(FSetElementId));
	}

	INT Num() const { return Elements.Num(); }

	UBOOL IsValidId(FSetElementId Id) const
	{
		return Id.IsValidId() && Id >= 0 && Id < Elements.GetMaxIndex() && Elements.IsAllocated(Id);
	}

	const ElementType& operator()(FSetElementId Id) const { return Elements(Id).Value; }
	ElementType& operator()(FSetElementId Id) { return Elements(Id).Value; }

	/* Adds an element, replacing one with the same key (unless duplicates are allowed). */
	FSetElementId Add(ElementInitType InElement, UBOOL* bIsAlreadyInSetPtr = NULL)
	{
		FSetElementId ElementId;
		if (!KeyFuncs::bAllowDuplicateKeys)
		{
			// If the set doesn't allow duplicate keys, check for an existing element with the same key as the element being added.
			ElementId = FindId(KeyFuncs::GetSetKey(InElement));
		}

		// Report whether the element was already present.
		if (bIsAlreadyInSetPtr != NULL)
		{
			*bIsAlreadyInSetPtr = ElementId.IsValidId() ? TRUE : FALSE;
		}

		if (KeyFuncs::bAllowDuplicateKeys || !ElementId.IsValidId())
		{
			// Create a new element.
			FSparseArrayAllocationInfo ElementAllocation = Elements.Add();
			ElementId = FSetElementId(ElementAllocation.Index);
			FElement& Element = *new(ElementAllocation) FElement(InElement);

			// Check if the hash needs to be resized.
			if (!ConditionalRehash(Elements.Num()))
			{
				// If the rehash didn't add the new element to the hash, add it.
				HashElement(ElementId, Element);
			}
		}
		else
		{
			// If there's an existing element with the same key as the new element, replace the existing element with the new element.
			Move<ElementType>(Elements(ElementId).Value, InElement);
		}

		return ElementId;
	}

	/* Removes an element by id. */
	void Remove(FSetElementId ElementId)
	{
		if (HashSize)
		{
			const FElement& ElementBeingRemoved = Elements(ElementId);

			// Remove the element from the hash.
			for (FSetElementId* NextElementId = &GetTypedHash(ElementBeingRemoved.HashIndex);
				NextElementId->IsValidId();
				NextElementId = &Elements(*NextElementId).HashNextId)
			{
				if (*NextElementId == ElementId)
				{
					*NextElementId = ElementBeingRemoved.HashNextId;
					break;
				}
			}
		}

		// Remove the element from the elements array.
		Elements.Remove(ElementId);
	}

	/* The id of the (first) element with the key, or an invalid id. */
	FSetElementId FindId(KeyInitType Key) const
	{
		if (HashSize)
		{
			for (FSetElementId ElementId = GetTypedHash(KeyFuncs::GetKeyHash(Key));
				ElementId.IsValidId();
				ElementId = Elements(ElementId).HashNextId)
			{
				if (KeyFuncs::Matches(KeyFuncs::GetSetKey(Elements(ElementId).Value), Key))
				{
					// Return the first match, regardless of whether the set has multiple matches for the key or not.
					return ElementId;
				}
			}
		}
		return FSetElementId();
	}

	ElementType* Find(KeyInitType Key)
	{
		FSetElementId ElementId = FindId(Key);
		if (ElementId.IsValidId())
		{
			return &Elements(ElementId).Value;
		}
		else
		{
			return NULL;
		}
	}
	const ElementType* Find(KeyInitType Key) const
	{
		FSetElementId ElementId = FindId(Key);
		if (ElementId.IsValidId())
		{
			return &Elements(ElementId).Value;
		}
		else
		{
			return NULL;
		}
	}

	/* Removes every element with the key; returns how many. */
	INT RemoveKey(KeyInitType Key)
	{
		INT NumRemovedElements = 0;

		if (HashSize)
		{
			FSetElementId* NextElementId = &GetTypedHash(KeyFuncs::GetKeyHash(Key));
			while (NextElementId->IsValidId())
			{
				FElement& Element = Elements(*NextElementId);
				if (KeyFuncs::Matches(KeyFuncs::GetSetKey(Element.Value), Key))
				{
					// This element matches the key, remove it from the set. Remove sets *NextElementId to the next element in the bucket.
					Remove(*NextElementId);
					NumRemovedElements++;

					if (!KeyFuncs::bAllowDuplicateKeys)
					{
						// If the hash disallows duplicate keys, we're done removing after the first matched key.
						break;
					}
				}
				else
				{
					NextElementId = &Element.HashNextId;
				}
			}
		}

		return NumRemovedElements;
	}

	UBOOL Contains(KeyInitType Key) const { return FindId(Key).IsValidId(); }

	friend FArchive& operator<<(FArchive& Ar, TSet& Set)
	{
		// Load the set's new elements.
		Ar << Set.Elements;

		if (Ar.IsLoading())
		{
			// Free the old hash.
			Set.Hash.ResizeAllocation(0, 0, sizeof(FSetElementId));
			Set.HashSize = 0;

			// Hash the newly loaded elements.
			Set.ConditionalRehash(Set.Elements.Num());
		}

		return Ar;
	}

private:
	/* An element in the set. */
	class FElement
	{
	public:
		ElementType Value;
		/* The next element in the same hash bucket. */
		mutable FSetElementId HashNextId;
		/* The hash bucket the element is linked to. */
		mutable INT HashIndex;

		FElement() {}
		FElement(ElementInitType InValue) : Value(InValue) {}

		friend FArchive& operator<<(FArchive& Ar, FElement& Element)
		{
			return Ar << Element.Value;
		}
	};

	typedef TSparseArray<FElement> ElementArrayType;
	typedef typename Allocator::HashAllocator::template ForElementType<FSetElementId> HashType;

	ElementArrayType Elements;
	mutable HashType Hash;
	mutable INT HashSize;

	FORCEINLINE FSetElementId& GetTypedHash(INT HashIndex) const
	{
		return ((FSetElementId*)Hash.GetAllocation())[HashIndex & (HashSize - 1)];
	}

	/* Links an element into its hash bucket. (0054d2b0) */
	void HashElement(FSetElementId ElementId, const FElement& Element) const
	{
		// Compute the hash bucket the element goes in.
		Element.HashIndex = KeyFuncs::GetKeyHash(KeyFuncs::GetSetKey(Element.Value)) & (HashSize - 1);

		// Link the element into the hash bucket.
		Element.HashNextId = GetTypedHash(Element.HashIndex);
		GetTypedHash(Element.HashIndex) = ElementId;
	}

	/* Resizes the hash when it's missing or too small for NumHashedElements (or too big, when
	 * shrinking is allowed); true if it rehashed. (0055a430) */
	UBOOL ConditionalRehash(INT NumHashedElements, UBOOL bAllowShrinking = FALSE) const
	{
		// Calculate the desired hash size for the specified number of elements.
		const INT DesiredHashSize = Allocator::GetNumberOfHashBuckets(NumHashedElements);

		// If the hash hasn't been created yet, or is smaller than the desired hash size, rehash.
		if ((NumHashedElements > 0 && (!HashSize || HashSize < DesiredHashSize)) ||
			(bAllowShrinking && HashSize > DesiredHashSize))
		{
			HashSize = DesiredHashSize;
			Rehash();
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}

	/* Reallocates the hash at HashSize buckets and links every element into it. (00558820) */
	void Rehash() const
	{
		// Free the old hash.
		Hash.ResizeAllocation(0, 0, sizeof(FSetElementId));

		if (HashSize)
		{
			// Allocate the new hash.
			Hash.ResizeAllocation(0, HashSize, sizeof(FSetElementId));
			for (INT HashIndex = 0; HashIndex < HashSize; HashIndex++)
			{
				GetTypedHash(HashIndex) = FSetElementId();
			}

			// Add the existing elements to the new hash.
			for (typename ElementArrayType::TConstIterator ElementIt(Elements); ElementIt; ++ElementIt)
			{
				HashElement(FSetElementId(ElementIt.GetIndex()), *ElementIt);
			}
		}
	}

	template<bool bConst>
	class TBaseIterator
	{
	private:
		typedef typename TChooseClass<bConst, const ElementType, ElementType>::Result ItElementType;
		typedef typename TChooseClass<bConst, typename ElementArrayType::TConstIterator, typename ElementArrayType::TIterator>::Result ElementItType;
		typedef typename TChooseClass<bConst, const TSet, TSet>::Result SetType;

	public:
		TBaseIterator(SetType& InSet, INT StartIndex) : ElementIt(InSet.Elements, StartIndex) {}

		FORCEINLINE TBaseIterator& operator++()
		{
			++ElementIt;
			return *this;
		}
		FORCEINLINE operator UBOOL() const { return ElementIt; }
		FORCEINLINE FSetElementId GetId() const { return FSetElementId(ElementIt.GetIndex()); }
		FORCEINLINE ItElementType* operator->() const { return &ElementIt->Value; }
		FORCEINLINE ItElementType& operator*() const { return ElementIt->Value; }

	protected:
		ElementItType ElementIt;
	};

	template<bool bConst>
	class TBaseKeyIterator
	{
	private:
		typedef typename TChooseClass<bConst, const TSet, TSet>::Result SetType;
		typedef typename TChooseClass<bConst, const ElementType, ElementType>::Result ItElementType;

	public:
		TBaseKeyIterator(SetType& InSet, KeyInitType InKey)
			: Set(InSet)
			, Key(InKey)
			, Id()
		{
			// The set's hash needs to be initialized to find the elements with the specified key.
			Set.ConditionalRehash(Set.Elements.Num());
			if (Set.HashSize)
			{
				NextId = Set.GetTypedHash(KeyFuncs::GetKeyHash(Key));
				++(*this);
			}
		}

		TBaseKeyIterator& operator++()
		{
			Id = NextId;

			while (Id.IsValidId())
			{
				NextId = Set.Elements(Id).HashNextId;
				if (KeyFuncs::Matches(KeyFuncs::GetSetKey(Set(Id)), Key))
				{
					break;
				}
				Id = NextId;
			}
			return *this;
		}
		FORCEINLINE operator UBOOL() const { return Id.IsValidId(); }
		FORCEINLINE ItElementType* operator->() const { return &Set(Id); }
		FORCEINLINE ItElementType& operator*() const { return Set(Id); }

	protected:
		SetType& Set;
		KeyInitType Key;
		FSetElementId Id;
		FSetElementId NextId;
	};

public:
	/* Iterates over the elements of a const set. */
	class TConstIterator : public TBaseIterator<true>
	{
	public:
		TConstIterator(const TSet& InSet, INT StartIndex = 0) : TBaseIterator<true>(InSet, StartIndex) {}
	};

	/* Iterates over the elements of a set. */
	class TIterator : public TBaseIterator<false>
	{
	public:
		TIterator(TSet& InSet, INT StartIndex = 0) : TBaseIterator<false>(InSet, StartIndex), Set(InSet) {}

		/* Removes the current element from the set. */
		void RemoveCurrent()
		{
			Set.Remove(TBaseIterator<false>::GetId());
		}
	private:
		TSet& Set;
	};

	/* Iterates over the elements with a key in a const set. */
	class TConstKeyIterator : public TBaseKeyIterator<true>
	{
	public:
		TConstKeyIterator(const TSet& InSet, KeyInitType InKey) : TBaseKeyIterator<true>(InSet, InKey) {}
	};

	/* Iterates over the elements with a key in a set. */
	class TKeyIterator : public TBaseKeyIterator<false>
	{
	public:
		TKeyIterator(TSet& InSet, KeyInitType InKey) : TBaseKeyIterator<false>(InSet, InKey), Set(InSet) {}

		/* Removes the current element from the set. */
		void RemoveCurrent()
		{
			Set.Remove(TBaseKeyIterator<false>::Id);
			TBaseKeyIterator<false>::Id = FSetElementId();
		}
	private:
		TSet& Set;
	};

	template<bool> friend class TBaseIterator;
	template<bool> friend class TBaseKeyIterator;
};

/*-----------------------------------------------------------------------------
	TMap, TMultiMap, TLookupMap (Map.h)
-----------------------------------------------------------------------------*/

/* Maps keys to values: a TSet of key-value pairs hashed on the key. */
template<typename KeyType, typename ValueType, UBOOL bInAllowDuplicateKeys>
class TMapBase
{
public:
	typedef typename TContainerTraits<KeyType>::ConstPointerType KeyConstPointerType;
	typedef typename TContainerTraits<KeyType>::ConstInitType KeyInitType;
	typedef typename TContainerTraits<ValueType>::ConstInitType ValueInitType;

	TMapBase() {}
	TMapBase(const TMapBase& Other) : Pairs(Other.Pairs) {}
	TMapBase& operator=(const TMapBase& Other)
	{
		Pairs = Other.Pairs;
		return *this;
	}

	/* Removes every pair, leaving room for ExpectedNumElements. */
	void Empty(INT ExpectedNumElements = 0) { Pairs.Empty(ExpectedNumElements); }

	INT Num() const { return Pairs.Num(); }

	void CountBytes(FArchive& Ar) { Pairs.CountBytes(Ar); }

	/* Sets the key's value (replacing its existing ones); returns the stored value. */
	ValueType& Set(KeyInitType InKey, ValueInitType InValue)
	{
		// Remove existing values associated with the specified key (only possible when duplicate keys are allowed).
		if (KeyFuncs::bAllowDuplicateKeys)
		{
			for (typename PairSetType::TKeyIterator It(Pairs, InKey); It; ++It)
			{
				It.RemoveCurrent();
			}
		}

		// Add the key-value pair to the set; TSet::Add replaces an existing pair with the same key.
		const FSetElementId PairId = Pairs.Add(FPairInitializer(InKey, InValue));

		return Pairs(PairId).Value;
	}

	/* Removes every value of the key; returns how many there were. */
	INT Remove(KeyConstPointerType InKey)
	{
		const INT NumRemovedPairs = Pairs.RemoveKey(InKey);
		return NumRemovedPairs;
	}

	/* The key of a value (a linear search), or NULL. */
	const KeyType* FindKey(ValueInitType Value) const
	{
		for (typename PairSetType::TConstIterator PairIt(Pairs); PairIt; ++PairIt)
		{
			if (PairIt->Value == Value)
			{
				return &PairIt->Key;
			}
		}
		return NULL;
	}

	/* The key's value, or NULL. */
	ValueType* Find(KeyConstPointerType Key)
	{
		FPair* Pair = Pairs.Find(Key);
		return Pair ? &Pair->Value : NULL;
	}
	const ValueType* Find(KeyConstPointerType Key) const
	{
		const FPair* Pair = Pairs.Find(Key);
		return Pair ? &Pair->Value : NULL;
	}

	/* The key's value, added (default-constructed) if missing. */
	ValueType& FindOrAdd(KeyInitType Key)
	{
		FPair* Pair = Pairs.Find(Key);
		if (Pair)
		{
			return Pair->Value;
		}
		else
		{
			return Set(Key, ValueType());
		}
	}

	/* The key's value, or a default-constructed one. */
	ValueType FindRef(KeyConstPointerType Key) const
	{
		const FPair* Pair = Pairs.Find(Key);
		return Pair ? Pair->Value : ValueType();
	}

	UBOOL HasKey(KeyConstPointerType Key) const { return Pairs.Contains(Key); }

	void GenerateKeyArray(TArray<KeyType>& OutArray) const
	{
		OutArray.Empty(Pairs.Num());
		for (typename PairSetType::TConstIterator PairIt(Pairs); PairIt; ++PairIt)
		{
			new(OutArray) KeyType(PairIt->Key);
		}
	}

	void GenerateValueArray(TArray<ValueType>& OutArray) const
	{
		OutArray.Empty(Pairs.Num());
		for (typename PairSetType::TConstIterator PairIt(Pairs); PairIt; ++PairIt)
		{
			new(OutArray) ValueType(PairIt->Value);
		}
	}

	friend FArchive& operator<<(FArchive& Ar, TMapBase& Map)
	{
		return Ar << Map.Pairs;
	}

public:
	/* (public so a file can name an instantiation: template ... TSet<TMap<K,V>::FPair, TMap<K,V>::KeyFuncs>::...) */
	/* What the pair set is given to add a pair. */
	class FPairInitializer
	{
	public:
		KeyInitType Key;
		ValueInitType Value;

		FPairInitializer(KeyInitType InKey, ValueInitType InValue) : Key(InKey), Value(InValue) {}
	};

	/* A key and its value. */
	class FPair
	{
	public:
		KeyType Key;
		ValueType Value;

		FPair() {}
		FPair(const FPairInitializer& InInitializer) : Key(InInitializer.Key), Value(InInitializer.Value) {}
		FPair(const FPair& InCopy) : Key(InCopy.Key), Value(InCopy.Value) {}

		friend FArchive& operator<<(FArchive& Ar, FPair& Pair)
		{
			return Ar << Pair.Key << Pair.Value;
		}

		operator FPairInitializer() const { return FPairInitializer(Key, Value); }
	};

	/* The pair set hashes the key. */
	struct KeyFuncs : BaseKeyFuncs<FPair, KeyType, bInAllowDuplicateKeys>
	{
		typedef typename TContainerTraits<KeyType>::ConstPointerType KeyInitType;
		typedef const FPairInitializer& ElementInitType;

		static FORCEINLINE KeyInitType GetSetKey(const FPairInitializer& Element) { return Element.Key; }
		static FORCEINLINE KeyInitType GetSetKey(const FPair& Element) { return Element.Key; }
		static FORCEINLINE UBOOL Matches(KeyInitType A, KeyInitType B) { return A == B; }
		/* not FORCEINLINE: the game calls an FString key's out of line (00547a00) */
		static DWORD GetKeyHash(KeyInitType Key) { return GetTypeHash(Key); }
	};

	typedef TSet<FPair, KeyFuncs> PairSetType;

protected:

	template<bool bConst>
	class TBaseIterator
	{
	private:
		typedef typename TChooseClass<bConst, typename PairSetType::TConstIterator, typename PairSetType::TIterator>::Result PairItType;
		typedef typename TChooseClass<bConst, const TMapBase, TMapBase>::Result MapType;
		typedef typename TChooseClass<bConst, const KeyType, KeyType>::Result ItKeyType;
		typedef typename TChooseClass<bConst, const ValueType, ValueType>::Result ItValueType;

	public:
		TBaseIterator(MapType& InMap, INT StartIndex = 0) : PairIt(InMap.Pairs, StartIndex) {}

		FORCEINLINE TBaseIterator& operator++() { ++PairIt; return *this; }
		FORCEINLINE operator UBOOL() const { return PairIt; }
		FORCEINLINE ItKeyType& Key() const { return PairIt->Key; }
		FORCEINLINE ItValueType& Value() const { return PairIt->Value; }

	protected:
		PairItType PairIt;
	};

	template<bool bConst>
	class TBaseKeyIterator
	{
	private:
		typedef typename TChooseClass<bConst, typename PairSetType::TConstKeyIterator, typename PairSetType::TKeyIterator>::Result SetItType;
		typedef typename TChooseClass<bConst, const KeyType, KeyType>::Result ItKeyType;
		typedef typename TChooseClass<bConst, const ValueType, ValueType>::Result ItValueType;

	public:
		TBaseKeyIterator(const SetItType& InSetIt) : SetIt(InSetIt) {}

		FORCEINLINE TBaseKeyIterator& operator++() { ++SetIt; return *this; }
		FORCEINLINE operator UBOOL() const { return SetIt; }
		FORCEINLINE ItKeyType& Key() const { return SetIt->Key; }
		FORCEINLINE ItValueType& Value() const { return SetIt->Value; }

	protected:
		SetItType SetIt;
	};

	/* The key-value pairs. */
	PairSetType Pairs;

public:
	/* Iterates over the pairs of a map; RemoveCurrent removes one. */
	class TIterator : public TBaseIterator<false>
	{
	public:
		TIterator(TMapBase& InMap, UBOOL bInRequiresRehashOnRemoval = FALSE, INT StartIndex = 0)
			: TBaseIterator<false>(InMap, StartIndex)
			, Map(InMap)
			, bElementsHaveBeenRemoved(FALSE)
			, bRequiresRehashOnRemoval(bInRequiresRehashOnRemoval)
		{}

		~TIterator()
		{
			if (bElementsHaveBeenRemoved && bRequiresRehashOnRemoval)
			{
				Map.Pairs.Relax();
			}
		}

		void RemoveCurrent()
		{
			TBaseIterator<false>::PairIt.RemoveCurrent();
			bElementsHaveBeenRemoved = TRUE;
		}

	private:
		TMapBase& Map;
		UBOOL bElementsHaveBeenRemoved;
		UBOOL bRequiresRehashOnRemoval;
	};

	/* Iterates over the pairs of a const map. */
	class TConstIterator : public TBaseIterator<true>
	{
	public:
		TConstIterator(const TMapBase& InMap, INT StartIndex = 0) : TBaseIterator<true>(InMap, StartIndex) {}
	};

	/* Iterates over the values of a key in a const map. */
	class TConstKeyIterator : public TBaseKeyIterator<true>
	{
	public:
		TConstKeyIterator(const TMapBase& InMap, KeyInitType InKey)
			: TBaseKeyIterator<true>(typename PairSetType::TConstKeyIterator(InMap.Pairs, InKey))
		{}
	};

	/* Iterates over the values of a key in a map. */
	class TKeyIterator : public TBaseKeyIterator<false>
	{
	public:
		TKeyIterator(TMapBase& InMap, KeyInitType InKey)
			: TBaseKeyIterator<false>(typename PairSetType::TKeyIterator(InMap.Pairs, InKey))
		{}

		void RemoveCurrent()
		{
			TBaseKeyIterator<false>::SetIt.RemoveCurrent();
		}
	};

	friend class TIterator;
	friend class TConstIterator;
};

/* One value per key. */
template<typename KeyType, typename ValueType>
class TMap : public TMapBase<KeyType, ValueType, FALSE>
{
public:
	typedef TMapBase<KeyType, ValueType, FALSE> Super;
	typedef typename Super::KeyInitType KeyInitType;

	TMap() {}
	TMap(const TMap& InCopy) : Super(InCopy) {}
	TMap& operator=(const TMap& Other)
	{
		Super::operator=(Other);
		return *this;
	}

	/* Removes the key's pair, copying its value out; false if there was none. */
	UBOOL RemoveAndCopyValue(KeyInitType Key, ValueType& OutRemovedValue)
	{
		const FSetElementId PairId = Super::Pairs.FindId(Key);
		if (PairId.IsValidId())
		{
			OutRemovedValue = Super::Pairs(PairId).Value;
			Super::Pairs.Remove(PairId);
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
};

/* Several values per key. */
template<typename KeyType, typename ValueType>
class TMultiMap : public TMapBase<KeyType, ValueType, TRUE>
{
public:
	typedef TMapBase<KeyType, ValueType, TRUE> Super;
	typedef typename Super::KeyInitType KeyInitType;
	typedef typename Super::ValueInitType ValueInitType;

	TMultiMap() {}
	TMultiMap(const TMultiMap& InCopy) : Super(InCopy) {}
	TMultiMap& operator=(const TMultiMap& Other)
	{
		Super::operator=(Other);
		return *this;
	}

	/* Every value of the key (most recently added first, unless bMaintainOrder). */
	void MultiFind(KeyInitType Key, TArray<ValueType>& OutValues, UBOOL bMaintainOrder = FALSE) const
	{
		for (typename Super::PairSetType::TConstKeyIterator It(Super::Pairs, Key); It; ++It)
		{
			new(OutValues) ValueType(It->Value);
		}

		if (bMaintainOrder)
		{
			// Create an array with the values in reverse enumerated order; i.e. the order they were inserted in the map.
			TArray<ValueType> OrderedValues;
			OrderedValues.Empty(OutValues.Num());
			for (INT Index = OutValues.Num() - 1; Index >= 0; Index--)
			{
				new(OrderedValues) ValueType(OutValues(Index));
			}

			// Swap the ordered array into the output array.
			Exchange(OrderedValues, OutValues);
		}
	}

	/* Adds a value to the key (keeping its others). */
	ValueType& Add(KeyInitType InKey, ValueInitType InValue)
	{
		const FSetElementId PairId = Super::Pairs.Add(typename Super::FPairInitializer(InKey, InValue));
		return Super::Pairs(PairId).Value;
	}

	/* Adds a value to the key unless the key already has it. */
	ValueType& AddUnique(KeyInitType InKey, ValueInitType InValue)
	{
		// Check for an existing association between the same key and value.
		for (typename Super::PairSetType::TKeyIterator It(Super::Pairs, InKey); It; ++It)
		{
			if (It->Value == InValue)
			{
				return It->Value;
			}
		}

		// If there's no existing association with the same key and value, create one.
		return Add(InKey, InValue);
	}

	/* Removes the key's pairs with this value; returns how many. */
	INT RemovePair(KeyInitType InKey, ValueInitType InValue)
	{
		INT NumRemovedPairs = 0;
		for (typename Super::PairSetType::TKeyIterator It(Super::Pairs, InKey); It; ++It)
		{
			if (It->Value == InValue)
			{
				It.RemoveCurrent();
				++NumRemovedPairs;
			}
		}
		return NumRemovedPairs;
	}

	/* The key's value equal to Value, or NULL. */
	ValueType* FindPair(KeyInitType Key, ValueInitType Value)
	{
		for (typename Super::PairSetType::TKeyIterator It(Super::Pairs, Key); It; ++It)
		{
			if (It->Value == Value)
			{
				return &It->Value;
			}
		}
		return NULL;
	}

	/* How many values the key has. */
	INT Num(KeyInitType Key) const
	{
		INT NumMatchingPairs = 0;
		for (typename Super::PairSetType::TConstKeyIterator It(Super::Pairs, Key); It; ++It)
		{
			++NumMatchingPairs;
		}
		return NumMatchingPairs;
	}

	INT Num() const { return Super::Num(); }
};

/* FConfigCacheIni.h: a config section (key name -> values; a key can repeat) and a config file (section name ->
 * section). FConfigFile::Dump (0061ac60, its log string names it) walks the sections and each one's keys
 * (GetKeys into a TLookupMap<FName>, then MultiFind). Dirty/NoSave/Quotes follow UE3; their offsets aren't checked
 * against this build yet. */
typedef TMultiMap<FName,FString> FConfigSectionMap;
class FConfigSection : public FConfigSectionMap
{
};
class FConfigFile : public TMap<FString,FConfigSection>
{
public:
    UBOOL Dirty, NoSave, Quotes;
    void Dump(FOutputDevice& Ar); /* 0x0061ac60 */
};

/* The real container behind a script mirror (FMap_Mirror, FMultiMap_Mirror, FSet_Mirror ... in
 * Classes.h), checked to have the mirror's size:
 *     TMap<FName, UFunction*>& FuncMap = MirrorAs< TMap<FName, UFunction*> >(Obj->SomeMap_Mirror); */
template<class T, class TMirror>
FORCEINLINE T& MirrorAs(TMirror& Mirror)
{
	typedef char SizesMatch[sizeof(T) == sizeof(TMirror) ? 1 : -1];
	return *(T*)&Mirror;
}
template<class T, class TMirror>
FORCEINLINE const T& MirrorAs(const TMirror& Mirror)
{
	typedef char SizesMatch[sizeof(T) == sizeof(TMirror) ? 1 : -1];
	return *(const T*)&Mirror;
}

/* UnAudio.h: a sound node's per-component state lives in UAudioComponent::SoundNodeData, at the offset
 * SoundNodeOffsetMap (a TMap<USoundNode*, UINT>; Classes.h has only its mirror) keeps for the node.
 * Verified: USoundNodeLooping::IsFinished (00cd3110; Find 00cbf3a0 and Set's TSet::Add 00cd1a40 out of line). */
#define DECLARE_SOUNDNODE_ELEMENT(Type,Name) \
	Type& Name = *((Type*)(Payload)); \
	Payload += sizeof(Type);
#define DECLARE_SOUNDNODE_ELEMENT_PTR(Type,Name) \
	Type* Name = (Type*)(Payload); \
	Payload += sizeof(Type);
#define RETRIEVE_SOUNDNODE_PAYLOAD( Size ) \
		BYTE*	Payload					= NULL; \
		UBOOL*	RequiresInitialization	= NULL; \
		{ \
			TMap<USoundNode*, UINT>& SoundNodeOffsetMap = MirrorAs< TMap<USoundNode*, UINT> >(AudioComponent->SoundNodeOffsetMap); \
			UINT* TempOffset = SoundNodeOffsetMap.Find( this ); \
			UINT Offset; \
			if( !TempOffset ) \
			{ \
				Offset = AudioComponent->SoundNodeData.AddZeroed( Size + sizeof(UBOOL)); \
				SoundNodeOffsetMap.Set( this, Offset ); \
				RequiresInitialization = (UBOOL*) &AudioComponent->SoundNodeData(Offset); \
				*RequiresInitialization = 1; \
				Offset += sizeof(UBOOL); \
			} \
			else \
			{ \
				RequiresInitialization = (UBOOL*) &AudioComponent->SoundNodeData(*TempOffset); \
				Offset = *TempOffset + sizeof(UBOOL); \
			} \
			Payload = &AudioComponent->SoundNodeData(Offset); \
		}

#endif
