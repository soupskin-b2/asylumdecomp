// FCollada_1c10000.cpp (part 2 of 4): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" int strcmp(const char*,const char*);
#pragma intrinsic(strcmp)
unsigned char sub_01821890(const char *a, const char *b);
// @baa 0x01c12580
int sub_01c12580(const char *p)
{
  if (strcmp(p,"ZERO")==0) return 0;
  if (strcmp(p,"ONE")==0) return 1;
  if (strcmp(p,"SRC_COLOR")==0) return 0x300;
  if (sub_01821890(p,"ONE_MINUS_SRC_COLOR")) return 0x301;
  if (sub_01821890(p,"DEST_COLOR")) return 0x306;
  if (sub_01821890(p,"ONE_MINUS_DEST_COLOR")) return 0x307;
  if (sub_01821890(p,"SRC_ALPHA")) return 0x302;
  if (sub_01821890(p,"ONE_MINUS_SRC_ALPHA")) return 0x303;
  if (sub_01821890(p,"DEST_ALPHA")) return 0x304;
  if (sub_01821890(p,"ONE_MINUS_DEST_ALPHA")) return 0x305;
  if (sub_01821890(p,"CONSTANT_COLOR")) return 0x8001;
  if (sub_01821890(p,"ONE_MINUS_CONSTANT_COLOR")) return 0x8002;
  if (sub_01821890(p,"CONSTANT_ALPHA")) return 0x8003;
  if (sub_01821890(p,"ONE_MINUS_CONSTANT_ALPHA")) return 0x8004;
  return sub_01821890(p,"SRC_ALPHA_SATURATE") ? 0x308 : 0x309;
}
