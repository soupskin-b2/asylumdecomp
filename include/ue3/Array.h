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

typedef unsigned int SIZE_T;

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
    TArray(ENoInit) : AllocatorInstance(E_NoInit) {}
    ~TArray() {
        DestructItems(0, ArrayNum);
        ArrayNum = ArrayMax = 0;
    }

    T* GetTypedData() { return (T*)AllocatorInstance.GetAllocation(); }
    const T* GetTypedData() const { return (const T*)AllocatorInstance.GetAllocation(); }
    void* GetData() { return AllocatorInstance.GetAllocation(); }
    INT Num() const { return ArrayNum; }
    UBOOL IsValidIndex(INT i) const { return i >= 0 && i < ArrayNum; }

    T& operator()(INT i) {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return GetTypedData()[i];
    }
    const T& operator()(INT i) const {
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

    void DestructItems(INT Index, INT Count) {
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
    INT Insert(INT Index, INT Count = 1) {
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
        return Index;
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

template<typename T>
inline void* operator new(SIZE_T Size, TArray<T>& Array) {
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
