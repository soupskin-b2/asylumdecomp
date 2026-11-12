// Engine_0750000.cpp (part 3 of 4): 12 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    undefined4 sub_0075d4f0(byte);
};

int sub_0053dfa0(...);
int sub_007249d0(void);
// @baa 0x0075d4f0
undefined4 C::sub_0075d4f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00656490(void);
// @baa 0x0075f760
undefined4 ULensFlare::sub_0075f760(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0075fa30 {
    undefined4 sub_0075fa30(byte);
};

// @baa 0x0075fa30
undefined4 C_0075fa30::sub_0075fa30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0075fa50 {
    undefined4 sub_0075fa50(byte);
};

// @baa 0x0075fa50
undefined4 C_0075fa50::sub_0075fa50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00758890
/* APhysicsVolume handles one trace type itself (0x8000, not named in the headers) and leaves the
 * rest to AVolume. */
UBOOL APhysicsVolume::ShouldTrace( UPrimitiveComponent* Primitive, AActor* SourceActor, DWORD TraceFlags )
{
	if( ( TraceFlags & 0x8000 ) == 0 && !Super::ShouldTrace( Primitive, SourceActor, TraceFlags ) )
	{
		return FALSE;
	}
	return TRUE;
}

struct AActor_ : public AActor {
    FVector GetTargetLocation(AActor* RequestedBy, bool bRequestAlternateLocation);
};

// @baa 0x00758b20
FVector AActor_::GetTargetLocation(AActor* RequestedBy, bool bRequestAlternateLocation)
{
    return Location;
}

// AActor slot 0x14c (00758b40): return the actor's Location by value.
struct AActor__00758b40 : public AActor
{
    FVector sub_00758b40();
};

// @baa 0x00758b40
FVector AActor__00758b40::sub_00758b40()
{
    return Location;
}

/* Kit gap: AActor::IsBlockedBy (0x00758100) isn't declared. */
struct AActor__007585b0 : public AActor
{
    UBOOL IsBlockedBy(const AActor* Other, const UPrimitiveComponent* Primitive) const; /* 0x00758100 */
};

// @baa 0x007585b0
/* World geometry answers level-geometry traces; other actors answer traces for "others" when they're projectile
 * targets or blocking. (0x80 TRACE_LevelGeometry, 0x10 TRACE_Others, 0x20 TRACE_OnlyProjActor, 0x40 TRACE_Blocking) */
UBOOL AActor::ShouldTrace(UPrimitiveComponent* Primitive, AActor* SourceActor, DWORD TraceFlags)
{
    return (bWorldGeometry && (TraceFlags & 0x80))
        || (!bWorldGeometry && (TraceFlags & 0x10)
            && ((TraceFlags & 0x20)
                ? (bProjTarget || (bBlockActors && Primitive->BlockActors))
                : (!(TraceFlags & 0x40) || (SourceActor && ((AActor__007585b0*)SourceActor)->IsBlockedBy(this, Primitive)))));
}

/* Kit gap: AActor::IsBlockedBy (0x00758100) isn't declared. */
struct AActor__00758680 : public AActor
{
    UBOOL IsBlockedBy(const AActor* Other, const UPrimitiveComponent* Primitive) const; /* 0x00758100 */
};

// @baa 0x00758680
/* Like AActor::ShouldTrace, but volumes answer volume traces (0x08 TRACE_Volumes) instead of "others".
 * (0x80 TRACE_LevelGeometry, 0x20 TRACE_OnlyProjActor, 0x40 TRACE_Blocking) */
UBOOL AVolume::ShouldTrace(UPrimitiveComponent* Primitive, AActor* SourceActor, DWORD TraceFlags)
{
    return (bWorldGeometry && (TraceFlags & 0x80))
        || (!bWorldGeometry && (TraceFlags & 0x08)
            && ((TraceFlags & 0x20)
                ? (bProjTarget || (bBlockActors && Primitive->BlockActors))
                : (!(TraceFlags & 0x40) || (SourceActor && ((AActor__00758680*)SourceActor)->IsBlockedBy(this, Primitive)))));
}

extern FName g_026c40d4;
	/* Render */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UScriptedTexture_ : public UScriptedTexture
{
	void delegateRender(class UCanvas* C);
};

// @baa 0x00754b50
/* The script delegate's generated glue, out of line here. */
void UScriptedTexture_::delegateRender(class UCanvas* C)
{
	struct ScriptedTexture_eventRender_Parms
	{
		class UCanvas* C;
	} Parms;
	Parms.C = C;
	ProcessDelegate(g_026c40d4, &__Render__Delegate, &Parms, NULL);
}

/* Kit gap: FVector has no operator+= (UnMath.h). */
struct FVector_ : public FVector
{
	FORCEINLINE FVector_& operator+=(const FVector& V)
	{
		X += V.X; Y += V.Y; Z += V.Z;
		return *this;
	}
};

// @baa 0x00757e40
void AActor::EditorApplyTranslation(const FVector& DeltaTranslation, UBOOL bAltDown, UBOOL bShiftDown, UBOOL bCtrlDown)
{
	(FVector_&)Location += DeltaTranslation;
}

/* Kit gaps: FRotationMatrix (constructor out of line, 004029a0), FMatrix::operator* (0058e560), FMatrix::Transpose
 * (0058e9a0), FMatrix::Rotator (005c3fc0) and FName::operator!= (UnName.h) aren't declared. */
struct FRotationMatrix : public FMatrix
{
	FRotationMatrix(const FRotator& Rot);
};

struct FMatrix_ : public FMatrix
{
	FMatrix operator*(const FMatrix& Other) const; /* 0x0058e560 */
	FMatrix Transpose() const; /* 0x0058e9a0 */
	FRotator Rotator() const; /* 0x005c3fc0 */
};

struct FName_ : public FName
{
	FORCEINLINE UBOOL operator!=(const FName& Other) const { return Index != Other.Index || Number != Other.Number; }
};

struct AActor__00758050 : public AActor
{
	void UpdateRelativeRotation(); /* 0x00758050 */
};

// @baa 0x00758050
/* UnActor.cpp: RelativeRotation is the rotation relative to the base's rotation. */
void AActor__00758050::UpdateRelativeRotation()
{
	if (!Base || Base->bWorldGeometry || ((const FName_&)BaseBoneName) != NAME_None)
	{
		return;
	}

	RelativeRotation = ((const FMatrix_&)(((const FMatrix_&)FRotationMatrix(Rotation)) * ((const FMatrix_&)FRotationMatrix(Base->Rotation)).Transpose())).Rotator();
}
