// fmod_dsp_codecpool.cpp: 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_017975d8(...);
int sub_017a5b54(...);
int sub_017a5b69(...);
int sub_017a5b7e(...);
int sub_017a5b93(...);
int sub_017a5bac(...);
int sub_017a5bcd(...);
int sub_017a5eae(void);
void * sub_01a37612(void *, int, size_t);
extern undefined4 g_025f3b38;
extern undefined4 g_025f3b58;
extern undefined4 g_025f3b60;
extern undefined4 g_025f3b64;
extern undefined4 g_025f3b68;
extern undefined4 g_025f3b6c;
extern undefined4 g_025f3b70;
extern undefined4 g_025f3b74;
extern undefined4 g_025f3b78;
extern undefined4 g_025f3b7c;
extern undefined4 g_025f3b80;
extern undefined4 g_025f3ba4;
extern undefined4 g_025f3ba8;
// @baa 0x017a5ed5
undefined * sub_017a5ed5(void)
{
  sub_01a37612(&g_025f3b38,0,0x94);
  sub_017975d8(&g_025f3b38,"FMOD DSP Codec");
  g_025f3b74 = 0;
  g_025f3b78 = 0;
  g_025f3b58 = 0x10100;
  g_025f3b60 = (undefined4)(&sub_017a5b54);
  g_025f3b64 = (undefined4)(&sub_017a5b69);
  g_025f3b68 = (undefined4)(&sub_017a5b7e);
  g_025f3b6c = (undefined4)(sub_017a5eae);
  g_025f3b70 = (undefined4)(&sub_017a5b93);
  g_025f3b7c = (undefined4)(&sub_017a5bac);
  g_025f3b80 = (undefined4)(&sub_017a5bcd);
  g_025f3ba4 = 1000;
  g_025f3ba8 = 0x4b8;
  return (undefined *)(&g_025f3b38);
}
