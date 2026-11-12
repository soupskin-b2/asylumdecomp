// RRope.cpp: 11 functions
// Placed here by: class 7, callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0163e0e0
IMPLEMENT_CLASS_AT(ARRopeBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRope.cpp", 15);

// @baa 0x0163e1f0
int ARRopeBase::vf_000(void) { return 1; }

// @baa 0x0163e200
bool ARRopeBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163e240
void ARRopeBase::vf_1d8(void) {  }

struct C{
int sub_01647000(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x01647000
int C::sub_01647000(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

// @baa 0x016573a0
// @baa 0x01657410
// @baa 0x016589c0
// @baa 0x0165ac40

// @baa 0x0163e530
int sub_0163e530(void) { return 0; }

/* Kit gap: AActor::IsBlockedBy (0x00758100) isn't declared. */
struct AActor_ : public AActor
{
    UBOOL IsBlockedBy(const AActor* Other, const UPrimitiveComponent* Primitive) const; /* 0x00758100 */
};

// @baa 0x0163e540
/* Ropes answer only pawn traces (0x2 TRACE_Pawns), then like any other actor: projectile targets or blockers for
 * projectile-actor traces (0x20), blockers of the source for blocking traces (0x40). */
UBOOL ARRopeBase::ShouldTrace(UPrimitiveComponent* Primitive, AActor* SourceActor, DWORD TraceFlags)
{
    return (TraceFlags & 0x2)
        && ((TraceFlags & 0x20)
            ? (bProjTarget || (bBlockActors && Primitive->BlockActors))
            : (!(TraceFlags & 0x40) || (SourceActor && ((AActor_*)SourceActor)->IsBlockedBy(this, Primitive))));
}
