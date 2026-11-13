// Engine_08c0000.cpp (part 3 of 3): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0040fcc0(void);
int sub_0053dfa0(...);
// @baa 0x008cdab0
undefined4 UObject::sub_008cdab0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

/* Kit gap: UActorComponent::ConditionalDetach (UnActorComponent.cpp; 0x00759640) isn't declared. */

// @baa 0x008c7f00
/* UE3's AActor::DetachComponent: drop the component from Components and detach it if it was there. */
void AActor::DetachComponent(UActorComponent* ExComponent)
{
    if (ExComponent)
    {
        if (Components.RemoveItem(ExComponent) > 0)
        {
            ExComponent->ConditionalDetach();
        }
    }
}

// @baa 0x008c7f30
/* Detaches the component (if attached through Components) expecting a reattach, then attaches it again
 * (AActor::AttachComponent). */
void AActor::ReattachComponent(UActorComponent* ExComponent)
{
    if (ExComponent)
    {
        if (Components.RemoveItem(ExComponent) > 0)
        {
            ExComponent->ConditionalDetach(TRUE);
        }
        AttachComponent(ExComponent);
    }
}
