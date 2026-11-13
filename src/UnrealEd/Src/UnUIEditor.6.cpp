// UnUIEditor.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053dfa0(...);
void sub_0053dfa0(void*);
int sub_013e9bc0(void);
struct C_014adba0 {
    undefined4 sub_014adba0(byte);
};

// @baa 0x014adba0
undefined4 C_014adba0::sub_014adba0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013e9bc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0149e850
/* Clears object flag 0x0008000000000000 after loading. */
void UUILayer::PostLoad()
{
	Super::PostLoad();
	ObjectFlags &= ~(QWORD)0x0008000000000000;
}

#define INVALID_OBJECT ((UObject*)-1)
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

// @baa 0x014a6470
template UEditorUISceneClient* ConstructObject<UEditorUISceneClient>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 51 "candidate.cpp"
