// UnrealEd_1b50000.cpp (part 4 of 6): 1 function
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
