// UnrealEd_1b50000.cpp (part 4 of 6): 29 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

typedef struct _iobuf FILE;

extern "C" __declspec(dllimport) int sprintf(char*,const char*,...);
extern "C" __declspec(dllimport) FILE* fopen(const char*,const char*);
extern "C" __declspec(dllimport) int fclose(FILE*);
extern "C" __declspec(dllimport) int feof(FILE*);
extern "C" __declspec(dllimport) char* fgets(char*,int,FILE*);
extern "C" __declspec(dllimport) int _strnicmp(const char*,const char*,unsigned int);
extern "C" __declspec(dllimport) int sscanf(const char*,const char*,...);
extern "C" __declspec(dllimport) void _invalid_parameter_noinfo();
extern "C" size_t __cdecl strlen(const char*);
struct Material { char name[256]; int index; char map[256]; float a,b,c,d,e,f,g,h,i,j,k; void reset() { name[0]=0; index=-1; map[0]=0; a=0; b=0; c=0; d=0; e=0; f=0; g=0; h=0; i=0; j=0; k=0; } };

struct Arr { void* data; unsigned int first,last; void sub_01b5c020(void*,Arr*,unsigned int,Arr*,unsigned int); void sub_01b5e010(Material*); };

struct C { char pad[0x40]; Arr arr; char pad2[0x124]; char path[256]; bool sub_01b5e540(const char*); };

// @baa 0x01b5e540
bool C::sub_01b5e540(const char* filename) {
 char pathbuf[256]; sprintf(pathbuf,"%s\\%s",path,filename); FILE* file=fopen(pathbuf,"r"); if (!file) return false;
 struct Loc { char iter[8]; Material m; } loc;
 Arr* a=&arr; unsigned int last=a->last; if(a->first>last) _invalid_parameter_noinfo(); unsigned int first=a->first; if(first>a->last) _invalid_parameter_noinfo(); a->sub_01b5c020(loc.iter,a,first,a,last);
 loc.m.reset(); char line[256];
 while(!feof(file)) { fgets(line,256,file); if(!_strnicmp(line,"newmtl",6)) { if(strlen(loc.m.name)) a->sub_01b5e010(&loc.m); loc.m.reset(); sscanf(line+7,"%s",loc.m.name); } else if(!_strnicmp(line,"Ka",2)) sscanf(line+3,"%f %f %f",&loc.m.a,&loc.m.b,&loc.m.c); else if(!_strnicmp(line,"Kd",2)) sscanf(line+3,"%f %f %f",&loc.m.d,&loc.m.e,&loc.m.f); else if(!_strnicmp(line,"Ks",2)) sscanf(line+3,"%f %f %f",&loc.m.g,&loc.m.h,&loc.m.i); else if(!_strnicmp(line,"Ns",2)) sscanf(line+3,"%f",&loc.m.k); else if(!_strnicmp(line,"Tr",2)) sscanf(line+3,"%f",&loc.m.j); else if(!_strnicmp(line,"d ",2)) sscanf(line+2,"%f",&loc.m.j); else if(!_strnicmp(line,"map_K ",5)) sscanf(line+7,"%s",loc.m.map); }
 if(strlen(loc.m.name)) a->sub_01b5e010(&loc.m); fclose(file); return true;
}

struct C_01b57870
{
    float First;
    float Second;

    void sub_01b57870();
};

// @baa 0x01b57870
void C_01b57870::sub_01b57870()
{
    First = 0.0f;
    Second = 0.0f;
}

void sub_00402660(INT Value);
// @baa 0x01b54cc0
void __stdcall sub_01b54cc0(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x01b54d40
void __stdcall sub_01b54d40(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x01b54dc0
void __stdcall sub_01b54dc0(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x01b54e40
void __stdcall sub_01b54e40(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x01b54ec0
void __stdcall sub_01b54ec0(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x01b54f40
void __stdcall sub_01b54f40(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x01b54fc0
void __stdcall sub_01b54fc0(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x01b55040
void __stdcall sub_01b55040(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x01b550c0
void __stdcall sub_01b550c0(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x01b55140
void __stdcall sub_01b55140(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x01b551c0
void __stdcall sub_01b551c0(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x01b55240
void __stdcall sub_01b55240(INT A, INT B)
{
    sub_00402660(A);
}

struct C_01b56450
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b56450* sub_01b56450();
};

// @baa 0x01b56450
C_01b56450* C_01b56450::sub_01b56450()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b56460
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b56460* sub_01b56460();
};

// @baa 0x01b56460
C_01b56460* C_01b56460::sub_01b56460()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b56470
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b56470* sub_01b56470();
};

// @baa 0x01b56470
C_01b56470* C_01b56470::sub_01b56470()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b56480
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b56480* sub_01b56480();
};

// @baa 0x01b56480
C_01b56480* C_01b56480::sub_01b56480()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b56490
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b56490* sub_01b56490();
};

// @baa 0x01b56490
C_01b56490* C_01b56490::sub_01b56490()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b564a0
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b564a0* sub_01b564a0();
};

// @baa 0x01b564a0
C_01b564a0* C_01b564a0::sub_01b564a0()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b564b0
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b564b0* sub_01b564b0();
};

// @baa 0x01b564b0
C_01b564b0* C_01b564b0::sub_01b564b0()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b564c0
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b564c0* sub_01b564c0();
};

// @baa 0x01b564c0
C_01b564c0* C_01b564c0::sub_01b564c0()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b564d0
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b564d0* sub_01b564d0();
};

// @baa 0x01b564d0
C_01b564d0* C_01b564d0::sub_01b564d0()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b564e0
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b564e0* sub_01b564e0();
};

// @baa 0x01b564e0
C_01b564e0* C_01b564e0::sub_01b564e0()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b564f0
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b564f0* sub_01b564f0();
};

// @baa 0x01b564f0
C_01b564f0* C_01b564f0::sub_01b564f0()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b56500
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b56500* sub_01b56500();
};

// @baa 0x01b56500
C_01b56500* C_01b56500::sub_01b56500()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

// @baa 0x01b57f80
void __stdcall sub_01b57f80(INT A, INT B)
{
    sub_00402660(A);
}

struct C_01b5b010
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b5b010* sub_01b5b010();
};

// @baa 0x01b5b010
C_01b5b010* C_01b5b010::sub_01b5b010()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

// @baa 0x01b59e70
// 0x01b59e70
void __stdcall sub_01b59e70(unsigned int* OutValue, const unsigned int* InValue)
{
	if (OutValue != 0)
	{
		OutValue[0] = InValue[0];
		OutValue[1] = InValue[1];
	}
}
