// UnEdTran.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// Classes.h declares slot 0x128 as `virtual INT GetUndoDesc(INT, INT)`; UE3 has the signature below.

// @baa 0x00f793f0
FString UTransactor::GetUndoDesc(UBOOL bCheckWhetherUndoPossible) PURE_VIRTUAL(UTransactor::GetUndoDesc, return TEXT(""););

extern void* g_026667a8;
extern TCHAR g_01e3f3dc[];
int sub_00630f20(void*, const TCHAR*, ...);
struct UTransactor__00f79430 : public UTransactor
{
	FString GetRedoDesc();
};

// @baa 0x00f79430
FString UTransactor__00f79430::GetRedoDesc()
{
	sub_00630f20(g_026667a8, L"Pure virtual not implemented (UTransactor::GetRedoDesc)", L"UTransactor::GetRedoDesc");
	return FString(g_01e3f3dc);
}

#define INVALID_OBJECT ((UObject*)-1)
class FObjectInstancingGraph;
/* UStruct::IsChildOf isn't declared in Classes.h; this is UE3's inline body. */
struct UClass_ : public UClass
{
    UBOOL IsChildOf(const UField* SomeBase) const
    {
        for (const UField* Struct = this; Struct; Struct = Struct->SuperField)
            if (Struct == SomeBase)
                return 1;
        return 0;
    }
};

struct UObject_ : public UObject
{
    static UObject* GetTransientPackage();                                    // 005c1d70
};

/* UnObjBas.h ConstructObject<T> */
template<class T>
T* ConstructObject(UClass_* Class, UObject* Outer, FName Name, QWORD SetFlags, UObject* Template, UObject* SubobjectRoot, FObjectInstancingGraph* InstanceGraph)
{
#line 1317 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\UnClass.h"
    check(Class->IsChildOf(T::StaticClass()));
    if (Outer == INVALID_OBJECT)
    {
        Outer = UObject_::GetTransientPackage();
    }
    return (T*)UObject::StaticConstructObject(Class, Outer, Name, SetFlags, Template, GError, SubobjectRoot, InstanceGraph);
}

// @baa 0x00f9cf80
template UEditorViewportInput* ConstructObject<UEditorViewportInput>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 68 "candidate.cpp"
