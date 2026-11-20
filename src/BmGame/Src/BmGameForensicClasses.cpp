// BmGameForensicClasses.cpp: 50 functions
// Placed here by: callers 9, file 9.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0167abf0
IMPLEMENT_CLASS_AT(URActorFactoryXrayInterItem, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameForensicClasses.cpp", 21);

// @baa 0x0167ac10
IMPLEMENT_CLASS_AT(URActorFactoryXrayMesh, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameForensicClasses.cpp", 19);

// @baa 0x0167ac30
IMPLEMENT_CLASS_AT(URActorFactoryXrayWire, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameForensicClasses.cpp", 20);

// @baa 0x0167ac50
IMPLEMENT_CLASS_AT(URActorFactoryForensicsDna, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameForensicClasses.cpp", 17);

// @baa 0x0167ac70
IMPLEMENT_CLASS_AT(URActorFactoryForensicsDnaNonScan, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameForensicClasses.cpp", 18);

// @baa 0x0167ac90
// @baa 0x0167ad50
// @baa 0x0167ae10
// @baa 0x0167aed0
// @baa 0x0167af90
// @baa 0x01684460
IMPLEMENT_CLASS_AT(ARForensicDnaSplat, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameForensicClasses.cpp", 16);

// @baa 0x016844a0
IMPLEMENT_CLASS_AT(ARForensicsDevice, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameForensicClasses.cpp", 23);

// @baa 0x016844e0
IMPLEMENT_CLASS_AT(ARForensicDnaSplatStatic, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameForensicClasses.cpp", 14);

// @baa 0x01684520
IMPLEMENT_CLASS_AT(ARForensicDnaSplatStaticNonScan, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameForensicClasses.cpp", 15);

// @baa 0x01684560
// @baa 0x01684620
// @baa 0x016846e0
// @baa 0x016847a0

// @baa 0x0166bba0

// @baa 0x0166bcb0
UBOOL ARForensicDnaSplatStatic::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0166bcc0
UBOOL ARForensicDnaSplatStatic::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0166bd00
UBOOL ARForensicDnaSplatStaticNonScan::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0166bd10

// @baa 0x0166be20
UBOOL ARForensicDnaSplat::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0166be30
UBOOL ARForensicDnaSplat::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0166be70

// @baa 0x0166bf80
UBOOL URActorFactoryForensicsDna::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0166bf90
UBOOL URActorFactoryForensicsDna::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0166bfd0
UBOOL URActorFactoryForensicsDnaNonScan::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0166bfe0

// @baa 0x0166c0f0
UBOOL URActorFactoryXrayMesh::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0166c100
UBOOL URActorFactoryXrayMesh::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0166c140

// @baa 0x0166c250
UBOOL URActorFactoryXrayWire::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0166c260
UBOOL URActorFactoryXrayWire::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0166c2a0

// @baa 0x0166c3b0
UBOOL URActorFactoryXrayInterItem::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0166c3c0
UBOOL URActorFactoryXrayInterItem::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0166c400

// @baa 0x0166c510
UBOOL ARForensicsDevice::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0166c520
UBOOL ARForensicsDevice::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0166c620
UBOOL ARForensicsDevice::IsUsingFilterView()
{
    int param_1 = (int)this;

  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x229);
  if (((cVar1 != '\x01') && (cVar1 != '\a')) && (cVar1 != '\x06')) {
    return 1;
  }
  return 0;
}

int sub_005c7a20(void);
extern undefined * g_023763e0;
struct C_016752e0 { undefined4 * sub_016752e0(void); };
// @baa 0x016752e0
undefined4 * C_016752e0::sub_016752e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023763e0);
  return param_1;
}

extern undefined * g_02376508;
struct C_01675380 { undefined4 * sub_01675380(void); };
// @baa 0x01675380
undefined4 * C_01675380::sub_01675380(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02376508);
  return param_1;
}

extern undefined * g_02376630;
struct C_016754b0 { undefined4 * sub_016754b0(void); };
// @baa 0x016754b0
undefined4 * C_016754b0::sub_016754b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02376630);
  return param_1;
}

extern undefined * g_02376758;
struct C_016754d0 { undefined4 * sub_016754d0(void); };
// @baa 0x016754d0
undefined4 * C_016754d0::sub_016754d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02376758);
  return param_1;
}

// @baa 0x01680180

// @baa 0x01680290
UBOOL URActorFactoryForensicsDnaNonScan::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016833d0
/* DECLARE_CLASS's interface accessor; compiled for the IREvidenceInterface subobject, so it subtracts its offset */
UObject* ARForensicDnaSplatStatic::GetUObjectInterfaceREvidenceInterface() { return this; }

extern FName g_026e30cc;
	/* BMGAME_InitialiseDna */
/* The splat's script event (generated glue, BmGameClasses.h) */
struct ARForensicDnaSplatStatic_ : public ARForensicDnaSplatStatic
{
	void eventInitialiseDna()
	{
		ProcessEvent(FindFunctionChecked(g_026e30cc), NULL);
	}
};

// @baa 0x01683400
/* Slot 0x1d8 (the post-BeginPlay route): mark script initialized and let script set the splat up,
 * instead of the usual PostBeginPlay / SetInitialState. */
void ARForensicDnaSplatStatic::PostBeginPlay()
{
	bScriptInitialized = TRUE;
	((ARForensicDnaSplatStatic_*)this)->eventInitialiseDna();
}
