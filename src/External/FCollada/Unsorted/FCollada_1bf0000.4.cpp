// FCollada_1bf0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
// Called by 01bf1e40 and 01bf1f80; static so the compiler passes Count, First and Power in
// registers (ECX, EAX, EBX) as the original does.
#include <string.h>

void sub_01bf17b0(int* Data, int Count);
static void sub_01bf1d50(int* Data, int* Shift, int Count, int First, int* Power)
{
	memset(Data + First, 0, (Count - First) * sizeof(int));
	sub_01bf17b0(Data, Count);

	int MaxMagnitude = 0;
	for (int i = 0; i < Count; i++)
	{
		int Magnitude = Data[i] > 0 ? Data[i] : -Data[i];
		if (Magnitude > MaxMagnitude)
		{
			MaxMagnitude = Magnitude;
		}
	}

	int HighBit = 0;
	for (int Bit = 0; MaxMagnitude > 0; MaxMagnitude >>= 1, Bit++)
	{
		if (MaxMagnitude & 1)
		{
			HighBit = Bit;
		}
	}

	*Shift = 0;
	if (HighBit > 14)
	{
		*Shift = HighBit - 14;
		for (int i = 0; i < Count; i++)
		{
			Data[i] = ((Data[i] >> (*Shift - 1)) + 1) >> 1;
		}
	}

	const int Half = Count >> 1;
	Power[0] = Data[0] * Data[0];
	Power[Half] = Data[1] * Data[1];
	Data += 2;
	for (int i = 1; i < Half; i++, Data += 2)
	{
		Power[i] = Data[0] * Data[0];
		Power[i] += Data[1] * Data[1];
	}
}

// @baa 0x01bf1f80
void sub_01bf1f80(int* Data, int* Power, int Count)
{
	int Shift;
	sub_01bf1d50(Data, &Shift, Count, Count, Power);
}
