// UnAudio.cpp: 13 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

/* UAudioComponent's play/stop side of the ambient sound (00791770 has no name in the headers). */

/* AActor's vtable slot 0x314 (the headers guess `virtual FLOAT vf_314(INT)`; this override
 * returns nothing, so it is declared here as void under its address). */
struct AAmbientSound_ : public AAmbientSound {
	void sub_00791ad0(INT Param);
};

// @baa 0x00791ad0
void AAmbientSound_::sub_00791ad0(INT Param)
{
	sub_0076cd90(Param);
	if (bAutoPlay && AudioComponent && !AudioComponent->bWasPlaying)
	{
		AudioComponent->sub_00791770();
		bIsPlaying = TRUE;
	}
}

// Object whose virtual slot 6 is activated by sub_00785e80.
struct S_00785e80 {
    virtual void sub_00785e80_v00();
    virtual void sub_00785e80_v01();
    virtual void sub_00785e80_v02();
    virtual void sub_00785e80_v03();
    virtual void sub_00785e80_v04();
    virtual void sub_00785e80_v05();
    virtual void Activate(void* Actor, int Flags);
};

struct C_00785e80 {
    char _pad[0x100];
    S_00785e80* ActivateTarget;
    void sub_00785e80(void* Actor, int Flags);
};

// @baa 0x00785e80
void C_00785e80::sub_00785e80(void* Actor, int Flags)
{
    if (ActivateTarget)
        ActivateTarget->Activate(Actor, Flags);
}

struct UAudioDevice_ : public UAudioDevice {
    void sub_00785f10(INT A, INT B);
};

// @baa 0x00785f10
void UAudioDevice_::sub_00785f10(INT A, INT B)
{
    if (Effects.Dummy) {
        ((UObject*)Effects.Dummy)->vf_028(A, B);
    }
}

class C_00785ef0 {
public:
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18();
    virtual void vf_1c();
    virtual void vf_20();
    virtual void vf_24(void* A, void* B);
    virtual void vf_28();
};

struct S_00785ef0 {
    char pad[0x100];
    C_00785ef0* Node;
    void sub_00785ef0(void* A, void* B);
};

// @baa 0x00785ef0
void S_00785ef0::sub_00785ef0(void* A, void* B)
{
    if (Node)
        Node->vf_24(A, B);
}

// @baa 0x00764c60
bool UAudioComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007879b0
int AAnimatedCamera::vf_000(void) { return 1; }

struct C_00789e10 {
    int sub_00789e10();
};

// @baa 0x00789e10
int C_00789e10::sub_00789e10(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

struct FAdj
{
    BYTE  SoundClassName;
    BYTE  pad[3];
    FName SoundName;
    DWORD Tail[2];
};

struct FEnumObject
{
    char pad[0x38];
    TArray<FName> Names;
};

struct CVtObj
{
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8(int);
};

struct CUSoundMode
{
    char pad0[0x58];
    TArray<FAdj> Adjusters;

    void sub_0078d860(int);
};

extern void* g_0268d07c;
extern CVtObj* g_026667c4;
int sub_005b3970(...);
int sub_0059c600(void);
int sub_005d88c0(...);
// @baa 0x0078d860
void CUSoundMode::sub_0078d860(int)
{
    if (g_0268d07c == 0)
    {
        g_0268d07c = (void*)sub_005b3970(L"Core");
        sub_0059c600();
    }
    const FEnumObject* Enum = (const FEnumObject*)sub_005d88c0((int)g_0268d07c, 0, L"Engine.AudioDevice.ESoundClassName", 0);
    if (Enum != 0)
    {
        for (INT i = 0; i < Adjusters.Num(); i++)
        {
            FAdj& Adj = Adjusters(i);
            BYTE Index = Adj.SoundClassName;
            Adj.SoundName = Enum->Names(Index);
        }
    }
    g_026667c4->v8(0x11);
}

// @baa 0x0078d960
FString UAudioComponent::GetDetailedInfoInternal()
{
	FString Result;
	if (SoundCue)
	{
		Result = SoundCue->GetPathName();
	}
	else
	{
		Result = TEXT("No_SoundCue");
	}
	return Result;
}

int sub_007654e0(void);
struct UAudioComponent__00793c40 : public UAudioComponent
{
    void sub_00793c40(void);
};

// @baa 0x00793c40
void UAudioComponent__00793c40::sub_00793c40(void)
{
    sub_007654e0();
    if (bAutoPlay)
        sub_00791770();
}

// @baa 0x0079b340
bool AAnimatedCamera::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

/* Kit gap: the RIFF wave structures and FWaveModInfo (UnAudio.h) aren't declared. */
struct FRiffWaveHeader
{
	DWORD rID;			// 'RIFF'
	DWORD ChunkLen;
	DWORD wID;			// 'WAVE'
};

struct FRiffChunkOld
{
	DWORD ChunkID;
	DWORD ChunkLen;
};

struct FFormatChunk
{
	WORD wFormatTag;
	WORD nChannels;
	DWORD nSamplesPerSec;
	DWORD nAvgBytesPerSec;
	WORD nBlockAlign;
	WORD wBitsPerSample;
	WORD cbSize;
};

struct FSampleChunk
{
	DWORD dwManufacturer;
	DWORD dwProduct;
	DWORD dwSamplePeriod;
	DWORD dwMIDIUnityNote;
	DWORD dwMIDIPitchFraction;
	DWORD dwSMPTEFormat;
	DWORD dwSMPTEOffset;
	DWORD cSampleLoops;
	DWORD cbSamplerData;
};

struct FSampleLoop
{
	DWORD dwIdentifier;
	DWORD dwType;
	DWORD dwStart;
	DWORD dwEnd;
	DWORD dwFraction;
	DWORD dwPlayCount;
};

#define UE_mmioFOURCC(ch0, ch1, ch2, ch3) \
	((DWORD)(BYTE)(ch0) | ((DWORD)(BYTE)(ch1) << 8) | ((DWORD)(BYTE)(ch2) << 16) | ((DWORD)(BYTE)(ch3) << 24))
/* Chunk lengths are padded to an even size. */
inline DWORD Pad16Bit(DWORD InDW)
{
	return (InDW + 1) & ~1;
}

struct FWaveModInfo
{
	DWORD* pSamplesPerSec;
	DWORD* pAvgBytesPerSec;
	WORD* pBlockAlign;
	WORD* pBitsPerSample;
	WORD* pChannels;

	DWORD OldBitsPerSample;

	DWORD* pWaveDataSize;
	DWORD* pMasterSize;
	BYTE* SampleDataStart;
	BYTE* SampleDataEnd;
	DWORD SampleDataSize;
	BYTE* WaveDataEnd;

	INT SampleLoopsNum;
	FSampleLoop* pSampleLoop;

	DWORD NewDataSize;

	UBOOL ReadWaveInfo(BYTE* WaveData, INT WaveDataSize);
};

// @baa 0x00786680
/* Parses a RIFF wave file in memory: finds the 'fmt ' and 'data' chunks (and the optional 'smpl' chunk) and points
 * the members at their fields. Only uncompressed PCM is accepted. */
UBOOL FWaveModInfo::ReadWaveInfo(BYTE* WaveData, INT WaveDataSize)
{
	FFormatChunk* FmtChunk;
	FRiffWaveHeader* RiffHdr = (FRiffWaveHeader*)WaveData;
	WaveDataEnd = WaveData + WaveDataSize;

	if (WaveDataSize == 0)
	{
		return FALSE;
	}

	// Verify we've got a real 'WAVE' header.
	if (RiffHdr->wID != UE_mmioFOURCC('W','A','V','E'))
	{
		return FALSE;
	}

	FRiffChunkOld* RiffChunk = (FRiffChunkOld*)&WaveData[3 * 4];
	pMasterSize = &RiffHdr->ChunkLen;
	// Look for the 'fmt ' chunk.
	while ((((BYTE*)RiffChunk + 8) < WaveDataEnd) && (RiffChunk->ChunkID != UE_mmioFOURCC('f','m','t',' ')))
	{
		RiffChunk = (FRiffChunkOld*)((BYTE*)RiffChunk + Pad16Bit(RiffChunk->ChunkLen) + 8);
	}

	if (RiffChunk->ChunkID != UE_mmioFOURCC('f','m','t',' '))
	{
		return FALSE;
	}

	FmtChunk = (FFormatChunk*)((BYTE*)RiffChunk + 8);
	pBitsPerSample = &FmtChunk->wBitsPerSample;
	pSamplesPerSec = &FmtChunk->nSamplesPerSec;
	pAvgBytesPerSec = &FmtChunk->nAvgBytesPerSec;
	pBlockAlign = &FmtChunk->nBlockAlign;
	pChannels = &FmtChunk->nChannels;

	// Re-initialize the RiffChunk pointer and look for the 'data' chunk.
	RiffChunk = (FRiffChunkOld*)&WaveData[3 * 4];
	while ((((BYTE*)RiffChunk + 8) < WaveDataEnd) && (RiffChunk->ChunkID != UE_mmioFOURCC('d','a','t','a')))
	{
		RiffChunk = (FRiffChunkOld*)((BYTE*)RiffChunk + Pad16Bit(RiffChunk->ChunkLen) + 8);
	}

	if (RiffChunk->ChunkID != UE_mmioFOURCC('d','a','t','a'))
	{
		return FALSE;
	}

	SampleDataStart = (BYTE*)RiffChunk + 8;
	pWaveDataSize = &RiffChunk->ChunkLen;
	SampleDataSize = RiffChunk->ChunkLen;
	OldBitsPerSample = FmtChunk->wBitsPerSample;
	SampleDataEnd = SampleDataStart + SampleDataSize;

	if ((BYTE*)SampleDataEnd > (BYTE*)WaveDataEnd)
	{
		// Fix it up by clamping the data chunk.
		SampleDataEnd = (BYTE*)WaveDataEnd;
		SampleDataSize = SampleDataEnd - SampleDataStart;
		RiffChunk->ChunkLen = SampleDataSize;
	}

	NewDataSize = SampleDataSize;

	if (FmtChunk->wFormatTag != 1)
	{
		return FALSE;
	}

	// Look for the (optional) 'smpl' chunk.
	RiffChunk = (FRiffChunkOld*)&WaveData[3 * 4];
	while ((((BYTE*)RiffChunk + 8) < WaveDataEnd) && (RiffChunk->ChunkID != UE_mmioFOURCC('s','m','p','l')))
	{
		RiffChunk = (FRiffChunkOld*)((BYTE*)RiffChunk + Pad16Bit(RiffChunk->ChunkLen) + 8);
	}

	// Find the first sample-loop structure and the total number of them.
	if (((INT)RiffChunk + 4 < (INT)WaveDataEnd) && (RiffChunk->ChunkID == UE_mmioFOURCC('s','m','p','l')))
	{
		FSampleChunk* pSampleChunk = (FSampleChunk*)((BYTE*)RiffChunk + 8);
		pSampleLoop = (FSampleLoop*)(((BYTE*)RiffChunk) + sizeof(FRiffChunkOld) + sizeof(FSampleChunk));

		if (((BYTE*)pSampleChunk + sizeof(FSampleChunk)) > (BYTE*)WaveDataEnd)
		{
			pSampleChunk = NULL;
		}

		if (((BYTE*)pSampleLoop + sizeof(FSampleLoop)) > (BYTE*)WaveDataEnd)
		{
			pSampleLoop = NULL;
		}

#line 3912 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudio.cpp"
		check(pSampleChunk);
		SampleLoopsNum = pSampleChunk->cSampleLoops;
	}

	return TRUE;
}

#line 397 "candidate.cpp"

/* Kit gap: AAmbientSoundSimple::SyncUpInstantiatedObjects isn't declared. */

struct AAmbientSoundSimple_ : public AAmbientSoundSimple
{
	void SyncUpInstantiatedObjects();
};

// @baa 0x00786580
/* Propagates the instanced sound cue and node to the audio component, and hides them from the generic browser. */
void AAmbientSoundSimple_::SyncUpInstantiatedObjects()
{
	if (AudioComponent)
	{
		// Propagate instanced objects.
		SoundCueInstance->FirstNode = SoundNodeInstance;
		AudioComponent->SoundCue = SoundCueInstance;
		AmbientProperties = SoundNodeInstance;

		// Make sure neither sound cue nor node are shown in the generic browser.
#line 3491 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudio.cpp"
		check(SoundNodeInstance);
		check(SoundCueInstance);
		SoundNodeInstance->ClearFlags(RF_Public);
		SoundCueInstance->ClearFlags(RF_Public);
	}
}

#line 436 "candidate.cpp"
