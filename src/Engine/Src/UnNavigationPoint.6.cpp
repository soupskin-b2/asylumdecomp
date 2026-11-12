// UnNavigationPoint.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* placement new as UE3 declares it (UnTemplate.h); the exe keeps the matching delete out of line (00401890) */
inline void* operator new(size_t Size, void* Mem) { return Mem; }

void operator delete(void* Ptr, void* Mem);
/* FCoverSlot's (implicit) copy constructor, out of line in the exe (00859980) */
struct FCoverSlot_ : public FCoverSlot {
    FCoverSlot_(const FCoverSlot& Other);
};

struct FCoverSlotArray : public TArray<FCoverSlot> {
    INT sub_00859eb0(const FCoverSlot& Item); // AddItem
};

// @baa 0x00859eb0
INT FCoverSlotArray::sub_00859eb0(const FCoverSlot& Item)
{
    const INT Index = Add(1);
    ::new(GetTypedData() + Index) FCoverSlot_(Item);
    return Index;
}

/* FCoverSlot's (implicit) destructor, out of line in the exe (00857fa0) */
struct FCoverSlot__00859e20 : public FCoverSlot {
    ~FCoverSlot__00859e20();
};

/* Kit gap (Array.h, issue #39): this build inlines TArray::DestructItems / operator() where the kit's
 * plain-inline ones are called out of line; TArray::Empty with the same bodies, forced inline. */
template<class T> struct TArrayEmpty_ : public TArray<T>
{
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline void DestructItems(INT Index, INT Count)
    {
        for (INT i = Index; i < Index + Count; i++)
        {
            (&At(i))->~T();
        }
    }
    void Empty(INT Slack = 0)
    {
        DestructItems(0, this->ArrayNum);
        this->ArrayNum = 0;
        if (this->ArrayMax != Slack)
        {
            this->ArrayMax = Slack;
            this->AllocatorInstance.ResizeAllocation(0, this->ArrayMax, sizeof(T));
        }
    }
};

// @baa 0x00859e20
/* TArray<FCoverSlot>::Empty */
template void TArrayEmpty_<FCoverSlot__00859e20>::Empty(INT Slack);

#line 68 "candidate.cpp"

/* FCoverSlot's (implicit) destructor, out of line in the exe (00857fa0) */
struct FCoverSlot__00859ce0 : public FCoverSlot {
    ~FCoverSlot__00859ce0();
};

/* Kit gap (Array.h, issue #39): this build inlines TArray::DestructItems / operator() into ~TArray where
 * the kit's plain-inline ones are called out of line. TArray's layout and destructor with the same
 * bodies, forced inline. */
template<class T> class TArrayDtor_
{
public:
    FHeapAllocation AllocatorInstance;
    INT ArrayNum;
    INT ArrayMax;

    T* GetTypedData() { return (T*)AllocatorInstance.GetAllocation(); }
    __forceinline T& operator()(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return GetTypedData()[i];
    }
    __forceinline void DestructItems(INT Index, INT Count)
    {
        for (INT i = Index; i < Index + Count; i++)
        {
            (&(*this)(i))->~T();
        }
    }
    ~TArrayDtor_()
    {
        DestructItems(0, ArrayNum);
        ArrayNum = ArrayMax = 0;
    }
};

// @baa 0x00859ce0
/* TArray<FCoverSlot>::~TArray */
template TArrayDtor_<FCoverSlot__00859ce0>::~TArrayDtor_();

#line 110 "candidate.cpp"
