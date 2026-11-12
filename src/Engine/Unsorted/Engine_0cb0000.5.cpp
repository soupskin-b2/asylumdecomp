// Engine_0cb0000.cpp: 14 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* UClient::GetVirtualKey (0x12c in the vtable) is a pure virtual: the platform client classes
 * translate an input key code into the name it is bound to. */
struct UClient_ : public UClient
{
	void GetVirtualKey(FName& KeyName, INT KeyCode);
};

// @baa 0x00cb5b60
void UClient_::GetVirtualKey(FName& KeyName, INT KeyCode) PURE_VIRTUAL(UClient::GetVirtualKey, KeyName.Index = 0; KeyName.Number = 0;);

extern void* g_026667a8;
extern TCHAR g_01e3f3dc[];
int sub_00630f20(void*, const TCHAR*, ...);
// @baa 0x00cb5b00
INT UClient::CloseViewport(INT)
{
	return sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"UClient::CloseViewport");
}

struct UUISkin_ : public UUISkin
{
    /* IsInheritedGroupName(const FString& StyleGroupName); Classes.h doesn't declare it. */
    UBOOL sub_00dd37a0(const FString& StyleGroupName);
};

// @baa 0x00cbd5c0
void UUISkin::execIsInheritedGroupName(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(StyleGroupName);
    P_FINISH;
    *(UBOOL*)Result = ((UUISkin_*)this)->sub_00dd37a0(StyleGroupName);
}

struct UUISkin__00cbd680 : public UUISkin
{
    /* AddStyleGroupName(const FString& StyleGroupName); Classes.h doesn't declare it. */
    UBOOL sub_00dd9f90(const FString& StyleGroupName);
};

// @baa 0x00cbd680
void UUISkin::execAddStyleGroupName(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(StyleGroupName);
    P_FINISH;
    *(UBOOL*)Result = ((UUISkin__00cbd680*)this)->sub_00dd9f90(StyleGroupName);
}

struct UUISkin__00cbd740 : public UUISkin
{
    /* RemoveStyleGroupName(const FString& StyleGroupName); Classes.h doesn't declare it. */
    UBOOL sub_00dda2a0(const FString& StyleGroupName);
};

// @baa 0x00cbd740
void UUISkin::execRemoveStyleGroupName(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(StyleGroupName);
    P_FINISH;
    *(UBOOL*)Result = ((UUISkin__00cbd740*)this)->sub_00dda2a0(StyleGroupName);
}

struct UUISkin__00cbd9c0 : public UUISkin
{
    /* FindStyleGroupIndex(const FString& StyleGroupName); Classes.h doesn't declare it. */
    INT sub_00dd38a0(const FString& StyleGroupName);
};

// @baa 0x00cbd9c0
void UUISkin::execFindStyleGroupIndex(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(StyleGroupName);
    P_FINISH;
    *(INT*)Result = ((UUISkin__00cbd9c0*)this)->sub_00dd38a0(StyleGroupName);
}

struct UUISkin__00cbd900 : public UUISkin
{
    /* FString GetStyleGroupAtIndex(INT Index); Classes.h doesn't declare it. */
    FString sub_00dcc6b0(INT Index);
};

// @baa 0x00cbd900
void UUISkin::execGetStyleGroupAtIndex(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(Index);
    P_FINISH;
    *(FString*)Result = ((UUISkin__00cbd900*)this)->sub_00dcc6b0(Index);
}

struct AWorldInfo_ : public AWorldInfo
{
    /* FString GetMapName(UBOOL bIncludePrefix); Classes.h doesn't declare it. */
    FString sub_009c97c0(UBOOL bIncludePrefix);
};

// @baa 0x00cb8130
void AWorldInfo::execGetMapName(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL_OPTX(bIncludePrefix, FALSE);
    P_FINISH;
    *(FString*)Result = ((AWorldInfo_*)this)->sub_009c97c0(bIncludePrefix);
}

struct UUIDataProvider_ : public UUIDataProvider
{
    /* UBOOL GetProviderFieldType(const FString& DataTag, BYTE& out_ProviderFieldType); Classes.h doesn't declare it. */
    UBOOL sub_00d9d160(const FString& DataTag, BYTE& out_ProviderFieldType);
};

// @baa 0x00cbd210
void UUIDataProvider::execGetProviderFieldType(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(DataTag);
    P_GET_BYTE_REF(out_ProviderFieldType);
    P_FINISH;
    *(UBOOL*)Result = ((UUIDataProvider_*)this)->sub_00d9d160(DataTag, out_ProviderFieldType);
}

struct UUISkin__00cbd800 : public UUISkin
{
    /* UBOOL RenameStyleGroup(const FString& OldStyleGroupName, const FString& NewStyleGroupName); Classes.h doesn't declare it. */
    UBOOL sub_00dda530(const FString& OldStyleGroupName, const FString& NewStyleGroupName);
};

// @baa 0x00cbd800
void UUISkin::execRenameStyleGroup(FFrame& Stack, RESULT_DECL)
{
    P_GET_STR(OldStyleGroupName);
    P_GET_STR(NewStyleGroupName);
    P_FINISH;
    *(UBOOL*)Result = ((UUISkin__00cbd800*)this)->sub_00dda530(OldStyleGroupName, NewStyleGroupName);
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
    void sub_009ce970(const FString& URL, UBOOL bAbsolute, FGuid MapPackageGuid);
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
    ((AWorldInfo__00cb8000*)this)->sub_009ce970(URL, bAbsolute, MapPackageGuid);
}

struct AWorldInfo__00cb8200 : public AWorldInfo
{
    /* AddOnScreenDebugMessage(INT Key, FLOAT TimeToDisplay, FColor DisplayColor, const FString& DebugMessage); Classes.h doesn't declare it. */
    void sub_009cc8d0(INT Key, FLOAT TimeToDisplay, FColor DisplayColor, const FString& DebugMessage);
};

// @baa 0x00cb8200
void AWorldInfo::execAddOnScreenDebugMessage(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(Key);
    P_GET_FLOAT(TimeToDisplay);
    P_GET_STRUCT(FColor, DisplayColor);
    P_GET_STR(DebugMessage);
    P_FINISH;
    ((AWorldInfo__00cb8200*)this)->sub_009cc8d0(Key, TimeToDisplay, DisplayColor, DebugMessage);
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

// @baa 0x00cb5570
template UDistributionFloatUniform* ConstructObject<UDistributionFloatUniform>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 227 "candidate.cpp"

// @baa 0x00cbf6b0
template UDebugManager* ConstructObject<UDebugManager>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
