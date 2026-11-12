// Engine_0dc0000.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00dc2e20
FString UUIScene::GetWidgetPathName()
{
	return SceneTag.ToString();
}

// @baa 0x00dc2d00
UINT UUIScene::GetNumResolvedFaces()
{
    return bUpdateScenePositions == TRUE ? 0 : 4;
}

// GetTag returns the scene's tag by value (the header's INT GetTag(INT) is the wrong shape).

// @baa 0x00dc2ce0
FName UUIScene::GetTag()
{
    return SceneTag;
}

extern FName g_026c42b0;
	/* ENGINE_GetDefaultStyle */
struct UUIStyle_ : public UUIStyle
{
	UUIStyle_Data* eventGetDefaultStyle();
};

// @baa 0x00dc9980
/* The GetDefaultStyle script event's generated glue (EngineUIPrivateClasses.h). */
UUIStyle_Data* UUIStyle_::eventGetDefaultStyle()
{
	struct UIStyle_eventGetDefaultStyle_Parms
	{
		class UUIStyle_Data* ReturnValue;
	};
	UIStyle_eventGetDefaultStyle_Parms Parms;
	Parms.ReturnValue = NULL;
	ProcessEvent(FindFunctionChecked(g_026c42b0), &Parms);
	return Parms.ReturnValue;
}

struct C_00dcb340
{
	int A;
	int B;
	int C;

	C_00dcb340* sub_00dcb340(const C_00dcb340* Src);
};

// @baa 0x00dcb340
C_00dcb340* C_00dcb340::sub_00dcb340(const C_00dcb340* Src)
{
	A = Src->A;
	B = Src->B;
	C = Src->C;
	return this;
}

static void ForceSub_00dcb340(C_00dcb340* Dst, const C_00dcb340* Src)
{
	Dst->sub_00dcb340(Src);
}

struct V3
{
	INT X;
	INT Y;
	INT Z;

	V3& sub_00dcb390(const V3& Other);
};

// @baa 0x00dcb390
V3& V3::sub_00dcb390(const V3& Other)
{
	X = Other.X;
	Y = Other.Y;
	Z = Other.Z;
	return *this;
}

static void caller(V3& A, const V3& B)
{
	A.sub_00dcb390(B);
}
