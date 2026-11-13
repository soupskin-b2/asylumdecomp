// OnlineSubsystemSteamworks_0620000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"
#include <string.h>
#include <stdlib.h>

/* UnMisc.cpp: FSHA1, the SHA-1 hash (after Dominik Reichl's public-domain CSHA1). The class is
 * not in the headers; it is declared here (UnMisc.h). */
class FSHA1
{
public:
	typedef union
	{
		BYTE  c[64];
		DWORD l[16];
	} SHA1_WORKSPACE_BLOCK;

	DWORD m_state[5];
	DWORD m_count[2];
	DWORD __reserved1[1];
	BYTE  m_buffer[64];
	BYTE  m_digest[20];
	DWORD __reserved2[3];

	// Update the hash value
	void Update(BYTE* data, DWORD len);

private:
	// Private SHA-1 transformation
	void Transform(DWORD* state, BYTE* buffer);

	// Member variables
	BYTE m_workspace[64];
	SHA1_WORKSPACE_BLOCK* m_block; // SHA1 pointer to the byte array above
};

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
