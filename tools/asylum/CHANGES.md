# What changed for agents

Newest first, one line each. `update` (and `get`, which updates by itself) prints the lines that are new
to you; `python asylum.pyz changes` prints them all. Add a line here with any change an agent should
know about: a renamed or retyped declaration, a new header or macro, a new rule.

- 2026-11-12: FVector4 is 16-byte aligned with a (0,0,0,1) default constructor, as in UE3 (script structs keep FVector4Unaligned members). UUIScreenObject declares CanvasToScreen, PixelToScreen, ScreenToPixel, ScreenToCanvas.
- 2026-11-12: function boundaries fixed: 01a14210 (error_exit, plus output_message at 01a14230), 0180df60 (_tr_flush_block, 517 bytes; the wx import thunks after it are their own functions), 0179f126, 017c8e4b, 017c8e85, 01c2ea80, 01c31d10 (each held two functions).
- 2026-11-12: packets for natives say when Classes.h declares the exec function (write it on the class itself) and when a struct parameter is P_GET_STRUCT_REF (GPropAddr zeroed before its Step) though the script doesn't mark it out.
- 2026-11-12: 15 virtuals take structs or FLOATs (they were INT runs): AR3rdPersonCamera Save/SetFreeCameraConfig, ARBMRouter CanMovePartwayToPos/FindEndAnchor (FVector), ARCombatArea IsLocationInArea, UFracturedStaticMeshComponent GetFragmentBox (returns FBox), UBrushBuilder Vertexv(FVector), USeqAct_GetMatInstVectorParam GetColour(FLinearColor&), URB_Handle UpdateSmoothLocation(FVector&), ACamera CheckViewTarget(FTViewTarget&), ARCombatMove_BatmanStrike GetScoreFor*(FStrikeInfo), URSeqAct_SetScarecrowCamera GetPercDistAlongPath(FLOAT), USequenceOp UpdateOp(FLOAT DeltaTime) returns UBOOL. Give-ups blocked on these can be retried.
- 2026-11-12: 11 virtuals that take an FName were declared with INT or no parameters, now fixed (ARGameRI::IsLevelLoaded/IsLevelLoading/IsLevelVisible/IsCurrentLevel, UPrimitiveComponent::WakeRigidBody/PutRigidBodyToSleep, ARPawnCharacter::OverlayExists, ...): call them by name. Give-ups blocked on these can be retried.
- 2026-11-12: Core.h has EName (NAME_None, NAME_ScriptWarning; add others there), and P_GET_NAME_OPTX(BoneName, NAME_None) works for optional name parameters (FName stays an aggregate: write {NAME_None, 0} elsewhere).
- 2026-11-12: UUISceneClient's InputKey/InputAxis/InputChar/ChangeActiveSkin/InitializePrimitives/UpdateActivePrimitives/IsUIActive have UE3's types (EInputEvent is in Core.h). Named slots: UPrimitiveComponent SetBlockRigidBody/SetNotifyRigidBodyCollision/SetContactModification, UActorComponent SetComponentRBFixed, APawn SetPushesRigidBodies, UUIScreenObject CanAcceptFocus.
- 2026-11-12: packets quote the kit's current Classes.h for the function's declaration and its class's members, and point pure-virtual stubs at PURE_VIRTUAL (Script.h).
- 2026-11-12: check takes several functions at once: check VA [FILE] VA [FILE] ... (FILE defaults to work/VA.cpp); one verdict each, no diffs.
- 2026-11-12: slots returning FVector: AActor::GetZoneVelocity (0x120), GetFOVCheckLocation (0x14c), UPrimitiveComponent::GetRBLinearVelocity (0x19c).
- 2026-11-12: UObject slot 0x094 is GetDetailedInfoInternal; UObject::GetPathName(StopOuter = NULL) is declared (it was USoundCue::sub_005d59a0).
- 2026-11-12: material parameter values: F{Scalar,Texture,Font,Vector}ParameterValue have default constructors and FGuid::Invalidate(), so new(ScalarParameterValues) FScalarParameterValue works; #define BAA_OUTLINE_NEW when the original calls new(Array) out of line.
- 2026-11-11: Classes.h declares 525 member functions that sources used to declare on helper structs (struct UFoo_ : public UFoo): call them on the real class.
- 2026-11-11: new header ue3/Win32.h (critical sections, Interlocked*, Tls*, WaitForSingleObject, MessageBoxA ...): don't declare Windows types or functions yourself.
- 2026-11-11: AppMath.h has appTrunc (the cvttss2si-from-memory form), appRound, appRand, appFrand, appSRand, Abs, Min, Max, Clamp, Square, Lerp: don't redefine them.
- 2026-11-11: new readability warnings: padding arrays, field_XX names, placeholder virtuals, hand-read vtables, writes through (DWORD*)this, globals defined instead of extern, hand Windows declarations.
