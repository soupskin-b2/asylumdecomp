// FCollada_1c10000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// Growing character buffer used by the libxml2 / FCollada XML import.
// sub_01c17240 appends Count characters to Data (a null-terminated buffer).
struct XMLBuffer
{
    char* Data;
    int Size;
    int Capacity;
    int Count;
};

XMLBuffer* sub_01c17240(XMLBuffer* Buffer);
// @baa 0x01c17370
XMLBuffer* sub_01c17370(XMLBuffer* Buffer)
{
    if (Buffer != NULL && Buffer->Count != 2)
        return sub_01c17240(Buffer);

    return Buffer;
}
