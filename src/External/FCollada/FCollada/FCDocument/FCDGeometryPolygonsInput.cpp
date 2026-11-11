// FCDGeometryPolygonsInput.cpp: 1 function
// Placed here by: file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_01846cf0();
};

int sub_018260a0(...);
// @baa 0x01846cf0
undefined4 C::sub_01846cf0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x30) == 0) {
    sub_018260a0(".\\FCDocument\\FCDGeometryPolygonsInput.cpp",0x2a);
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x78);
}
