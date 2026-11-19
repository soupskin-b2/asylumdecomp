// Engine_0cb0000.cpp: 13 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UClient::GetVirtualKey(0x12c in the vtable) is a pure virtual: the platform client classes
 * translate an input key code into the name it is bound to. */

// @baa 0x00cb5b60
FName UClient::GetVirtualKey(INT KeyCode) PURE_VIRTUAL(UClient::GetVirtualKey, return FName(NAME_None);)

extern void* g_026667a8;
extern TCHAR g_01e3f3dc[];
int sub_00630f20(void*, const TCHAR*, ...);

struct UUISkin_ : public UUISkin
{
    /* IsInheritedGroupName(const FString& StyleGroupName); Classes.h doesn't declare it. */
    UBOOL IsInheritedGroupName(const FString& StyleGroupName);
};

// @baa 0x00cbd5c0
void UUISkin::execIsInheritedGroupName(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(StyleGroupName);
    P_FINISH;
    *(UBOOL*)Result = ((UUISkin_*)this)->IsInheritedGroupName(StyleGroupName);
}

struct UUISkin__00cbd680 : public UUISkin
{
    /* AddStyleGroupName(const FString& StyleGroupName); Classes.h doesn't declare it. */
    UBOOL AddStyleGroupName(const FString& StyleGroupName);
};

// @baa 0x00cbd680
void UUISkin::execAddStyleGroupName(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(StyleGroupName);
    P_FINISH;
    *(UBOOL*)Result = this->AddStyleGroupName(StyleGroupName);
}

struct UUISkin__00cbd740 : public UUISkin
{
    /* RemoveStyleGroupName(const FString& StyleGroupName); Classes.h doesn't declare it. */
    UBOOL RemoveStyleGroupName(const FString& StyleGroupName);
};

// @baa 0x00cbd740
void UUISkin::execRemoveStyleGroupName(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(StyleGroupName);
    P_FINISH;
    *(UBOOL*)Result = this->RemoveStyleGroupName(StyleGroupName);
}

struct UUISkin__00cbd9c0 : public UUISkin
{
    /* FindStyleGroupIndex(const FString& StyleGroupName); Classes.h doesn't declare it. */
    INT FindStyleGroupIndex(const FString& StyleGroupName);
};

// @baa 0x00cbd9c0
void UUISkin::execFindStyleGroupIndex(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(StyleGroupName);
    P_FINISH;
    *(INT*)Result = this->FindStyleGroupIndex(StyleGroupName);
}

struct UUISkin__00cbd900 : public UUISkin
{
    /* FString GetStyleGroupAtIndex(INT Index); Classes.h doesn't declare it. */
    FString GetStyleGroupAtIndex(INT Index);
};

// @baa 0x00cbd900
void UUISkin::execGetStyleGroupAtIndex(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(Index);
    P_FINISH;
    *(FString*)Result = this->GetStyleGroupAtIndex(Index);
}

struct AWorldInfo_ : public AWorldInfo
{
    /* FString GetMapName(UBOOL bIncludePrefix); Classes.h doesn't declare it. */
    FString GetMapName(UBOOL bIncludePrefix);
};

// @baa 0x00cb8130
void AWorldInfo::execGetMapName(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL_OPTX(bIncludePrefix, FALSE);
    P_FINISH;
    *(FString*)Result = ((AWorldInfo_*)this)->GetMapName(bIncludePrefix);
}

struct UUIDataProvider_ : public UUIDataProvider
{
    /* UBOOL GetProviderFieldType(const FString& DataTag, BYTE& out_ProviderFieldType); Classes.h doesn't declare it. */
    UBOOL GetProviderFieldType(const FString& DataTag, BYTE& out_ProviderFieldType);
};

// @baa 0x00cbd210
void UUIDataProvider::execGetProviderFieldType(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(DataTag);
    P_GET_BYTE_REF(out_ProviderFieldType);
    P_FINISH;
    *(UBOOL*)Result = ((UUIDataProvider_*)this)->GetProviderFieldType(DataTag, out_ProviderFieldType);
}

struct UUISkin__00cbd800 : public UUISkin
{
    /* UBOOL RenameStyleGroup(const FString& OldStyleGroupName, const FString& NewStyleGroupName); Classes.h doesn't declare it. */
    UBOOL RenameStyleGroup(const FString& OldStyleGroupName, const FString& NewStyleGroupName);
};

// @baa 0x00cbd800
void UUISkin::execRenameStyleGroup(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(OldStyleGroupName);
    P_GET_STR(NewStyleGroupName);
    P_FINISH;
    *(UBOOL*)Result = this->RenameStyleGroup(OldStyleGroupName, NewStyleGroupName);
}

/* FGuid(0,0,0,0): this build's FGuid is a single INT with no constructors. */
static __forceinline FGuid MakeZeroGuid()
{
    FGuid Guid;
    Guid.Invalidate();
    return Guid;
}

struct AWorldInfo__00cb8000 : public AWorldInfo
{
    /* SeamlessTravel(const FString& URL, UBOOL bAbsolute, FGuid MapPackageGuid); Classes.h doesn't declare it. */
    void SeamlessTravel(const FString& URL, UBOOL bAbsolute, FGuid MapPackageGuid);
};

// @baa 0x00cb8000
void AWorldInfo::execSeamlessTravel(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(URL);
    P_GET_UBOOL_OPTX(bAbsolute, FALSE);

    /* P_GET_STRUCT_OPTX(FGuid, MapPackageGuid, FGuid(0,0,0,0)) */
    FGuid MapPackageGuid = MakeZeroGuid();
    GRuntimeUCFlags &= ~RUC_SkippedOptionalParm;
    Stack.Step(Stack.Object, &MapPackageGuid);
    if (GRuntimeUCFlags & RUC_SkippedOptionalParm)
    {
        MapPackageGuid = MakeZeroGuid();
    }

    P_FINISH;
    this->SeamlessTravel(URL, bAbsolute, MapPackageGuid);
}

struct AWorldInfo__00cb8200 : public AWorldInfo
{
    /* AddOnScreenDebugMessage(INT Key, FLOAT TimeToDisplay, FColor DisplayColor, const FString& DebugMessage); Classes.h doesn't declare it. */
    void AddOnScreenDebugMessage(INT Key, FLOAT TimeToDisplay, FColor DisplayColor, const FString& DebugMessage);
};

// @baa 0x00cb8200
void AWorldInfo::execAddOnScreenDebugMessage(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(Key);
    P_GET_FLOAT(TimeToDisplay);
    P_GET_STRUCT(FColor, DisplayColor);
    P_GET_STR(DebugMessage);
    P_FINISH;
    this->AddOnScreenDebugMessage(Key, TimeToDisplay, DisplayColor, DebugMessage);
}

#include "ue3/ConstructObject.h"

// @baa 0x00cb5570
template UDistributionFloatUniform* ConstructObject<UDistributionFloatUniform>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 227 "candidate.cpp"

// @baa 0x00cbf6b0
template UDebugManager* ConstructObject<UDebugManager>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
