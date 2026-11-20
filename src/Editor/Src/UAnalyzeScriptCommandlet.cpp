// UAnalyzeScriptCommandlet.cpp: 6 functions
// Placed here by: callers 2, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x010148f0
void UAnalyzeScriptCommandlet::InitializeIntrinsicPropertyValues()
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffff7 | 0x17;
  return;
}

// @baa 0x010369f0
IMPLEMENT_CLASS_AT(UAnalyzeScriptCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UAnalyzeScriptCommandlet.cpp", 169);

// @baa 0x01037690

// @baa 0x010160f0

// @baa 0x01016200
UBOOL UAnalyzeScriptCommandlet::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x01016210
UBOOL UAnalyzeScriptCommandlet::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
