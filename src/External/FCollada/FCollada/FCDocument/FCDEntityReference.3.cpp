// FCDEntityReference.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// FCDEntityReference.cpp
extern INT g_023e89cc;
struct FCDPlaceHolder
{
    INT*   m_Vftable;
    INT    m_Offset;
    INT    m_Size;
    INT    m_Capacity;
    INT*   m_Data;

    FCDPlaceHolder* sub_01857860();
};

// @baa 0x01857860
FCDPlaceHolder* FCDPlaceHolder::sub_01857860()
{
    m_Offset = 0;
    m_Size = 0;
    m_Capacity = 0;
    m_Data = &m_Capacity;
    m_Vftable = &g_023e89cc;
    return this;
}
