// UnUIObjects.cpp (part 12 of 17): 16 functions
// Placed here by: class 11, neighbours 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00d99400
IMPLEMENT_CLASS_AT(UUIContainer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIContainers.cpp", 28);

// @baa 0x00d994d0
IMPLEMENT_CLASS_AT(UUICalloutButtonPanel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIContainers.cpp", 29);

// @baa 0x00d99580
IMPLEMENT_CLASS_AT(UUITabPage, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIContainers.cpp", 36);

// @baa 0x00da8030
bool UUIScreenObject::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00da9090
void UUIScreenObject::vf_110(int a0, int a1) {  }

// @baa 0x00da92f0
void UUIScreenObject::vf_1c4(void) {  }

// @baa 0x00da9310
void UUIScreenObject::vf_09c(void) {  }

// @baa 0x00da97a0
int UUIScreenObject::vf_1dc(int a0) { return 0; }

// @baa 0x00da97b0
int UUIScreenObject::vf_1e0(int a0) { return 0; }

// @baa 0x00da97c0
int UUIScreenObject::vf_1e4(int a0) { return 0; }

// @baa 0x00da97d0
int UUIScreenObject::vf_1e8(int a0, int a1) { return 0; }

// @baa 0x00da98a0
int UUIScreenObject::vf_124(int a0, int a1) { return 0; }

// @baa 0x00da9900
int UUIScreenObject::vf_160(int a0, int a1, int a2) { return 0; }

// @baa 0x00da99d0
uint UUIScreenObject::sub_00da99d0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x50) >> 2 & 1;
}

struct TArrayFName_ : public TArray<FName> {
    INT sub_00547260(const FName& Item);
};

extern FName g_026c5ac0;
extern FName g_026c5a38;
extern FName g_026c5b18;
extern FName g_026c59bc;
extern FName g_026c59dc;
extern FName g_026c5af8;
extern FName g_026c5ae0;
struct UUIScreenObject_ : public UUIScreenObject {
    void sub_00db2cc0(TArray<FName>& out_KeyNames);
    void sub_00db2e70(TArray<FName>& out_KeyNames);
};

// @baa 0x00db2e70
void UUIScreenObject_::sub_00db2e70(TArray<FName>& out_KeyNames)
{
    TArrayFName_& KeyNames = (TArrayFName_&)out_KeyNames;
    KeyNames.sub_00547260(g_026c5ac0);
    KeyNames.sub_00547260(g_026c5a38);
    KeyNames.sub_00547260(g_026c5b18);
    KeyNames.sub_00547260(g_026c59bc);
    KeyNames.sub_00547260(g_026c59dc);
    KeyNames.sub_00547260(g_026c5af8);
    KeyNames.sub_00547260(g_026c5ae0);
    sub_00db2cc0(out_KeyNames);
}

/* Kit gaps: FName::operator== (UnName.h), UUIInteraction::GetDataStoreClient (static, 00d8dee0) and
 * UUIScene::CreateSceneDataStore (00db0a10) aren't declared. */
FORCEINLINE UBOOL operator==(const FName& A, const FName& B)
{
	return A.Index == B.Index && A.Number == B.Number;
}

struct UUIInteraction_ : public UUIInteraction
{
	static UDataStoreClient* GetDataStoreClient();
};

struct UUIScene_ : public UUIScene
{
	void CreateSceneDataStore();
};

// @baa 0x00db0c60
/* Finds the data store tagged DataStoreTag: the scene's own for SceneData, else a global or player data store
 * (for InPlayerOwner, or the scene's owner). Callable on a NULL scene. */
UUIDataStore* UUIScene::ResolveDataStore(FName DataStoreTag, ULocalPlayer* InPlayerOwner)
{
	UUIDataStore* Result = NULL;

	if (DataStoreTag == FName((EName)0x364))		/* NAME_SceneData (not in Core.h EName) */
	{
		if (this != NULL)
		{
			if (SceneData == NULL)
			{
				((UUIScene_*)this)->CreateSceneDataStore();
			}
			Result = SceneData;
		}
	}
	else
	{
		UDataStoreClient* DataStoreClient = UUIInteraction_::GetDataStoreClient();
		if (DataStoreClient != NULL)
		{
			if (InPlayerOwner == NULL && this != NULL)
			{
				InPlayerOwner = PlayerOwner;
			}
			Result = DataStoreClient->FindDataStore(DataStoreTag, InPlayerOwner);
		}
	}

	return Result;
}
