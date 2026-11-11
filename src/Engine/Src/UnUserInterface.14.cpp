// UnUserInterface.cpp (part 14 of 15): 1 function
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00630f20(...);
extern undefined4 g_026667a8;
struct UUISceneClient {
    void UpdateCanvasToScreen();
};

// @baa 0x00de13d0
void UUISceneClient::UpdateCanvasToScreen()
{
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",
               L"UUISceneClient::UpdateCanvasToScreen");
  return;
}
