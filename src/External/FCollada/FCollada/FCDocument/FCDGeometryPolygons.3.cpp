// FCDGeometryPolygons.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// FCDGeometryPolygons.cpp
// 01824a80: 25 bytes, __thiscall, one int argument (ret 4).
// Calls the sub-object at offset 0x3c's sub_00ec80e0(int) (address binding),
// then copies its first dword into its second.
// The 8-byte sub-object at offset 0x3c; only its method sub_00ec80e0 is known.
struct C_00ec80e0
{
	int sub_00ec80e0(int Param);
	int m_Value00;
	int m_Value04;
};

struct C_01824a80
{
	char Data[0x3c];
	C_00ec80e0 m_Sub_3c;
	void sub_01824a80(int Param);
};

// @baa 0x01824a80
void C_01824a80::sub_01824a80(int Param)
{
	C_00ec80e0* p = &m_Sub_3c;
	p->sub_00ec80e0(Param);
	p->m_Value04 = p->m_Value00;
}
