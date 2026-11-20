// OnlineSubsystemSteamworks_0620000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"
#include <string.h>
#include <stdlib.h>

/* UnMisc.cpp: FSHA1, the SHA-1 hash (after Dominik Reichl's public-domain CSHA1); the class is in Core.h. */
// @baa 0x006296f0
// Use this function to hash in binary data
void FSHA1::Update(BYTE* data, DWORD len)
{
	DWORD i, j;

	j = (m_count[0] >> 3) & 63;

	if ((m_count[0] += len << 3) < (len << 3)) m_count[1]++;

	m_count[1] += (len >> 29);

	if ((j + len) > 63)
	{
		i = 64 - j;
		memcpy(&m_buffer[j], data, i); // appMemcpy
		Transform(m_state, m_buffer);

		for ( ; i + 63 < len; i += 64) Transform(m_state, &data[i]);

		j = 0;
	}
	else i = 0;

	memcpy(&m_buffer[j], &data[i], len - i); // appMemcpy
}
