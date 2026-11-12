// UnUIObjects.cpp (part 15 of 17): 15 functions
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

// @baa 0x00d99300
FName UUIObject::GetTag()
{
    return WidgetTag;
}

// @baa 0x00d99330
INT UUIObject::HasPositionBeenResolved(BYTE FaceIndex)
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

extern int GetOutermost();
extern int sub_005c1d70();
// @baa 0x00ca5000
int sub_00ca5000()
{
    return GetOutermost() == sub_005c1d70();
}

// @baa 0x00daabb0
int UUIObject::sub_00daabb0(INT Flags)
{
    return (PrivateFlags & Flags) == Flags;
}

void sub_00dde830();
struct C_00da6dc0
{
    C_00da6dc0* sub_00da6dc0(INT Unused);
};

// @baa 0x00da6dc0
C_00da6dc0* C_00da6dc0::sub_00da6dc0(INT)
{
    sub_00dde830();
    return this;
}

struct C_00da6dd0
{
    C_00da6dd0* sub_00da6dd0(INT Unused);
};

// @baa 0x00da6dd0
C_00da6dd0* C_00da6dd0::sub_00da6dd0(INT)
{
    sub_00dde830();
    return this;
}

void sub_00dde720();
struct C_00da6de0
{
    C_00da6de0* sub_00da6de0(INT Unused);
};

// @baa 0x00da6de0
C_00da6de0* C_00da6de0::sub_00da6de0(INT)
{
    sub_00dde720();
    return this;
}

struct C_00da6df0
{
    C_00da6df0* sub_00da6df0(INT Unused);
};

// @baa 0x00da6df0
C_00da6df0* C_00da6df0::sub_00da6df0(INT)
{
    sub_00dde720();
    return this;
}

struct C_00da7360
{
    C_00da7360* sub_00da7360(INT Unused);
};

// @baa 0x00da7360
C_00da7360* C_00da7360::sub_00da7360(INT)
{
    sub_00dde720();
    return this;
}

// @baa 0x00daa430
void UUIObject::RequestPrimitiveReview(UBOOL bReinitializePrimitives, UBOOL bReviewPrimitiveUsage)
{
	UUIObject* Scene = (UUIObject*)GetScene();
	if (Scene != 0)
	{
		Scene->RequestPrimitiveReview(bReinitializePrimitives, bReviewPrimitiveUsage);
		return;
	}
}
