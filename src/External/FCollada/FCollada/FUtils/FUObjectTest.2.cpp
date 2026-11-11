// FUObjectTest.cpp (part 2 of 7): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

/* FCollada fm::vector<T*>::operator[] (FMath/FMArray.h:506) */
int sub_018260a0(...);
 /* FUAssertion::OnAssertionFailed(file, line) */
template <class T>
struct fm_vector {
    unsigned int reserved;
    unsigned int sized;
    T* heapBuffer;
    T& sub_01866ab0(unsigned int index);
};

// @baa 0x01866ab0
template <class T>
T& fm_vector<T>::sub_01866ab0(unsigned int index)
{
    if (!(index < sized)) { sub_018260a0("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h", 506); }
    return heapBuffer[index];
}

template struct fm_vector<void*>;
