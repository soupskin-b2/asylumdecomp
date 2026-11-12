/* UE3's TArray as this build has it (Core/Inc/Array.h, heap allocator), recovered from the
 * game's code. Opt in with   #include "ue3/Array.h"
 *
 * Layout: { T* Data; INT ArrayNum; INT ArrayMax; } (Data belongs to the allocator, which frees
 * it in its destructor). Every check() sits on the line the engine's has (#line), so the
 * pushed __LINE__ and __FILE__ are the original's:
 *   560 operator()(i)        566 operator()(i) const    572 Pop()
 *   592/593 Last(c)          599 Last(c) const          779 Add(Count)
 *   794-798 Insert(Index, Count)                        829-831 Remove(Index, Count)
 *   1001 RemoveItem(Item)    1055/1056 SwapItems(A, B)  1275 operator new(Size, TArray&)
 *   FindItemIndex/ContainsItem: checked against the game's out-of-line copy (006bc8e0)
 *   1705/1711 TIndirectArray<T>::operator()(i) (and its const form)
 * operator() and its const form (accessors returning &A(0)) are checked against the game;
 * the rest follow the engine's code and the game's assembly. A member that doesn't produce
 * the original's code is a header bug: fix it here.
 */
#pragma once
#include "Core.h"

#ifndef BAA_UE3_ARRAY
#define BAA_UE3_ARRAY

#define BAA_ARRAY_FILE "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"

typedef unsigned long SIZE_T; /* as <basetsd.h> has it (operator new takes size_t) */

/* Placement new as <new> has it: throw() makes the compiler test the pointer before constructing,
 * as the game's AddItem/InsertItem code does. */
#ifndef __PLACEMENT_NEW_INLINE
#define __PLACEMENT_NEW_INLINE
inline void* __cdecl operator new(size_t, void* Where) throw() { return Where; }
inline void __cdecl operator delete(void*, void*) throw() {}
#endif

/* Constructors that leave memory as it is: UObjects are allocated zeroed, so their TArray and
 * FString members (TArrayNoInit, FStringNoInit) are not initialised by the class's constructor. */
enum ENoInit { E_NoInit };

/* FHeapAllocator::ForAnyElementType: the allocation and its policy. */
class FHeapAllocation {
public:
    void* Data;
    FHeapAllocation() : Data(NULL) {}
    FHeapAllocation(ENoInit) {}
    ~FHeapAllocation() {
        if (Data) {
            appFree(Data);
            Data = NULL;
        }
    }
    void* GetAllocation() const { return Data; }
    void ResizeAllocation(INT PreviousNumElements, INT NumElements, INT NumBytesPerElement) {
        if (Data || NumElements) {
            Data = appRealloc(Data, NumElements * NumBytesPerElement, DEFAULT_ALIGNMENT);
        }
    }
    INT CalculateSlack(INT NumElements, INT NumAllocatedElements, INT NumBytesPerElement) const {
        return DefaultCalculateSlack(NumElements, NumAllocatedElements, NumBytesPerElement);
    }
};

template<typename T>
class TArray {
public:
    FHeapAllocation AllocatorInstance;
    INT ArrayNum;
    INT ArrayMax;

    TArray() : ArrayNum(0), ArrayMax(0) {}
    explicit TArray(INT InNum) : ArrayNum(InNum), ArrayMax(InNum) { /* out of line per T in places (TArray<TCHAR> 00417dc0) */
        AllocatorInstance.ResizeAllocation(0, ArrayMax, sizeof(T));
    }
    TArray(ENoInit) : AllocatorInstance(E_NoInit) {}
    TArray(const TArray& Other) : ArrayNum(0), ArrayMax(0) { Copy(Other); }
    void operator=(const TArray& Other) { /* this build's returns nothing */
        if (this != &Other) {
            if (Other.Num() > 0) {
                Empty(Other.Num());
                if (TTypeInfo<T>::NeedsConstructor) {
                    for (INT Index = 0; Index < Other.Num(); Index++) {
                        new(GetTypedData() + Index) T(Other(Index));
                    }
                } else {
                    appMemcpy(AllocatorInstance.GetAllocation(), &Other(0), sizeof(T) * Other.Num());
                }
                ArrayNum = Other.Num();
            } else {
                Empty();
            }
        }
    }
    ~TArray() {
        DestructItems(0, ArrayNum);
        ArrayNum = ArrayMax = 0;
    }

    T* GetTypedData() { return (T*)AllocatorInstance.GetAllocation(); }
    const T* GetTypedData() const { return (const T*)AllocatorInstance.GetAllocation(); }
    void* GetData() { return AllocatorInstance.GetAllocation(); }
    INT Num() const { return ArrayNum; }
    UBOOL IsValidIndex(INT i) const { return i >= 0 && i < ArrayNum; }

    __forceinline T& operator()(INT i) {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return GetTypedData()[i];
    }
    __forceinline const T& operator()(INT i) const {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return GetTypedData()[i];
    }
    T Pop() {
#line 572 BAA_ARRAY_FILE
        check(ArrayNum>0);
        T Result = GetTypedData()[ArrayNum - 1];
        Remove(ArrayNum - 1);
        return Result;
    }
    T& Last(INT c = 0) {
#line 592 BAA_ARRAY_FILE
        check(AllocatorInstance.GetAllocation());
        check(c<ArrayNum);
        return GetTypedData()[ArrayNum - c - 1];
    }
    const T& Last(INT c = 0) const {
#line 599 BAA_ARRAY_FILE
        check(GetTypedData());
        return GetTypedData()[ArrayNum - c - 1];
    }

    __forceinline void DestructItems(INT Index, INT Count) {
        if (TTypeInfo<T>::NeedsDestructor) {
            for (INT i = Index; i < Index + Count; i++) {
                (&(*this)(i))->~T();
            }
        }
    }

    INT Add(INT Count = 1) {
#line 779 BAA_ARRAY_FILE
        check(Count>=0);
        const INT OldNum = ArrayNum;
        if ((ArrayNum += Count) > ArrayMax) {
            ArrayMax = AllocatorInstance.CalculateSlack(ArrayNum, ArrayMax, sizeof(T));
            AllocatorInstance.ResizeAllocation(OldNum, ArrayMax, sizeof(T));
        }
        return OldNum;
    }
    void Insert(INT Index, INT Count = 1) { /* void in this build (no result in its out-of-line copies) */
#line 794 BAA_ARRAY_FILE
        check(Count>=0);
        check(ArrayNum>=0);
        check(ArrayMax>=ArrayNum);
        check(Index>=0);
        check(Index<=ArrayNum);
        const INT OldNum = ArrayNum;
        if ((ArrayNum += Count) > ArrayMax) {
            ArrayMax = AllocatorInstance.CalculateSlack(ArrayNum, ArrayMax, sizeof(T));
            AllocatorInstance.ResizeAllocation(OldNum, ArrayMax, sizeof(T));
        }
        appMemmove((BYTE*)AllocatorInstance.GetAllocation() + (Index + Count) * sizeof(T),
                   (BYTE*)AllocatorInstance.GetAllocation() + (Index) * sizeof(T),
                   (OldNum - Index) * sizeof(T));
    }
    INT AddZeroed(INT Count = 1) {
        const INT Index = Add(Count);
        appMemzero((BYTE*)AllocatorInstance.GetAllocation() + Index * sizeof(T), Count * sizeof(T));
        return Index;
    }
    INT AddItem(const T& Item) {
        const INT Index = Add(1);
        new(GetTypedData() + Index) T(Item);
        return Index;
    }
    INT AddUniqueItem(const T& Item) {
        for (INT Index = 0; Index < ArrayNum; Index++) {
            if ((*this)(Index) == Item) {
                return Index;
            }
        }
        return AddItem(Item);
    }
    void InsertZeroed(INT Index, INT Count = 1) {
        Insert(Index, Count);
        appMemzero((BYTE*)AllocatorInstance.GetAllocation() + Index * sizeof(T), Count * sizeof(T));
    }
    INT InsertItem(const T& Item, INT Index = 0) {
        Insert(Index, 1);
        new(GetTypedData() + Index) T(Item);
        return Index;
    }
    void Reserve(INT Number) {
        if (Number > ArrayMax) {
            ArrayMax = Number;
            AllocatorInstance.ResizeAllocation(ArrayNum, ArrayMax, sizeof(T));
        }
    }
    void Remove(INT Index, INT Count = 1) {
#line 829 BAA_ARRAY_FILE
        check(Index>=0);
        check(Index<=ArrayNum);
        check(Index+Count<=ArrayNum);
        DestructItems(Index, Count);
        const INT NumToMove = ArrayNum - Index - Count;
        if (NumToMove) {
            appMemmove((BYTE*)AllocatorInstance.GetAllocation() + (Index) * sizeof(T),
                       (BYTE*)AllocatorInstance.GetAllocation() + (Index + Count) * sizeof(T),
                       NumToMove * sizeof(T));
        }
        ArrayNum -= Count;
        const INT NewArrayMax = AllocatorInstance.CalculateSlack(ArrayNum, ArrayMax, sizeof(T));
        if (NewArrayMax != ArrayMax) {
            ArrayMax = NewArrayMax;
            AllocatorInstance.ResizeAllocation(ArrayNum, ArrayMax, sizeof(T));
        }
    }
    void Shrink() {
        if (ArrayMax != ArrayNum) {
            ArrayMax = ArrayNum;
            AllocatorInstance.ResizeAllocation(ArrayNum, ArrayMax, sizeof(T));
        }
    }
    void Copy(const TArray& Source) {
        if (this != &Source) {
            if (Source.Num() > 0) {
                Empty(Source.Num());
                if (TTypeInfo<T>::NeedsConstructor) {
                    for (INT Index = 0; Index < Source.Num(); Index++) {
                        new(GetTypedData() + Index) T(Source(Index));
                    }
                } else {
                    appMemcpy(AllocatorInstance.GetAllocation(), &Source(0), sizeof(T) * Source.Num());
                }
                ArrayNum = Source.Num();
            } else {
                Empty();
            }
        }
    }
    void Reset() { /* this build's: no NewSize (no ArrayMax test) */
        DestructItems(0, ArrayNum);
        ArrayNum = 0;
    }
    void Empty(INT Slack = 0) {
        DestructItems(0, ArrayNum);
        ArrayNum = 0;
        if (ArrayMax != Slack) {
            ArrayMax = Slack;
            AllocatorInstance.ResizeAllocation(0, ArrayMax, sizeof(T));
        }
    }
    INT RemoveItem(const T& Item) {
#line 1001 BAA_ARRAY_FILE
        check( ((&Item) < GetTypedData()) || ((&Item) >= GetTypedData()+ArrayMax) );
        INT WriteIndex = 0;
        for (INT ReadIndex = 0; ReadIndex < ArrayNum; ReadIndex++) {
            if (GetTypedData()[ReadIndex] == Item) {
                (&GetTypedData()[ReadIndex])->~T();
            } else {
                if (ReadIndex != WriteIndex) {
                    appMemmove(&GetTypedData()[WriteIndex], &GetTypedData()[ReadIndex], sizeof(T));
                }
                WriteIndex++;
            }
        }
        const INT NumRemoved = ArrayNum - WriteIndex;
        ArrayNum = WriteIndex;
        return NumRemoved;
    }
    INT FindItemIndex(const T& Item) const {
        const T* DataEnd = GetTypedData() + ArrayNum;
        for (const T* Data = GetTypedData(); Data < DataEnd; Data++) {
            if (*Data == Item) {
                return (INT)(Data - GetTypedData());
            }
        }
        return INDEX_NONE;
    }
    UBOOL ContainsItem(const T& Item) const { return FindItemIndex(Item) != INDEX_NONE; }
    UBOOL operator==(const TArray& Other) const {
        if (Num() != Other.Num()) {
            return FALSE;
        }
        for (INT Index = 0; Index < Num(); Index++) {
            if (!((*this)(Index) == Other(Index))) {
                return FALSE;
            }
        }
        return TRUE;
    }
    UBOOL operator!=(const TArray& Other) const {
        if (Num() != Other.Num()) {
            return TRUE;
        }
        for (INT Index = 0; Index < Num(); Index++) {
            if (!((*this)(Index) == Other(Index))) {
                return TRUE;
            }
        }
        return FALSE;
    }
    void SwapItems(INT A, INT B) {
#line 1055 BAA_ARRAY_FILE
        check((A >= 0) && (B >= 0));
        check((ArrayNum > A) && (ArrayNum > B));
        if (A != B) {
            appMemswap((BYTE*)AllocatorInstance.GetAllocation() + (sizeof(T) * A),
                       (BYTE*)AllocatorInstance.GetAllocation() + (sizeof(T) * B), sizeof(T));
        }
    }
};

/* A UObject's array member (UE3: TArrayNoInit). */
template<typename T>
class TArrayNoInit : public TArray<T> {
public:
    TArrayNoInit() : TArray<T>(E_NoInit) {}
};

/* TIndirectArray<T>: an array of pointers to T it owns. */
template<typename T>
class TIndirectArray : public TArray<void*> {
public:
    T& operator()(INT i) {
#line 1705 BAA_ARRAY_FILE
        check(i>=0 && i<this->ArrayNum);
        return *(T*)this->GetTypedData()[i];
    }
    const T& operator()(INT i) const {
#line 1711 BAA_ARRAY_FILE
        check(i>=0 && i<this->ArrayNum);
        return *(T*)this->GetTypedData()[i];
    }
};

// The game's compiler sometimes kept new(Array) T out of line (a call to a per-T function holding the
// check): #define BAA_OUTLINE_NEW before the includes for such a file.
#ifdef BAA_OUTLINE_NEW
#define BAA_NEW_INLINE __declspec(noinline)
#else
#define BAA_NEW_INLINE inline
#endif
template<typename T>
BAA_NEW_INLINE void* operator new(size_t Size, TArray<T>& Array) {
#line 1275 BAA_ARRAY_FILE
    check(Size == sizeof(T));
    const INT Index = Array.Add(1);
    return &Array(Index);
}
// UE3's placement form has no matching placement delete. Adding one makes MSVC emit an EH
// cleanup frame when constructing a nontrivial element, unlike the original's new(Array) code.
#ifdef BAA_ARRAY_PLACEMENT_DELETE
template<typename T>
inline void operator delete(void*, TArray<T>&) {}
#endif

#endif
