// FCollada_1c10000.cpp (part 4 of 4): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01c159b0(...);
int sub_01c18720(...);
int sub_01c18bb0(...);
int sub_01c1bf00(...);
// @baa 0x01c18c10
undefined4 sub_01c18c10(int param_1, int param_2, int param_3)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 == 0) || (param_3 == 0)) {
    return 0xffffffff;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (param_2 == 0) {
    uVar2 = sub_01c18bb0(param_1,param_3);
    return uVar2;
  }
  if (*(int *)(param_2 + 8) != 0) {
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
      iVar3 = sub_01c1bf00(*(undefined4 *)(iVar1 + 8),param_3);
      if (((iVar3 != 0) && (*(int *)(iVar1 + 0x24) != 0)) &&
         (iVar3 = sub_01c1bf00(*(undefined4 *)(*(int *)(iVar1 + 0x24) + 8),
                               *(undefined4 *)(param_2 + 8)), iVar3 != 0)) {
        sub_01c159b0(iVar1);
        sub_01c18720(iVar1);
        return 0;
      }
    }
  }
  return 0xffffffff;
}

struct FMString_01c17390 {
	char* _data;
	int _len;
	int _capacity;
	int _type;
};

void sub_01c172e0(FMString_01c17390* This, const char* Text);
// @baa 0x01c17390
void sub_01c17390(FMString_01c17390* This, const char* Text)
{
	if (This != 0 && This->_type != 2)
		sub_01c172e0(This, Text);
}
