// UnEdFact.cpp (part 3 of 4): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) int __cdecl _wcsicmp(const wchar_t *, const wchar_t *);
// @baa 0x007179d0
int sub_007179d0(wchar_t * param_1)
{
  int iVar1;
  
  iVar1 = _wcsicmp(L"TEXTUREGROUP_WorldNormalMap",param_1);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = _wcsicmp(L"TEXTUREGROUP_WorldSpecular",param_1);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = _wcsicmp(L"TEXTUREGROUP_Character",param_1);
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = _wcsicmp(L"TEXTUREGROUP_CharacterNormalMap",param_1);
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = _wcsicmp(L"TEXTUREGROUP_CharacterSpecular",param_1);
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = _wcsicmp(L"TEXTUREGROUP_Weapon",param_1);
  if (iVar1 == 0) {
    return 6;
  }
  iVar1 = _wcsicmp(L"TEXTUREGROUP_WeaponNormalMap",param_1);
  if (iVar1 == 0) {
    return 7;
  }
  iVar1 = _wcsicmp(L"TEXTUREGROUP_WeaponSpecular",param_1);
  if (iVar1 == 0) {
    return 8;
  }
  iVar1 = _wcsicmp(L"TEXTUREGROUP_Vehicle",param_1);
  if (iVar1 == 0) {
    return 0xc;
  }
  iVar1 = _wcsicmp(L"TEXTUREGROUP_VehicleNormalMap",param_1);
  if (iVar1 == 0) {
    return 0xd;
  }
  iVar1 = _wcsicmp(L"TEXTUREGROUP_VehicleSpecular",param_1);
  if (iVar1 == 0) {
    return 0xe;
  }
  iVar1 = _wcsicmp(L"TEXTUREGROUP_Cinematic",param_1);
  if (iVar1 == 0) {
    return 0xf;
  }
  iVar1 = _wcsicmp(L"TEXTUREGROUP_Effects",param_1);
  if (iVar1 == 0) {
    return 0x10;
  }
  iVar1 = _wcsicmp(L"TEXTUREGROUP_Skybox",param_1);
  if (iVar1 == 0) {
    return 0x12;
  }
  iVar1 = _wcsicmp(L"TEXTUREGROUP_UI",param_1);
  if (iVar1 == 0) {
    return 0x13;
  }
  iVar1 = _wcsicmp(L"TEXTUREGROUP_LightAndShadowMap",param_1);
  if (iVar1 == 0) {
    return 0x14;
  }
  iVar1 = _wcsicmp(L"TEXTUREGROUP_RenderTarget",param_1);
  return (iVar1 != 0) ? 0 : 0x15;
}
