// FCollada_1840000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
/* FCollada 3.05b: FUTrackedList<T>::at (FUtils/FUTracker.h), with fm::vector::at (FMath/FMArray.h) inlined. */
#include <stddef.h>

typedef unsigned int uint32;

namespace FUAssertion
{
    bool OnAssertionFailed(const char* file, uint32 line);
}

;
#define FUBreak FUAssertion::OnAssertionFailed(__FILE__, __LINE__)
#define FUAssert(command, fall_back) { if (!(command)) { FUBreak; fall_back; } }
namespace fm
{
    template <class T, bool PRIMITIVE>
    class vector
    {
    protected:
        size_t reserved;
        size_t sized;
        T* heapBuffer;

    public:
        size_t size() const { return sized; }

        T& at(size_t index)
        {
#line 507 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h"
            FUAssert(index < sized, );
            return heapBuffer[index];
        }
    };

    template <class T>
    class pvector : public vector<const void*, true>
    {
    public:
        typedef vector<const void*, true> Parent;
        T*& at(size_t index) { return (T*&) Parent::at(index); }
    };
}

class FUTrackable;
class FUTracker
{
public:
    virtual ~FUTracker() {}
    virtual void OnObjectReleased(FUTrackable* object) = 0;
};

template <class ObjectClass>
class FUTrackedList : private fm::pvector<ObjectClass>, FUTracker
{
public:
    typedef fm::pvector<ObjectClass> Parent;

    ObjectClass* at(size_t index) { return (ObjectClass*) Parent::at(index); }
};

// @baa 0x01841f80
template class FUTrackedList<FUTrackable>;

#line 68 "candidate.cpp"
