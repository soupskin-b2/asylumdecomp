// fmod_metadata.cpp (part 2 of 2): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_0179d9b6(int *);
};

// @baa 0x0179d9b6
undefined4 C::sub_0179d9b6(int * param_2)
{
    int param_1 = (int)this;

  param_2[1] = *(int *)(param_1 + 4);
  *param_2 = param_1;
  *(int **)(param_1 + 4) = param_2;
  *(int **)param_2[1] = param_2;
  return 0;
}
