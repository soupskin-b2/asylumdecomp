// LevelViewportToolBar.cpp (part 1 of 2): 1 function
// Placed here by: file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C;
};

struct C {
    void sub_01192c80(wxCommandEvent *);
    int sub_00f78160(int, int);
};

int sub_006311e0(...);
extern undefined4 g_021db1f8;
// @baa 0x01192c80
void C::sub_01192c80(wxCommandEvent * param_2)
{
    int param_1 = (int)this;
  bool bVar1;
  if (*(int *)(*(int *)(param_1 + 0x278) + 0x2c) != 3) {
    sub_006311e0("ViewportClient->IsPerspective()",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\LevelViewportToolBar.cpp"
                 ,0x122,&g_021db1f8);
  }
  bVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  *(uint *)(*(int *)(param_1 + 0x278) + 0x58) = (uint)bVar1;
  ((C *)((*(char **)((char *)this + 0x278))))->sub_00f78160(1, 1);
  return;
}
