// Engine_0d80000.cpp (part 2 of 2): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_00d866b0(void);
// @baa 0x00d8c4c0
undefined4 UTexture2D::sub_00d8c4c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d866b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// The compiler-generated destructor of the script struct OnlineGameSearchQuery:
// it destroys SortClauses, then OrClauses.
struct FOnlineGameSearchQuery_ : public FOnlineGameSearchQuery {
    ~FOnlineGameSearchQuery_();
};

// @baa 0x00d872b0
FOnlineGameSearchQuery_::~FOnlineGameSearchQuery_()
{
}

struct FPair_
{
	int         A;
	int         B;
	unsigned char C;

	FPair_& sub_00d8f300(const FPair_& In);
};

// @baa 0x00d8f300
FPair_& FPair_::sub_00d8f300(const FPair_& In)
{
	A = In.A;
	B = In.B;
	C = In.C;
	return *this;
}
