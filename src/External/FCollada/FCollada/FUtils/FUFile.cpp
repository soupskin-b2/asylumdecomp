// FUFile.cpp (part 1 of 2): 2 functions
// Placed here by: file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

#pragma pack(push, 1)
struct _iobuf { char * _ptr; int _cnt; char * _base; int _flag; int _file; int _charbuf; int _bufsiz; char * _tmpfname; };

#pragma pack(pop)
typedef _iobuf FILE;

struct C {
    void sub_01875de0();
};

int sub_018260a0(...);
extern "C" __declspec(dllimport) int fflush(...);
// @baa 0x01875de0
void C::sub_01875de0(void)
{
    int * param_1 = (int *)this;
  if (*param_1 == 0) {
    sub_018260a0(".\\FUtils\\FUFile.cpp",0x7b);
  }
  fflush((FILE *)*param_1);
  return;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_01875e10 {
    void sub_01875e10();
};

extern "C" __declspec(dllimport) int __cdecl fclose(void *);
// @baa 0x01875e10
void C_01875e10::sub_01875e10(void)
{
    int * param_1 = (int *)this;
  if (*param_1 == 0) {
    sub_018260a0(".\\FUtils\\FUFile.cpp",0x81);
  }
  fclose((FILE *)*param_1);
  *param_1 = 0;
  return;
}
