// TextureMovie.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c8f720
void UTextureMovie::execPlay( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	Play();
}

// @baa 0x00c8f760
void UTextureMovie::execPause( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	Pause();
}

// @baa 0x00c8f7a0
void UTextureMovie::execStop( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	Stop();
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

// @baa 0x00760530
template UCodecMovie* ConstructObject<UCodecMovie>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 65 "candidate.cpp"

// @baa 0x007605d0
template UCodecMovieFallback* ConstructObject<UCodecMovieFallback>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
