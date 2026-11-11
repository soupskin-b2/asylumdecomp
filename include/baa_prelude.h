/* Included before every source of the ue3 profile.
 *
 * The basic types every source can rely on without an include (BYTE, INT, TCHAR ...)
 * and a few macros. Engine classes and functions are in ue3/ (Core.h, Classes.h ...);
 * a source includes what it uses, and declares anything the headers don't have
 * itself.
 */
#pragma once

#ifndef __cplusplus
typedef unsigned short wchar_t;
#endif

typedef unsigned char      BYTE;
typedef unsigned short     WORD;
typedef unsigned int       UINT;
typedef unsigned long      DWORD;
typedef signed char        SBYTE;
typedef signed short       SWORD;
typedef signed int         INT;
typedef unsigned __int64   QWORD;
typedef signed __int64     SQWORD;
typedef float              FLOAT;
typedef double             DOUBLE;
typedef int                UBOOL;
typedef wchar_t            TCHAR;
typedef unsigned long      BITFIELD;

#ifndef NULL
#define NULL 0
#endif
