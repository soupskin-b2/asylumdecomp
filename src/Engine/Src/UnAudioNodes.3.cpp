// UnAudioNodes.cpp (part 3 of 3): 4 functions
// Placed here by: callers 2, neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) int wcscpy_s(...);
// @baa 0x01a297c0
void sub_01a297c0(wchar_t * param_1, wchar_t * param_2)
{
  wcscpy_s(param_1,0x20,param_2);
  return;
}

// @baa 0x01a297e0
void sub_01a297e0(wchar_t * param_1, wchar_t * param_2)
{
  wcscpy_s(param_1,0x40,param_2);
  return;
}

typedef uint size_t;

typedef size_t rsize_t;

extern "C" __declspec(dllimport) int wcsncpy_s(...);
// @baa 0x01a29800
void sub_01a29800(wchar_t * param_1, wchar_t * param_2, rsize_t param_3)
{
  wcsncpy_s(param_1,0x800,param_2,param_3);
  return;
}

// @baa 0x01a29820
void sub_01a29820(wchar_t * param_1, wchar_t * param_2)
{
  wcscpy_s(param_1,0xff,param_2);
  return;
}
