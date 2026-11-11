// UnEdTran.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// Classes.h declares slot 0x128 as `virtual INT GetUndoDesc(INT, INT)`; UE3 has the signature below.
struct UTransactor_ : public UTransactor
{
    FString GetUndoDesc(UBOOL bCheckWhetherUndoPossible = TRUE);
};

// @baa 0x00f793f0
FString UTransactor_::GetUndoDesc(UBOOL bCheckWhetherUndoPossible) PURE_VIRTUAL(UTransactor::GetUndoDesc, return TEXT(""););
