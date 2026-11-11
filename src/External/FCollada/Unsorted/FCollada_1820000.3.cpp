// FCollada_1820000.cpp (part 3 of 6): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern void *ParameterNameVftable[];
 // FCDENode::Parameter_name vftable
struct FCDENodeParameterName
{
    void *Owner;  // 0x00 (vtable slot)
    INT Unk04;    // 0x04
    INT Unk08;    // 0x08
    INT Unk0C;    // 0x0c

    FCDENodeParameterName *sub_01823070();
};

// @baa 0x01823070
FCDENodeParameterName *FCDENodeParameterName::sub_01823070()
{
    Unk04 = 0;
    Unk08 = 0;
    Unk0C = 0;
    Owner = &ParameterNameVftable[0];
    return this;
}

struct FCDocument {
    virtual int vf_0(UBOOL b); // 0x00
    virtual void sub_018241a0(); // 0x04
    void sub_01854290();
};

// @baa 0x018241a0
void FCDocument::sub_018241a0()
{
    sub_01854290();
    if (this != NULL)
        vf_0(1);
}

// @baa 0x01826100
undefined4 sub_01826100(float param_1, float param_2, float param_3)
{
  if ((param_1 - param_2 < param_3) && (param_2 - param_1 < param_3)) {
    return 1;
  }
  return 0;
}
