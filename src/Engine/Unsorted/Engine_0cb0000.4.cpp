// Engine_0cb0000.cpp (part 4 of 4): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00630f20(...);
extern undefined4 g_026667a8;
struct UClient {
    void ForceClearForceFeedback();
};

// @baa 0x00cb5b40
void UClient::ForceClearForceFeedback()
{
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",L"UClient::ForceClearForceFeedback"
              );
  return;
}
