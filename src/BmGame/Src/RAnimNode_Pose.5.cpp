// RAnimNode_Pose.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e34c8;
	/* PlayForceFeedBack */
struct ARPlayerController_ : public ARPlayerController
{
	void eventPlayForceFeedBack(class UForceFeedbackWaveform* FFWaveform);
};

// @baa 0x01595270
/* RPlayerController.PlayForceFeedBack script event: the generated glue, out of line here. */
void ARPlayerController_::eventPlayForceFeedBack(class UForceFeedbackWaveform* FFWaveform)
{
	struct RPlayerController_eventPlayForceFeedBack_Parms
	{
		class UForceFeedbackWaveform* FFWaveform;
	} Parms;
	Parms.FFWaveform = FFWaveform;
	ProcessEvent(FindFunctionChecked(g_026e34c8), &Parms);
}

extern FName g_026e264c;
	/* SetFOV */
struct ARAnimatedCameraActor_ : public ARAnimatedCameraActor
{
	void eventSetFOV(FLOAT DesiredValue, FLOAT TimeToChange);
};

// @baa 0x015952d0
/* RAnimatedCameraActor.SetFOV script event: the generated glue, out of line here. */
void ARAnimatedCameraActor_::eventSetFOV(FLOAT DesiredValue, FLOAT TimeToChange)
{
	struct RAnimatedCameraActor_eventSetFOV_Parms
	{
		FLOAT DesiredValue;
		FLOAT TimeToChange;
	} Parms;
	Parms.DesiredValue = DesiredValue;
	Parms.TimeToChange = TimeToChange;
	ProcessEvent(FindFunctionChecked(g_026e264c), &Parms);
}

extern FName g_026e261c;
	/* SetGameSpeed */
struct ARAnimatedCameraActor__01595330 : public ARAnimatedCameraActor
{
	void eventSetGameSpeed(FLOAT DesiredValue, FLOAT TimeToChange);
};

// @baa 0x01595330
/* RAnimatedCameraActor.SetGameSpeed script event: the generated glue, out of line here. */
void ARAnimatedCameraActor__01595330::eventSetGameSpeed(FLOAT DesiredValue, FLOAT TimeToChange)
{
	struct RAnimatedCameraActor_eventSetGameSpeed_Parms
	{
		FLOAT DesiredValue;
		FLOAT TimeToChange;
	} Parms;
	Parms.DesiredValue = DesiredValue;
	Parms.TimeToChange = TimeToChange;
	ProcessEvent(FindFunctionChecked(g_026e261c), &Parms);
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
    static UObject* StaticConstructObject(UClass* Class, UObject* InOuter, FName Name, QWORD SetFlags, UObject* Template, FOutputDevice* Error, UObject* SubobjectRoot, FObjectInstancingGraph* InstanceGraph); // 005e44e0
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
    return (T*)UObject_::StaticConstructObject(Class, Outer, Name, SetFlags, Template, GError, SubobjectRoot, InstanceGraph);
}

// @baa 0x015a2270
template URPoseConfig* ConstructObject<URPoseConfig>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 105 "candidate.cpp"

// @baa 0x015a2310
template URWeaponConfig* ConstructObject<URWeaponConfig>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
