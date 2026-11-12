// UnAudio.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* placement new (UnTemplate.h) */
inline void* operator new(size_t, void* Mem) { return Mem; }

inline void operator delete(void*, void*) {}

/* TArray::AddItem / AddUniqueItem (Array.h); not in the kit's TArray. */
template<typename T> struct TArrayAddUnique_ : public TArray<T>
{
    INT AddItem(const T& Item)
    {
        const INT Index = this->Add(1);
        new(this->GetTypedData() + Index) T(Item);
        return Index;
    }
    INT AddUniqueItem(const T& Item)
    {
        for (INT Index = 0; Index < this->Num(); Index++)
        {
            if ((*this)(Index) == Item)
            {
                return Index;
            }
        }
        return AddItem(Item);
    }
};

// @baa 0x0078ffb0
/* the out-of-line TArray<UAudioComponent*>::AddUniqueItem instantiation (UAudioDevice::AudioComponents) */
template INT TArrayAddUnique_<UAudioComponent*>::AddUniqueItem(UAudioComponent* const& Item);
