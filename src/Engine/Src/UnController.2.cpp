// UnController.cpp (part 2 of 2): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class AController;
struct G {
    void sub_009c8d50(AController* c);
};

extern G* g_026b62b8;
struct AController {
    void sub_007a1d90();
};

// @baa 0x007a1d90
void AController::sub_007a1d90()
{
    g_026b62b8->sub_009c8d50(this);
}
