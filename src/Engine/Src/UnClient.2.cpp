// UnClient.cpp: 1 function
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
