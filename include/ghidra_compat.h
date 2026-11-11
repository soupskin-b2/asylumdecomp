/* Ghidra's pseudo-C vocabulary, so cleaned decompiler output compiles as C++.
 * Prepended (with baa_prelude.h) to every ue3 source. Typedefs and macros only:
 * nothing here emits code unless a source uses it.
 */
#pragma once

typedef unsigned char       undefined;
typedef unsigned char       undefined1;
typedef unsigned short      undefined2;
typedef unsigned int        undefined3;   /* 3-byte pieces: widened */
typedef unsigned int        undefined4;
typedef unsigned __int64    undefined5;
typedef unsigned __int64    undefined6;
typedef unsigned __int64    undefined7;
typedef unsigned __int64    undefined8;
typedef unsigned char       uchar;
typedef unsigned char       byte;
typedef signed char         sbyte;
typedef unsigned short      ushort;
typedef unsigned short      word;
typedef unsigned int        uint;
typedef unsigned int        dword;
typedef unsigned long       ulong;
typedef unsigned __int64    ulonglong;
typedef unsigned __int64    qword;
typedef __int64             longlong;
typedef long double         float10;      /* x87 extended; MSVC's long double is a double */
typedef int                 int3;
typedef unsigned int        uint3;
typedef void               *pointer;
typedef void               *pointer32;
typedef wchar_t             wchar16;
typedef int __cdecl         code(...);    /* calls through unknown pointers: pseudo-C writes (*(code *)p)(...) */
typedef int __cdecl         code_va(...);

/* Pieces of values. CONCATxy(a, b): a (x bytes) above b (y bytes). SUBxy(v, n): y bytes of v from byte n. */
#define CONCAT11(a, b) ((ushort)(((uint)(uchar)(a) << 8) | (uchar)(b)))
#define CONCAT12(a, b) ((uint)(((uint)(uchar)(a) << 16) | (ushort)(b)))
#define CONCAT13(a, b) ((uint)(((uint)(uchar)(a) << 24) | ((uint)(b) & 0xffffff)))
#define CONCAT21(a, b) ((uint)(((uint)(ushort)(a) << 8) | (uchar)(b)))
#define CONCAT22(a, b) ((uint)(((uint)(ushort)(a) << 16) | (ushort)(b)))
#define CONCAT31(a, b) ((uint)(((uint)(a) << 8) | (uchar)(b)))
#define CONCAT44(a, b) ((ulonglong)(((ulonglong)(uint)(a) << 32) | (uint)(b)))
#define CONCAT14(a, b) ((ulonglong)(((ulonglong)(uchar)(a) << 32) | (uint)(b)))
#define CONCAT24(a, b) ((ulonglong)(((ulonglong)(ushort)(a) << 32) | (uint)(b)))
#define CONCAT34(a, b) ((ulonglong)(((ulonglong)((uint)(a) & 0xffffff) << 32) | (uint)(b)))
#define SUB41(v, n) ((uchar)((uint)(v) >> ((n) * 8)))
#define SUB42(v, n) ((ushort)((uint)(v) >> ((n) * 8)))
#define SUB81(v, n) ((uchar)((ulonglong)(v) >> ((n) * 8)))
#define SUB82(v, n) ((ushort)((ulonglong)(v) >> ((n) * 8)))
#define SUB84(v, n) ((uint)((ulonglong)(v) >> ((n) * 8)))
#define SUB21(v, n) ((uchar)((ushort)(v) >> ((n) * 8)))
#define SUB101(v, n) ((uchar)0)
#define SUB104(v, n) ((uint)(v))
#define ZEXT12(v) ((ushort)(uchar)(v))
#define ZEXT14(v) ((uint)(uchar)(v))
#define ZEXT24(v) ((uint)(ushort)(v))
#define ZEXT48(v) ((ulonglong)(uint)(v))
#define ZEXT18(v) ((ulonglong)(uchar)(v))
#define SEXT12(v) ((short)(signed char)(v))
#define SEXT14(v) ((int)(signed char)(v))
#define SEXT24(v) ((int)(short)(v))
#define SEXT48(v) ((longlong)(int)(v))
#define CARRY1(a, b) ((uchar)((uchar)(a) + (uchar)(b)) < (uchar)(a))
#define CARRY2(a, b) ((ushort)((ushort)(a) + (ushort)(b)) < (ushort)(a))
#define CARRY4(a, b) ((uint)((uint)(a) + (uint)(b)) < (uint)(a))
#define SCARRY4(a, b) ((((int)(a) + (int)(b)) < (int)(a)) != ((int)(b) < 0))
#define SBORROW4(a, b) ((((int)(a) - (int)(b)) < (int)(a)) != ((int)(b) > 0))
#define SBORROW1(a, b) ((((signed char)(a) - (signed char)(b)) < (signed char)(a)) != ((signed char)(b) > 0))
#define NAN(x) ((x) != (x))
#define ABS(x) ((x) < 0 ? -(x) : (x))
/* A piece of a variable, as Ghidra's `v._1_3_`: bytes from n, len bytes. Read-only. */
#define PIECE(v, n, len) ((uint)(((ulonglong)(v) >> ((n) * 8)) & ((len) >= 4 ? 0xffffffffu : ((1u << ((len) * 8)) - 1))))
/* An address as Ghidra's integer-typed value. */
#define ADDR(x) ((uint)(x))
