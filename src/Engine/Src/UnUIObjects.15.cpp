// UnUIObjects.cpp (part 15 of 17): 7 functions
// Placed here by: class 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00da80c0
int UConsoleEntry::vf_000(void) { return 1; }

// @baa 0x00db6bd0
IMPLEMENT_CLASS_AT(UConsoleEntry, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIObjects.cpp", 50);

// @baa 0x00daa7e0
UINT UUIObject::GetNumResolvedFaces()
{
    UINT Result = 0;
    for (INT Face = 0; Face < 4; Face++) {
        if (HasPositionBeenResolved(Face)) {
            Result++;
        }
    }
    return Result;
}

// GetTag returns the widget's tag by value (the header's INT GetTag(INT) is the wrong shape).
struct UUIObject_ : public UUIObject
{
    virtual FName GetTag();
};

// @baa 0x00d99300
FName UUIObject_::GetTag()
{
    return WidgetTag;
}

struct UUIObject__00d99330 : public UUIObject
{
    virtual INT HasPositionBeenResolved(BYTE FaceIndex);
};

// @baa 0x00d99330
INT UUIObject__00d99330::HasPositionBeenResolved(BYTE FaceIndex)
{
    return DockTargets.bResolved[FaceIndex] != 0;
}

// @baa 0x00daa3d0
void UUIObject::RequestFormattingUpdate()
{
    UUIScene* Scene = reinterpret_cast<UUIScene*>(GetScene());
    if (Scene != NULL)
        Scene->RequestFormattingUpdate();
}

struct C
{
    BYTE pad_00[0x10];
    BYTE Values[1];

    INT sub_00da6660(INT Index);
};

// @baa 0x00da6660
INT C::sub_00da6660(INT Index)
{
    return Values[Index];
}
