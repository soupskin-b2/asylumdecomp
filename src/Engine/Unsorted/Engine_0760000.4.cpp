// Engine_0760000.cpp (part 4 of 5): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053dfa0(...);
int sub_0075b520(void);
// @baa 0x007615b0
undefined4 UTextureCube::sub_007615b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0075b520();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

/* Kit gap: CastChecked<T> (UnObjBas.h) isn't declared; this build has CastChecked<ULevel> out of line (0x00766bb0). */
template<class T> T* CastChecked(UObject* Src);
/* Kit gap: UObject::GetOuter() (UnObjBas.h) is missing; same inline accessor. */
inline UObject* GetOuterOf(const UObject* Object) { return Object->Outer; }

extern template ULevel* CastChecked<ULevel>(UObject* Src);
/* Unnamed in the kit: UE3's AActor::GetLevel() (an actor's outer is its level). */
struct AActor_ : public AActor
{
    ULevel* sub_00769d90() const;
};

// @baa 0x00769d90
ULevel* AActor_::sub_00769d90() const
{
    return CastChecked<ULevel>(GetOuterOf(this));
}
