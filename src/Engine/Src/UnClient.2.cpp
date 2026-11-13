// UnClient.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// Engine_0cb0000.cpp (part 3 of 4): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
int sub_00630f20(...);
extern undefined4 g_026667a8;
struct UClient {
    undefined4 GetAudioDevice();
};

// @baa 0x00cb5b20
undefined4 UClient::GetAudioDevice()
{
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",L"UClient::GetAudioDevice");
  return 0;
}

// A wrapper whose +4 member is an interface; reports the fixed proxy size.
struct FInner_00c96bb0
{
	virtual void vf_000();
	virtual void vf_004();
	virtual void vf_008();
	virtual void vf_00c();
	virtual void vf_010();
	virtual void vf_014();
	virtual void vf_018();
	virtual void vf_01c();
	virtual void vf_020();
	virtual void vf_024();
	virtual void SetLinker();
	virtual void vf_02c();
	virtual void vf_030();
	virtual void vf_034();
	virtual void vf_038();
	virtual void vf_03c();
	virtual void vf_040();
	virtual void vf_044();
	virtual void vf_048();
	virtual void vf_04c();
	virtual void vf_050();
	virtual void vf_054();
};

struct FWrapper_00c96bb0
{
	void* Owner;
	FInner_00c96bb0* Inner; /* 0x4 */

	INT GetSize();
};

// @baa 0x00c96bb0
INT FWrapper_00c96bb0::GetSize()
{
	Inner->vf_054();
	return 8;
}

// A wrapper whose +4 member is an interface; reports the fixed proxy size.
struct FInner_00c96cd0
{
	virtual void vf_000();
	virtual void vf_004();
	virtual void vf_008();
	virtual void vf_00c();
	virtual void vf_010();
	virtual void vf_014();
	virtual void vf_018();
	virtual void vf_01c();
	virtual void vf_020();
	virtual void vf_024();
	virtual void vf_028();
	virtual void vf_02c();
	virtual void vf_030();
	virtual void vf_034();
	virtual void vf_038();
	virtual void vf_03c();
	virtual void vf_040();
	virtual void vf_044();
	virtual void vf_048();
	virtual void vf_04c();
	virtual void vf_050();
	virtual void vf_054();
};

struct FWrapper_00c96cd0
{
	void* Owner;
	FInner_00c96cd0* Inner; /* 0x4 */

	INT GetSize();
};

// @baa 0x00c96cd0
INT FWrapper_00c96cd0::GetSize()
{
	Inner->vf_054();
	return 8;
}
