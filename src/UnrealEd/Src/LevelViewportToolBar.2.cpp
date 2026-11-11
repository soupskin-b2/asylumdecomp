// LevelViewportToolBar.cpp (part 2 of 2): 1 function
// Placed here by: file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C;
};

struct C {
    void sub_01192ce0(wxCommandEvent *);
    int sub_00f78160(int, int);
};

int sub_006311e0(...);
extern undefined4 g_021db308;
// @baa 0x01192ce0
void C::sub_01192ce0(wxCommandEvent * param_2)
{
    int param_1 = (int)this;
  bool bVar1;
  if (*(int *)(*(int *)(param_1 + 0x278) + 0x2c) != 3) {
    sub_006311e0("ViewportClient->IsPerspective()",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\LevelViewportToolBar.cpp"
                 ,0x12a,&g_021db308);
  }
  bVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  *(uint *)(*(int *)(param_1 + 0x278) + 0x5c) = (uint)bVar1;
  ((C *)((*(char **)((char *)this + 0x278))))->sub_00f78160(0, 1);
  return;
}
