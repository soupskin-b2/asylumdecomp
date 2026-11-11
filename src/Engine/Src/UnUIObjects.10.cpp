// UnUIObjects.cpp (part 10 of 17): 1 function
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00630f20(...);
extern undefined4 g_026667a8;
struct UUIScreenObject {
    void RequestSceneInputMaskUpdate();
};

// @baa 0x00d990b0
void UUIScreenObject::RequestSceneInputMaskUpdate()
{
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",
               L"UUIScreenObject::RequestSceneInputMaskUpdate");
  return;
}
