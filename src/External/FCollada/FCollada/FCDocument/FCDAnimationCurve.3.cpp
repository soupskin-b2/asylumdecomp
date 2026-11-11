// FCDAnimationCurve.cpp (part 3 of 3): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
/* FCDAnimationCurve::SetCurrentAnimationClip (FCollada 3.05b) */
#include <stddef.h>

int sub_018260a0(...);
 /* FUAssertion::OnAssertionFailed(file, line) */
#define FMARRAY_FILE "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h"
namespace fm {
template <class T>
class vector {
public:
    size_t reserved;
    size_t sized;
    T* heapBuffer;

    size_t size() const { return sized; }
    bool empty() const { return sized == 0; }
    T& front() { if (!(sized > 0)) { sub_018260a0(FMARRAY_FILE, 495); } return *heapBuffer; }
    T& back() { if (!(sized > 0)) { sub_018260a0(FMARRAY_FILE, 500); } return *(heapBuffer + sized - 1); }
    T* begin() { return !empty() ? &front() : NULL; }
    T* end() { return !empty() ? &back() + 1 : NULL; }
    T& operator[](size_t index) { if (!(index < sized)) { sub_018260a0(FMARRAY_FILE, 506); } return heapBuffer[index]; }
    const T& operator[](size_t index) const { if (!(index < sized)) { sub_018260a0(FMARRAY_FILE, 508); } return heapBuffer[index]; }
};
}

struct FCDAnimationKey { float input; };

struct FCDAnimationClip;
struct FCDAnimationCurve_ {
    char pad0[0x18];
    unsigned int dirtyFlags;                      /* 0x18 */
    char pad1[0x38 - 0x1c];
    fm::vector<FCDAnimationKey*> keys;            /* 0x38 */
    char pad2[0x5c - 0x44];
    fm::vector<FCDAnimationClip*> clips;          /* 0x5c */
    char pad3[0x6c - 0x68];
    fm::vector<float> clipOffsets;                /* 0x6c */
    FCDAnimationClip* currentClip;                /* 0x78 */
    float currentOffset;                          /* 0x7c */

    void SetDirtyFlag() { dirtyFlags |= 1; }
    void sub_0182f8e0(FCDAnimationClip* clip);
};

// @baa 0x0182f8e0
void FCDAnimationCurve_::sub_0182f8e0(FCDAnimationClip* clip)
{
    if (currentClip == clip) return;

    currentClip = NULL;
    float newOffset = 0.0f;
    for (size_t i = 0; i < clips.size(); ++i)
    {
        if (clips[i] == clip)
        {
            currentClip = clips[i];
            newOffset = ((const fm::vector<float>&)clipOffsets)[i];
            break;
        }
    }

    if (currentClip != NULL)
    {
        float offset = newOffset - currentOffset;
        currentOffset = newOffset;
        for (FCDAnimationKey** it = keys.begin(); it != keys.end(); ++it)
        {
            (*it)->input += offset;
        }
    }
    SetDirtyFlag();
}
