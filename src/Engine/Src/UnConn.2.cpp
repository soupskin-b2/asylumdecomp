// UnConn.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern void* g_026667a8;
extern TCHAR g_01e3f3dc[];
int sub_00630f20(void*, const TCHAR*, ...);
// @baa 0x00c1a1d0
FString UNetConnection::LowLevelGetRemoteAddress()
{
	sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"UNetConnection::LowLevelGetRemoteAddress");
	return FString(g_01e3f3dc);
}

// @baa 0x00c1a210
FString UNetConnection::LowLevelDescribe()
{
	sub_00630f20(g_026667a8, L"Pure virtual not implemented (UNetConnection::LowLevelDescribe)", L"UNetConnection::LowLevelDescribe");
	return FString(g_01e3f3dc);
}

#define INVALID_OBJECT ((UObject*)-1)
class FObjectInstancingGraph;
/* UStruct::IsChildOf isn't declared in Classes.h; this is UE3's inline body. */

/* UnObjBas.h ConstructObject<T> */
template<class T>
T* ConstructObject(UClass* Class, UObject* Outer, FName Name, QWORD SetFlags, UObject* Template, UObject* SubobjectRoot, FObjectInstancingGraph* InstanceGraph)
{
#line 1317 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\UnClass.h"
    check(Class->IsChildOf(T::StaticClass()));
    if (Outer == INVALID_OBJECT)
    {
        Outer = UObject::GetTransientPackage();
    }
    return (T*)UObject::StaticConstructObject(Class, Outer, Name, SetFlags, Template, GError, SubobjectRoot, InstanceGraph);
}

// @baa 0x00e09570
template UDownload* ConstructObject<UDownload>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 61 "candidate.cpp"
