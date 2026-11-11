// FCollada_1c10000.cpp (part 1 of 4): 44 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01c0d350(...);
// @baa 0x01c10610
void sub_01c10610(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  sub_01c0d350(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}

int sub_01c10640(...);
// @baa 0x01c10730
void sub_01c10730(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_01c10640(param_1,param_2,param_3,0);
  return;
}

int sub_01bfaef0(...);
int sub_01bfe2c0(void);
int sub_01c00570(void);
int sub_01c02090(...);
int sub_01c0ec20(...);
int sub_01c1be00(...);
int sub_01c24b00(...);
// @baa 0x01c10820
int sub_01c10820(undefined4 param_1)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  sub_01c00570();
  iVar2 = sub_01c02090(param_1,0);
  if (iVar2 == 0) {
    return 0;
  }
  sub_01bfe2c0();
  if (*(int *)(iVar2 + 0xb4) == 0) {
    iVar4 = sub_01bfaef0(param_1);
  }
  if ((*(int *)(iVar2 + 0xb4) == 0) && (iVar4 != 0)) {
    uVar3 = sub_01c1be00(iVar4);
    *(undefined4 *)(iVar2 + 0xb4) = uVar3;
  }
  *(undefined4 *)(iVar2 + 0x120) = 1;
  sub_01c0ec20(iVar2);
  iVar4 = *(int *)(iVar2 + 8);
  if (iVar4 != 0) {
    iVar1 = *(int *)(**(int **)(iVar2 + 0x24) + 0x18);
    if (0 < iVar1) {
      *(undefined4 *)(iVar4 + 0x24) = 9;
      sub_01c24b00(iVar2);
      return iVar4;
    }
    *(int *)(iVar4 + 0x24) = iVar1;
  }
  sub_01c24b00(iVar2);
  return iVar4;
}

int sub_01c10970(...);
// @baa 0x01c10a10
void sub_01c10a10(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  sub_01c10970(param_1,param_2,param_3,param_4,0);
  return;
}

int sub_01c004b0(...);
// @baa 0x01c10aa0
undefined4 sub_01c10aa0(undefined4 param_1, undefined4 param_2)
{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = sub_01c004b0(param_1,param_2);
  if (iVar2 == 0) {
    return 0;
  }
  sub_01bfe2c0();
  *(undefined4 *)(iVar2 + 0x120) = 1;
  sub_01c0ec20(iVar2);
  uVar1 = *(undefined4 *)(iVar2 + 8);
  sub_01c24b00(iVar2);
  return uVar1;
}

int sub_01c00a40(...);
int sub_01c177d0(...);
int sub_01c233e0(...);
int sub_01c24720(...);
// @baa 0x01c10d70
undefined4 sub_01c10d70(undefined4 param_1, int param_2, undefined4 param_3)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = sub_01c02090(param_1,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  sub_01c00a40(iVar1,param_3);
  if (param_2 != 0) {
    iVar2 = sub_01c233e0(param_2);
    if (iVar2 != 0) {
      sub_01c24720(iVar1,iVar2);
    }
  }
  sub_01c0ec20(iVar1);
  if ((*(int *)(iVar1 + 0xc) == 0) && (*(int *)(iVar1 + 0x120) == 0)) {
    uVar3 = 0;
    if (*(int *)(iVar1 + 8) != 0) {
      sub_01c177d0(*(int *)(iVar1 + 8));
    }
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + 8);
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  sub_01c24b00(iVar1);
  return uVar3;
}

// @baa 0x01c11580
char * sub_01c11580(undefined4 param_1)
{
  switch(param_1) {
  case 0x200:
    return "NEVER";
  case 0x201:
    return "LESS";
  case 0x202:
    return "EQUAL";
  case 0x203:
    return "LEQUAL";
  case 0x204:
    return "GREATER";
  case 0x205:
    return "NOTEQUAL";
  case 0x206:
    return "GEQUAL";
  case 0x207:
    return "ALWAYS";
  default:
    return "UNKNOWN";
  }
}

// @baa 0x01c118a0
char * sub_01c118a0(undefined4 param_1)
{
  switch(param_1) {
  case 0x1500:
    return "CLEAR";
  case 0x1501:
    return "AND";
  case 0x1502:
    return "AND_REVERSE";
  case 0x1503:
    return "COPY";
  case 0x1504:
    return "AND_INVERTED";
  case 0x1505:
    return "NOOP";
  case 0x1506:
    return "XOR";
  case 0x1507:
    return "OR";
  case 0x1508:
    return "NOR";
  case 0x1509:
    return "EQUIV";
  case 0x150a:
    return "INVERT";
  case 0x150b:
    return "OR_REVERSE";
  case 0x150c:
    return "COPY_INVERTED";
  default:
    return "UNKNOWN";
  case 0x150e:
    return "NAND";
  case 0x150f:
    return "SET";
  }
}

// @baa 0x01c119f0
char * sub_01c119f0(undefined4 param_1)
{
  switch(param_1) {
  case 0:
    return "alpha_func";
  case 1:
    return "blend_func";
  case 2:
    return "blend_func_separate";
  case 3:
    return "blend_equation";
  case 4:
    return "blend_equation_separate";
  case 5:
    return "color_material";
  case 6:
    return "cull_face";
  case 7:
    return "depth_func";
  case 8:
    return "fog_mode";
  case 9:
    return "fog_coord_src";
  case 10:
    return "front_face";
  case 0xb:
    return "light_model_color_control";
  case 0xc:
    return "logic_op";
  case 0xd:
    return "polygon_mode";
  case 0xe:
    return "shade_model";
  case 0xf:
    return "stencil_func";
  case 0x10:
    return "stencil_op";
  case 0x11:
    return "stencil_func_separate";
  case 0x12:
    return "stencil_op_separate";
  case 0x13:
    return "stencil_mask_separate";
  case 0x14:
    return "light_enable";
  case 0x15:
    return "light_ambient";
  case 0x16:
    return "light_diffuse";
  case 0x17:
    return "light_specular";
  case 0x18:
    return "light_position";
  case 0x19:
    return "light_constant_attenuation";
  case 0x1a:
    return "light_linear_attenuation";
  case 0x1b:
    return "light_quadratic_attenuation";
  case 0x1c:
    return "light_spot_cutoff";
  case 0x1d:
    return "light_spot_direction";
  case 0x1e:
    return "light_spot_exponent";
  case 0x1f:
    return "texture1D";
  case 0x20:
    return "texture2D";
  case 0x21:
    return "texture3D";
  case 0x22:
    return "textureCUBE";
  case 0x23:
    return "textureRECT";
  case 0x24:
    return "textureDEPTH";
  case 0x25:
    return "texture1D_enable";
  case 0x26:
    return "texture2D_enable";
  case 0x27:
    return "texture3D_enable";
  case 0x28:
    return "textureCUBE_enable";
  case 0x29:
    return "textureRECT_enable";
  case 0x2a:
    return "textureDEPTH_enable";
  case 0x2b:
    return "texture_env_color";
  case 0x2c:
    return "texture_env_mode";
  case 0x2d:
    return "clip_plane";
  case 0x2e:
    return "clip_plane_enable";
  case 0x2f:
    return "blend_color";
  case 0x30:
    return "clear_color";
  case 0x31:
    return "clear_stencil";
  case 0x32:
    return "clear_depth";
  case 0x33:
    return "color_mask";
  case 0x34:
    return "depth_bounds";
  case 0x35:
    return "depth_mask";
  case 0x36:
    return "depth_range";
  case 0x37:
    return "fog_density";
  case 0x38:
    return "fog_start";
  case 0x39:
    return "fog_end";
  case 0x3a:
    return "fog_color";
  case 0x3b:
    return "light_model_ambient";
  case 0x3c:
    return "lighting_enable";
  case 0x3d:
    return "line_stipple";
  case 0x3e:
    return "line_width";
  case 0x3f:
    return "material_ambient";
  case 0x40:
    return "material_diffuse";
  case 0x41:
    return "material_emission";
  case 0x42:
    return "material_shininess";
  case 0x43:
    return "material_specular";
  case 0x44:
    return "model_view_matrix";
  case 0x45:
    return "point_distance_attenuation";
  case 0x46:
    return "point_fade_threshold_size";
  case 0x47:
    return "point_size";
  case 0x48:
    return "point_size_min";
  case 0x49:
    return "point_size_max";
  case 0x4a:
    return "polygon_offset";
  case 0x4b:
    return "projection_matrix";
  case 0x4c:
    return "scissor";
  case 0x4d:
    return "stencil_mask";
  case 0x4e:
    return "alpha_test_enable";
  case 0x4f:
    return "auto_normal_enable";
  case 0x50:
    return "blend_enable";
  case 0x51:
    return "color_logic_op_enable";
  case 0x52:
    return "color_material_enable";
  case 0x53:
    return "cull_face_enable";
  case 0x54:
    return "depth_bounds_enable";
  case 0x55:
    return "depth_clamp_enable";
  case 0x56:
    return "depth_test_enable";
  case 0x57:
    return "dither_enable";
  case 0x58:
    return "fog_enable";
  case 0x59:
    return "light_model_local_viewer_enable";
  case 0x5a:
    return "light_model_two_side_enable";
  case 0x5b:
    return "line_smooth_enable";
  case 0x5c:
    return "line_stipple_enable";
  case 0x5d:
    return "logic_op_enable";
  case 0x5e:
    return "multisample_enable";
  case 0x5f:
    return "normalize_enable";
  case 0x60:
    return "point_smooth_enable";
  case 0x61:
    return "polygon_offset_fill_enable";
  case 0x62:
    return "polygon_offset_line_enable";
  case 99:
    return "polygon_offset_point_enable";
  case 100:
    return "polygon_smooth_enable";
  case 0x65:
    return "polygon_stipple_enable";
  case 0x66:
    return "rescale_normal_enable";
  case 0x67:
    return "sample_alpha_to_coverage_enable";
  case 0x68:
    return "sample_alpha_to_one_enable";
  case 0x69:
    return "sample_coverage_enable";
  case 0x6a:
    return "scissor_test_enable";
  case 0x6b:
    return "stencil_test_enable";
  default:
    return "unknown";
  }
}

extern undefined4 g_026143d0;
// @baa 0x01c14bb0
void sub_01c14bb0(undefined4 param_1)
{
  g_026143d0 = param_1;
  return;
}

// @baa 0x01c14bc0
undefined4 sub_01c14bc0(void)
{
  return g_026143d0;
}

// @baa 0x01c14bd0
void sub_01c14bd0(int param_1, undefined4 param_2)
{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x24) = param_2;
  }
  return;
}

// @baa 0x01c14d30
int sub_01c14d30(int param_1)
{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  while( true ) {
    if (iVar1 == 0) {
      return *(int *)(param_1 + 0x2c);
    }
    if (*(int *)(iVar1 + 4) == 0xe) break;
    iVar1 = *(int *)(iVar1 + 0x18);
  }
  return iVar1;
}

int sub_01c18720(...);
// @baa 0x01c15200
void sub_01c15200(int param_1)
{
  int iVar1;
  
  while (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    sub_01c18720(param_1);
    param_1 = iVar1;
  }
  return;
}

int sub_01c15230(...);
// @baa 0x01c152e0
void sub_01c152e0(undefined4 param_1, undefined4 param_2)
{
  sub_01c15230(0,param_1,param_2);
  return;
}

int sub_01c15460(...);
// @baa 0x01c15650
void sub_01c15650(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  
  iVar1 = sub_01c15460(param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return;
}

int sub_01c15670(...);
// @baa 0x01c156f0
void sub_01c156f0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  int iVar1;
  
  iVar1 = sub_01c15670(param_2,param_3);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return;
}

int sub_01c15710(...);
// @baa 0x01c15810
void sub_01c15810(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  
  iVar1 = sub_01c15710(param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x20) = param_1;
  }
  return;
}

int sub_01c17940(...);
// @baa 0x01c15830
void sub_01c15830(int param_1, int param_2)
{
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x18)) {
    if (*(int *)(param_1 + 0x20) != param_2) {
      sub_01c17940(param_1,param_2);
    }
  }
  return;
}

// @baa 0x01c15860
undefined4 sub_01c15860(int param_1)
{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x10);
}

// @baa 0x01c159b0
void sub_01c159b0(int param_1)
{
  int iVar1;
  
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 4) == 0xe) && (iVar1 = *(int *)(param_1 + 0x20), iVar1 != 0)) {
      if (*(int *)(iVar1 + 0x2c) == param_1) {
        *(undefined4 *)(iVar1 + 0x2c) = 0;
      }
      if (*(int *)(iVar1 + 0x30) == param_1) {
        *(undefined4 *)(iVar1 + 0x30) = 0;
      }
    }
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 4) == 2) {
        if (*(int *)(iVar1 + 0x2c) == param_1) {
          *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x18);
        }
      }
      else {
        if (*(int *)(iVar1 + 0xc) == param_1) {
          *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
        }
        if (*(int *)(iVar1 + 0x10) == param_1) {
          *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
        }
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18) = *(undefined4 *)(param_1 + 0x18);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

int sub_01c1bf00(...);
int sub_01c27ad0(...);
extern undefined4 g_02613558;
// @baa 0x01c166e0
int sub_01c166e0(int param_1, int param_2)
{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(param_1 + 0x2c);
    while( true ) {
      if (iVar1 == 0) {
        if (((((g_02613558 == 0) || (iVar1 = *(int *)(param_1 + 0x20), iVar1 == 0)) ||
             (*(int *)(iVar1 + 0x2c) == 0)) ||
            ((iVar2 = sub_01c27ad0(*(int *)(iVar1 + 0x2c),*(undefined4 *)(param_1 + 8),param_2),
             iVar2 == 0 &&
             ((*(int *)(iVar1 + 0x30) == 0 ||
              (iVar2 = sub_01c27ad0(*(int *)(iVar1 + 0x30),*(undefined4 *)(param_1 + 8),param_2),
              iVar2 == 0)))))) || (*(int *)(iVar2 + 0x30) == 0)) {
          iVar2 = 0;
        }
        return iVar2;
      }
      iVar2 = sub_01c1bf00(*(undefined4 *)(iVar1 + 8),param_2);
      if (iVar2 != 0) break;
      iVar1 = *(int *)(iVar1 + 0x18);
    }
    return iVar1;
  }
  return 0;
}

int sub_01c14fe0(...);
extern undefined4 g_027d4cc5;
// @baa 0x01c16930
int sub_01c16930(int param_1, int param_2)
{
  int iVar1;
  int iVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  for (iVar2 = *(int *)(param_1 + 0x2c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    iVar1 = sub_01c1bf00(*(undefined4 *)(iVar2 + 8),param_2);
    if (iVar1 != 0) {
      iVar2 = sub_01c14fe0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(iVar2 + 0xc),1);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = sub_01c1be00(&g_027d4cc5);
      return iVar2;
    }
  }
  if (((((g_02613558 != 0) && (iVar2 = *(int *)(param_1 + 0x20), iVar2 != 0)) &&
       (*(int *)(iVar2 + 0x2c) != 0)) &&
      ((iVar1 = sub_01c27ad0(*(int *)(iVar2 + 0x2c),*(undefined4 *)(param_1 + 8),param_2),
       iVar1 != 0 ||
       ((*(int *)(iVar2 + 0x30) != 0 &&
        (iVar1 = sub_01c27ad0(*(int *)(iVar2 + 0x30),*(undefined4 *)(param_1 + 8),param_2),
        iVar1 != 0)))))) && (*(int *)(iVar1 + 0x30) != 0)) {
    iVar2 = sub_01c1be00(*(int *)(iVar1 + 0x30));
    return iVar2;
  }
  return 0;
}

extern undefined4 g_027d4cc6;
// @baa 0x01c16a00
int sub_01c16a00(int param_1, int param_2)
{
  int iVar1;
  int iVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  for (iVar2 = *(int *)(param_1 + 0x2c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x18)) {
    if ((*(int *)(iVar2 + 0x24) == 0) &&
       (iVar1 = sub_01c1bf00(*(undefined4 *)(iVar2 + 8),param_2), iVar1 != 0)) {
      iVar2 = sub_01c14fe0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(iVar2 + 0xc),1);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = sub_01c1be00(&g_027d4cc6);
      return iVar2;
    }
  }
  if (((((g_02613558 != 0) && (iVar2 = *(int *)(param_1 + 0x20), iVar2 != 0)) &&
       (*(int *)(iVar2 + 0x2c) != 0)) &&
      ((iVar1 = sub_01c27ad0(*(int *)(iVar2 + 0x2c),*(undefined4 *)(param_1 + 8),param_2),
       iVar1 != 0 ||
       ((*(int *)(iVar2 + 0x30) != 0 &&
        (iVar1 = sub_01c27ad0(*(int *)(iVar2 + 0x30),*(undefined4 *)(param_1 + 8),param_2),
        iVar1 != 0)))))) && (*(int *)(iVar1 + 0x30) != 0)) {
    iVar2 = sub_01c1be00(*(int *)(iVar1 + 0x30));
    return iVar2;
  }
  return 0;
}

// @baa 0x01c16e60
void sub_01c16e60(int param_1, undefined4 param_2)
{
  if ((param_1 != 0) && (*(int *)(param_1 + 0xc) != 2)) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
  }
  return;
}

typedef uint size_t;

extern "C" __declspec(dllimport)int memmove(...);
// @baa 0x01c16ef0
uint sub_01c16ef0(int*param_1,uint param_2)
{
size_t _Size;

if(param_1==(int*)0x0){
return 0xffffffff;
}
if(param_2==0){
return 0;
}
if(param_2>(uint)param_1[1]){
return 0xffffffff;
}
_Size=param_1[1]-param_2;
param_1[1]=_Size;
if(param_1[3]==2){
*param_1=*param_1+param_2;
return param_2;
}
memmove((void*)*param_1,(void*)(*param_1+param_2),_Size);
*(undefined1*)(param_1[1]+*param_1)=0;
return param_2;
}

// @baa 0x01c17000
undefined4 sub_01c17000(undefined4 * param_1)
{
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *param_1;
}

// @baa 0x01c17010
undefined4 sub_01c17010(int param_1)
{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01c17500
undefined4 sub_01c17500(int param_1)
{
  if (param_1 == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x24);
}

// @baa 0x01c17510
void sub_01c17510(int param_1, int param_2)
{
  if (param_1 != 0) {
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      return;
    }
    if (9 < param_2) {
      *(undefined4 *)(param_1 + 0x24) = 9;
      return;
    }
    *(int *)(param_1 + 0x24) = param_2;
  }
  return;
}

extern undefined4 g_027d4cc0;
// @baa 0x01c17540
undefined4 sub_01c17540(void)
{
  return g_027d4cc0;
}

int sub_01c16ad0(...);
extern undefined4 g_0261384c;
// @baa 0x01c17c10
int sub_01c17c10(int param_1)
{
  int iVar1;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    iVar1 = sub_01c16ad0(param_1,&g_0261384c,"http://www.w3.org/XML/1998/namespace");
    if (iVar1 != 0) break;
    param_1 = *(int *)(param_1 + 0x14);
  }
  return iVar1;
}

// @baa 0x01c187e0
undefined4 sub_01c187e0(int param_1)
{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x14), iVar1 != 0)) {
    iVar2 = *(int *)(iVar1 + 0x2c);
    if (*(int *)(iVar1 + 0x2c) == param_1) {
      *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x18);
      sub_01c18720(param_1);
      return 0;
    }
    while (iVar1 = iVar2, iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x18);
      if (*(int *)(iVar1 + 0x18) == param_1) {
        iVar2 = *(int *)(param_1 + 0x18);
        *(int *)(iVar1 + 0x18) = iVar2;
        if (iVar2 != 0) {
          *(int *)(iVar2 + 0x1c) = iVar1;
        }
        sub_01c18720(param_1);
        return 0;
      }
    }
  }
  return 0xffffffff;
}

int sub_01c18aa0(...);
int sub_01c1c150(...);
// @baa 0x01c18b80
void sub_01c18b80(int param_1, int param_2)
{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = sub_01c1c150(param_2);
    sub_01c18aa0(param_1,param_2,uVar1);
  }
  return;
}

int sub_01c15300(...);
int sub_01c15380(...);
int sub_01c190f0(...);
int sub_01c298f0(...);
// @baa 0x01c19740
int sub_01c19740(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x50) == 0)) {
    iVar3 = sub_01c15300(param_2,param_3);
  }
  else {
    uVar2 = sub_01c298f0(*(int *)(param_1 + 0x50),param_3,0xffffffff);
    iVar3 = sub_01c15380(param_2,uVar2);
  }
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x20) = param_1, param_4 != 0)) {
    iVar4 = sub_01c190f0(param_1,param_4);
    *(int *)(iVar3 + 0xc) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)(iVar3 + 0x10) = 0;
      return iVar3;
    }
    iVar1 = *(int *)(iVar4 + 0x18);
    while (iVar1 != 0) {
      *(int *)(iVar4 + 0x14) = iVar3;
      iVar4 = *(int *)(iVar4 + 0x18);
      iVar1 = *(int *)(iVar4 + 0x18);
    }
    *(int *)(iVar4 + 0x14) = iVar3;
    *(int *)(iVar3 + 0x10) = iVar4;
  }
  return iVar3;
}

int sub_01c19c50(...);
// @baa 0x01c19f20
void sub_01c19f20(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_01c19c50(param_1,param_2,0,param_3);
  return;
}

extern char g_02421c20[];
struct C { void sub_01c1aa00(void); };

// @baa 0x01c1aa00
void C::sub_01c1aa00(void) { *(int*)((char*)this + 0) = (int)g_02421c20; }

struct C_01c1aa30 {
    undefined4 * sub_01c1aa30(byte);
};

int sub_00402660(...);
// @baa 0x01c1aa30
undefined4 * C_01c1aa30::sub_01c1aa30(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02421c20));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01c1c0d0
char * sub_01c1c0d0(char * param_1, char param_2)
{
  char *pcVar1;
  char cVar2;
  
  if (param_1 != (char *)0x0) {
    cVar2 = *param_1;
    while (cVar2 != '\0') {
      if (cVar2 == param_2) {
        return param_1;
      }
      pcVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar1;
    }
  }
  return (char *)0x0;
}

typedef char * va_list;

extern "C" __declspec(dllimport) int _vsnprintf(...);
// @baa 0x01c1c380
int sub_01c1c380(char * param_1, size_t param_2, char * param_3, va_list param_4)
{
  int iVar1;
  
  if ((param_1 != (char *)0x0) && (param_3 != (char *)0x0)) {
    iVar1 = _vsnprintf(param_1,param_2,param_3,param_4);
    param_1[param_2 - 1] = '\0';
    return iVar1;
  }
  return -1;
}

int sub_01c1c9d0(void);
extern undefined4 g_026143f0;
// @baa 0x01c1ca00
void sub_01c1ca00(undefined4 * param_1)
{
  if (param_1 == (undefined4 *)0x0) {
    g_026143f0 = (undefined4)(sub_01c1c9d0);
    return;
  }
  g_026143f0 = (undefined4)((undefined *)*param_1);
  return;
}

extern undefined4 g_027d4d34;
// @baa 0x01c1ca20
void sub_01c1ca20(undefined4 param_1, undefined * param_2)
{
  g_027d4d34 = param_1;
  g_026143f0 = (undefined4)(param_2);
  if (param_2 == (undefined *)0x0) {
    g_026143f0 = (undefined4)(sub_01c1c9d0);
  }
  return;
}

extern undefined4 g_027d4d2c;
// @baa 0x01c1ca50
void sub_01c1ca50(undefined4 param_1, undefined4 param_2)
{
  g_027d4d34 = param_1;
  g_027d4d2c = param_2;
  return;
}

// @baa 0x01c1ca70
void sub_01c1ca70(int param_1)
{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      (*(code *)g_026143f0)
                (g_027d4d34,"%s:%d: ",*(int *)(param_1 + 4),
                 *(undefined4 *)(param_1 + 0x1c));
      return;
    }
    (*(code *)g_026143f0)
              (g_027d4d34,"Entity: line %d: ",*(undefined4 *)(param_1 + 0x1c));
  }
  return;
}
