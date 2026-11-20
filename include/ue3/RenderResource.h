/* The render-resource side of the engine as this build lays it out: UE3's RenderResource.h,
 * ResourceArray.h, RawIndexBuffer.h, UnBulkData.h (the native FUntypedBulkData behind the script
 * FUntypedBulkData_Mirror), and the packed vertex components (UnMath.h FPackedNormal, Float16.h
 * FFloat16, FVector2DHalf).
 *
 * Evidence: FRawStaticIndexBuffer's layout and vtable (0x01f874d4) come from FStaticLODModel's
 * constructor (009763b0), which builds one at 0x30; FRenderResource's eight slots are the ones every
 * resource vtable shares (InitDynamicRHI 0064ac20, ReleaseDynamicRHI 0064ac30, InitResource 00719db0,
 * ReleaseResource 00719e50); FUntypedBulkData's five are its vtable (0x01e7d230, two pure).
 * Functions with an address are out of line in this build: declare-only here, so a call compiles to
 * the call the game makes. Where a source file's function inlines one of them, that file says so.
 *
 * Opt-in: #include "ue3/RenderResource.h" (it includes RHI.h, which declares g_026b0d94 as
 * GDynamicRHI). */
#pragma once
#include "RHI.h"
#ifndef UE3_RENDERRESOURCE_H
#define UE3_RENDERRESOURCE_H

/* RenderResource.h: anything the rendering thread initialises and releases. 0x14 bytes. */
class FRenderResource
{
public:
    FRenderResource() : bInitialized(FALSE) {}
    virtual ~FRenderResource();                 /* 0x00 */
    virtual void InitDynamicRHI();              /* 0x04: 0x0064ac20 (empty) */
    virtual void ReleaseDynamicRHI();           /* 0x08: 0x0064ac30 (empty) */
    virtual void InitRHI();                     /* 0x0c */
    virtual void ReleaseRHI();                  /* 0x10 */
    virtual void InitResource();                /* 0x14: 0x00719db0 */
    virtual void ReleaseResource();             /* 0x18: 0x00719e50 */
    virtual FString GetFriendlyName() const;    /* 0x1c */

    /* TLinkedList<FRenderResource*> ResourceLink: the element is set when the resource is linked */
    struct FResourceLink
    {
        FRenderResource* Element;
        FResourceLink* NextLink;
        FResourceLink** PrevLink;

        FResourceLink() : NextLink(NULL), PrevLink(NULL) {}
    };

    FResourceLink ResourceLink;   /* 0x04 */
    BITFIELD bInitialized : 1;    /* 0x10 */
};

/* starts initialising / releasing a resource on the rendering thread (RenderResource.cpp) */
void BeginInitResource(FRenderResource* Resource);     /* 0x0073be30 */
void BeginReleaseResource(FRenderResource* Resource);  /* 0x0071a040 */

class FVertexBuffer : public FRenderResource
{
public:
    virtual void ReleaseRHI();                  /* 0x10: 0x00663220 */

    FVertexBufferRHIRef VertexBufferRHI;        /* 0x14 */
};

class FIndexBuffer : public FRenderResource
{
public:
    virtual void ReleaseRHI();                  /* 0x10: 0x00663270 */

    FIndexBufferRHIRef IndexBufferRHI;          /* 0x14 */
};

/* ResourceArray.h: an array whose data the RHI can take for a resource */
class FResourceArrayInterface
{
public:
    virtual const void* GetResourceData() const = 0;
    virtual DWORD GetResourceDataSize() const = 0;
    virtual void Discard() = 0;
    virtual UBOOL IsStatic() const = 0;
    virtual UBOOL GetAllowCPUAccess() const = 0;
    virtual void SetAllowCPUAccess(UBOOL bInNeedsCPUAccess) = 0;
};

template<typename ElementType>
class TResourceArray : public FResourceArrayInterface, public TArray<ElementType>
{
public:
    TResourceArray(UBOOL InNeedsCPUAccess = FALSE)
    :   TArray<ElementType>()
    ,   bNeedsCPUAccess(InNeedsCPUAccess)
    {}

    virtual const void* GetResourceData() const { return const_cast<TResourceArray*>(this)->GetData(); }
    virtual DWORD GetResourceDataSize() const { return this->Num() * sizeof(ElementType); }
    virtual void Discard() { if (!bNeedsCPUAccess) { this->Empty(); } }
    virtual UBOOL IsStatic() const { return FALSE; }
    virtual UBOOL GetAllowCPUAccess() const { return bNeedsCPUAccess; }
    virtual void SetAllowCPUAccess(UBOOL bInNeedsCPUAccess) { bNeedsCPUAccess = bInNeedsCPUAccess; }

    UBOOL bNeedsCPUAccess;
};

/* RawIndexBuffer.h: FRawStaticIndexBuffer's index array, UE3's TResourceArray<WORD,INDEXBUFFER_ALIGNMENT>;
 * this build has its virtuals out of line (vtable 0x01f87300, 0x00969b60...). The name is ours. */
class FIndexResourceArray : public FResourceArrayInterface, public TArray<WORD>
{
public:
    FIndexResourceArray(UBOOL InNeedsCPUAccess) : bNeedsCPUAccess(InNeedsCPUAccess) {}

    virtual const void* GetResourceData() const;
    virtual DWORD GetResourceDataSize() const;
    virtual void Discard();
    virtual UBOOL IsStatic() const;
    virtual UBOOL GetAllowCPUAccess() const;
    virtual void SetAllowCPUAccess(UBOOL bInNeedsCPUAccess);

    UBOOL bNeedsCPUAccess;
};

/* RawIndexBuffer.h: a static index buffer with a CPU copy of its indices. 0x34 bytes, vtable 0x01f874d4. */
class FRawStaticIndexBuffer : public FIndexBuffer
{
public:
    FRawStaticIndexBuffer(UBOOL InNeedsCPUAccess = FALSE)
        : Indices(InNeedsCPUAccess)
        , bSetupForInstancing(FALSE)
        , NumVertsPerInstance(0)
    {}
    virtual ~FRawStaticIndexBuffer();           /* 0x007c4f20 */
    virtual void InitRHI();                     /* 0x0c: 0x00724130 */
    virtual FString GetFriendlyName() const;    /* 0x1c: 0x00663290 */

    friend FArchive& operator<<(FArchive& Ar, FRawStaticIndexBuffer& I);

    FIndexResourceArray Indices;                /* 0x18 */
    UBOOL bSetupForInstancing;                  /* 0x2c */
    UINT NumVertsPerInstance;                   /* 0x30 */
};

/* UnBulkData.h: data serialized apart from its owner and loaded on demand. 0x34 bytes; the script
 * mirror (Classes.h FUntypedBulkData_Mirror) has the same fields. */
class FUntypedBulkData
{
public:
    FUntypedBulkData();                                                  /* 0x0056bf90 */
    virtual ~FUntypedBulkData();                                         /* 0x00 (0x00581450) */
    virtual void* GetBulkDataResourceMemory(UObject* Owner, INT Idx);    /* 0x04: 0x0056bfd0, NULL */
    virtual INT GetElementSize() const = 0;                              /* 0x08 */
    virtual void SerializeElement(FArchive& Ar, void* Data, INT ElementIndex) = 0; /* 0x0c */
    virtual UBOOL RequiresSingleElementSerialization(FArchive& Ar);      /* 0x10: 0x00567ac0, FALSE */

    DWORD BulkDataFlags;              /* 0x04 */
    INT ElementCount;                 /* 0x08 */
    INT BulkDataOffsetInFile;         /* 0x0c */
    INT BulkDataSizeOnDisk;           /* 0x10 */
    DWORD SavedBulkDataFlags;         /* 0x14 */
    INT SavedElementCount;            /* 0x18 */
    INT SavedBulkDataOffsetInFile;    /* 0x1c */
    INT SavedBulkDataSizeOnDisk;      /* 0x20 */
    void* BulkData;                   /* 0x24 */
    DWORD LockStatus;                 /* 0x28 */
    FArchive* AttachedAr;             /* 0x2c */
    UBOOL bShouldFreeOnEmpty;         /* 0x30 */
};

/* UnBulkData.h: bulk data of INTs (vtable 0x01f86ac0) */
class FIntBulkData : public FUntypedBulkData
{
public:
    virtual INT GetElementSize() const;                                  /* 0x08: 0x00567c90 */
    virtual void SerializeElement(FArchive& Ar, void* Data, INT ElementIndex); /* 0x0c: 0x00567ca0 */
};

/* UnMath.h: a unit vector packed into 4 bytes (each component maps [-1,1] to 0..255) */
struct FPackedNormal
{
    union
    {
        struct { BYTE X, Y, Z, W; } Vector;
        DWORD Packed;
    };

    /* unpack to a vector in [-1,1] (inline in UE3; out of line in this build, 0x008911f0) */
    operator FVector() const;

    /* serialized as its packed DWORD (0x0088b100) */
    friend FArchive& operator<<(FArchive& Ar, FPackedNormal& N);
};

/* Float16.h: a 16-bit float */
class FFloat16
{
public:
    WORD Encoded;

    FFloat16(const FFloat16& FP16Value) { Encoded = FP16Value.Encoded; }
    FFloat16(FLOAT FP32Value) { Set(FP32Value); }
    FFloat16& operator=(const FFloat16& FP16Value) { Encoded = FP16Value.Encoded; return *this; }

    void Set(FLOAT FP32Value);      /* 0x00943460 */
    operator FLOAT() const;         /* 0x009434f0 */
};

/* Float16Color.h: a 2D vector of 16-bit floats */
struct FVector2DHalf
{
    FFloat16 X;
    FFloat16 Y;

    FVector2DHalf(const FLOAT& InX, const FLOAT& InY) : X(InX), Y(InY) {}
    FVector2DHalf(const FVector2D& Vector2D) : X(Vector2D.X), Y(Vector2D.Y) {}

    operator FVector2D() const
    {
        FVector2D Result;
        Result.X = X;
        Result.Y = Y;
        return Result;
    }
};

/* StaticMeshVertex.h: the CPU copy of a mesh's vertices, typed by the vertex format */
class FStaticMeshVertexDataInterface
{
public:
    virtual ~FStaticMeshVertexDataInterface() {}
    virtual void ResizeBuffer(UINT NumVertices) = 0;
    virtual UINT GetStride() const = 0;
    virtual BYTE* GetDataPointer() = 0;
    virtual UINT GetNumVertices() const = 0;
    virtual FResourceArrayInterface* GetResourceArray() = 0;
    virtual void Serialize(FArchive& Ar) = 0;
};

enum { MAX_TEXCOORDS = 4 };

#endif
