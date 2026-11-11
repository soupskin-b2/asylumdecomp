// Engine_06d0000.cpp (part 3 of 4): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct UPointLightComponent {
    int GetLightType();
};

// @baa 0x006daa20
int UPointLightComponent::GetLightType()
{ return 3; }
