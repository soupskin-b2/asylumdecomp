// UnCanvas.cpp: 22 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// One element of the canvas transform stack (0x50 bytes, 16-byte aligned).
struct __declspec(align(16)) FCanvasTransform
{
	FMatrix Matrix;
	FVector Translation;
};

struct FCanvas_
{
	void sub_00a7b870(FCanvasTransform&);
};

// @baa 0x00a81ba0
void UCanvas::execPopTransform(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	if (Canvas)
	{
		FCanvasTransform Transform;
		((FCanvas_*)((BYTE*)Canvas + 0x24))->sub_00a7b870(Transform);
	}
}

class FSceneView
{
public:
	void DeprojectFVector2D( const FVector2D& ScreenPos, FVector& out_WorldOrigin, FVector& out_WorldDirection );
};

struct UCanvas_ : public UCanvas
{
	FSceneView* GetSceneView() const
	{
		return (FSceneView*)SceneView.Dummy;
	}
	void DeProject( const FVector2D& ScreenPos, FVector& WorldOrigin, FVector& WorldDirection )
	{
		if ( GetSceneView() != NULL )
		{
			GetSceneView()->DeprojectFVector2D(ScreenPos, WorldOrigin, WorldDirection);
		}
	}
	void execDeProject(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00a589e0
void UCanvas_::execDeProject(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector2D, ScreenPos);
	P_GET_STRUCT_REF(FVector, WorldOrigin);
	P_GET_STRUCT_REF(FVector, WorldDirection);
	P_FINISH;
	DeProject(ScreenPos, WorldOrigin, WorldDirection);
}

// @baa 0x00a587f0
void UCanvas::execSetDrawColor(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE(R);
	P_GET_BYTE(G);
	P_GET_BYTE(B);
	P_GET_BYTE_OPTX(A, 255);
	P_FINISH;
	DrawColor.R = R;
	DrawColor.G = G;
	DrawColor.B = B;
	DrawColor.A = A;
}

struct UCanvas__00a65400 : public UCanvas
{
	UBOOL ProjectStaticMeshBounds(UStaticMeshComponent* MeshComponent, FVector2D& Min, FVector2D& Max);
	void execProjectStaticMeshBounds(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00a65400
void UCanvas__00a65400::execProjectStaticMeshBounds(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UStaticMeshComponent, MeshComponent);
	P_GET_STRUCT_REF(FVector2D, Min);
	P_GET_STRUCT_REF(FVector2D, Max);
	P_FINISH;
	*(UBOOL*)Result = ProjectStaticMeshBounds(MeshComponent, Min, Max);
}

struct UCanvas__00a654f0 : public UCanvas
{
	void ProjectSphereBounds(FVector Center, FLOAT Radius, FVector2D& Min, FVector2D& Max);
	void execProjectSphereBounds(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00a654f0
void UCanvas__00a654f0::execProjectSphereBounds(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, Center);
	P_GET_FLOAT(Radius);
	P_GET_STRUCT_REF(FVector2D, Min);
	P_GET_STRUCT_REF(FVector2D, Max);
	P_FINISH;
	ProjectSphereBounds(Center, Radius, Min, Max);
}

/* Classes.h has FLinearColor as a plain script mirror: no FLinearColor(const FColor&) constructor. */
struct FLinearColor_ : public FLinearColor
{
	FLinearColor_(const FColor& C);
};

struct UCanvas__00aa97a0 : public UCanvas
{
	void DrawTile( UTexture* Tex, FLOAT X, FLOAT Y, FLOAT XL, FLOAT YL, FLOAT U, FLOAT V, FLOAT UL, FLOAT VL, const FLinearColor_& Color );
	void execDrawTile(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00aa97a0
void UCanvas__00aa97a0::execDrawTile(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UTexture, Tex);
	P_GET_FLOAT(XL);
	P_GET_FLOAT(YL);
	P_GET_FLOAT(U);
	P_GET_FLOAT(V);
	P_GET_FLOAT(UL);
	P_GET_FLOAT(VL);
	P_FINISH;
	if ( !Tex )
	{
		return;
	}
	DrawTile( Tex, OrgX+CurX, OrgY+CurY, XL, YL, U, V, UL, VL, DrawColor );
	CurX += XL;
	CurYL = Max(CurYL, YL);
}

struct UCanvas__00aa9990 : public UCanvas
{
	void DrawTile( UTexture* Tex, FLOAT X, FLOAT Y, FLOAT XL, FLOAT YL, FLOAT U, FLOAT V, FLOAT UL, FLOAT VL, const FLinearColor& Color );
	void execDrawColorizedTile(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00aa9990
void UCanvas__00aa9990::execDrawColorizedTile(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UTexture, Tex);
	P_GET_FLOAT(XL);
	P_GET_FLOAT(YL);
	P_GET_FLOAT(U);
	P_GET_FLOAT(V);
	P_GET_FLOAT(UL);
	P_GET_FLOAT(VL);
	P_GET_STRUCT(FLinearColor, LColor);
	P_FINISH;
	if ( !Tex )
	{
		return;
	}
	DrawTile( Tex, OrgX+CurX, OrgY+CurY, XL, YL, U, V, UL, VL, LColor );
	CurX += XL;
	CurYL = Max(CurYL, YL);
}

struct UCanvas__00a9eea0 : public UCanvas
{
	void DrawMaterialTile( UMaterialInterface* Material, FLOAT X, FLOAT Y, FLOAT XL, FLOAT YL, FLOAT U, FLOAT V, FLOAT UL, FLOAT VL );
	void execDrawMaterialTile(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00a9eea0
void UCanvas__00a9eea0::execDrawMaterialTile(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UMaterialInterface, Mat);
	P_GET_FLOAT(XL);
	P_GET_FLOAT(YL);
	P_GET_FLOAT_OPTX(U, 0.f);
	P_GET_FLOAT_OPTX(V, 0.f);
	P_GET_FLOAT_OPTX(UL, 1.f);
	P_GET_FLOAT_OPTX(VL, 1.f);
	P_FINISH;
	if ( !Mat )
	{
		return;
	}
	DrawMaterialTile( Mat, OrgX+CurX, OrgY+CurY, XL, YL, U, V, UL, VL );
	CurX += XL;
	CurYL = Max(CurYL, YL);
}

struct UCanvas__00aaa040 : public UCanvas
{
	void DrawTile( UTexture* Tex, FLOAT X, FLOAT Y, FLOAT XL, FLOAT YL, FLOAT U, FLOAT V, FLOAT UL, FLOAT VL, const FLinearColor_& Color );
	void execDrawTileClipped(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00aaa040
void UCanvas__00aaa040::execDrawTileClipped(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UTexture, Tex);
	P_GET_FLOAT(XL);
	P_GET_FLOAT(YL);
	P_GET_FLOAT(U);
	P_GET_FLOAT(V);
	P_GET_FLOAT(UL);
	P_GET_FLOAT(VL);
	P_FINISH;

	if ( !Tex )
	{
		Stack.Logf(TEXT("DrawTileClipped: Missing Material"));
		return;
	}

	// Clip to ClipX and ClipY
	if ( XL > 0 && YL > 0 )
	{
		if ( CurX < 0 )
		{
			FLOAT C = CurX / XL * UL;
			U -= C;
			UL += C;
			XL += CurX;
			CurX = 0;
		}
		if ( CurY < 0 )
		{
			FLOAT C = CurY / YL * VL;
			V -= C;
			VL += C;
			YL += CurY;
			CurY = 0;
		}
		if ( XL > ClipX - CurX )
		{
			UL *= ((ClipX - CurX) - XL) / XL + 1.f;
			XL = ClipX - CurX;
		}
		if ( YL > ClipY - CurY )
		{
			VL *= ((ClipY - CurY) - YL) / YL + 1.f;
			YL = ClipY - CurY;
		}

		DrawTile( Tex, OrgX+CurX, OrgY+CurY, XL, YL, U, V, UL, VL, DrawColor );

		CurX += XL;
		CurYL = Max(CurYL, YL);
	}
}

/* Script.h's FOutputDevice only declares Logf(const TCHAR*, ...); the engine also has the
 * Logf(EName Type, const TCHAR* Fmt, ...) overload (0x00630ea0). */
struct FFrame_ : public FFrame
{
	void Logf(EName Type, const TCHAR* Fmt, ...);
};

/* FString has no operator*; this is UE3's body for it (const, so it uses the const operator()). */
static inline const TCHAR* StrPtr( const FString& S )
{
	return S.Num() ? &S(0) : TEXT("");
}

struct UCanvas__00aa9c00 : public UCanvas
{
	void WrappedPrint( UBOOL Draw, INT& out_XL, INT& out_YL, UFont* Font, FLOAT ScaleX, FLOAT ScaleY, UBOOL bCenter, const TCHAR* Text );
	void execDrawText(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00aa9c00
void UCanvas__00aa9c00::execDrawText(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(Text);
	P_GET_UBOOL_OPTX(CR, TRUE);
	P_GET_FLOAT_OPTX(XScale, 1.0f);
	P_GET_FLOAT_OPTX(YScale, 1.0f);
	P_FINISH;

	if ( !Font )
	{
		((FFrame_&)Stack).Logf(NAME_ScriptWarning, TEXT("DrawText: No font"));
		return;
	}
	INT XL = 0, YL = 0;
	FLOAT OldCurX = CurX, OldCurY = CurY;
	WrappedPrint(1, XL, YL, Font, XScale, YScale, bCenter, StrPtr(Text));
	CurX += XL;
	CurYL = Max(CurYL, (FLOAT)YL);
	if ( CR )
	{
		CurX = OldCurX;
		CurY = OldCurY + CurYL;
		CurYL = 0.f;
	}
}

void ClippedStrLen( UFont* Font, FLOAT ScaleX, FLOAT ScaleY, INT& XL, INT& YL, const TCHAR* Text );
// @baa 0x00a742b0
void UCanvas::execTextSize(FFrame& Stack, RESULT_DECL)
{
	P_GET_STR(InText);
	P_GET_FLOAT_REF(XL);
	P_GET_FLOAT_REF(YL);
	P_FINISH;

	if ( !Font )
	{
		Stack.Logf(TEXT("TextSize: No font"));
		return;
	}
	INT XLi, YLi;
	ClippedStrLen(Font, 1.f, 1.f, XLi, YLi, StrPtr(InText));
	XL = XLi;
	YL = YLi;
}

struct UCanvas__00a9f0a0 : public UCanvas
{
	void DrawMaterialTile( UMaterialInterface* Material, FLOAT X, FLOAT Y, FLOAT XL, FLOAT YL, FLOAT U, FLOAT V, FLOAT UL, FLOAT VL );
	void execDrawMaterialTileClipped(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00a9f0a0
void UCanvas__00a9f0a0::execDrawMaterialTileClipped(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UMaterialInterface, Mat);
	P_GET_FLOAT(XL);
	P_GET_FLOAT(YL);
	P_GET_FLOAT_OPTX(U, 0.f);
	P_GET_FLOAT_OPTX(V, 0.f);
	P_GET_FLOAT_OPTX(UL, 1.f);
	P_GET_FLOAT_OPTX(VL, 1.f);
	P_FINISH;

	if ( !Mat )
	{
		return;
	}

	// Clip to ClipX and ClipY
	if ( CurX < 0 )
	{
		FLOAT C = CurX / XL * UL;
		U -= C;
		UL += C;
		XL += CurX;
		CurX = 0;
	}
	if ( CurY < 0 )
	{
		FLOAT C = CurY / YL * VL;
		V -= C;
		VL += C;
		YL += CurY;
		CurY = 0;
	}
	if ( XL > ClipX - CurX )
	{
		UL *= ((ClipX - CurX) - XL) / XL + 1.f;
		XL = ClipX - CurX;
	}
	if ( YL > ClipY - CurY )
	{
		VL *= ((ClipY - CurY) - YL) / YL + 1.f;
		YL = ClipY - CurY;
	}

	DrawMaterialTile( Mat, OrgX+CurX, OrgY+CurY, XL, YL, U, V, UL, VL );

	CurX += XL;
	CurYL = Max(CurYL, YL);
}

struct UCanvas__00ab0640 : public UCanvas
{
	void DrawRotatedTile(UTexture* Tex, FRotator Rotation, FLOAT XL, FLOAT YL, FLOAT U, FLOAT V, FLOAT UL, FLOAT VL, FLOAT AnchorX, FLOAT AnchorY);
	void execDrawRotatedTile(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ab0640
void UCanvas__00ab0640::execDrawRotatedTile(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UTexture, Tex);
	P_GET_STRUCT(FRotator, Rotation);
	P_GET_FLOAT(XL);
	P_GET_FLOAT(YL);
	P_GET_FLOAT(U);
	P_GET_FLOAT(V);
	P_GET_FLOAT(UL);
	P_GET_FLOAT(VL);
	P_GET_FLOAT_OPTX(AnchorX, 0.5f);
	P_GET_FLOAT_OPTX(AnchorY, 0.5f);
	P_FINISH;
	DrawRotatedTile(Tex, Rotation, XL, YL, U, V, UL, VL, AnchorX, AnchorY);
}

struct UCanvas__00aaa970 : public UCanvas
{
	void DrawRotatedMaterialTile(UMaterialInterface* Mat, FRotator Rotation, FLOAT XL, FLOAT YL, FLOAT U, FLOAT V, FLOAT UL, FLOAT VL, FLOAT AnchorX, FLOAT AnchorY);
	void execDrawRotatedMaterialTile(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00aaa970
void UCanvas__00aaa970::execDrawRotatedMaterialTile(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UMaterialInterface, Mat);
	P_GET_STRUCT(FRotator, Rotation);
	P_GET_FLOAT(XL);
	P_GET_FLOAT(YL);
	P_GET_FLOAT_OPTX(U, 0.f);
	P_GET_FLOAT_OPTX(V, 0.f);
	P_GET_FLOAT_OPTX(UL, 0.f);
	P_GET_FLOAT_OPTX(VL, 0.f);
	P_GET_FLOAT_OPTX(AnchorX, 0.5f);
	P_GET_FLOAT_OPTX(AnchorY, 0.5f);
	P_FINISH;
	DrawRotatedMaterialTile(Mat, Rotation, XL, YL, U, V, UL, VL, AnchorX, AnchorY);
}

/* Classes.h has FVector2D / FLinearColor as plain script mirrors without their constructors. */
struct FVector2D_ : public FVector2D
{
	FVector2D_(FLOAT InX, FLOAT InY) { X = InX; Y = InY; }
};

void DrawLine2D( FCanvas* Canvas, const FVector2D& StartPos, const FVector2D& EndPos, const FLinearColor_& Color );
struct UCanvas__00aaabc0 : public UCanvas
{
	FCanvas* GetCanvas() const
	{
		return Canvas;
	}
	void execDraw2DLine(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00aaabc0
void UCanvas__00aaabc0::execDraw2DLine(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(X1);
	P_GET_FLOAT(Y1);
	P_GET_FLOAT(X2);
	P_GET_FLOAT(Y2);
	P_GET_STRUCT(FColor, LineColor);
	P_FINISH;

	X1 += OrgX;
	X2 += OrgX;
	Y1 += OrgY;
	Y2 += OrgY;
	DrawLine2D(GetCanvas(), FVector2D_(X1, Y1), FVector2D_(X2, Y2), LineColor);
}

struct UCanvas__00ab0870 : public UCanvas
{
	void DrawTextureLine(FVector StartPoint, FVector EndPoint, FLOAT Perc, FLOAT Width, FColor LineColor, UTexture* LineTexture, FLOAT U, FLOAT V, FLOAT UL, FLOAT VL);
	void execDrawTextureLine(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ab0870
void UCanvas__00ab0870::execDrawTextureLine(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, StartPoint);
	P_GET_STRUCT(FVector, EndPoint);
	P_GET_FLOAT(Perc);
	P_GET_FLOAT(Width);
	P_GET_STRUCT(FColor, LineColor);
	P_GET_OBJECT(UTexture, LineTexture);
	P_GET_FLOAT(U);
	P_GET_FLOAT(V);
	P_GET_FLOAT(UL);
	P_GET_FLOAT(VL);
	P_FINISH;
	DrawTextureLine(StartPoint, EndPoint, Perc, Width, LineColor, LineTexture, U, V, UL, VL);
}

struct UCanvas__00ab03b0 : public UCanvas
{
	void DrawTileStretched(UTexture* Tex, FLOAT Left, FLOAT Top, FLOAT AWidth, FLOAT AHeight, FLOAT U, FLOAT V, FLOAT UL, FLOAT VL, FLinearColor DrawColor, UBOOL bStretchHorizontally, UBOOL bStretchVertically, FLOAT ScalingFactor);
	void execDrawTileStretched(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ab03b0
void UCanvas__00ab03b0::execDrawTileStretched(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UTexture, Tex);
	P_GET_FLOAT(XL);
	P_GET_FLOAT(YL);
	P_GET_FLOAT(U);
	P_GET_FLOAT(V);
	P_GET_FLOAT(UL);
	P_GET_FLOAT(VL);
	P_GET_STRUCT(FLinearColor, LColor);
	P_GET_UBOOL_OPTX(bStretchHorizontally, TRUE);
	P_GET_UBOOL_OPTX(bStretchVertically, TRUE);
	P_GET_FLOAT_OPTX(ScalingFactor, 1.0f);
	P_FINISH;
	DrawTileStretched(Tex, CurX, CurY, XL, YL, U, V, UL, VL, LColor, bStretchHorizontally, bStretchVertically, ScalingFactor);
}

struct UCanvas__00ab0a80 : public UCanvas
{
	void DrawTextureDoubleLine(FVector StartPoint, FVector EndPoint, FLOAT Perc, FLOAT Spacing, FLOAT Width, FColor LineColor, FColor AltLineColor, UTexture* Tex, FLOAT U, FLOAT V, FLOAT UL, FLOAT VL);
	void execDrawTextureDoubleLine(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ab0a80
void UCanvas__00ab0a80::execDrawTextureDoubleLine(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, StartPoint);
	P_GET_STRUCT(FVector, EndPoint);
	P_GET_FLOAT(Perc);
	P_GET_FLOAT(Spacing);
	P_GET_FLOAT(Width);
	P_GET_STRUCT(FColor, LineColor);
	P_GET_STRUCT(FColor, AltLineColor);
	P_GET_OBJECT(UTexture, Tex);
	P_GET_FLOAT(U);
	P_GET_FLOAT(V);
	P_GET_FLOAT(UL);
	P_GET_FLOAT(VL);
	P_FINISH;
	DrawTextureDoubleLine(StartPoint, EndPoint, Perc, Spacing, Width, LineColor, AltLineColor, Tex, U, V, UL, VL);
}

struct UCanvas__00a58750 : public UCanvas
{
	void SetPos( FLOAT X, FLOAT Y )
	{
		CurX = X;
		CurY = Y;
	}
	void execSetPos(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00a58750
void UCanvas__00a58750::execSetPos(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(PosX);
	P_GET_FLOAT(PosY);
	P_FINISH;
	SetPos(PosX, PosY);
}

// @baa 0x00a74450
void UCanvas::execPushTranslationMatrix(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, TranslationVector);
    P_FINISH;
    if (Canvas)
    {
        Canvas->PushRelativeTransform(FTranslationMatrix(TranslationVector));
    }
}

/* Kit gap: FSceneView_00a588d0 (SceneManagement.h) isn't declared; only its Project is needed here. */
class FSceneView_00a588d0
{
public:
	FPlane Project(const FVector& WorldPoint) const;
};

// @baa 0x00a588d0
void UCanvas::execProject(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, Location);
	P_FINISH;

	FPlane V(0, 0, 0, 0);
	if (SceneView.Dummy != NULL)
	{
		V = ((FSceneView_00a588d0*)SceneView.Dummy)->Project(Location);
	}
	FVector resultVec(V);
	resultVec.X = (ClipX / 2.f) + (resultVec.X * (ClipX / 2.f));
	resultVec.Y *= -1.f;
	resultVec.Y = (ClipY / 2.f) + (resultVec.Y * (ClipY / 2.f));
	*(FVector*)Result = resultVec;
}

/* Kit gaps: FSceneView_00a58ac0 (SceneManagement.h) isn't declared (only its WorldToPixel is needed here), and the
 * kit's FVector2D has no (X, Y) constructor. */
struct FVector2D__00a58ac0 : public FVector2D
{
	FORCEINLINE FVector2D__00a58ac0(FLOAT InX, FLOAT InY) { X = InX; Y = InY; }
};

class FSceneView_00a58ac0
{
public:
	UBOOL WorldToPixel(const FVector& WorldPoint, FVector2D& OutPixelLocation) const;
};

// @baa 0x00a58ac0
void UCanvas::execWorldToPixel(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, Position);
	P_GET_STRUCT_REF(FVector, PixelLocation);
	P_FINISH;

	FSceneView_00a58ac0* View = (FSceneView_00a58ac0*)SceneView.Dummy;
	if (View == NULL)
	{
		*(UBOOL*)Result = FALSE;
		return;
	}
	FVector2D__00a58ac0 Pixel(0.f, 0.f);
	*(UBOOL*)Result = View->WorldToPixel(Position, Pixel);
	PixelLocation = FVector(Pixel.X, Pixel.Y, 0.f);
}
