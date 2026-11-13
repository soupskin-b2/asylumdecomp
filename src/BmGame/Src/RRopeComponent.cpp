// RRopeComponent.cpp: 29 functions
// Placed here by: neighbours 19, class 7, file 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0163eea0
int URRopeComponent::vf_000(void) { return 1; }

// @baa 0x0163eeb0
IMPLEMENT_CLASS_AT(URRopeEditorRenderingComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRopeComponent.cpp", 21);

// @baa 0x0163efc0
int URRopeEditorRenderingComponent::vf_000(void) { return 1; }

// @baa 0x0163efd0
bool URRopeEditorRenderingComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163f010
FLOAT URRopeComponent::GetMinRopeLength() {
    int param_1 = (int)this;

  return (float10)*(float *)(param_1 + 0x288) + (float10)*(float *)(param_1 + 500);
}

extern int g_026e3060;
extern int g_026e3064;
struct C {
    virtual void v000(); virtual void v001(); virtual void v002(); virtual void v003();
    virtual void v004(); virtual void v005(); virtual void v006(); virtual void v007();
    virtual void v008(); virtual void v009(); virtual void v010(); virtual void v011();
    virtual void v012(); virtual void v013(); virtual void v014(); virtual void v015();
    virtual void v016(); virtual void v017(); virtual void v018(); virtual void v019();
    virtual void v020(); virtual void v021(); virtual void v022(); virtual void v023();
    virtual void v024(); virtual void v025(); virtual void v026(); virtual void v027();
    virtual void v028(); virtual void v029(); virtual void v030(); virtual void v031();
    virtual void v032(); virtual void v033(); virtual void v034(); virtual void v035();
    virtual void v036(); virtual void v037(); virtual void v038(); virtual void v039();
    virtual void v040(); virtual void v041(); virtual void v042(); virtual void v043();
    virtual void v044(); virtual void v045(); virtual void v046(); virtual void v047();
    virtual void v048(); virtual void v049(); virtual void v050(); virtual void v051();
    virtual void v052(); virtual void v053(); virtual void v054(); virtual void v055();
    virtual void v056(); virtual void v057(); virtual void v058(); virtual int  v059(int, int, int);
    virtual void v060(); virtual void v061(); virtual void v062(); virtual void v063();
    virtual void v064(); virtual void v065(); virtual void v066(); virtual void v067();
    virtual void v068(); virtual void v069(); virtual void v070(); virtual void v071();
    virtual void v072(); virtual void v073(); virtual void v074(); virtual void v075();
    virtual void v076(); virtual void v077(); virtual void v078(); virtual void v079();
    virtual void v080(); virtual void v081(); virtual void v082(); virtual void v083();
    virtual void v084(); virtual void v085(); virtual void v086(); virtual void v087();
    virtual void v088(); virtual void v089(); virtual void v090(); virtual void v091();
    virtual void v092(); virtual void v093(); virtual void v094(); virtual void v095();
    virtual void v096(); virtual void v097(); virtual void v098(); virtual void v099();
    virtual void v100(); virtual void v101(); virtual void v102(); virtual void v103();
    virtual void v104(); virtual void v105(); virtual void v106(); virtual void v107();
    virtual void v108(); virtual void v109(); virtual void v110(); virtual void v111();
    virtual void v112(); virtual void v113(); virtual void v114(); virtual void v115();
    virtual void v116(); virtual void v117(); virtual void v118(); virtual void v119();
    virtual void v120(); virtual void v121(); virtual void v122(); virtual void v123();
    virtual void v124(); virtual void v125(); virtual void v126(); virtual void v127();
    virtual void v128(); virtual void v129(); virtual void v130(); virtual void v131();
    virtual void v132(); virtual void v133(); virtual void v134(); virtual void v135();
    virtual void v136(); virtual void v137(); virtual void v138(); virtual void v139();
    virtual void v140(); virtual void v141(); virtual void v142(); virtual void v143();
    virtual void v144(int);

    int sub_005d7d10(int, int, int);
    void sub_0163f020(C*);

    char pad_004[0x14c];        // 0x004
    int f150;                   // 0x150
    char pad_154[0x38];         // 0x154
    int f18c;                   // 0x18c
    int f190;                   // 0x190
    char pad_194[4];            // 0x194
    unsigned int b198_lo : 21;  // 0x198
    unsigned int b198_21 : 1;
    unsigned int b198_hi : 10;
    char f19c;                  // 0x19c
    char pad_19d[2];            // 0x19d
    unsigned char f19f;         // 0x19f
    char pad_1a0[4];            // 0x1a0
    unsigned int b1a4_0 : 1;    // 0x1a4
    unsigned int b1a4_rest : 31;
    char pad_1a8[0x4c];         // 0x1a8
    float f1f4;                 // 0x1f4
    char pad_1f8[4];            // 0x1f8
    float f1fc;                 // 0x1fc
    float f200;                 // 0x200
    unsigned char f204;         // 0x204
    char pad_205[3];            // 0x205
    float f208;                 // 0x208
    int f20c;                   // 0x20c
    float f210;                 // 0x210
    float f214;                 // 0x214
    char pad_218[0x44];         // 0x218
    float f25c;                 // 0x25c
    float f260;                 // 0x260
    int f264;                   // 0x264
    float f268;                 // 0x268
    char pad_26c[8];            // 0x26c
    float f274;                 // 0x274
    float f278;                 // 0x278
    float f27c;                 // 0x27c
    float f280;                 // 0x280
    float f284;                 // 0x284
    char pad_288[8];            // 0x288
    float f290;                 // 0x290
    unsigned char f294;         // 0x294
    char pad_295[3];            // 0x295
    float f298;                 // 0x298
};

// @baa 0x0163f020
void C::sub_0163f020(C* p)
{
    f1f4 = p->f1f4;
    f25c = p->f25c;
    f260 = p->f260;
    f264 = p->f264;
    f268 = p->f268;
    f274 = p->f274;
    f278 = p->f278;
    f27c = p->f27c;
    f280 = p->f280;
    f284 = p->f284;
    f294 = p->f294;
    f290 = p->f290;
    f19c = p->f19c;
    f190 = p->f190;
    b198_21 = p->b198_21;
    f19f = p->f19f;
    f150 = p->f150;
    f1fc = p->f1fc;
    f200 = p->f200;
    f204 = p->f204;
    f298 = p->f298;
    f208 = p->f208;
    f20c = p->f20c;
    b1a4_0 = p->b1a4_0;
    f210 = p->f210;
    f214 = p->f214;
    v144(p->f18c);
    v059(sub_005d7d10(g_026e3060, g_026e3064, 0), 0, 0);
}

struct C_01652270 { C_01652270* sub_01652270(void); };

// @baa 0x01652270
C_01652270* C_01652270::sub_01652270(void) { return this; }

struct C_01652280 { C_01652280* sub_01652280(void); };

// @baa 0x01652280
C_01652280* C_01652280::sub_01652280(void) { return this; }

struct C_01652290 { C_01652290* sub_01652290(void); };

// @baa 0x01652290
C_01652290* C_01652290::sub_01652290(void) { return this; }

struct C_016522a0 { C_016522a0* sub_016522a0(void); };

// @baa 0x016522a0
C_016522a0* C_016522a0::sub_016522a0(void) { return this; }

struct C_016522b0 { C_016522b0* sub_016522b0(void); };

// @baa 0x016522b0
C_016522b0* C_016522b0::sub_016522b0(void) { return this; }

struct C_016522c0 { C_016522c0* sub_016522c0(void); };

// @baa 0x016522c0
C_016522c0* C_016522c0::sub_016522c0(void) { return this; }

struct C_016522d0 { C_016522d0* sub_016522d0(void); };

// @baa 0x016522d0
C_016522d0* C_016522d0::sub_016522d0(void) { return this; }

struct C_016522e0 { C_016522e0* sub_016522e0(void); };

// @baa 0x016522e0
C_016522e0* C_016522e0::sub_016522e0(void) { return this; }

struct C_016522f0 { C_016522f0* sub_016522f0(void); };

// @baa 0x016522f0
C_016522f0* C_016522f0::sub_016522f0(void) { return this; }

struct C_01652410 { void sub_016501f0(int); C_01652410 *sub_01652410(int); };

// @baa 0x01652410
C_01652410 *C_01652410::sub_01652410(int a) { sub_016501f0(a); return this; }

// @baa 0x01654b90
IMPLEMENT_CLASS_AT(URRopeComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRopeComponent.cpp", 20);

// @baa 0x01654c10
int sub_006f7810(void);
extern undefined * g_0235a3b8;
// @baa 0x01654c40
undefined4 * UPrimitiveComponent::sub_01654c40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_0235a3b8);
  return param_1;
}

// @baa 0x01654c60
// @baa 0x01654cc0
int sub_0053dfa0(...);
int sub_01654cf0(void);
// @baa 0x01654d90
undefined4 ULensFlare::sub_01654d90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01654cf0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01655270
// @baa 0x01655290
void sub_01655150();
// @baa 0x016553a0
void sub_016553a0(void) { sub_01655150(); }

// @baa 0x016553b0
// @baa 0x01655470
// @baa 0x016582f0
// @baa 0x01658400
bool URRopeComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
