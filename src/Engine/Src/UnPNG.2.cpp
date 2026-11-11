// UnPNG.cpp (part 2 of 2): 3 functions
// Placed here by: callers 2, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01adb770
undefined4 sub_01adb770(void)
{
  return 0x27e0;
}

#pragma pack(push, 1)
struct _iobuf { char * _ptr; int _cnt; char * _base; int _flag; int _file; int _charbuf; int _bufsiz; char * _tmpfname; };

#pragma pack(pop)
typedef _iobuf FILE;

typedef uint size_t;

int sub_01ae1150(...);
extern "C" __declspec(dllimport) unsigned int __cdecl fread(void *, unsigned int, unsigned int, void *);
// @baa 0x01adf590
void sub_01adf590(int param_1, void * param_2, size_t param_3)
{
  size_t sVar1;
  sVar1 = fread(param_2,1,param_3,*(FILE **)(param_1 + 0x54));
  if (sVar1 != param_3) {
    sub_01ae1150(param_1,"Read Error");
  }
  return;
}

#pragma pack(push, 1)
#pragma pack(pop)
extern "C" __declspec(dllimport) unsigned int __cdecl fwrite(const void *, unsigned int, unsigned int, void *);
// @baa 0x01ae0d20
void sub_01ae0d20(int param_1, void * param_2, size_t param_3)
{
  size_t sVar1;
  sVar1 = fwrite(param_2,1,param_3,*(FILE **)(param_1 + 0x54));
  if (sVar1 != param_3) {
    sub_01ae1150(param_1,"Write Error");
  }
  return;
}
