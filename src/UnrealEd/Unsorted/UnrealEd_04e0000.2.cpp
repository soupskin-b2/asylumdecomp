// UnrealEd_04e0000.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct Sub_004e8d90 {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void sub_virt(int bFlag);
};

struct Outer_004e8d90 {
    char _pad[0x1a8];
    Sub_004e8d90* sub_0x1a8;

    void sub_004e8d90(int bArg);
};

// @baa 0x004e8d90
void Outer_004e8d90::sub_004e8d90(int bArg)
{
    sub_0x1a8->sub_virt(1);
}

class wxWindow
{
public:
    __declspec(dllimport) virtual ~wxWindow();
};

extern void* g_01e65700[];
struct C : public wxWindow
{
    void sub_004e8f70();
};

// @baa 0x004e8f70
void C::sub_004e8f70()
{
    *(void**)this = g_01e65700;
    ((wxWindow*)this)->wxWindow::~wxWindow();
}

extern void* g_01e65dc0[];
struct C_004eb030 : public wxWindow
{
    void sub_004eb030();
};

// @baa 0x004eb030
void C_004eb030::sub_004eb030()
{
    *(void**)this = g_01e65dc0;
    ((wxWindow*)this)->wxWindow::~wxWindow();
}

class wxDialogBase
{
protected:
    __declspec(dllimport) void EndDialog(int Value);
};

struct C_004ed500 : public wxDialogBase
{
    void sub_004ed500(INT Unused);
};

// @baa 0x004ed500
void C_004ed500::sub_004ed500(INT)
{
    EndDialog(0x13ec);
}

struct SubObj_004dc1e0
{
	void sub_004dc1e0();  /* 0x004dc1e0 */
};

extern INT sub_004097a0();
  /* 0x004097a0 */
struct C_004e0a90
{
	char pad[0x34];
	INT m_Field34;
	void sub_004e0a90(INT Arg);
};

// @baa 0x004e0a90
void C_004e0a90::sub_004e0a90(INT Arg)
{
	INT V = sub_004097a0();
	SubObj_004dc1e0 * Sub = (SubObj_004dc1e0*)((char*)this - 0x144);
	m_Field34 = V;
	Sub->sub_004dc1e0();
}

// 0x004e8890
struct sub_004e8890_Target
{
    unsigned _A;
    unsigned _B;
    unsigned _C;
    unsigned _D;
    unsigned char _Flag;
};

struct sub_004e8890_Getter
{
    void* _Target;
    sub_004e8890_Target* sub_01ab5d00(); /* out-of-line: mov eax, [ecx]; ret */
};

struct sub_004e8890_Node
{
    unsigned _A;
    unsigned _B;
    sub_004e8890_Getter _Getter;
};

// @baa 0x004e8890
void __stdcall sub_004e8890(sub_004e8890_Node* Node, unsigned char Flag)
{
    if (Node != NULL)
    {
        sub_004e8890_Target* Target = Node->_Getter.sub_01ab5d00();
        Target->_Flag = Flag;
    }
}
