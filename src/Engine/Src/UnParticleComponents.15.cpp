// UnParticleComponents.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

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

/* FParticleSystemReplayFrame with its implicit destructor kept out of line, as in the exe */
struct FParticleSystemReplayFrame_ : public FParticleSystemReplayFrame
{
    ~FParticleSystemReplayFrame_();
};

// @baa 0x00b6fc10
/* TArray<FParticleSystemReplayFrame>::~TArray */
template TArrayDtor_<FParticleSystemReplayFrame_>::~TArrayDtor_();

#line 50 "candidate.cpp"
