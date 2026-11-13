// FCollada_1c10000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// FCollada 3.05B (Feeling Software; MIT license), FCollada/FUtils/FUDaeEnum.cpp, unchanged.
// The function at 0x01c12c00 is ?FromString@FUDaePassState@@YA?AW4State@1@PBD@Z
// FCollada has no kit headers, so the headers this file includes are pasted in place of their #include
// lines. To keep this file small the pasted headers have their comments removed; nothing else in them
// is changed, and the #line directives keep __FILE__ and __LINE__ as they were in the original build
// (FUAssert prints them). The source file itself starts at the line `#line 1 ".\...cpp"`.
#define WIN32
#define UNICODE
#include "ue3/Win32.h" // stands in for <windows.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
extern "C" __declspec(dllimport) char* __cdecl _getcwd(char* buffer, int maxlen); // <direct.h>
typedef struct _xmlNode xmlNode; // stands in for <libxml/tree.h>
#line 1 ".\\FUtils\\FUDaeEnum.cpp"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/
/*
	Based on the FS Import classes:
	Copyright (C) 2005-2006 Feeling Software Inc
	Copyright (C) 2005-2006 Autodesk Media Entertainment
	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

// #include "StdAfx.h"   (FCollada 3.05B, pasted in place)
#line 9 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\futils\\StdAfx.h"
#ifndef _STD_AFX_H_
#define _STD_AFX_H_

// #include "FUtils/FUtils.h"   (FCollada 3.05B, pasted in place)
#line 25 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
#ifndef _F_UTILS_H_
#define _F_UTILS_H_
#line 29
#ifdef _WIN32
#ifndef _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_DEPRECATE 1
#endif
#pragma warning(disable:4702)
#endif

#define NOMINMAX
#ifdef max
#undef max
#endif
#ifdef min
#undef min
#endif

#ifndef FCOLLADA_NOMINMAX

template<class T>
inline T& max(T& x, T& y) { return (x > y) ? x : y; }
template<class T>
inline const T& max(const T& x, const T& y) { return (x > y) ? x : y; }
#line 52
template <class T>
inline T& min(T& x, T& y) { return (x < y) ? x : y; }
template <class T>
inline const T& min(const T& x,const T& y) { return (x < y) ? x : y; }
#endif

#ifdef _WIN32
#pragma warning(default:4702)
#endif
#line 63
#define UNUSED(a)
#ifdef _DEBUG
#define UNUSED_NDEBUG(a) a
#else
#define UNUSED_NDEBUG(a)
#endif
#line 71
#ifndef _FU_PLATFORMS_H_
// #include "FUtils/Platforms.h"   (FCollada 3.05B, pasted in place)
#line 15 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/Platforms.h"
#ifndef _FU_PLATFORMS_H_
#define _FU_PLATFORMS_H_

#ifdef FCOLLADA_DLL
#ifdef WIN32
#line 22
#pragma warning(disable:4251)
#ifdef FCOLLADA_INTERNAL
#define FCOLLADA_EXPORT __declspec(dllexport)
#define FCOLLADA_LOCAL
#else
#define FCOLLADA_EXPORT __declspec(dllimport)
#define FCOLLADA_LOCAL
#endif
#elif defined(__APPLE__) || defined(LINUX)
#define FCOLLADA_EXPORT __attribute__((visibility("default")))
#define FCOLLADA_LOCAL __attribute__((visibility("hidden")))
#endif
#else
#define FCOLLADA_EXPORT
#define FCOLLADA_LOCAL
#endif

#ifdef __PPU__
#define UNICODE
#endif
#line 44
#ifdef UNICODE
#ifndef _UNICODE
#define _UNICODE
#endif
#else
#ifdef _UNICODE
#define UNICODE
#endif
#endif

#ifndef _INC_MATH
#include <math.h>
#endif

#ifdef WIN32

#pragma warning(disable:4702)
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0501
#endif

// #include <windows.h>
#include <stdio.h>
#include <wchar.h>
#else
#ifdef __APPLE__
// #include <ctype.h>   (not taken)
// #include <wctype.h>   (not taken)
// #include <unistd.h>   (not taken)
// #include <string.h>   (not taken)
// #include <wchar.h>   (not taken)
// #include <stdint.h>   (not taken)
#else
#if defined(LINUX) || defined(__PPU__)
// #include <ctype.h>   (not taken)
// #include <wctype.h>   (not taken)
// #include <unistd.h>   (not taken)
// #include <string.h>   (not taken)
// #include <wchar.h>   (not taken)
// #include <stdarg.h>   (not taken)
// #include <malloc.h>   (not taken)
// #include <stdlib.h>   (not taken)
// #include <stdio.h>   (not taken)
// #include <stdint.h>   (not taken)
#else
#error "Unsupported platform."
#endif
#endif

#endif
#line 96
#ifdef WIN32

typedef signed char int8;
typedef short int16;
typedef long int32;
typedef __int64 int64;
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;
typedef unsigned __int64 uint64;

#else

typedef int8_t int8;
typedef int16_t int16;
typedef int32_t int32;
typedef int64_t int64;
typedef uint8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;
typedef uint8_t byte;

#ifndef _CLIMITS_
// #include <climits>   (not taken)
#endif

#endif
#line 126
#if defined(__APPLE__) || defined (LINUX)
inline char* strlower(char* str) { char* it = str; while (*it != 0) { *it = tolower(*it); ++it; } return str; }
inline wchar_t* wcslwr(wchar_t* str) { wchar_t* it = str; while (*it != 0) { *it = towlower(*it); ++it; } return str; }
inline int wcsicmp(const wchar_t* s1, const wchar_t* s2) { wchar_t c1 = *s1, c2 = *s2; while (c1 != 0 && c2 != 0) { if (c1 >= 'a' && c1 <= 'z') c1 -= 'a' + 'A'; if (c2 >= 'a' && c2 <= 'z') c2 -= 'a' + 'A'; if (c2 < c1) return -1; else if (c2 > c1) return 1; c1 = *(++s1); c2 = *(++s2); } return 0; }
#ifndef isinf
#define isinf __isinff
#endif
#define _stricmp strcasecmp
#define _getcwd getcwd
#define _chdir chdir

#elif defined(__PPU__)
#define glClearDepth glClearDepthf

#endif
#line 143
#ifdef WIN32

#define vsnprintf _vsnprintf
#define snprintf _snprintf
#define vsnwprintf _vsnwprintf
#if _MSC_VER >= 1400
	#define snwprintf _snwprintf_s
#else
	#define snwprintf _snwprintf
#endif

#define strlower _strlwr

#else

#define vsnwprintf vswprintf
#define snwprintf swprintf

#endif
#line 166
#ifdef UNICODE

	#define fchar wchar_t
	#define FC(a) L ## a

	#define fstrlen wcslen
	#define fstrcmp wcscmp
	#define fstrncpy wcsncpy
	#define fstrrchr wcsrchr
	#define fstrchr wcschr
	#define fsnprintf snwprintf
	#define fvsnprintf vsnwprintf
	#define fstrup _wcsupr

	#ifdef __PPU__
		#define fstricmp wcscmp
	#elif defined(WIN32)
		#define fstricmp _wcsicmp
	#else
		#define fstricmp wcsicmp
	#endif

	#ifdef WIN32
		#define fstrlower _wcslwr
	#else
		#define fstrlower wcslwr
	#endif

	#ifdef WIN32
		#define fchdir _tchdir
	#else
		#define fchdir(a) chdir(FUStringConversion::ToString(a).c_str())
	#endif

#else

	typedef char fchar;
	#define FC(a) a

	#define fstrlen strlen
	#define fstrcmp strcmp
	#define fstricmp _stricmp
	#define fstrncpy strncpy
	#define fstrrchr strrchr
	#define fstrchr strchr
	#define fstrlower strlower
	#define fsnprintf snprintf
	#define fvsnprintf vsnprintf
	#define fstrup _strupr

	#define fchdir chdir

#endif

#ifndef WIN32
#define MAX_PATH 1024
#endif

#ifdef WIN32
#line 230
#define ALIGN_STRUCT(byteCount)
#else
#define ALIGN_STRUCT(byteCount)
#endif

#if defined(WIN32) && _MSC_VER >= 1400
#define DEPRECATED(versionNumber, alternative) __declspec(deprecated("[" #versionNumber "] This function is now deprecated. Please use '" #alternative "' instead."))
#else
#line 242
#define DEPRECATED(versionNumber, alternative)
#endif

#endif
#line 73 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
#endif
#ifndef _FU_ASSERT_H_
// #include "FUtils/FUAssert.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUAssert.h"
#ifndef _FU_ASSERT_H_
#define _FU_ASSERT_H_

#ifndef _FU_FUNCTOR_H_
// #include "FUtils/FUFunctor.h"   (FCollada 3.05B, pasted in place)
#line 12 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUFunctor.h"
#ifndef _FU_FUNCTOR_H_
#define _FU_FUNCTOR_H_
#line 19
template<class ReturnType>
class IFunctor0
{
public:

	virtual ~IFunctor0() {}
#line 28
	virtual ReturnType operator()() const = 0;
#line 34
	virtual bool Compare(void* object, void* function) const = 0;
#line 37
	virtual IFunctor0<ReturnType>* Copy() const = 0;
};
#line 44
template<class Class, class ReturnType>
class FUFunctor0 : public IFunctor0<ReturnType>
{
private:
	Class* m_pObject;
	ReturnType (Class::*m_pFunction) ();

public:
#line 55
	FUFunctor0(Class* object, ReturnType (Class::*function) ()) { m_pObject = object; m_pFunction = function; }
#line 58
	virtual ~FUFunctor0() {}
#line 62
	virtual ReturnType operator()() const
	{ return ((*m_pObject).*m_pFunction)(); }
#line 69
	virtual bool Compare(void* object, void* function) const
	{ return object == m_pObject && (size_t)function == *(size_t*)&m_pFunction; }
#line 73
	virtual IFunctor0<ReturnType>* Copy() const
	{ return new FUFunctor0<Class, ReturnType>(m_pObject, m_pFunction); }
};
#line 80
template <class ClassName, class ReturnType>
inline FUFunctor0<ClassName, ReturnType>* NewFUFunctor0(ClassName* o, ReturnType (ClassName::*function) ())
{
	return new FUFunctor0<ClassName, ReturnType>(o, function);
}
#line 90
template<class ReturnType>
class FUStaticFunctor0 : public IFunctor0<ReturnType>
{
private:
	ReturnType (*m_pFunction) ();

public:
#line 99
	FUStaticFunctor0(ReturnType (*function) ()) { m_pFunction = function; }
#line 102
	virtual ~FUStaticFunctor0() {}
#line 106
	virtual ReturnType operator()() const
	{ return (*m_pFunction)(); }
#line 113
	virtual bool Compare(void* UNUSED(object), void* function) const
	{ return (size_t)function == *(size_t*)(size_t)&m_pFunction; }
#line 117
	virtual IFunctor0<ReturnType>* Copy() const
	{ return new FUStaticFunctor0<ReturnType>(m_pFunction); }
};
#line 125
template<class Arg1, class ReturnType>
class IFunctor1
{
public:

	virtual ~IFunctor1() {}
#line 135
	virtual ReturnType operator()(Arg1 argument1) const = 0;
#line 141
	virtual bool Compare(void* object, void* function) const = 0;
#line 144
	virtual IFunctor1<Arg1, ReturnType>* Copy() const = 0;
};
#line 151
template<class Class, class Arg1, class ReturnType>
class FUFunctor1 : public IFunctor1<Arg1, ReturnType>
{
private:
	Class* m_pObject;
	ReturnType (Class::*m_pFunction) (Arg1);

public:
#line 162
	FUFunctor1(Class* object, ReturnType (Class::*function) (Arg1)) { m_pObject = object; m_pFunction = function; }
#line 165
	virtual ~FUFunctor1() {}
#line 170
	virtual ReturnType operator()(Arg1 argument1) const
	{ return ((*m_pObject).*m_pFunction)(argument1); }
#line 177
	virtual bool Compare(void* object, void* function) const
	{ return object == m_pObject && (size_t)function == *(size_t*)(size_t)&m_pFunction; }
#line 181
	virtual IFunctor1<Arg1, ReturnType>* Copy() const
	{ return new FUFunctor1<Class, Arg1, ReturnType>(m_pObject, m_pFunction); }
};
#line 188
template <class ClassName, class Argument1, class ReturnType>
inline FUFunctor1<ClassName, Argument1, ReturnType>* NewFUFunctor1(ClassName* o, ReturnType (ClassName::*function) (Argument1))
{
	return new FUFunctor1<ClassName, Argument1, ReturnType>(o, function);
}
#line 198
template<class Arg1, class ReturnType>
class FUStaticFunctor1 : public IFunctor1<Arg1, ReturnType>
{
private:
	ReturnType (*m_pFunction) (Arg1);

public:
#line 207
	FUStaticFunctor1(ReturnType (*function) (Arg1)) { m_pFunction = function; }
#line 210
	virtual ~FUStaticFunctor1() {}
#line 215
	virtual ReturnType operator()(Arg1 argument1) const
	{ return (*m_pFunction)(argument1); }
#line 222
	virtual bool Compare(void* UNUSED(object), void* function) const
	{ return (size_t)function == *(size_t*)(size_t)&m_pFunction; }
#line 226
	virtual IFunctor1<Arg1, ReturnType>* Copy() const
	{ return new FUStaticFunctor1<Arg1, ReturnType>(m_pFunction); }
};
#line 234
template<class Arg1, class Arg2, class ReturnType>
class IFunctor2
{
public:

	virtual ~IFunctor2() {}
#line 245
	virtual ReturnType operator()(Arg1 argument1, Arg2 argument2) const = 0;
#line 251
	virtual bool Compare(void* object, void* function) const = 0;
#line 254
	virtual IFunctor2<Arg1, Arg2, ReturnType>* Copy() const = 0;
};
#line 261
template<class Class, class Arg1, class Arg2, class ReturnType>
class FUFunctor2 : public IFunctor2<Arg1, Arg2, ReturnType>
{
private:
	Class* m_pObject;
	ReturnType (Class::*m_pFunction) (Arg1, Arg2);

public:
#line 272
	FUFunctor2(Class* object, ReturnType (Class::*function) (Arg1, Arg2)) { m_pObject = object; m_pFunction = function; }
#line 275
	virtual ~FUFunctor2() {}
#line 281
	virtual ReturnType operator()(Arg1 argument1, Arg2 argument2) const
	{ return ((*m_pObject).*m_pFunction)(argument1, argument2); }
#line 288
	virtual bool Compare(void* object, void* function) const
	{ return object == m_pObject && (size_t)function == *(size_t*)(size_t)&m_pFunction; }
#line 292
	virtual IFunctor2<Arg1, Arg2, ReturnType>* Copy() const
	{ return new FUFunctor2<Class, Arg1, Arg2, ReturnType>(m_pObject, m_pFunction); }
};
#line 299
template <class ClassName, class Argument1, class Argument2, class ReturnType>
inline FUFunctor2<ClassName, Argument1, Argument2, ReturnType>* NewFUFunctor2(ClassName* o, ReturnType (ClassName::*function) (Argument1, Argument2))
{
	return new FUFunctor2<ClassName, Argument1, Argument2, ReturnType>(o, function);
}
#line 309
template<class Arg1, class Arg2, class ReturnType>
class FUStaticFunctor2 : public IFunctor2<Arg1, Arg2, ReturnType>
{
private:
	ReturnType (*m_pFunction) (Arg1, Arg2);

public:
#line 318
	FUStaticFunctor2(ReturnType (*function) (Arg1, Arg2)) { m_pFunction = function; }
#line 321
	virtual ~FUStaticFunctor2() {}
#line 327
	virtual ReturnType operator()(Arg1 argument1, Arg2 argument2) const
	{ return (*m_pFunction)(argument1, argument2); }
#line 334
	virtual bool Compare(void* UNUSED(object), void* function) const
	{ return (size_t)function == *(size_t*)(size_t)&m_pFunction; }
#line 338
	virtual IFunctor2<Arg1, Arg2, ReturnType>* Copy() const
	{ return new FUStaticFunctor2<Arg1, Arg2, ReturnType>(m_pFunction); }
};
#line 346
template<class Arg1, class Arg2, class Arg3, class ReturnType>
class IFunctor3
{
public:

	virtual ~IFunctor3() {}
#line 358
	virtual ReturnType operator()(Arg1 argument1, Arg2 argument2, Arg3 argument3) const = 0;
#line 364
	virtual bool Compare(void* object, void* function) const = 0;
#line 367
	virtual IFunctor3<Arg1, Arg2, Arg3, ReturnType>* Copy() const = 0;
};
#line 374
template<class Class, class Arg1, class Arg2, class Arg3, class ReturnType>
class FUFunctor3 : public IFunctor3<Arg1, Arg2, Arg3, ReturnType>
{
private:
	Class* m_pObject;
	ReturnType (Class::*m_pFunction) (Arg1, Arg2, Arg3);

public:
#line 385
	FUFunctor3(Class* object, ReturnType (Class::*function) (Arg1, Arg2, Arg3)) { m_pObject = object; m_pFunction = function; }
#line 388
	virtual ~FUFunctor3() {}
#line 395
	virtual ReturnType operator()(Arg1 argument1, Arg2 argument2, Arg3 argument3) const
	{ return ((*m_pObject).*m_pFunction)(argument1, argument2, argument3); }
#line 402
	virtual bool Compare(void* object, void* function) const
	{ return object == m_pObject && (size_t)function == *(size_t*)(size_t)&m_pFunction; }
#line 406
	virtual IFunctor3<Arg1, Arg2, Arg3, ReturnType>* Copy() const
	{ return new FUFunctor3<Class, Arg1, Arg2, Arg3, ReturnType>(m_pObject, m_pFunction); };
};
#line 413
template <class ClassName, class Argument1, class Argument2, class Argument3, class ReturnType>
inline FUFunctor3<ClassName, Argument1, Argument2, Argument3, ReturnType>* NewFUFunctor3(ClassName* o, ReturnType (ClassName::*function) (Argument1, Argument2, Argument3))
{
	return new FUFunctor3<ClassName, Argument1, Argument2, Argument3, ReturnType>(o, function);
}
#line 423
template<class Arg1, class Arg2, class Arg3, class ReturnType>
class FUStaticFunctor3 : public IFunctor3<Arg1, Arg2, Arg3, ReturnType>
{
private:
	ReturnType (*m_pFunction) (Arg1, Arg2, Arg3);

public:
#line 432
	FUStaticFunctor3(ReturnType (*function) (Arg1, Arg2, Arg3)) { m_pFunction = function; }
#line 435
	virtual ~FUStaticFunctor3() {}
#line 442
	virtual ReturnType operator()(Arg1 argument1, Arg2 argument2, Arg3 argument3) const
	{ return (*m_pFunction)(argument1, argument2, argument3); }
#line 449
	virtual bool Compare(void* UNUSED(object), void* function) const
	{ return (size_t)function == *(size_t*)(size_t)&m_pFunction; }
#line 453
	virtual IFunctor3<Arg1, Arg2, Arg3, ReturnType>* Copy() const
	{ return new FUStaticFunctor3<Arg1, Arg2, Arg3, ReturnType>(m_pFunction); };
};

#endif
#line 19 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUAssert.h"
#endif

namespace FUAssertion
{

	typedef FUStaticFunctor1<const char*, bool> FUAssertCallback;
#line 29
	FCOLLADA_EXPORT void SetAssertionFailedCallback(FUAssertCallback* assertionCallback);
#line 33
	FCOLLADA_EXPORT bool OnAssertionFailed(const char* filename, uint32 line);
};

#ifdef _DEBUG

#ifndef __FILE__

#define __FILE__	"NOT_SET"
#define __LINE__	0
#endif
#line 46
#define FUBreak \
	static bool ignoreAssert = false; \
	if (!ignoreAssert) { ignoreAssert = FUAssertion::OnAssertionFailed(__FILE__, __LINE__); }
#else
#line 53
#define FUBreak  { FUAssertion::OnAssertionFailed(__FILE__, __LINE__); }

#endif
#line 59
#define FUFail(command) { FUBreak; command; }
#line 66
#define FUAssert(condition, fall_back) { if (!(condition)) { FUBreak; fall_back; } }

#endif
#line 76 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
#endif
#line 79
#define HAS_VECTORTYPES
#ifndef _F_MATH_H_
// #include "FMath/FMath.h"   (FCollada 3.05B, pasted in place)
#line 16 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
#ifndef _F_MATH_H_
#define _F_MATH_H_

#ifndef _INC_MATH
// #include <math.h>   (not taken)
#endif

#ifndef _FM_FLOAT_H_
// #include "FMath/FMFloat.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMFloat.h"
#ifndef _FM_FLOAT_H_
#define _FM_FLOAT_H_

#if !defined(_INC_FLOAT) && (defined (WIN32) || defined (LINUX) || defined(__APPLE__))
#include <float.h>
#endif
#line 22
#define DBL_TOLERANCE 0.0001

#define FLT_TOLERANCE 0.0001f
#line 29
inline bool IsEquivalent(float f1, float f2) { return f1 - f2 < FLT_TOLERANCE && f2 - f1 < FLT_TOLERANCE; }
#line 35
inline bool IsEquivalent(float f1, float f2, float tolerance) { return f1 - f2 < tolerance && f2 - f1 < tolerance; }
#line 40
inline bool IsEquivalent(double f1, double f2) { return f1 - f2 < DBL_TOLERANCE && f2 - f1 < DBL_TOLERANCE; }
#line 46
inline bool IsEquivalent(double f1, double f2, double tolerance) { return f1 - f2 < tolerance && f2 - f1 < tolerance; }

#ifndef FLT_MAX
#line 51
#define FLT_MAX __FLT_MAX__
#endif

#endif
#line 25 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
#endif
#line 33
template <class T>
bool IsEquivalent(const T& v1, const T& v2) { return v1 == v2; }
#line 37
#ifndef _FM_ARRAY_H_
// #include "FMath/FMArray.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h"
#ifndef _FM_ARRAY_H_
#define _FM_ARRAY_H_

#ifndef _FM_ALLOCATOR_H_
// #include "FMath/FMAllocator.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMAllocator.h"
#ifndef _FM_ALLOCATOR_H_
#define _FM_ALLOCATOR_H_

#include <new.h>

#ifdef new
#define _OLD_NEW new
#undef new
#endif

namespace fm
{
#line 29
	typedef void* (*AllocateFunc)(size_t size);
#line 33
	typedef void (*FreeFunc)(void* buffer);
#line 38
	FCOLLADA_EXPORT void SetAllocationFunctions(AllocateFunc a, FreeFunc f);
#line 44
	FCOLLADA_EXPORT void* Allocate(size_t byteCount);
#line 48
	FCOLLADA_EXPORT void Release(void* buffer);
#line 52
	template <class Type1>
	inline void Construct(Type1* o)
	{
		::new (o) Type1;
	}
#line 61
	template <class Type1, class Type2>
	inline void Construct(Type1* o, const Type2& value)
	{
		::new (o) Type1(value);
	}
};

#ifdef _OLD_NEW
#define new _OLD_NEW
#undef _OLD_NEW
#endif

#endif
#line 19 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h"
#endif
#ifndef _FM_SORT_H_
// #include "FMath/FMSort.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMSort.h"
#ifndef _FM_SORT_H_
#define _FM_SORT_H_

namespace fm
{

	template <class T>
	inline void swap(T& a, T& b)
	{
		T temp = a;
		a = b;
		b = temp;
	}
#line 29
	template <class T>
	class comparator
	{
	public:

		virtual ~comparator() {}
#line 41
		virtual bool compare(const T& a, const T& b)
		{
			return (a < b);
		}
#line 49
		void sort(T* data, size_t count)
		{
			if (data == NULL) return;
			quicksort(data, 0, count);
		}

	private:
		void quicksort(T* data, intptr_t beg, intptr_t end)
		{
			if (end > beg + 1)
			{
				intptr_t l = beg + 1, r = end;
				T& pivot = data[beg];
				while (l < r)
				{
					if (compare(data[l], pivot))
						l++;
					else
						swap(data[l], data[--r]);
				}
				swap(data[--l], data[beg]);
				quicksort(data, beg, l);
				quicksort(data, r, end);
			}
		}
	};
#line 77
	template <class T>
	class icomparator : public comparator<T>
	{
	public:

		virtual ~icomparator() {}
#line 89
		virtual bool compare(const T& a, const T& b)
		{
			return (b < a);
		}
	};
#line 96
	template <class T>
	class pcomparator : public comparator<const void*>
	{
	public:
		typedef const void* valueType;
#line 103
		virtual ~pcomparator() {}
#line 110
		virtual bool compare(const T* a, const T* b)
		{
			return (a < b);
		}
#line 120
		virtual bool compare(const valueType& a, const valueType& b)
		{
			return compare((const T*)a, (const T*)b);
		}
	};
}

#endif
#line 22 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h"
#endif

#ifdef WIN32
#pragma warning(disable:4127)
#endif
#line 29
namespace fm
{
#line 42
	template <class T, bool PRIMITIVE=false>
	class vector
	{
	protected:
		size_t reserved;
		size_t sized;
		T* heapBuffer;

	public:

		typedef T* iterator;
#line 55
		typedef const T* const_iterator;

	public:

		vector() : reserved(0), sized(0), heapBuffer(NULL) {}
#line 63
		vector(size_t size) : reserved(0), sized(0), heapBuffer(NULL)
		{
			resize(size);
		}
#line 71
		vector(size_t size, const T& defaultValue) : reserved(0), sized(0), heapBuffer(NULL)
		{
			resize(size, defaultValue);
		}
#line 78
		vector(const fm::vector<T,PRIMITIVE>& copy) : reserved(0), sized(0), heapBuffer(NULL)
		{
			insert(heapBuffer, copy.begin(), copy.size());
		}
#line 86
		vector(const T* values, size_t count) : reserved(0), sized(0), heapBuffer(NULL)
		{
			insert(heapBuffer, values, count);
		}
#line 92
		~vector()
		{
			if (!PRIMITIVE)
			{
				for (intptr_t i = sized - 1; i >= 0; --i)
				{
					heapBuffer[i].~T();
				}
			}
			if (heapBuffer != NULL)
			{
				fm::Release(heapBuffer);
			}
		}
#line 110
		inline T** GetDataPtr() { return &heapBuffer; }
		inline const T** GetDataPtr() const { return (const T**) &heapBuffer; }
#line 117
		template <class Type2> iterator find(const Type2& value)
		{
			T* i = begin(),* e = end();
			for (; i != e; ++i) if ((*i) == value) break;
			return i;
		}
		template <class Type2> const_iterator find(const Type2& value) const
		{
			const T* i = begin(),* e = end();
			for (; i != e; ++i) if ((*i) == value) break;
			return i;
		}
#line 131
		inline void sort()
		{
			comparator<T> comp;
			comp.sort(heapBuffer, sized);
		}
#line 139
		inline void sort(comparator<T>& comp)
		{
			comp.sort(heapBuffer, sized);
		}
#line 146
		iterator erase(iterator it)
		{
			FUAssert(it >= begin() && it < end(), return it);
			if (!PRIMITIVE) (*it).~T();
			if (end() - it - 1 > 0) memmove(it, it+1, (end() - it - 1) * sizeof(T));
			--sized;
			return it;
		}
#line 160
		void erase(iterator first, iterator last)
		{
			FUAssert(first >= begin() && first < end(), return);
			FUAssert(last > begin() && last <= end(), return);
			if (!PRIMITIVE) for (iterator it = first; it != last; ++it) (*it).~T();
			if (end() - last > 0) memmove(first, last, (end() - last) * sizeof(T));
			sized -= last - first;
		}
#line 172
		inline void erase(size_t first, size_t last) { erase(begin() + first, begin() + last); }
#line 177
		inline bool erase(const T& value) { iterator it = find(value); if (it != end()) { erase(it); return true; } return false; }
#line 181
		inline void erase(size_t index) { erase(begin() + index); }
#line 186
		inline bool contains(const T& value) const { const_iterator it = find(value); return it != end(); }
#line 193
		template <class V2, class V3>
		inline void replace(const V2& oldValue, const V3& newValue)
		{
			for (iterator start = begin(), stop = end(); start != stop; ++start)
			{
				if (*start == (T) oldValue) *start = newValue;
			}
		}
#line 208
		template <class V2, class V3>
		inline void replace(iterator start, iterator end, const V2& oldValue, const V3& newValue)
		{
			while (start != end)
			{
				if (*start == (T) oldValue) *start = newValue;
				++start;
			}
		}
#line 220
		inline size_t size() const { return sized; }
#line 223
		inline bool empty() const { return sized == 0; }
#line 227
		void resize(size_t count)
		{
			reserve(count);

			if (!PRIMITIVE)
			{
				T* it = end();
				for (; sized < count; ++sized)
				{

					fm::Construct(it++);
				}
			}
			else
			{
				sized = reserved;
			}
		}
#line 249
		void resize(size_t count, const T& value)
		{
			reserve(count);
			T* it = end();

			for (; sized < count; ++sized)
			{

				if (!PRIMITIVE)
				{
					fm::Construct(it++, value);
				}
				else
				{
					*(it++) = value;
				}
			}
		}
#line 269
		inline void clear() { reserve(0); }
#line 275
		void reserve(size_t count)
		{
#line 280
			FUAssert(count < INT_MAX, ;);
			if (reserved != count)
			{

				if (PRIMITIVE)
				{
					if (sized > count) sized = count;
				}
				else
				{
					while (sized > count) pop_back();
				}
#line 294
				T* newValues;
				if (count > 0)
				{
					newValues = (T*) fm::Allocate(count * sizeof(T));
					if (sized > 0)
					{
						memcpy(newValues, heapBuffer, sized * sizeof(T));
					}
				}
				else newValues = NULL;
#line 306
				if (heapBuffer != NULL)
				{
					fm::Release(heapBuffer);
				}
				heapBuffer = newValues;
				reserved = count;
			}
		}
#line 318
		inline size_t capacity() { return reserved; }
		inline size_t capacity() const { return reserved; }
#line 323
		inline iterator begin() { return heapBuffer; }
		inline const_iterator begin() const { return heapBuffer; }
#line 328
		inline iterator end() { return heapBuffer + sized; }
		inline const_iterator end() const { return heapBuffer + sized; }
#line 335
		iterator insert(iterator it, const T& item)
		{
			FUAssert(it >= begin() && it <= end(), return it);
			if (sized == reserved)
			{
				size_t offset = it - begin();
				reserve(sized + (sized > 31 ? 32 : (sized+1)));
				it = begin() + offset;
			}
			if (it < end())
			{
				memmove(it + 1, it, (end() - it) * sizeof(T));
			}
			if (!PRIMITIVE)
			{
				fm::Construct(it, item);
			}
			else
			{
				*it = item;
			}
			++sized;
			return it;
		}
#line 363
		inline void insert(size_t index, const T& item) { insert(begin() + index, item); }
#line 367
		inline void push_back(const T& item) { insert(end(), item); }
#line 373
		inline void push_front(const T& item) { insert(begin(), item); }
#line 376
		void pop_back()
		{
			FUAssert(sized > 0, return);
			if (!PRIMITIVE) (*(heapBuffer + sized - 1)).~T();
			--sized;
		}
#line 386
		inline void pop_front()
		{
			erase(begin());
		}
#line 395
		template <typename _IT> inline void insert(iterator it, _IT first, _IT last)
		{
			size_t count = last - first;
			insert(it, first, count);
		}
#line 405
		inline void insert(iterator it, size_t count, const T& item, bool noInit=false)
		{
			if (count > 0)
			{
				FUAssert(it >= begin() && it <= end(), return);
				if (sized + count > reserved)
				{
					size_t offset = it - begin();
					reserve(sized + count);
					it = begin() + offset;
				}
				if (it < end())
				{
					memmove(it + count, it, (end() - it) * sizeof(T));
				}
				sized += count;

				if (!noInit)
				{
					if (!PRIMITIVE)
					{
						do
						{
							fm::Construct(it++, item);
						}
						while (--count > 0);
					}
					else
					{
						do
						{
							*(it++) = item;
						}
						while (--count > 0);
					}
				}
			}
		}
#line 448
		inline void insert(size_t index, size_t count, const T& value) { insert(begin() + index, count, value); }
#line 456
		void insert(iterator it, const T* first, size_t count)
		{
			if (count > 0)
			{
				FUAssert(it >= begin() && it <= end(), return);
				if (sized + count > reserved)
				{
					size_t offset = it - begin();
					reserve((sized + count - reserved) > 32 ? (sized + count) : (reserved + 32));
					it = begin() + offset;
				}
				if (it < end())
				{
					memmove(it + count, it, (end() - it) * sizeof(T));
				}
				sized += count;
				if (!PRIMITIVE)
				{
					do
					{
						fm::Construct(it++, (*first++));
					}
					while (--count > 0);
				}
				else
				{
					memcpy(it, first, count * sizeof(T));
				}
			}
		}
#line 491
		inline void insert(size_t index, const T* values, size_t count) { insert(begin() + index, values, count); }
#line 495
		T& front() { FUAssert(sized > 0,); return (*heapBuffer); }
		const T& front() const { FUAssert(sized > 0,); return (*heapBuffer); }
#line 500
		T& back() { FUAssert(sized > 0,); return *(heapBuffer + sized - 1); }
		const T& back() const { FUAssert(sized > 0,); return *(heapBuffer + sized - 1); }
#line 506
		T& at(size_t index) { FUAssert(index < sized,); return heapBuffer[index]; }
		const T& at(size_t index) const { FUAssert(index < sized,); return heapBuffer[index]; }
		template <class INTEGER> inline T& operator[](INTEGER index) { FUAssert((size_t) index < sized,); return heapBuffer[index]; }
		template <class INTEGER> inline const T& operator[](INTEGER index) const { FUAssert((size_t) index < sized,); return heapBuffer[index]; }
#line 514
		bool operator==(const fm::vector<T,PRIMITIVE>& other) const
		{
			bool equals = sized == other.size();
			const T* e = end();
			for (const T* it = begin(),* it2 = other.begin(); it != e && equals; ++it, ++it2)
			{
				equals = (*it) == (*it2);
			}
			return equals;
		}
#line 528
		vector<T,PRIMITIVE>& operator =(const fm::vector<T,PRIMITIVE>& rhs)
		{
			if (this != &rhs)
			{
				if (PRIMITIVE)
				{
					resize(rhs.size());
					memcpy(begin(), rhs.begin(), sizeof(T) * rhs.size());
				}
				else
				{
					reserve(rhs.size());
					clear();
					for (const_iterator it = rhs.begin(); it != rhs.end(); ++it)
					{
						push_back(*it);
					}
				}
			}
			return *this;
		}
	};
};
#line 557
template <class T, bool PRIMITIVE>
inline bool IsEquivalent(const fm::vector<T,PRIMITIVE>& dl, const T* cl, size_t count)
{
	if (dl.size() != count) return false;
	bool equivalent = true;
	for (size_t i = 0; i < count && equivalent; ++i)
	{
		 equivalent = IsEquivalent(dl.at(i), cl[i]);
	}
	return equivalent;
}
#line 575
template <class T>
inline bool IsEquivalent(const T* al, size_t acount, const T* bl, size_t bcount)
{
	if (acount != bcount) return false;
	bool equivalent = true;
	for (size_t i = 0; i < acount && equivalent; ++i)
	{
		 equivalent = IsEquivalent(al[i], bl[i]);
	}
	return equivalent;
}

#ifdef WIN32
#pragma warning(default:4127)
#endif
#endif
#line 39 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
#endif
#ifndef _FM_ARRAY_POINTER_H_
// #include "FMath/FMArrayPointer.h"   (FCollada 3.05B, pasted in place)
#line 15 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArrayPointer.h"
#ifndef _FM_ARRAY_POINTER_H_
#define _FM_ARRAY_POINTER_H_

#ifndef _FM_ARRAY_H_
// #include "FMath/FMArray.h"   (not taken)
#endif
#line 23
namespace fm
{
#line 32
	template <class T>
	class pvector : public fm::vector<const void*, true>
	{
	private:
#line 38
		T*** first;

	public:
		typedef typename fm::vector<const void*, true> Parent;
		typedef T* item;
		typedef const T* const_item;
		typedef item* iterator;
		typedef const_item* const_iterator;
#line 48
		pvector() : Parent()
		{
			first = (T***) (size_t) &heapBuffer;
		}
#line 55
		pvector(size_t size) : Parent(size, NULL)
		{
			first = (T***) (size_t) &heapBuffer;
		}
#line 63
		pvector(size_t size, const T& defaultValue) : Parent(size, defaultValue)
		{
			first = (T***) &heapBuffer;
		}
#line 70
		pvector(const pvector<T>& copy) : Parent(copy)
		{
			first = (T***) (size_t) &heapBuffer;
		}
#line 78
		pvector(const T** values, size_t count) : Parent()
		{
			first = (T***) (size_t) &heapBuffer;
			resize(count);
			memcpy(&front(), values, count * sizeof(void*));
		}
#line 86
		~pvector()
		{
#ifdef _DEBUG
			Parent::clear();
			Parent::push_back((void*) (size_t) 0xFFFFFFFF);
			first = (T***) (size_t) 0xDEADDEAD;
#endif
		}
#line 97
		inline T*& front() { return (T*&) Parent::front(); }
		inline const T*& front() const { return (const T*&) Parent::front(); }
#line 102
		inline T*& back() { return (T*&) Parent::back(); }
		inline const T*& back() const { return (const T*&) Parent::back(); }
#line 108
		inline T*& at(size_t index) { return (T*&) Parent::at(index); }
		inline const T*& at(size_t index) const { return (const T*&) Parent::at(index); }
		template <class INTEGER> inline T*& operator[](INTEGER index) { return (T*&) Parent::at(index); }
		template <class INTEGER> inline const T*& operator[](INTEGER index) const { return (const T*&) Parent::at(index); }
#line 115
		inline iterator begin() { return (!empty()) ? &front() : NULL; }
		inline const_iterator begin() const { return (!empty()) ? &front() : NULL; }
#line 120
		inline iterator end() { return (!empty()) ? (&back()) + 1 : NULL; }
		inline const_iterator end() const { return (!empty()) ? (&back()) + 1 : NULL; }
#line 127
		inline iterator find(const T* item) { Parent::iterator f = Parent::find(item); return begin() + (f - Parent::begin()); }
		inline const_iterator find(const T* item) const { Parent::const_iterator f = Parent::find(item); return begin() + (f - Parent::begin()); }
#line 134
		inline iterator insert(iterator _iterator, T* object)
		{
			iterator originalStart = begin();
			Parent::iterator newIt = Parent::insert(Parent::begin() + (_iterator - originalStart), object);
			return begin() + (newIt - Parent::begin());
		}
#line 144
		inline void insert(iterator _iterator, size_t count)
		{
			Parent::iterator it = Parent::begin() + (_iterator - begin());
			Parent::insert(it, count, NULL);
		}
#line 155
		template <class _It>
		inline void insert(iterator _where, _It _startIterator, _It _endIterator)
		{
			if (_startIterator < _endIterator)
			{
				size_t relativeWhere = _where - begin();
				size_t count = _endIterator - _startIterator;
				Parent::insert(Parent::begin() + relativeWhere, count, (T*) 0);
				_where = begin() + relativeWhere;

				memcpy(_where, _startIterator, sizeof(void*) * count);
			}
		}
#line 171
		inline iterator erase(iterator _it)
		{
			Parent::iterator it = Parent::begin() + (_it - begin());
			it = Parent::erase(it);
			return begin() + (it - Parent::begin());
		}
#line 181
		inline bool erase(const T* value)
		{
			Parent::iterator it = Parent::find(value);
			if (it != Parent::end()) { Parent::erase(it); return true; }
			return false;
		}
#line 191
		inline void erase(iterator first, iterator last)
		{
			Parent::erase(Parent::begin() + (first - begin()), Parent::begin() + (last - begin()));
		}
#line 198
		inline void erase(size_t index) { Parent::erase(Parent::begin() + index); }
#line 204
		inline bool release(const T* value)
		{
			Parent::iterator it = Parent::find(value);
			if (it != Parent::end()) { Parent::erase(it); delete value; return true; }
			return false;
		}
#line 215
		pvector<T>& operator= (const pvector<T>& other) { clear(); insert(end(), other.begin(), other.end()); return *this; }
#line 220
		inline void resize(size_t count) { Parent::resize(count, NULL); }
	};
};

#endif
#line 42 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
#endif
#ifndef _FM_TREE_H_
// #include "FMath/FMTree.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMTree.h"
#ifndef _FM_TREE_H_
#define _FM_TREE_H_

#ifndef _FM_ALLOCATOR_H_
// #include "FMath/FMAllocator.h"   (not taken)
#endif

namespace fm
{
#line 27
	template <class _Kty, class _Ty>
	class pair
	{
	public:
		_Kty first;
		_Ty second;
#line 35
		pair() : first(), second() {}
#line 40
		pair(const _Kty& f, const _Ty& s) : first(f), second(s) {}
#line 44
		pair(const pair& p) : first(p.first), second(p.second) {}
#line 49
		inline bool operator==(const pair& p) const { return p.first == first && p.second == second; }
#line 54
		inline bool operator!=(const pair& p) const { return p.first != first || p.second != second; }
	};
#line 64
	template <class KEY, class DATA>
	class tree
	{
	private:
		typedef fm::pair<KEY, DATA> pair;

		class node
		{
		public:
			node* left;
			node* right;
			node* parent;

			int32 weight;

			pair data;

		public:
			node() : left(NULL), right(NULL), parent(NULL), weight(0) {}

			void rotateLeft()
			{
				node** parentLink = (parent->left == this) ? &parent->left : &parent->right;
#line 89
				node* oldRight = right;
#line 92
				node* right_left = right->left;
				right = right_left;
				if (right_left != NULL) right_left->parent = this;
#line 97
				oldRight->left = this;
#line 100
				oldRight->parent = parent;
				parent = oldRight;
				(*parentLink) = oldRight;
#line 105
				weight = weight - 1 - (oldRight->weight > 0 ? oldRight->weight : 0);
				oldRight->weight = oldRight->weight - (0 > -weight ? 0 : -weight) - 1;
			}

			void rotateRight()
			{
				node** parentLink = (parent->left == this) ? &parent->left : &parent->right;
#line 114
				node* oldLeft = left;
#line 117
				node* left_right = left->right;
				left = left_right;
				if (left_right != NULL) left_right->parent = this;
#line 122
				oldLeft->right = this;
#line 125
				oldLeft->parent = parent;
				parent = oldLeft;
				(*parentLink) = oldLeft;
#line 130
				weight = weight + 1 + (0 > oldLeft->weight ? -oldLeft->weight : 0);
				oldLeft->weight = (oldLeft->weight + 1) + (0 > weight ? 0 : weight);
			}

#ifdef TREE_DEBUG
			intptr_t depth() const
			{
				intptr_t leftDepth = left != NULL ? left->depth() : 0;
				intptr_t rightDepth = right != NULL ? right->depth() : 0;
				return max(leftDepth, rightDepth) + 1;
			}

			void is_correct()
			{
				if (left != NULL) left->is_correct();
				if (right != NULL) right->is_correct();
				intptr_t leftDepth = left != NULL ? left->depth() : 0;
				intptr_t rightDepth = right != NULL ? right->depth() : 0;
				FUAssert(rightDepth - leftDepth == weight,);
				FUAssert(abs(weight) < 2,);
			}
#endif
		};

	public:
		class const_iterator;
#line 161
		class iterator
		{
		private:
			friend class tree;
			friend class const_iterator;
			node* currentNode;

		public:

			iterator() {}

			iterator(node* n) : currentNode(n) {}

			iterator& operator=(const iterator& copy) { currentNode = copy.currentNode; return *this; }
#line 179
			inline bool operator==(const iterator& other) const { return other.currentNode == currentNode; }
			inline bool operator==(const const_iterator& other) const;
#line 185
			inline bool operator!=(const iterator& other) const { return other.currentNode != currentNode; }
			inline bool operator!=(const const_iterator& other) const;
#line 190
			iterator& operator++()
			{

				if (currentNode->right == NULL)
				{
					node* oldNode;
					do
					{
						oldNode = currentNode;
#line 203
						currentNode = currentNode->parent;
					}
					while (currentNode->right == oldNode && currentNode->parent != NULL);
				}
				else
				{

					currentNode = currentNode->right;
#line 213
					while (currentNode->left != NULL) currentNode = currentNode->left;
				}
				return (*this);
			}
#line 220
			iterator& operator--()
			{

				if (currentNode->left == NULL)
				{
					node* oldNode;
					do
					{
						oldNode = currentNode;
#line 233
						currentNode = currentNode->parent;
					}
					while (currentNode->left == oldNode && currentNode->parent != NULL);
				}
				else
				{

					currentNode = currentNode->left;
#line 243
					while (currentNode->right != NULL) currentNode = currentNode->right;
				}
				return (*this);
			}
#line 250
			inline pair& operator*() { return currentNode->data; }
			inline pair* operator->() { return &currentNode->data; }
		};
#line 258
		class const_iterator
		{
		private:
			friend class tree;
			friend class iterator;
			const node* currentNode;

		public:

			const_iterator() {}
#line 270
			const_iterator(const iterator& copy) : currentNode(copy.currentNode) {}

			const_iterator(const node* n) : currentNode(n) {}

			const_iterator& operator=(const iterator& copy) { currentNode = copy.currentNode; return *this; }
			const_iterator& operator=(const const_iterator& copy) { currentNode = copy.currentNode; return *this; }
#line 280
			inline bool operator==(const iterator& other) const { return other.currentNode == currentNode; }
			inline bool operator==(const const_iterator& other) const { return other.currentNode == currentNode; }
#line 286
			inline bool operator!=(const iterator& other) const { return other.currentNode != currentNode; }
			inline bool operator!=(const const_iterator& other) const { return other.currentNode != currentNode; }
#line 291
			const_iterator& operator++()
			{

				if (currentNode->right == NULL)
				{
					const node* oldNode;
					do
					{
						oldNode = currentNode;
#line 304
						currentNode = currentNode->parent;
					}
					while (currentNode->right == oldNode && currentNode->parent != NULL);
				}
				else
				{

					currentNode = currentNode->right;
#line 314
					while (currentNode->left != NULL) currentNode = currentNode->left;
				}
				return (*this);
			}
#line 321
			const_iterator& operator--()
			{

				if (currentNode->left == NULL)
				{
					const node* oldNode;
					do
					{
						oldNode = currentNode;
#line 334
						currentNode = currentNode->parent;
					}
					while (currentNode->left == oldNode && currentNode->parent != NULL);
				}
				else
				{

					currentNode = currentNode->left;
#line 344
					while (currentNode->right != NULL) currentNode = currentNode->right;
				}
				return (*this);
			}
#line 351
			inline const pair& operator*() { return currentNode->data; }
			inline const pair* operator->() { return &currentNode->data; }
		};

	private:
		node* root;
		size_t sized;

	public:

		tree() : root(NULL), sized(0)
		{
			root = (node*) fm::Allocate(sizeof(node));
			fm::Construct(root);
		}
#line 368
		~tree()
		{
			clear();
			root->data.first.~KEY();
			root->data.second.~DATA();
			fm::Release(root);
			root = NULL;
		}
#line 379
		inline iterator begin() { iterator it(root); return (root->right == NULL) ? it : ++it; }
		inline const_iterator begin() const { const_iterator it(root); return (root->right == NULL) ? it : ++it; }
#line 385
		inline iterator end() { return iterator(root); }
		inline const_iterator end() const { return const_iterator(root); }
#line 390
		inline iterator last() { node* n = root; while (n->right != NULL) n = n->right; return iterator(n); }
		inline const_iterator last() const { const node* n = root; while (n->right != NULL) n = n->right; return const_iterator(n); }
#line 399
		iterator find(const KEY& key)
		{
			node* out = root->right;
			while (out != NULL)
			{
				if (key < out->data.first) out = out->left;
				else if (key == out->data.first) return iterator(out);
				else out = out->right;
			}
			return end();
		}
		inline const_iterator find(const KEY& key) const { return const_iterator(const_cast<tree<KEY, DATA>* >(this)->find(key)); }
#line 418
		iterator insert(const KEY& key, const DATA& data)
		{

			node** insertAt = &root->right,* parent = root;
			while (*insertAt != NULL)
			{
				parent = *insertAt;
				if (key < parent->data.first) insertAt = &parent->left;
				else if (key == parent->data.first)
				{
					parent->data.second = data;
					return iterator(parent);
				}
				else insertAt = &parent->right;
			}
#line 435
			node* n = ((*insertAt) = (node*) fm::Allocate(sizeof(node)));
			fm::Construct(*insertAt);
			n->parent = parent;
			n->data.first = key;
			n->data.second = data;
			++sized;
#line 443
			parent->weight += (*insertAt == parent->right) ? 1 : -1;
			node* it = parent;
			while (it != root)
			{

				if (it->weight > 1)
				{
					if (it->right->weight < 0) it->right->rotateRight();
					it->rotateLeft();
					it = it->parent;
					break;
				}
				else if (it->weight < -1)
				{
					if (it->left->weight > 0) it->left->rotateLeft();
					it->rotateRight();
					it = it->parent;
					break;
				}
				else if (it->weight == 0) break;
#line 465
				it->parent->weight += (it == it->parent->right) ? 1 : -1;
				it = it->parent;
			}

#ifdef TREE_DEBUG
			root->right->is_correct();
#endif

			return iterator(n);
		}
#line 481
		inline DATA& operator[](const KEY& k) { iterator it = find(k); if (it != end()) return it->second; else { DATA d; return insert(k, d)->second; } }
		inline const DATA& operator[](const KEY& k) const { return find(k)->second; }
#line 486
		inline void erase(const KEY& key) { iterator it = find(key); erase(it); }
#line 490
		inline void erase(const iterator& it)
		{
			node* n = it.currentNode;
			if (n != root)
			{
				node* release;
				if (n->left == NULL && n->right == NULL) release = n;
				else
				{

					if (n->weight <= 0 && n->left != NULL)
					{

						release = n->left;
						while (release->right != NULL) release = release->right;
						n->data = release->data;
#line 508
						if (release->left != NULL)
						{
							release->data = release->left->data;
							release = release->left;
						}
					}
					else
					{

						release = n->right;
						while (release->left != NULL) release = release->left;
						n->data = release->data;
#line 522
						if (release->right != NULL)
						{
							release->data = release->right->data;
							release = release->right;
						}
					}
				}
#line 531
				node* rebalance = release->parent;
				if (rebalance->left == release) { rebalance->left = NULL; ++rebalance->weight; }
				else { rebalance->right = NULL; --rebalance->weight; }
				release->data.first.~KEY();
				release->data.second.~DATA();
				fm::Release(release);
				--sized;
#line 540
				node* it = rebalance;
				while (it != root)
				{

					if (it->weight > 1)
					{
						if (it->right->weight < 0) it->right->rotateRight();
						it->rotateLeft();
						it = it->parent;
					}
					else if (it->weight < -1)
					{
						if (it->left->weight > 0) it->left->rotateLeft();
						it->rotateRight();
						it = it->parent;
					}
					if (it->weight != 0) break;
#line 559
					it->parent->weight -= (it == it->parent->right) ? 1 : -1;
					it = it->parent;
				}
			}

#ifdef TREE_DEBUG
			if (root->right != NULL) root->right->is_correct();
#endif
		}
#line 571
		inline bool empty() const { return sized == 0; }
#line 575
		inline size_t size() const { return sized; }
#line 579
		void clear()
		{

			if (root->right != NULL)
			{
				node* n = root->right;
				while (n != root)
				{
					if (n->left != NULL) n = n->left;
					else if (n->right != NULL) n = n->right;
					else
					{

						node* release = n;
						n = n->parent;
						if (n->left == release) n->left = NULL;
						else if (n->right == release) n->right = NULL;
						release->data.first.~KEY();
						release->data.second.~DATA();
						fm::Release(release);
						--sized;
					}
				}
				root->right = NULL;
			}
		}
#line 610
		inline tree<KEY,DATA>& operator= (const tree<KEY,DATA>& copy)
		{
			clear();
#line 616
			node* currentNode = copy.root;
			node* cloneNode = root;
			if (currentNode->right != NULL)
			{
				do
				{
					if (currentNode->right == NULL)
					{
						const node* oldNode;
						do
						{
							oldNode = currentNode;
#line 632
							currentNode = currentNode->parent;
							cloneNode = cloneNode->parent;
						}
						while (currentNode->right == oldNode && currentNode->parent != NULL);
					}
					else
					{

						currentNode = currentNode->right;

						cloneNode->right = (node*) fm::Allocate(sizeof(node));
						fm::Construct(cloneNode->right);
						cloneNode->right->parent = cloneNode;
						cloneNode->right->data = currentNode->data;
						cloneNode->right->weight = currentNode->weight;
						++sized;

						cloneNode = cloneNode->right;
#line 652
						while (currentNode->left != NULL)
						{
							currentNode = currentNode->left;

							cloneNode->left = (node*) fm::Allocate(sizeof(node));
							fm::Construct(cloneNode->left);
							cloneNode->left->parent = cloneNode;
							cloneNode->left->data = currentNode->data;
							cloneNode->left->weight = currentNode->weight;
							++sized;

							cloneNode = cloneNode->left;
						}
					}
				}
				while (currentNode != copy.root);
			}

			return (*this);
		}
	};

	template <class KEY, class DATA>
	bool tree<KEY,DATA>::iterator::operator==(const const_iterator& other) const { return other.currentNode == currentNode; }
	template <class KEY, class DATA>
	bool tree<KEY,DATA>::iterator::operator!=(const const_iterator& other) const { return other.currentNode != currentNode; }
#line 680
	template <class _Kty>
	class set : public fm::tree<_Kty, _Kty> {};
#line 684
	template <class _Kty, class _Ty>
	class map : public fm::tree<_Kty, _Ty> {};
};

#endif
#line 45 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
#endif
#line 48
typedef fm::vector<double, true> DoubleList;
#line 51
typedef fm::vector<float, true> FloatList;
#line 54
typedef fm::vector<int, true> IntList;
#line 57
#ifndef _FM_INTEGER_H_
// #include "FMath/FMInteger.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMInteger.h"
#ifndef _FM_INTEGER_H_
#define _FM_INTEGER_H_
#line 18
typedef fm::vector<int32, true> Int32List;

typedef fm::vector<uint32, true> UInt32List;

typedef fm::vector<uint16, true> UInt16List;

typedef fm::vector<uint8, true> UInt8List;

typedef fm::vector<int8, true> Int8List;

typedef fm::vector<bool, true> BooleanList;
#line 35
inline bool IsEquivalent(int8 i1, int8 i2) { return i1 == i2; }
inline bool IsEquivalent(uint8 i1, uint8 i2) { return i1 == i2; }
inline bool IsEquivalent(int16 i1, int16 i2) { return i1 == i2; }
inline bool IsEquivalent(uint16 i1, uint16 i2) { return i1 == i2; }
inline bool IsEquivalent(int32 i1, int32 i2) { return i1 == i2; }
inline bool IsEquivalent(uint32 i1, uint32 i2) { return i1 == i2; }
inline bool IsEquivalent(int64 i1, int64 i2) { return i1 == i2; }
inline bool IsEquivalent(uint64 i1, uint64 i2) { return i1 == i2; }
#line 48
inline bool IsEquivalent(bool b1, bool b2) { return b1 == b2; }

#endif
#line 59 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
#endif
#line 65
namespace FMath
{

	const double Pi = 3.14159265358979323846264338327950288419716939937510;
	const float Pif = 3.14159265358979323846264338327950288419716939937510f;
#line 73
	enum AXIS
	{
		X = 0,
		Y,
		Z,
        W,

		TRANS = W
	};
#line 86
	inline double RadToDeg(double val) { return (val * 180.0/Pi); }
#line 91
	inline float RadToDeg(float val) { return (val * 180.0f/Pif); }
#line 96
	inline double DegToRad(double val) { return (val * Pi/180.0); }
#line 101
	inline float DegToRad(float val) { return (val * (float)Pi/180.0f); }
#line 106
#ifdef WIN32
	inline int IsNotANumber(float f) { return _isnan(f); }
#elif __PPU__
	inline int IsNotANumber(float f) { return !isfinite(f); }
#else
	inline int IsNotANumber(float f) { return !finite(f); }
#endif
#line 117
	template <class T>
	inline T Sign(const T& val) { return (val >= T(0)) ? T(1) : T(-1); }
#line 129
	template <class T, class T2, class T3>
	inline T Clamp(T val, T2 mn, T3 mx) { return (T) ((val > (T) mx) ? (T) mx : (val < (T) mn) ? (T) mn : val); }
#line 141
	template <class T, class T2, class T3>
	inline T Wrap(T val, T2 mn, T3 mx) { T d = (T)(mx - mn); while (val > (T)mx) val -= d; while (val < (T)mn) val += d; return val; }
#line 146
	template <>
	inline float Wrap(float val, float mn, float mx) {
		if (val > mx) return (mn + fmodf(val - mx, mx - mn));
		else if (val < mn) return (mx - fmodf(mn - val, mx - mn));
		return val; }

	template <>
	inline double Wrap(double val, double mn, double mx) {
		if (val > mx) return (mn + fmod(val - mx, mx - mn));
		else if (val < mn) return (mx - fmod(mn - val, mx - mn));
		return val; }

	template <>
	inline int Wrap(int val, int mn, int mx) {
		if (val > mx) return mn + ((val - mx) % (mx - mn));
		else if (val < mn) return mx - ((mn - val) % (mx - mn));
		return val; }

	template <>
	inline uint32 Wrap(uint32 val, uint32 mn, uint32 mx) {
		if (val > mx) return mn + ((val - mx) % (mx - mn));
		else if (val < mn) return mx - ((mn - val) % (mx - mn));
		return val; }
};
#line 172
// #include "FMath/FMVector2.h"   (FCollada 3.05B, pasted in place)
#line 15 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMVector2.h"
#ifndef _FM_VECTOR2_H_
#define _FM_VECTOR2_H_
#line 24
class FCOLLADA_EXPORT FMVector2
{
public:
	union
	{
		float u;
		float x;
	};
	union
	{
		float v;
		float y;
	};

public:

	#ifndef _DEBUG
	FMVector2() {}
	#else
	FMVector2() { u = 123456789.0f; v = 123456789.0f; }
	#endif
#line 49
	FMVector2(float _u, float _v) { u = _u; v = _v; }
#line 53
	inline float LengthSquared() const { return x * x + y * y; }
#line 57
	inline float Length() const { return sqrtf(x * x + y * y); }
#line 60
	inline void NormalizeIt() { float l = Length(); if (l > 0.0f) { x /= l; y /= l; } else { x = 0; y = 1; }}
#line 64
	inline FMVector2 Normalize() const { float l = Length(); return (l > 0.0f) ? FMVector2(x / l, y / l) : FMVector2::XAxis; }
#line 68
	inline operator float*() { return &u; }
#line 75
	inline FMVector2& operator +=(const FMVector2& a) { u += a.u; v += a.v; return *this; }
#line 82
	inline FMVector2& operator *=(float a) { u *= a; v *= a; return *this; }
#line 90
	inline FMVector2& operator =(const float* f) { u = *f; v = *(f + 1); return *this; }

public:
	static const FMVector2 Zero;
	static const FMVector2 Origin;
	static const FMVector2 XAxis;
	static const FMVector2 YAxis;
};
#line 103
inline FMVector2 operator + (const FMVector2& a, const FMVector2& b) { return FMVector2(a.u + b.u, a.v + b.v); }
#line 109
inline FMVector2 operator -(const FMVector2& a, const FMVector2& b) { return FMVector2(a.u - b.u, a.v - b.v); }
#line 116
inline float operator *(const FMVector2& a, const FMVector2& b) { return a.u * b.u + a.v * b.v; }
#line 122
inline FMVector2 operator *(const FMVector2& a, float b) { return FMVector2(a.u * b, a.v * b); }
#line 128
inline FMVector2 operator *(float a, const FMVector2& b) { return FMVector2(a * b.u, a * b.v); }
#line 134
inline FMVector2 operator /(const FMVector2& a, float b) { return FMVector2(a.x / b, a.y / b); }
#line 140
inline bool IsEquivalent(const FMVector2& a, const FMVector2& b) { return IsEquivalent(a.x, b.x) && IsEquivalent(a.y, b.y); }
inline bool operator==(const FMVector2& a, const FMVector2& b) { return IsEquivalent(a.x, b.x) && IsEquivalent(a.y, b.y); }
#line 144
typedef fm::vector<FMVector2> FMVector2List;

#endif
#line 173 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
// #include "FMath/FMVector3.h"   (FCollada 3.05B, pasted in place)
#line 13 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMVector3.h"
#ifndef _FM_VECTOR3_H_
#define _FM_VECTOR3_H_

class FMVector4;
#line 26
class FCOLLADA_EXPORT
ALIGN_STRUCT(16)
FMVector3
{
public:
	float x;
	float y;
	float z;
private:
	float w;

public:
#line 41
	#ifndef _DEBUG
	inline FMVector3() {}
	#else
	inline FMVector3() { x = 123456789.0f; y = 123456789.0f; z = 123456789.0f; }
	#endif
#line 51
	inline FMVector3(float _x, float _y, float _z) { x = _x; y = _y; z = _z; }
#line 55
	inline FMVector3(const FMVector3& rhs) { x = rhs.x; y = rhs.y; z = rhs.z; }
#line 60
	FMVector3(const FMVector4& vect4);
#line 68
	FMVector3(const float* source, uint32 startIndex = 0);
	FMVector3(const double* source, uint32 startIndex = 0);
#line 73
	inline float LengthSquared() const { return x * x + y * y + z * z; }
#line 77
	inline float Length() const { return sqrtf(x * x + y * y + z * z); }
#line 80
	inline void NormalizeIt() { float l = Length(); if (l > 0.0f) { x /= l; y /= l; z /= l; } else { x = y = 0; z = 1; }}
#line 84
	inline FMVector3 Normalize() const { float l = Length(); return (l > 0.0f) ? FMVector3(x / l, y / l, z / l) : FMVector3::XAxis; }
#line 88
	inline void Project(const FMVector3& unto) { (*this) = Projected(unto); }
#line 93
	inline FMVector3 Projected(const FMVector3& unto) const;
#line 97
	inline operator float*() { return &x; }
#line 101
	inline operator const float*() const { return &x; }
#line 107
	inline void Set(float x, float y, float z) { this->x = x; this->y = y, this->z = z; }
#line 115
	inline FMVector3& operator =(const float* v) { x = *v; y = *(v + 1); z = *(v + 2); return *this; }
#line 120
	inline FMVector3& operator =(const FMVector3& rhs) { x=rhs.x; y=rhs.y; z=rhs.z; return *this; }
#line 126
	inline void ComponentMinimum(const FMVector3& min) { if (x < min.x) x = min.x; if (y < min.y) y = min.y; if (z < min.z) z = min.z; }
#line 130
	inline float ComponentMinimum() const { return min(fabsf(x), min(fabsf(y), fabsf(z))); }
#line 136
	inline void ComponentMaximum(const FMVector3& max) { if (x > max.x) x = max.x; if (y > max.y) y = max.y; if (z > max.z) z = max.z; }
#line 140
	inline float ComponentMaximum() const { return max(fabsf(x), max(fabsf(y), fabsf(z))); }
#line 149
	inline void ComponentClamp(const FMVector3& min, const FMVector3& max) { ComponentMinimum(min); ComponentMaximum(max); }
#line 153
	inline float ComponentAverage() const { return (fabsf(x) + fabsf(y) + fabsf(z)) / 3.0f; }

public:
	static const FMVector3 XAxis;
	static const FMVector3 YAxis;
	static const FMVector3 ZAxis;
	static const FMVector3 Origin;
	static const FMVector3 Zero;
	static const FMVector3 One;
};
#line 168
inline FMVector3 operator +(const FMVector3& a, const FMVector3& b) { return FMVector3(a.x + b.x, a.y + b.y, a.z + b.z); }
#line 174
inline FMVector3 operator -(const FMVector3& a, const FMVector3& b) { return FMVector3(a.x - b.x, a.y - b.y, a.z - b.z); }
#line 180
inline FMVector3 operator +(const FMVector3& a) { return FMVector3(+a.x, +a.y, +a.z); }
#line 186
inline FMVector3 operator -(const FMVector3& a) { return FMVector3(-a.x, -a.y, -a.z); }
#line 192
inline float operator *(const FMVector3& a, const FMVector3& b) { return a.x * b.x + a.y * b.y + a.z * b.z; }
#line 198
inline FMVector3 operator *(const FMVector3& a, float b) { return FMVector3(a.x * b, a.y * b, a.z * b); }
#line 204
inline FMVector3 operator *(float a, const FMVector3& b) { return FMVector3(a * b.x, a * b.y, a * b.z); }
#line 210
inline FMVector3 operator /(const FMVector3& a, float b) { return FMVector3(a.x / b, a.y / b, a.z / b); }
#line 216
inline FMVector3 operator ^(const FMVector3& a, const FMVector3& b) { return FMVector3(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x); }
#line 222
inline FMVector3& operator +=(FMVector3& b, const FMVector3& a) { b.x += a.x; b.y += a.y; b.z += a.z; return b; }
#line 228
inline FMVector3& operator -=(FMVector3& b, const FMVector3& a) { b.x -= a.x; b.y -= a.y; b.z -= a.z; return b; }
#line 234
inline FMVector3& operator *=(FMVector3& b, float a) { b.x *= a; b.y *= a; b.z *= a; return b; }
#line 240
inline FMVector3& operator /=(FMVector3& b, float a) { b.x /= a; b.y /= a; b.z /= a; return b; }
#line 246
inline bool IsEquivalent(const FMVector3& p, const FMVector3& q) { return IsEquivalent(p.x, q.x) && IsEquivalent(p.y, q.y) && IsEquivalent(p.z, q.z); }
inline bool operator == (const FMVector3& p, const FMVector3& q) { return IsEquivalent(p, q); }
#line 250
inline FMVector3 FMVector3::Projected(const FMVector3& unto) const { return ((*this) * unto) / unto.LengthSquared() * unto; }
#line 253
typedef fm::vector<FMVector3> FMVector3List;

#endif
#line 174 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
// #include "FMath/FMVector4.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMVector4.h"
#ifndef _FM_VECTOR4_H_
#define _FM_VECTOR4_H_

class FMColor;
#line 25
class FCOLLADA_EXPORT
ALIGN_STRUCT(16)
FMVector4
{
public:
	float x;
	float y;
	float z;
	float w;
#line 36
	#ifndef _DEBUG
	inline FMVector4() {}
	#else
	inline FMVector4() { x = 123456789.0f; y = 123456789.0f; z = 123456789.0f; w = 123456789.0f; }
	#endif
#line 48
	inline FMVector4(const float* source, uint32 startIndex = 0) { source = source + startIndex; x = *source++; y = *source++; z = *source++; w = *source; }
#line 56
	inline FMVector4(const FMVector3& v, float _w) { x = v.x; y = v.y; z = v.z; w = _w; }
#line 61
	inline FMVector4(const FMVector2& v1, const FMVector2& v2) { x = v1.x; y = v1.y; z = v2.x; w = v2.y; }
#line 68
	inline FMVector4(float _x, float _y, float _z, float _w) { x = _x; y = _y; z = _z; w = _w; }
#line 72
	FMVector4(const FMColor& c);
#line 80
	static FMVector4 FromHSVColor(float hue, float saturation, float value);
#line 87
	FMVector3 ToHSVColor();

public:
#line 92
	inline operator float*() { return &x; }
#line 96
	inline operator const float*() const { return &x; }
#line 104
	inline FMVector4& operator =(const float* v) { x = *v; y = *(v + 1); z = *(v + 2); w = *(v+3); return *this; }
#line 110
	inline void ComponentMinimum(const FMVector4& min) { if (x < min.x) x = min.x; if (y < min.y) y = min.y; if (z < min.z) z = min.z; if (w < min.w) w = min.w; }
#line 116
	inline void ComponentMaximum(const FMVector4& max) { if (x > max.x) x = max.x; if (y > max.y) y = max.y; if (z > max.z) z = max.z; if (w > max.w) w = max.w;}

public:
	static const FMVector4 Zero;
	static const FMVector4 One;
	static const FMVector4 AlphaOne;
};
#line 128
inline FMVector4 operator *(const FMVector4& a, float b) { return FMVector4(a.x * b, a.y * b, a.z * b, a.w * b); }
#line 134
inline FMVector4 operator *(float a, const FMVector4& b) { return FMVector4(a * b.x, a * b.y, a * b.z, a * b.w); }
#line 140
inline FMVector4 operator +(const FMVector4& a, const FMVector4& b) { return FMVector4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w); }
#line 146
inline FMVector4 operator -(const FMVector4& a, const FMVector4& b) { return FMVector4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w); }
#line 152
inline FMVector4& operator +=(FMVector4& b, const FMVector4& a) { b.x += a.x; b.y += a.y; b.z += a.z; b.w += a.w; return b; }
#line 158
inline FMVector4& operator -=(FMVector4& b, const FMVector4& a) { b.x -= a.x; b.y -= a.y; b.z -= a.z; b.w -= a.w; return b; }
#line 164
inline FMVector4& operator *=(FMVector4& b, float a) { b.x *= a; b.y *= a; b.z *= a; b.w *= a; return b; }
#line 170
inline FMVector4& operator /=(FMVector4& b, float a) { b.x /= a; b.y /= a; b.z /= a; b.w /= a; return b; }
#line 176
inline float operator *(const FMVector4& a, const FMVector4& b) { return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w; }
#line 183
inline bool IsEquivalent(const FMVector4& p, const FMVector4& q) { return IsEquivalent(p.x, q.x) && IsEquivalent(p.y, q.y) && IsEquivalent(p.z, q.z) && IsEquivalent(p.w, q.w); }
inline bool operator==(const FMVector4& p, const FMVector4& q) { return IsEquivalent(p.x, q.x) && IsEquivalent(p.y, q.y) && IsEquivalent(p.z, q.z) && IsEquivalent(p.w, q.w); }
#line 187
typedef fm::vector<FMVector4> FMVector4List;

#endif
#line 175 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
// #include "FMath/FMColor.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMColor.h"
#ifndef _FM_COLOR_H_
#define _FM_COLOR_H_
#line 23
class FCOLLADA_EXPORT FMColor
{
public:
	uint8 r;
	uint8 g;
	uint8 b;
	uint8 a;
#line 33
	FMColor() {}
#line 43
	FMColor(uint8 _r, uint8 _g, uint8 _b, uint8 _a = 255) { r = _r; g = _g; b = _b; a = _a; }
#line 50
	FMColor(uint32 hex) { r = uint8((hex & 0xFF000000) >> 24); g = uint8((hex & 0xFF0000) >> 16); b = uint8((hex & 0xFF00) >> 8); a = uint8(hex & 0xFF); }
#line 62
	FMColor(const float* components, uint32 componentCount);
#line 67
	FMColor(const FMVector3& v);
#line 71
	FMColor(const FMVector4& v);
#line 78
	void ToFloats(float* components, uint32 componentCount);
#line 82
	inline uint8 ComponentAverage() { return uint8((uint32(r) + uint32(g) + uint32(b)) / 3); }
#line 86
	operator uint8*() { return &r; }
};
#line 93
inline FMColor operator*(float s, const FMColor& c) { return FMColor(uint8(c.r * s), uint8(c.g * s), uint8(c.b * s), uint8(c.a * s)); }

#endif
#line 176 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
// #include "FMath/FMMatrix33.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMMatrix33.h"
#ifndef _FM_MATRIX33_H_
#define _FM_MATRIX33_H_
#line 23
class FCOLLADA_EXPORT FMMatrix33
{
public:
	float m[3][3];
#line 36
	FMMatrix33(float* _m);
#line 43
	#ifndef _DEBUG
	FMMatrix33() {}
	#else
	FMMatrix33() { memset(m, 55, 3 * 3 * sizeof(float)); }
	#endif
#line 57
	operator float*() { return &m[0][0]; }
#line 67
	operator const float*() const { return &m[0][0]; }
#line 75
	float* operator[](int a) { return m[a]; }
#line 84
	FMMatrix33& operator=(const FMMatrix33& copy);
#line 91
	FMMatrix33 Transposed() const;
#line 98
	FMMatrix33 Inverted() const;

public:
	static FMMatrix33 identity;
#line 110
	static FMMatrix33 RotationMatrix(float angle);
#line 119
	static FMMatrix33 TranslationMatrix(float tx, float ty);
#line 128
	static FMMatrix33 ScaleMatrix(float sx, float sy);
#line 139
	static inline FMMatrix33 TranslationMatrix(FMVector2 translation) { return TranslationMatrix(translation.u, translation.v); }
#line 150
	static inline FMMatrix33 ScaleMatrix(FMVector2 scale) { return ScaleMatrix(scale.u, scale.v); }
};
#line 160
FMMatrix33 FCOLLADA_EXPORT operator*(const FMMatrix33& m1, const FMMatrix33& m2);

#endif
#line 177 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
// #include "FMath/FMMatrix44.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMMatrix44.h"
#ifndef _FM_MATRIX44_H_
#define _FM_MATRIX44_H_
#line 22
class FCOLLADA_EXPORT
ALIGN_STRUCT(16)
FMMatrix44
{
public:

	float m[4][4];
#line 35
	FMMatrix44(const float* _m);
	FMMatrix44(const double* _m);
#line 42
	#ifndef _DEBUG
	inline FMMatrix44() {}
	#else
	inline FMMatrix44() { memset(m, 55, 16 * sizeof(float)); }
	#endif
#line 53
	inline operator float*() { return &m[0][0]; }
	inline operator const float*() const { return &m[0][0]; }
#line 59
	template <class Integer> float* operator[](Integer a) { return m[a]; }
	template <class Integer> const float* operator[](Integer a) const { return m[a]; }
#line 66
	FMMatrix44& operator=(const FMMatrix44& copy);
#line 73
	void Set(const float* _m);
	void Set(const double* _m);
#line 78
	FMMatrix44 Transposed() const;
#line 82
	FMMatrix44 Inverted() const;
#line 86
	float Determinant() const;
#line 99
	void Decompose(FMVector3& scale, FMVector3& rotation, FMVector3& translation, float& inverted) const;
#line 111
	void Recompose(const FMVector3& scale, const FMVector3& rotation, const FMVector3& translation, float inverted = 1.0f);
#line 116
	FMVector3 TransformCoordinate(const FMVector3& coordinate) const;
	FMVector4 TransformCoordinate(const FMVector4& coordinate) const;
#line 122
	FMVector3 TransformVector(const FMVector3& v) const;
#line 126
	inline const FMVector3& GetTranslation() const { return GetAxis(FMath::TRANS); }
	inline FMVector3& GetTranslation() { return GetAxis(FMath::TRANS); }
#line 131
	inline void SetTranslation(const FMVector3& translation) { GetTranslation() = translation; }
#line 136
	inline const FMVector3& GetAxis(FMath::AXIS axis) const { return *(FMVector3*)(size_t)(m[axis]); }
	inline FMVector3& GetAxis(FMath::AXIS axis) { return *(FMVector3*)(size_t)(m[axis]); }

public:
	static FMMatrix44 Identity;
#line 147
	static FMMatrix44 TranslationMatrix(const FMVector3& translation);
#line 154
	static FMMatrix44 AxisRotationMatrix(const FMVector3& axis, float angle);
#line 159
	static FMMatrix44 XAxisRotationMatrix(float angle);
#line 164
	static FMMatrix44 YAxisRotationMatrix(float angle);
#line 169
	static FMMatrix44 ZAxisRotationMatrix(float angle);
#line 176
	static FMMatrix44 EulerRotationMatrix(const FMVector3& rotation);
#line 181
	static FMMatrix44 ScaleMatrix(const FMVector3& scale);
#line 188
	static FMMatrix44 LookAtMatrix(const FMVector3& eye, const FMVector3& target, const FMVector3& up);
};
#line 197
FMMatrix44 FCOLLADA_EXPORT operator*(const FMMatrix44& m1, const FMMatrix44& m2);
#line 205
FMVector4 FCOLLADA_EXPORT operator*(const FMMatrix44& m, const FMVector4& v);
#line 214
FMMatrix44 FCOLLADA_EXPORT operator*(float a, const FMMatrix44& m);
#line 220
bool FCOLLADA_EXPORT IsEquivalent(const FMMatrix44& m1, const FMMatrix44& m2);
inline bool operator==(const FMMatrix44& m1, const FMMatrix44& m2) { return IsEquivalent(m1, m2); }
#line 229
inline FMMatrix44& operator*=(FMMatrix44& m1, const FMMatrix44& m2) { return m1 = m1 * m2; }
#line 232
typedef fm::vector<FMMatrix44> FMMatrix44List;

#endif
#line 179 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
#endif
#line 82 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
#endif
#line 85
#ifndef NO_LIBXML
#define HAS_LIBXML
#if !defined(FCOLLADA_DLL) || defined(FCOLLADA_INTERNAL)
#define LIBXML_STATIC
#endif
#ifndef __XML_TREE_H__
// #include <libxml/tree.h>
#endif
#else
typedef struct _xmlNode xmlNode;
#endif
#line 98
#define SAFE_DELETE(ptr) if ((ptr) != NULL) { delete (ptr); (ptr) = NULL; }
#define SAFE_DELETE_ARRAY(ptr) if (ptr != NULL) { delete [] ptr; ptr = NULL; }
#define SAFE_FREE(ptr) if (ptr != NULL) { free(ptr); ptr = NULL; }
#define SAFE_RELEASE(ptr) { if ((ptr) != NULL) { (ptr)->Release(); (ptr) = NULL; } }
#define CLEAR_POINTER_VECTOR(a) { size_t l = (a).size(); for (size_t i = 0; i < l; ++i) SAFE_DELETE((a)[i]); (a).clear(); }
#define CLEAR_ARRAY_VECTOR(a) { size_t l = (a).size(); for (size_t i = 0; i < l; ++i) SAFE_DELETE_ARRAY((a)[i]); (a).clear(); }
#define CLEAR_POINTER_STD_PAIR_CONT(cont, a){ for (cont::iterator it = (a).begin(); it != (a).end(); ++it) SAFE_DELETE((*it).second); (a).clear(); }
#define CLEAR_POINTER_STD_CONT(cont, a){ for (cont::iterator it = (a).begin(); it != (a).end(); ++it) SAFE_DELETE((*it)); (a).clear(); }
#line 108
#ifndef _FU_OBJECT_TYPE_H_
// #include "FUtils/FUObjectType.h"   (FCollada 3.05B, pasted in place)
#line 17 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUObjectType.h"
#ifndef _FU_OBJECT_TYPE_H_
#define _FU_OBJECT_TYPE_H_
#line 30
class FCOLLADA_EXPORT FUObjectType
{
private:
	const FUObjectType* parent;
	const char* typeName;

public:
#line 43
	FUObjectType(const char* typeName);
#line 50
	FUObjectType(const FUObjectType& parent, const char* typeName);
#line 55
	const FUObjectType& GetParent() const { return (parent != NULL) ? *parent : *this; }
#line 63
	bool Includes(const FUObjectType& otherType) const;
#line 68
	inline bool operator==(const FUObjectType& otherType) const { return &otherType == this; }
#line 73
	inline bool operator!=(const FUObjectType& otherType) const { return &otherType != this; }
#line 77
	inline const char* GetTypeName() const { return typeName; }
};
#line 86
#define DeclareObjectType(_ParentClass) \
private: \
	static class FUObjectType __classType; \
	typedef _ParentClass Parent; \
public: \
	static const FUObjectType& GetClassType() { return __classType; } \
	virtual const FUObjectType& GetObjectType() const { return __classType; } \
	virtual void Release(); \
private:
#line 102
#define ImplementObjectType(ClassName) \
	FUObjectType ClassName::__classType(Parent::GetClassType(), #ClassName); \
	void ClassName::Release() { Detach(); delete this; }
#line 107
#define ImplementObjectTypeT(ClassName) \
	template <> \
	FUObjectType ClassName::__classType(Parent::GetClassType(), #ClassName); \
	template <> \
	void ClassName::Release() { Detach(); delete this; }
#line 122
#define ImplementObjectType_NoDefaultRelease(ClassName) \
	FUObjectType ClassName::__classType(Parent::GetClassType(), #ClassName);

#endif
#line 110 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
#endif
#ifndef _FU_OBJECT_H_
// #include "FUtils/FUObject.h"   (FCollada 3.05B, pasted in place)
#line 15 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUObject.h"
#ifndef _FU_OBJECT_H_
#define _FU_OBJECT_H_

#ifndef _FU_OBJECT_TYPE_H_
// #include "FUtils/FUObjectType.h"   (not taken)
#endif

class FUObjectOwner;
#line 30
class FCOLLADA_EXPORT FUObject
{
private:
	static class FUObjectType* baseObjectType;

	FUObjectOwner* objectOwner;

protected:
#line 40
	static const uint32 nextAvailableBit = 0;

public:
#line 46
	FUObject();
#line 49
	virtual ~FUObject();
#line 55
	virtual void Release();
#line 59
	static const FUObjectType& GetClassType() { return *baseObjectType; }
#line 63
	virtual const FUObjectType& GetObjectType() const { return *baseObjectType; }
#line 68
	inline bool IsType(const FUObjectType& _type) const { return GetObjectType() == _type; }
#line 73
	inline bool HasType(const FUObjectType& _type) const { return GetObjectType().Includes(_type); }

protected:
#line 78
	void Detach();

private:
	friend class FUObjectOwner;
#line 85
	inline void SetObjectOwner(FUObjectOwner* owner)
	{
#line 90
		FUAssert(objectOwner == NULL || owner == NULL, return);
		objectOwner = owner;
	}
};
#line 101
class FUObjectOwner
{
protected:
#line 106
	inline void AttachObject(FUObject* object) { object->SetObjectOwner(this); }
#line 112
	inline void DetachObject(FUObject* object)
	{

		FUAssert(object->objectOwner == this, return);
		object->SetObjectOwner(NULL);
	}

public:

	virtual ~FUObjectOwner() {}
#line 125
	virtual void OnOwnedObjectReleased(FUObject* object) = 0;
};
#line 133
template <class HigherClassType>
inline HigherClassType* DynamicCast(FUObject* object) { return object->HasType(HigherClassType::GetClassType()) ? (HigherClassType*) object : NULL; }
#line 146
template <class ObjectClass = FUObject>
class FUObjectRef : public FUObjectOwner
{
private:
	typedef fm::pvector<ObjectClass> Parent;
#line 153
	ObjectClass* ptr;

public:
#line 159
	FUObjectRef(ObjectClass* _ptr = NULL)
	:	ptr(_ptr)
	{
		if (_ptr != NULL) AttachObject((FUObject*) ptr);
	}
#line 167
	~FUObjectRef()
	{
		if (ptr != NULL)
		{
			DetachObject((FUObject*) ptr);
			((FUObject*) ptr)->Release();
#ifdef _DEBUG

			ptr = NULL;
#endif

		}
	}
#line 184
	FUObjectRef<ObjectClass>& operator=(ObjectClass* _ptr)
	{
		if (ptr != NULL) ((FUObject*) ptr)->Release();
		FUAssert(ptr == NULL, return *this);
		ptr = _ptr;
		if (_ptr != NULL) AttachObject((FUObject*) ptr);
		return *this;
	}
#line 199
	FUObjectRef<ObjectClass>& operator=(FUObjectRef<ObjectClass>& _ptr)
	{
		operator=(_ptr.ptr);
		_ptr.ptr = NULL;
		return *this;
	}
#line 208
	inline ObjectClass& operator*() { FUAssert(ptr != NULL, return *ptr); return *ptr; }
	inline const ObjectClass& operator*() const { FUAssert(ptr != NULL, return *ptr); return *ptr; }
	inline ObjectClass* operator->() { return ptr; }
	inline const ObjectClass* operator->() const { return ptr; }
	inline operator ObjectClass*() { return ptr; }
	inline operator const ObjectClass*() const { return ptr; }

protected:
#line 219
	virtual void OnOwnedObjectReleased(FUObject* object)
	{
		FUAssert((size_t) object == (size_t) ptr, return);
		ptr = NULL;
	}
};
#line 233
template <typename ObjectClass = FUObject>
class FUObjectContainer : private fm::pvector<ObjectClass>, public FUObjectOwner
{
private:
	typedef fm::pvector<ObjectClass> Parent;
public:
	typedef ObjectClass** iterator;
	typedef const ObjectClass** const_iterator;

public:
#line 245
	virtual ~FUObjectContainer() { clear(); }
#line 248
	void clear()
	{
		while (size() > 0)
		{
			FUObject* last = (FUObject*) Parent::back();
			Parent::pop_back();
			DetachObject(last);
			last->Release();
		}
	}
#line 261
	inline size_t size() const { return Parent::size(); }
#line 265
	inline bool empty() const { return Parent::empty(); }
#line 269
	ObjectClass*& front() { return (ObjectClass*&) Parent::front(); }
	const ObjectClass*& front() const { return (const ObjectClass*&) Parent::front(); }
#line 274
	ObjectClass*& back() { return (ObjectClass*&) Parent::back(); }
	const ObjectClass*& back() const { return (const ObjectClass*&) Parent::back(); }
#line 280
	inline ObjectClass* at(size_t index) { return (ObjectClass*) Parent::at(index); }
	inline const ObjectClass* at(size_t index) const { return (const ObjectClass*) Parent::at(index); }
	template <class INTEGER> inline ObjectClass* operator[](INTEGER index) { return at(index); }
	template <class INTEGER> inline const ObjectClass* operator[](INTEGER index) const { return at(index); }
#line 287
	inline iterator begin() { return (iterator) Parent::begin(); }
	inline const_iterator begin() const { return (const_iterator) Parent::begin(); }
#line 292
	inline iterator end() { return (iterator) Parent::end(); }
	inline const_iterator end() const { return (const_iterator) Parent::end(); }
#line 299
	inline iterator find(const ObjectClass* item) { return (iterator) Parent::find(item); }
	inline const_iterator find(const ObjectClass* item) const { return (const_iterator) Parent::find(item); }
#line 304
	inline void push_back(ObjectClass* object)
	{
		AttachObject((FUObject*) object);
		Parent::push_back(object);
	}
#line 314
	iterator insert(iterator _iterator, ObjectClass* object)
	{
		AttachObject((FUObject*) object);
		return (iterator) Parent::insert(_iterator, object);
	}
#line 323
	inline void insert(size_t index, ObjectClass* object) { insert(begin() + index, object); }
#line 330
	template <class _It>
	void insert(iterator _where, _It _startIterator, _It _endIterator)
	{
		if (_startIterator < _endIterator)
		{
			size_t relativeWhere = _where - begin();
			size_t count = _endIterator - _startIterator;
			Parent::insert(Parent::begin() + relativeWhere, count);
			_where = begin() + relativeWhere;

			for (; _startIterator != _endIterator; ++_startIterator, ++_where)
			{
				*_where = const_cast<ObjectClass*>((const ObjectClass*)(*_startIterator));
				AttachObject((FUObject*) *_startIterator);
			}
		}
	}
#line 349
	void pop_back()
	{
		FUAssert(!Parent::empty(), return);
		FUObject* last = (FUObject*) Parent::back();
		Parent::pop_back();
		DetachObject(last);
		last->Release();
	}
#line 361
	void pop_front()
	{
		FUAssert(!Parent::empty(), return);
		FUObject* first = (FUObject*) Parent::front();
		Parent::pop_front();
		DetachObject(first);
		first->Release();
	}
#line 372
	iterator erase(iterator _it)
	{
		FUAssert(contains(*_it), return _it);
		FUObject* o = (FUObject*) * _it;
		iterator it = (iterator) Parent::erase(_it);
		DetachObject(o);
		o->Release();
		return it;
	}
#line 385
	inline void erase(iterator first, iterator last)
	{
		for (iterator it = first; it != last; ++it)
		{
			FUObject* o = (FUObject*) * it;
			DetachObject(o);
			o->Release();
		}
		Parent::erase(first, last);
	}
#line 399
	inline void erase(size_t first, size_t last) { erase(begin() + first, begin() + last); }
#line 404
	inline bool erase(const ObjectClass* value)
	{
		iterator it = find(value);
		if (it == Parent::end()) return false;
		erase(it);
		return true;
	}
#line 416
	iterator Detach(iterator _it)
	{
		FUAssert(contains(*_it), return _it);
		FUObject* o = (FUObject*) * _it;
		iterator it = (iterator) Parent::erase(_it);
		DetachObject(o);
		return it;
	}
#line 430
	inline void Detach(iterator first, iterator last)
	{
		for (iterator it = first; it != last; ++it)
		{
			FUObject* o = (FUObject*) * it;
			DetachObject(o);
		}
		Parent::erase(first, last);
	}
#line 445
	inline void Detach(size_t first, size_t last) { Detach(begin() + first, begin() + last); }
#line 452
	inline bool Detach(const ObjectClass* value)
	{
		iterator it = find(value);
		if (it == Parent::end()) return false;
		Detach(it);
		return true;
	}
#line 462
inline void erase(size_t index) { erase(begin() + index); }
#line 467
	inline void reserve(size_t count) { Parent::reserve(count); }
#line 472
	inline bool contains(const ObjectClass* value) const { return Parent::contains(value); }
#line 479
	DEPRECATED(3.05A, "FUObject::Release()") bool release(const ObjectClass* value)
	{
		ObjectClass** it = find(value);
		if (it != Parent::end()) { ((FUObject*) value)->Release(); return true; }
		return false;
	}
#line 488
	ObjectClass* Add()
	{
		ObjectClass* object = new ObjectClass();
		push_back(object);
		return object;
	}
#line 498
	template <class A1>
	ObjectClass* Add(const A1& arg1)
	{
		ObjectClass* object = new ObjectClass(arg1);
		push_back(object);
		return object;
	}
#line 510
	template <class A1, class A2>
	ObjectClass* Add(const A1& arg1, const A2& arg2)
	{
		ObjectClass* object = new ObjectClass(arg1, arg2);
		push_back(object);
		return object;
	}
#line 523
	template <class A1, class A2, class A3>
	ObjectClass* Add(const A1& arg1, const A2& arg2, const A3& arg3)
	{
		ObjectClass* object = new ObjectClass(arg1, arg2, arg3);
		push_back(object);
		return object;
	}

protected:
#line 534
	virtual void OnOwnedObjectReleased(FUObject* object)
	{
		FUAssert(Parent::contains(object), return);
		Parent::erase((ObjectClass*) object);
	}
};

#endif
#line 113 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
#endif
#ifndef _FU_TRACKER_H_
// #include "FUtils/FUTracker.h"   (FCollada 3.05B, pasted in place)
#line 9 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUTracker.h"
#ifndef _FU_TRACKER_H_
#define _FU_TRACKER_H_
#line 17
#ifndef _FU_OBJECT_H_
// #include "FUtils/FUObject.h"   (not taken)
#endif

class FUTracker;
#line 32
class FCOLLADA_EXPORT FUTrackable : public FUObject
{
private:
	DeclareObjectType(FUObject);
#line 38
	typedef fm::pvector<FUTracker> FUTrackerList;
	FUTrackerList trackers;

public:
#line 45
	FUTrackable();
#line 49
	virtual ~FUTrackable();
#line 54
	size_t GetTrackerCount() const { return trackers.size(); }

protected:
#line 60
	void Detach();

private:
	friend class FUTracker;
	void AddTracker(FUTracker* tracker);
	void RemoveTracker(FUTracker* tracker);
	bool HasTracker(const FUTracker* tracker) const;
};
#line 77
class FCOLLADA_EXPORT FUTracker
{
public:

	virtual ~FUTracker() {}
#line 86
	virtual void OnObjectReleased(FUTrackable* object) = 0;
#line 90
	virtual bool TracksObject(const FUTrackable* object) const { return object != NULL ? object->HasTracker(this) : false; }

protected:
#line 95
	void TrackObject(FUTrackable* object) { if (object) object->AddTracker(this); }
#line 99
	void UntrackObject(FUTrackable* object) { if (object) object->RemoveTracker(this); }
};
#line 108
template <class ObjectClass = FUTrackable>
class FUTrackedPtr : public FUTracker
{
protected:

	ObjectClass* ptr;

public:
#line 119
	FUTrackedPtr(ObjectClass* _ptr = NULL) : ptr(_ptr)
	{
		if (ptr != NULL) FUTracker::TrackObject((FUTrackable*) ptr);
		ptr = ptr;
	}
#line 127
	~FUTrackedPtr()
	{
		if (ptr != NULL) FUTracker::UntrackObject((FUTrackable*) ptr);
		ptr = NULL;
	}
#line 136
	FUTrackedPtr& operator=(ObjectClass* _ptr)
	{
		if (ptr != NULL) FUTracker::UntrackObject((FUTrackable*) ptr);
		ptr = _ptr;
		if (ptr != NULL) FUTracker::TrackObject((FUTrackable*) ptr);
		return *this;
	}
	inline FUTrackedPtr& operator=(const FUTrackedPtr& _ptr) { return operator=(_ptr.ptr); }
#line 147
	virtual bool TracksObject(const FUTrackable* object) const { return (FUTrackable*) ptr == object; }
#line 151
	inline ObjectClass& operator*() { FUAssert(ptr != NULL, return *ptr); return *ptr; }
	inline const ObjectClass& operator*() const { FUAssert(ptr != NULL, return *ptr); return *ptr; }
	inline ObjectClass* operator->() { return ptr; }
	inline const ObjectClass* operator->() const { return ptr; }
	inline operator ObjectClass*() { return ptr; }
	inline operator const ObjectClass*() const { return ptr; }

protected:
#line 162
	virtual void OnObjectReleased(FUTrackable* object)
	{
		FUAssert(TracksObject(object), return);
		ptr = NULL;
	}
};
#line 176
template <class ObjectClass = FUTrackable>
class FUTrackedList : private fm::pvector<ObjectClass>, FUTracker
{
public:
	typedef fm::pvector<ObjectClass> Parent;
	typedef ObjectClass* item;
	typedef const ObjectClass* const_item;
	typedef item* iterator;
	typedef const_item* const_iterator;
#line 187
	virtual ~FUTrackedList() { clear(); }
#line 190
	void clear()
	{
		for (iterator it = begin(); it != end(); ++it)
		{
			FUTracker::UntrackObject((FUTrackable*) (*it));
		}
		Parent::clear();
	}
#line 201
	ObjectClass*& front() { return (ObjectClass*&) Parent::front(); }
	const ObjectClass*& front() const { return (const ObjectClass*&) Parent::front(); }
#line 206
	ObjectClass*& back() { return (ObjectClass*&) Parent::back(); }
	const ObjectClass*& back() const { return (const ObjectClass*&) Parent::back(); }
#line 212
	inline ObjectClass* at(size_t index) { return (ObjectClass*) Parent::at(index); }
	inline const ObjectClass* at(size_t index) const { return (const ObjectClass*) Parent::at(index); }
	template <class INTEGER> inline ObjectClass* operator[](INTEGER index) { return at(index); }
	template <class INTEGER> inline const ObjectClass* operator[](INTEGER index) const { return at(index); }
#line 219
	inline iterator begin() { return (iterator) Parent::begin(); }
	inline const_iterator begin() const { return (const_iterator) Parent::begin(); }
#line 224
	inline iterator end() { return (iterator) Parent::end(); }
	inline const_iterator end() const { return (const_iterator) Parent::end(); }
#line 231
	inline iterator find(const ObjectClass* item) { return (iterator) Parent::find(item); }
	inline const_iterator find(const ObjectClass* item) const { return (const_iterator) Parent::find(item); }
#line 236
	inline void push_back(ObjectClass* object)
	{
		FUTracker::TrackObject((FUTrackable*) object);
		Parent::push_back(object);
	}
#line 246
	iterator insert(iterator _iterator, ObjectClass* object)
	{
		FUTracker::TrackObject(object);
		return (iterator) Parent::insert(_iterator, object);
	}
#line 255
	inline void insert(size_t index, ObjectClass* object) { insert(begin() + index, object); }
#line 262
	template <class _It>
	void insert(iterator _where, _It _startIterator, _It _endIterator)
	{
		if (_startIterator < _endIterator)
		{
			size_t relativeWhere = _where - begin();
			size_t count = _endIterator - _startIterator;
			Parent::insert(Parent::begin() + relativeWhere, count);
			_where = begin() + relativeWhere;

			for (; _startIterator != _endIterator; ++_startIterator, ++_where)
			{
				*_where = const_cast<ObjectClass*>((const ObjectClass*)(*_startIterator));
				FUTracker::TrackObject(const_cast<FUTrackable*>((const FUTrackable*) (*_startIterator)));
			}
		}
	}
#line 281
	void pop_back()
	{
		if (!Parent::empty())
		{
			FUTracker::UntrackObject(back());
			Parent::pop_back();
		}
	}
#line 292
	iterator erase(iterator _it)
	{
		FUTracker::UntrackObject((FUTrackable*) *_it);
		return (iterator) Parent::erase(_it);
	}
#line 301
	inline void erase(iterator first, iterator last)
	{
		for (iterator it = first; it != last; ++it) FUTracker::UntrackObject((FUTrackable*) *it);
		Parent::erase(first, last);
	}
#line 310
	inline void erase(size_t first, size_t last) { erase(begin() + first, begin() + last); }
#line 315
	inline bool erase(const ObjectClass* value)
	{
		iterator it = Parent::find(value);
		if (it != Parent::end())
		{
			FUTracker::UntrackObject((FUTrackable*) *it);
			Parent::erase(it);
			return true;
		}
		return false;
	}
#line 329
	inline void erase(size_t index) { erase(begin() + index); }
#line 333
	virtual bool TracksObject(const FUTrackable* object) const { return Parent::contains((ObjectClass*) object); }
#line 340
	FUTrackedList<ObjectClass>& operator= (const FUTrackedList<ObjectClass>& other) { clear(); insert(end(), other.begin(), other.end()); return *this; }

	inline bool empty() const { return Parent::empty(); }
	inline size_t size() const { return Parent::size(); }
	void reserve(size_t count) { Parent::reserve(count); }
	inline bool contains(const ObjectClass* value) const { return Parent::contains(value); }
#line 351
	inline bool release(const ObjectClass* value)
	{
		ObjectClass** it = find(value);
		if (it != Parent::end()) { erase(it); ((FUTrackable*) value)->Release(); return true; }
		return false;
	}
#line 359
	void pop_front()
	{
		if (!Parent::empty())
		{
			FUTracker::UntrackObject(front());
			Parent::pop_front();
		}
	}

protected:
#line 371
	virtual void OnObjectReleased(FUTrackable* object)
	{
		FUAssert(TracksObject(object), return);
		Parent::erase((ObjectClass*) object);
	}
};

#endif
#line 116 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
#endif
#line 119
#ifndef _FU_STRING_H_
// #include "FUtils/FUString.h"   (FCollada 3.05B, pasted in place)
#line 15 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUString.h"
#ifndef _FU_STRING_H_
#define _FU_STRING_H_

#ifndef _FM_ARRAY_H_
// #include "FMath/FMArray.h"   (not taken)
#endif
#line 23
extern FCOLLADA_EXPORT const char* emptyCharString;

extern FCOLLADA_EXPORT const fchar* emptyFCharString;
#line 28
namespace fm
{
#line 35
	template <class CH>
	class FCOLLADA_EXPORT stringT : public fm::vector<CH, true>
	{
	public:
		typedef fm::vector<CH, true> Parent;

	public:
#line 45
		static const size_t npos = ~(size_t)0;
#line 48
		stringT() : Parent() {}
#line 52
		stringT(const stringT& c) : Parent(c) {}
#line 56
		stringT(const CH* c) : Parent()
		{
			append(c);
			if (c == NULL || (*c) == 0) push_back((CH) 0);
		}
#line 66
		stringT(const CH* c, size_t length) : Parent()
		{
			if (c == NULL || length == 0) return;

			if (length != npos)
			{
				Parent::resize(length + 1);
				memcpy(Parent::begin(), c, sizeof(CH) * length);
				Parent::back() = 0;
			}
			else
			{
				append(c);
				if (c == NULL || (*c) == 0) push_back((CH) 0);
			}
		}
#line 86
		stringT(size_t length, const CH& c) : Parent()
		{
			Parent::reserve(length + 1);
			Parent::insert(Parent::begin(), length, c);
			Parent::push_back((CH) 0);
		}
#line 96
		inline size_t length() const { return Parent::size() > 1 ? Parent::size() - 1 : 0; }
		inline size_t size() const { return Parent::size() > 1 ? Parent::size() - 1 : 0; }
#line 102
		inline CH& back() { return *(Parent::end() - 2); }
		inline const CH& back() const { return *(Parent::end() - 2); }
#line 107
		inline void pop_back() { if (Parent::size() > 0) { Parent::pop_back(); Parent::back() = 0; } }
#line 112
		inline bool empty() const { return Parent::size() <= 1; }
#line 119
		stringT substr(size_t start, size_t count = npos) const
		{
			if (start >= length()) return stringT();
			if (count == npos || count + start > length()) count = length() - start;
			return stringT(c_str() + start, count);
		}
#line 128
		inline void append(const stringT& str)
		{
			insert(npos, str);
		}
#line 137
		inline void append(const CH* str, size_t count=npos)
		{
			insert(npos, str, count);
		}
#line 144
		void append(const CH& c)
		{
			if (c != 0)
			{
				size_t originalSize = length();
				Parent::resize(originalSize + 2);
				*(Parent::end() - 2) = c;
				Parent::back() = 0;
			}
		}
#line 160
		void insert(size_t offset, const CH* str, size_t count=npos)
		{
			if (str != NULL && (*str != 0))
			{
				size_t originalSize = length();
				offset = min(offset, originalSize);

				size_t str_length = 0;
				const CH* s = str;
				while(*s != 0 && str_length < count) { ++s; ++str_length; }
				resize(originalSize + str_length);
				if (offset < originalSize)
				{
					memmove(Parent::begin() + offset + str_length, Parent::begin() + offset, (originalSize - offset) * sizeof(CH));
				}
				memcpy(Parent::begin() + offset, str, sizeof(CH) * str_length);
				Parent::back() = 0;
			}
		}
#line 183
		void insert(size_t offset, const stringT& str)
		{
			size_t str_length = str.length();
			if (str_length > 0)
			{
				size_t originalSize = length();
				offset = min(offset, originalSize);
				resize(originalSize + str_length);
				if (offset < originalSize)
				{
					memmove(Parent::begin() + offset + str_length, Parent::begin() + offset, (originalSize - offset) * sizeof(CH));
				}
				memcpy(Parent::begin() + offset, str.c_str(), sizeof(CH) * str_length);
			}
		}
#line 201
		const CH* c_str() const
		{
			static CH empty = 0;
			if (Parent::size() == 0) return &empty;
			return Parent::begin();
		}
		inline operator const CH*() const { return c_str(); }
#line 214
		size_t find(const CH& character, size_t offset=0) const
		{
			if (character > 0)
			{
				for (const CH* it = Parent::begin() + offset; it < Parent::end(); ++it)
				{
					if ((*it) == character) return it - Parent::begin();
				}
			}
			return npos;
		}
#line 232
		size_t find(const stringT& str, size_t offset=0) const
		{
			if (str.length() > 0 && length() >= str.length())
			{
				CH firstMatch = str.front();
				const CH* end_fence = Parent::end() - str.size() + 1;
				for (const CH* it = Parent::begin() + offset; it < end_fence; ++it)
				{
					if ((*it) == firstMatch)
					{
						const CH* it2 = it;
						const CH* sit = str.begin();
						const CH* endIt = (*(str.end() - 1) == 0) ? str.end() - 1 : str.end();
						for (; it2 != Parent::end() && sit != endIt; ++sit, ++it2)
						{
							if ((*sit) != (*it2)) break;
						}
						if (sit == endIt) return it - Parent::begin();
					}
				}
			}
			return npos;
		}
#line 261
		size_t find(const CH* c, size_t offset=0) const
		{
			size_t length = 0; const CH* d = c; while (*d != 0) { ++length; ++d; }
			if (length > 0 && Parent::size() >= length)
			{
				const CH* end_fence = Parent::end() - length + 1;
				for (const CH* it = Parent::begin() + offset; it < end_fence; ++it)
				{
					if ((*it) == (*c))
					{
						const CH* it2 = it;
						for (d = c; it2 != Parent::end() && (*d) != 0; ++it2, ++d)
						{
							if ((*it2) != (*d)) break;
						}
						if (*d == 0) return it - Parent::begin();
					}
				}
			}
			return npos;
		}
#line 288
		size_t rfind(const CH& character, size_t offset=0) const
		{
			size_t ret = npos;
			if (character > 0)
			{
				for (const CH* it = Parent::begin() + offset; it < Parent::end(); ++it)
				{
					if ((*it) == character) ret = it - Parent::begin();
				}
			}
			return ret;
		}
#line 307
		size_t rfind(const stringT& str, size_t offset=0) const
		{
			size_t ret = npos;
			if (str.length() > 0 && length() >= str.length())
			{
				CH firstMatch = str.front();
				const CH* end_fence = Parent::end() - str.size() + 1;
				for (const CH* it = Parent::begin() + offset; it < end_fence; ++it)
				{
					if ((*it) == firstMatch)
					{
						const CH* it2 = it;
						const CH* sit = str.begin();
						const CH* endIt = (*(str.end() - 1) == 0) ? str.end() - 1 : str.end();
						for (; it2 != Parent::end() && sit != endIt; ++sit, ++it2)
						{
							if ((*sit) != (*it2)) break;
						}
						if (sit == endIt) ret = it - Parent::begin();
					}
				}
			}
			return ret;
		}
#line 337
		size_t rfind(const CH* c, size_t offset=0) const
		{
			size_t ret = npos;
			size_t length = 0; const CH* d = c; while (*d != 0) { ++length; ++d; }
			if (length > 0 && Parent::size() >= length)
			{
				const CH* end_fence = Parent::end() - length + 1;
				for (const CH* it = Parent::begin() + offset; it < end_fence; ++it)
				{
					if ((*it) == (*c))
					{
						const CH* it2 = it;
						for (d = c; it2 != Parent::end() && (*d) != 0; ++it2, ++d)
						{
							if ((*it2) != (*d)) break;
						}
						if (*d == 0) ret = it - Parent::begin();
					}
				}
			}
			return ret;
		}
#line 365
		size_t find_first_of(const CH* c, size_t offset=0) const
		{
			size_t length = 0; const CH* d = c; while (*d != 0) { ++length; ++d; }
			if (length > 0 && Parent::size() >= length)
			{
				for (const CH* it = Parent::begin() + offset; it < Parent::end(); ++it)
				{
					d = c;
					while (*d != 0 && *d != *it) { ++d; }
					if (*d != 0) return it - Parent::begin();
				}
			}
			return npos;
		}
#line 385
		size_t find_last_of(const CH* c, size_t offset=0) const
		{
			size_t ret = length() - offset;
			size_t length = 0; const CH* d = c; while (*d != 0) { ++length; ++d; }
			if (length > 0 && Parent::size() >= length)
			{
				const CH* end = Parent::end() - (length + offset);
				const CH* begin = Parent::begin();
				for (const CH* it = end; it >= begin; --it)
				{
					d = c;
					while (*d != 0)
					{
						if (*d == *it) return ret;
						++d;
					}
					--ret;
				}
			}
			return npos;
		}
#line 415
		void erase(size_t start=0, size_t end=npos)
		{
			if (start < length() && start < end)
			{
				if (end > length()) end = length();
				Parent::erase(Parent::begin() + start, Parent::begin() + end);
			}
		}
#line 431
		void resize(size_t size)
		{
			Parent::resize(size + 1);
			Parent::back() = 0;
		}
#line 444
		void resize(size_t count, const CH& value)
		{
			Parent::resize(size + 1, value);
			Parent::back() = 0;
		}
	};
#line 452
	typedef stringT<char> string;
#line 458
	template <class CharT> stringT<CharT> operator+(const stringT<CharT>& A, const stringT<CharT>& B) { stringT<CharT> C = A; C.append(B); return C; }
	template <class CharT> stringT<CharT> operator+(const CharT* A, const stringT<CharT>& B) { stringT<CharT> C = A; C.append(B); return C; }
	template <class CharT> stringT<CharT> operator+(const stringT<CharT>& A, const CharT* B) { stringT<CharT> C = A; C.append(B); return C; }
	template <class CharT> stringT<CharT>& operator+=(stringT<CharT>& A, const stringT<CharT>& B) { A.append(B); return A; }
	template <class CharT> stringT<CharT>& operator+=(stringT<CharT>& A, const CharT* B) { A.append(B); return A; }
#line 468
	template <class CharT> stringT<CharT>& operator+=(stringT<CharT>& A, const CharT& B) { A.append(B); return A; }
#line 475
	template <class CharT> bool operator<(const stringT<CharT>& A, const stringT<CharT>& B)
	{
		const CharT* a = A.c_str(); const CharT* b = B.c_str();
		while ((*a) != 0 && (*b) != 0 && (*a) == (*b)) { ++a; ++b; }
		return (*a) < (*b);
	}
#line 486
	template <class CharT> bool operator==(const stringT<CharT>& A, const stringT<CharT>& B)
	{
		if (A.length() != B.length()) return false;
		const CharT* a = A.c_str(); const CharT* b = B.c_str();
		while ((*a) != 0 && (*a) == (*b)) { ++a; ++b; }
		return (*a) == (*b);
	}
#line 498
	template <class CharT> bool operator!=(const stringT<CharT>& A, const stringT<CharT>& B)
	{
		if (A.length() != B.length()) return true;
		const CharT* a = A.c_str(); const CharT* b = B.c_str();
		while ((*a) != 0 && (*a) == (*b)) { ++a; ++b; }
		return (*a) != (*b);
	}
#line 510
	template <class CharT> bool operator!=(const stringT<CharT>& A, const CharT* B)
	{
		if (B == NULL) return true;
		size_t B_length = 0; { const CharT* b = B; while (*b != 0) { ++b; ++B_length; } }
		if (A.length() != B_length) return true;
		const CharT* a = A.c_str(); const CharT* b = B;
		while ((*a) != 0 && (*a) == (*b)) { ++a; ++b; }
		return (*a) != (*b);
	}
};
#line 522
typedef fm::stringT<fchar> fstring;
#line 525
typedef fm::vector<fstring> FStringList;
#line 528
typedef fm::vector<fm::string> StringList;
#line 534
inline bool IsEquivalent(const char* sz1, const char* sz2) { return strcmp(sz1, sz2) == 0; }
inline bool IsEquivalent(const fm::string& sz1, const char* sz2) { return strcmp(sz1.c_str(), sz2) == 0; }
inline bool IsEquivalent(const char* sz1, const fm::string& sz2) { return strcmp(sz1, sz2.c_str()) == 0; }
inline bool IsEquivalent(const fm::string& sz1, const fm::string& sz2) { return strcmp(sz1.c_str(), sz2.c_str()) == 0; }
#line 543
inline bool IsEquivalentI(const char* sz1, const char* sz2) { return _stricmp(sz1, sz2) == 0; }
inline bool IsEquivalentI(const fm::string& sz1, const char* sz2) { return _stricmp(sz1.c_str(), sz2) == 0; }
inline bool IsEquivalentI(const char* sz1, const fm::string& sz2) { return _stricmp(sz1, sz2.c_str()) == 0; }
inline bool IsEquivalentI(const fm::string& sz1, const fm::string& sz2) { return _stricmp(sz1.c_str(), sz2.c_str()) == 0; }
#ifdef UNICODE
inline bool IsEquivalentI(const fchar* sz1, const fchar* sz2) { return fstricmp(sz1, sz2) == 0; }
inline bool IsEquivalentI(const fstring& sz1, const fchar* sz2) { return fstricmp(sz1.c_str(), sz2) == 0; }
inline bool IsEquivalentI(const fchar* sz1, const fstring& sz2) { return fstricmp(sz1, sz2.c_str()) == 0; }
inline bool IsEquivalentI(const fstring& sz1, const fstring& sz2) { return fstricmp(sz1.c_str(), sz2.c_str()) == 0; }
#endif
#line 558
inline bool operator==(const fm::string& sz1, const char* sz2) { return strcmp(sz1.c_str(), sz2) == 0; }

#ifdef UNICODE
#line 565
inline bool IsEquivalent(const fchar* sz1, const fchar* sz2)
{
	return (sz1 == sz2) ? true :
		(sz1 == NULL || sz2 == NULL) ?
			false : fstrcmp(sz1, sz2) == 0;
}
inline bool IsEquivalent(const fstring& sz1, const fchar* sz2) { return IsEquivalent(sz1.c_str(), sz2); }
inline bool IsEquivalent(const fchar* sz1, const fstring& sz2) { return IsEquivalent(sz1, sz2.c_str()); }
inline bool IsEquivalent(const fstring& sz1, const fstring& sz2) { return IsEquivalent(sz1.c_str(), sz2.c_str()); }
#line 579
inline bool operator==(const fstring& sz1, const fchar* sz2) { return IsEquivalent(sz1.c_str(), sz2); }
#endif
#line 583
// #include "FUtils/FUStringBuilder.h"   (FCollada 3.05B, pasted in place)
#line 21 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUStringBuilder.h"
#ifndef _FCU_STRING_BUILDER_
#define _FCU_STRING_BUILDER_
#line 34
template <class Char>
class FCOLLADA_EXPORT FUStringBuilderT
{
private:
	Char* buffer;
	size_t reserved;
	size_t size;

public:

	typedef fm::stringT<Char> String;
#line 48
	FUStringBuilderT(const String& sz);
#line 53
	FUStringBuilderT(const Char* sz);
#line 58
	FUStringBuilderT(Char ch, size_t count);
#line 63
	FUStringBuilderT(size_t reserved);
#line 66
	FUStringBuilderT();
#line 70
	~FUStringBuilderT();
#line 78
	void reserve(size_t length);
#line 82
	inline size_t length() { return size; }
#line 86
	void clear();
#line 92
	inline bool empty() const { return size == 0; }
#line 96
	void append(Char c);
#line 100
	void append(const String& sz);
#line 105
	void append(const Char* sz);
#line 111
	void append(const Char* sz, size_t len);
#line 115
	void append(const FUStringBuilderT& b);
#line 120
	void append(int32 i);
	void append(uint32 i);
	void append(uint64 i);
#line 128
	void appendHex(uint8 i);
	template <class T> inline void appendHex(const T& i) { for (size_t j = 0; j < sizeof(T); ++j) appendHex(*(((uint8*)&i) + j)); }

#if defined(WIN32)
	inline void append(int i) { append((int32) i); }
#ifdef _W64
	inline void append(_W64 unsigned int i) { append((uint32) i); }
#else
	inline void append(unsigned int i) { append((uint32) i); }
#endif
#else
	inline void append(unsigned long i) { append((uint32) i); }
	inline void append(long i) { append((int32) i); }
#endif
#line 149
	void append(float f);
	void append(double f);
#line 154
	void append(const FMVector2& v);
	void append(const FMVector3& v);
	void append(const FMVector4& v);
#line 162
	template<typename TYPE> inline FUStringBuilderT& operator+=(const TYPE& val) { append(val); return *this; }
#line 168
	void appendLine(const Char* sz);
#line 174
	void remove(int32 start);
#line 182
	void remove(int32 start, int32 end);
#line 185
	inline void pop_back() { if (size > 0) --size; }
#line 190
	template<typename TYPE> inline void set(const TYPE& val) { clear(); append(val); }
	template<typename TYPE> inline FUStringBuilderT& operator=(const TYPE& val) { clear(); append(val); return *this; }
#line 195
	String ToString() const;
#line 201
	const Char* ToCharPtr() const;
	inline operator const Char*() const { return ToCharPtr(); }
#line 209
	int32 index(Char c) const;
#line 216
	int32 rindex(Char c) const;
#line 220
	Char back() const { FUAssert(size > 0, return (Char) 0); return buffer[size-1]; }

private:
	void enlarge(size_t minimum);
};

typedef FUStringBuilderT<fchar> FUStringBuilder;
typedef FUStringBuilderT<char> FUSStringBuilder;

#if defined(__APPLE__)
// #include "FUtils/FUStringBuilder.hpp"   (not taken)
#endif

#endif
#line 584 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUString.h"
// #include "FUtils/FUStringConversion.h"   (FCollada 3.05B, pasted in place)
#line 20 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUStringConversion.h"
#ifndef _FCU_STRING_CONVERSION_
#define _FCU_STRING_CONVERSION_

#ifndef UINT_MAX
#define UINT_MAX ~(uint32)0
#endif

class FUDateTime;
#line 45
class FCOLLADA_EXPORT FUStringConversion
{
private: FUStringConversion() {}
public:
#line 53
	static fstring ToFString(const char* value);
	inline static fstring ToFString(const fm::string& value) { return ToFString(value.c_str()); }
#line 59
	static fm::string ToString(const fchar* value);
	inline static fm::string ToString(const fstring& value) { return ToString(value.c_str()); }
#line 65
	template <class CH>
	static FCOLLADA_EXPORT bool ToBoolean(const CH* value);
	template <class CH>
	inline static bool ToBoolean(const fm::stringT<CH>& value) { return ToBoolean(value.c_str()); }
#line 74
	template <class CH>
	static FCOLLADA_EXPORT float ToFloat(const CH** value);
	template <class CH>
	inline static float ToFloat(const CH* value) { return ToFloat(&value); }
	template <class CH>
	inline static float ToFloat(const fm::stringT<CH>& value) { return ToFloat(value.c_str()); }
#line 85
	template <class CH>
	static FCOLLADA_EXPORT int32 ToInt32(const CH** value);
	template <class CH>
	inline static int32 ToInt32(const CH* value) { return ToInt32(&value); }
	template <class CH>
	inline static int32 ToInt32(const fm::stringT<CH>& value) { return ToInt32(value.c_str()); }
#line 96
	template <class CH>
	static FCOLLADA_EXPORT uint32 ToUInt32(const CH** value);
	template <class CH>
	inline static uint32 ToUInt32(const CH* value) { return ToUInt32(&value); }
	template <class CH>
	inline static uint32 ToUInt32(const fm::stringT<CH>& value) { return ToUInt32(value.c_str()); }
#line 110
	template <class CH>
	static FCOLLADA_EXPORT uint32 HexToUInt32(const CH** value, uint32 count=UINT_MAX);
	template <class CH>
	inline static uint32 HexToUInt32(const CH* value, uint32 count=UINT_MAX) { return HexToUInt32(&value, count); }
	template <class CH>
	inline static uint32 HexToUInt32(const fm::stringT<CH>& value, uint32 count=UINT_MAX) { return HexToUInt32(value.c_str(), count); }
#line 121
	template <class CH>
	static FCOLLADA_EXPORT FMVector2 ToVector2(const CH** value);
	template <class CH>
	inline static FMVector2 ToVector2(const CH* value) { return ToVector2(&value); }
	template <class CH>
	inline static FMVector2 ToVector2(const fm::stringT<CH>& value) { return ToVector2(value.c_str()); }
	template <class CH>
	static FCOLLADA_EXPORT FMVector3 ToVector3(const CH** value);
	template <class CH>
	inline static FMVector3 ToVector3(const CH* value) { return ToVector3(&value); }
	template <class CH>
	inline static FMVector3 ToVector3(const fm::stringT<CH>& value) { return ToVector3(value.c_str()); }
	template <class CH>
	static FCOLLADA_EXPORT FMVector4 ToVector4(const CH** value);
	template <class CH>
	inline static FMVector4 ToVector4(const CH* value) { return ToVector4(&value); }
	template <class CH>
	inline static FMVector4 ToVector4(const fm::stringT<CH>& value) { return ToVector4(value.c_str()); }
#line 144
	template <class CH>
	static FCOLLADA_EXPORT void ToMatrix(const CH** value, FMMatrix44& mx);
	template <class CH>
	inline static void ToMatrix(const CH* value, FMMatrix44& mx) { ToMatrix(&value, mx); }
	template <class CH>
	inline static void ToMatrix(const fm::stringT<CH>& value, FMMatrix44& mx) { ToMatrix(value.c_str(), mx); }
	template <class CH>
	inline static FMMatrix44 ToMatrix(const CH* value) { FMMatrix44 mx; ToMatrix(&value, mx); return mx; }
	template <class CH>
	inline static FMMatrix44 ToMatrix(const fm::stringT<CH>& value) { FMMatrix44 mx; ToMatrix(value.c_str(), mx); return mx; }
#line 158
	template <class CH>
	static FCOLLADA_EXPORT void ToDateTime(const CH* value, FUDateTime& dateTime);
	template <class CH>
	inline static void ToDateTime(const fm::stringT<CH>& value, FUDateTime& dateTime) { return ToDateTime(value.c_str(), dateTime); }

#ifdef HAS_VECTORTYPES
#line 169
	static void ToFStringList(const fstring& value, FStringList& array);
	static void ToStringList(const char* value, StringList& array);
#ifdef UNICODE
	static void ToStringList(const fchar* value, StringList& array);
#endif
	template <class CH>
	inline static void ToStringList(const fm::stringT<CH>& value, StringList& array) { return ToStringList(value.c_str(), array); }
#line 180
	template <class CH>
	static FCOLLADA_EXPORT void ToBooleanList(const CH* value, BooleanList& array);
	template <class CH>
	inline static void ToBooleanList(const fm::stringT<CH>& value, BooleanList& array) { return ToBooleanList(value.c_str(), array); }
#line 188
	template <class CH>
	static FCOLLADA_EXPORT void ToFloatList(const CH* value, FloatList& array);
	template <class CH>
	inline static void ToFloatList(const fm::stringT<CH>& value, FloatList& array) { return ToFloatList(value.c_str(), array); }
#line 196
	template <class CH>
	static FCOLLADA_EXPORT void ToInt32List(const CH* value, Int32List& array);
	template <class CH>
	inline static void ToInt32List(const fm::stringT<CH>& value, Int32List& array) { return ToInt32List(value.c_str(), array); }
#line 204
	template <class CH>
	static FCOLLADA_EXPORT void ToUInt32List(const CH* value, UInt32List& array);
	template <class CH>
	inline static void ToUInt32List(const fm::stringT<CH>& value, UInt32List& array) { return ToUInt32List(value.c_str(), array); }
#line 213
	template <class CH>
	static FCOLLADA_EXPORT void ToInterleavedFloatList(const CH* value, fm::pvector<FloatList>& arrays);
	template <class CH>
	inline static void ToInterleavedFloatList(const fm::stringT<CH>& value, fm::pvector<FloatList>& arrays) { return ToInterleavedFloatList(value.c_str(), arrays); }
#line 222
	template <class CH>
	static FCOLLADA_EXPORT void ToInterleavedUInt32List(const CH* value, fm::pvector<UInt32List>& arrays);
	template <class CH>
	inline static void ToInterleavedUInt32List(const fm::stringT<CH>& value, fm::pvector<UInt32List>& arrays) { return ToInterleavedFloatList(value.c_str(), arrays); }
#line 230
	template <class CH>
	static FCOLLADA_EXPORT void ToMatrixList(const CH* value, FMMatrix44List& array);
	template <class CH>
	inline static void ToMatrixList(const fm::stringT<CH>& value, FMMatrix44List& array) { return ToMatrixList(value.c_str(), array); }
#line 238
	template <class CH>
	static FCOLLADA_EXPORT void ToVector2List(const CH* value, FMVector2List& array);
	template <class CH>
	inline static void ToVector2List(const fm::stringT<CH>& value, FMVector2List& array) { return ToVector2List(value.c_str(), array); }
#line 246
	template <class CH>
	static FCOLLADA_EXPORT void ToVector3List(const CH* value, FMVector3List& array);
	template <class CH>
	inline static void ToVector3List(const fm::stringT<CH>& value, FMVector3List& array) { return ToVector3List(value.c_str(), array); }
#line 254
	template <class CH>
	inline static void ToPointList(const CH* value, FMVector3List& array) { return ToVector3List(value, array); }
	template <class CH>
	inline static void ToPointList(const fm::stringT<CH>& value, FMVector3List& array) { return ToVector3List(value.c_str(), array); }
#line 262
	template <class CH>
	static FCOLLADA_EXPORT void ToVector4List(const CH* value, FMVector4List& array);
	template <class CH>
	inline static void ToVector4List(const fm::stringT<CH>& value, FMVector4List& array) { return ToVector4List(value.c_str(), array); }
#line 272
	template <class CH>
	static FCOLLADA_EXPORT void ToString(FUStringBuilderT<CH>& builder, const FloatList& values);
#line 280
	template <class CH>
	static FCOLLADA_EXPORT void ToString(FUStringBuilderT<CH>& builder, const Int32List& values);
#line 288
	template <class CH>
	inline FCOLLADA_EXPORT static void ToString(FUStringBuilderT<CH>& builder, const UInt32List& values) { return ToString(builder, values.begin(), values.size()); }
#line 297
	template <class CH>
	static FCOLLADA_EXPORT void ToString(FUStringBuilderT<CH>& builder, const uint32* values, size_t count);

#endif
#line 305
	static fm::string ToString(const FMVector4& p);
	static fstring ToFString(const FMVector4& p);
#line 311
	static fm::string ToString(const FMMatrix44& value);
	static fstring ToFString(const FMMatrix44& value);
#line 317
	static fm::string ToString(const FMVector2& value);
	static fstring ToFString(const FMVector2& value);
#line 323
	static fm::string ToString(const FMVector3& value);
	static fstring ToFString(const FMVector3& value);
#line 329
	static fm::string ToString(const FUDateTime& dateTime);
	static fstring ToFString(const FUDateTime& dateTime);
#line 339
	template <class T> static fm::string ToString(const T& value) { FUSStringBuilder builder; builder.set(value); return builder.ToString(); }
	template <class T> static fstring ToFString(const T& value) { FUStringBuilder builder; builder.set(value); return builder.ToString(); }
#line 346
	template <class CH>
	static FCOLLADA_EXPORT void ToString(FUStringBuilderT<CH>& builder, const FMMatrix44& value);
#line 353
	template <class CH>
	static FCOLLADA_EXPORT void ToString(FUStringBuilderT<CH>& builder, const FMVector2& value);
#line 360
	template <class CH>
	static FCOLLADA_EXPORT void ToString(FUStringBuilderT<CH>& builder, const FMVector3& value);
#line 367
	template <class CH>
	static FCOLLADA_EXPORT void ToString(FUStringBuilderT<CH>& builder, const FMVector4& p);
#line 372
	static void SplitTarget(const fm::string& target, fm::string& pointer, fm::string& qualifier);
#line 378
	static int32 ParseQualifier(const char* string);
	static inline int32 ParseQualifier(const fm::string& string) { return ParseQualifier(string.c_str()); }
#line 386
	template <class CH>
	static FCOLLADA_EXPORT size_t CountValues(const CH* sz);
};

#ifdef __APPLE__
// #include "FUtils/FUStringConversion.hpp"   (not taken)
#endif

#endif
#line 587 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUString.h"
#define FS(a) fstring(FC(a))

#define TO_FSTRING(a) FUStringConversion::ToFString(a)

#define TO_STRING(a) FUStringConversion::ToString(a)
#line 594
extern FCOLLADA_EXPORT const fm::string emptyString;

extern FCOLLADA_EXPORT const fstring emptyFString;
// @baa 0x01c12c00
#line 602
inline bool IsEquivalent(FUSStringBuilder& builder, const char* sz) { return IsEquivalent(builder.ToCharPtr(), sz); }
inline bool IsEquivalent(FUSStringBuilder& builder, const fm::string& sz) { return IsEquivalent(builder.ToCharPtr(), sz.c_str()); }
#ifdef UNICODE
inline bool IsEquivalent(FUStringBuilder& builder, const fchar* sz) { return IsEquivalent(builder.ToCharPtr(), sz); }
inline bool IsEquivalent(FUStringBuilder& builder, const fstring& sz) { return IsEquivalent(builder.ToCharPtr(), sz.c_str()); }
#endif

#endif
#line 121 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
#endif
#ifndef _FU_CRC32_H_
// #include "FUtils/FUCrc32.h"   (FCollada 3.05B, pasted in place)
#line 20 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUCrc32.h"
#ifndef _FU_CRC32_H_
#define _FU_CRC32_H_
#line 29
namespace FUCrc32
{

	typedef uint32 crc32;
#line 37
	FCOLLADA_EXPORT crc32 CRC32(const char* text);
#ifdef UNICODE
	FCOLLADA_EXPORT crc32 CRC32(const fchar* text);
#endif
};

#endif
#line 124 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
#endif
#ifndef _FU_DEBUG_H_
// #include "FUtils/FUDebug.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUDebug.h"
#ifndef _FU_DEBUG_H_
#define _FU_DEBUG_H_
#line 26
class FCOLLADA_EXPORT FUDebug
{
private:
#line 31
	FUDebug();
	virtual ~FUDebug();
#line 37
	static void DebugOut(uint8 level, const char* message, ...);
#ifdef UNICODE
	static void DebugOut(uint8 level, const fchar* message, ...);
#endif
#line 46
	static void DebugOutV(uint8 level, const char* message, va_list& vars);
#ifdef UNICODE
	static void DebugOutV(uint8 level, const fchar* message, va_list& vars);
#endif
#line 57
	static void DebugOutV(uint8 level, const char* filename, uint32 line, const char* message, va_list& vars);
#ifdef UNICODE
	static void DebugOutV(uint8 level, const char* filename, uint32 line, const fchar* message, va_list& vars);
#endif

public:
#line 68
	static void DebugOut(uint8 level, uint32 line, const char* filename, const char* message, ...);
#ifdef UNICODE
	static void DebugOut(uint8 level, uint32 line, const char* filename, const fchar* message, ...);
#endif
};
#line 77
#define DEBUG_OUT(...) FUDebug::DebugOut(FUError::DEBUG_LEVEL, __LINE__, __FILE__, __VA_ARGS__);

#define WARNING_OUT(...) FUDebug::DebugOut(FUError::WARNING_LEVEL, __LINE__, __FILE__, __VA_ARGS__);

#define ERROR_OUT(...) FUDebug::DebugOut(FUError::ERROR_LEVEL, __LINE__, __FILE__, __VA_ARGS__);

#endif
#line 127 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
#endif
#ifndef _FU_ERROR_H_
// #include "FUtils/FUError.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUError.h"
#ifndef _FU_ERROR_H_
#define _FU_ERROR_H_

#ifndef _FU_EVENT_H_
// #include "FUtils/FUEvent.h"   (FCollada 3.05B, pasted in place)
#line 18 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUEvent.h"
#ifndef _FU_EVENT_H_
#define _FU_EVENT_H_

#ifndef _FU_FUNCTOR_H_
// #include "FUtils/FUFunctor.h"   (not taken)
#endif
#line 29
class FUEvent0
{
private:
	typedef IFunctor0<void> Handler;
	typedef fm::pvector<Handler> HandlerList;
	HandlerList handlers;

public:

	FUEvent0() {}
#line 41
	~FUEvent0()
	{
		FUAssert(handlers.empty(), CLEAR_POINTER_VECTOR(handlers));
	}
#line 48
	size_t GetHandlerCount() { return handlers.size(); }
#line 53
	template <class Class>
	void InsertHandler(Class* handle, void (Class::*_function)())
	{
		handlers.push_back(new FUFunctor0<Class, void>(handle, _function));
	}
#line 62
	void InsertHandler(Handler* functor)
	{
		handlers.push_back(functor);
	}
#line 69
	void InsertHandler(void (*_function)())
	{
		handlers.push_back(new FUStaticFunctor0<void>(_function));
	}
#line 78
	void ReleaseHandler(void* handle, void* function)
	{
		HandlerList::iterator it;
		for (it = handlers.begin(); it != handlers.end(); ++it)
		{
			if ((*it)->Compare(handle, function))
			{
				delete (*it);
				handlers.erase(it);
				break;
			}
		}
	}
#line 95
	template <class Class>
	void ReleaseHandler(Class* handle, void (Class::*_function)())
	{
		void* function = *(void**)(size_t)&_function;
		ReleaseHandler((void*) handle, function);
	}
#line 104
	void ReleaseHandler(void (*_function)())
	{
		void* function = *(void**)(size_t)&_function;
		ReleaseHandler(NULL, function);
	}
#line 113
	void operator()()
	{
		intptr_t index = handlers.size() - 1;
		for (; index >= 0; --index)
		{
			(*handlers[index])();
		}
	}
};
#line 127
template <class Arg1>
class FUEvent1
{
private:
	typedef IFunctor1<Arg1, void> Handler;
	typedef fm::pvector<Handler> HandlerList;
	HandlerList handlers;

public:

	FUEvent1() {}
#line 140
	~FUEvent1()
	{
		FUAssert(handlers.empty(), CLEAR_POINTER_VECTOR(handlers));
	}
#line 147
	size_t GetHandlerCount() { return handlers.size(); }
#line 152
	template <class Class>
	void InsertHandler(Class* handle, void (Class::*_function)(Arg1))
	{
		handlers.push_back(NewFUFunctor1(handle, _function));
	}
#line 161
	void InsertHandler(Handler* functor)
	{
		handlers.push_back(functor);
	}
#line 168
	void InsertHandler(void (*_function)(Arg1))
	{
		handlers.push_back(new FUStaticFunctor1<Arg1, void>(_function));
	}
#line 177
	void ReleaseHandler(void* handle, void* function)
	{
		typename HandlerList::iterator it;
		for (it = handlers.begin(); it != handlers.end(); ++it)
		{
			if ((*it)->Compare(handle, function))
			{
				delete (*it);
				handlers.erase(it);
				break;
			}
		}
	}
#line 194
	template <class Class>
	void ReleaseHandler(Class* handle, void (Class::*_function)(Arg1))
	{
		void* function = *(void**)(size_t)&_function;
		ReleaseHandler((void*) handle, function);
	}
#line 203
	void ReleaseHandler(void (*_function)(Arg1))
	{
		void* function = *(void**)(size_t)&_function;
		ReleaseHandler(NULL, function);
	}
#line 213
	void operator()(Arg1 argument1)
	{
		intptr_t index = handlers.size() - 1;
		for (; index >= 0; --index)
		{
			(*handlers[index])(argument1);
		}
	}
};
#line 227
template <class Arg1, class Arg2>
class FUEvent2
{
private:
	typedef IFunctor2<Arg1, Arg2, void> Handler;
	typedef fm::pvector<Handler> HandlerList;
	HandlerList handlers;

public:

	FUEvent2() {}
#line 240
	~FUEvent2()
	{
		FUAssert(handlers.empty(), CLEAR_POINTER_VECTOR(handlers));
	}
#line 247
	size_t GetHandlerCount() { return handlers.size(); }
#line 252
	template <class Class>
	void InsertHandler(Class* handle, void (Class::*_function)(Arg1, Arg2))
	{
		handlers.push_back(new FUFunctor2<Class, Arg1, Arg2, void>(handle, _function));
	}
#line 261
	void InsertHandler(Handler* functor)
	{
		handlers.push_back(functor);
	}
#line 268
	void InsertHandler(void (*_function)(Arg1, Arg2))
	{
		handlers.push_back(new FUStaticFunctor2<Arg1, Arg2, void>(_function));
	}
#line 277
	void ReleaseHandler(void* handle, void* function)
	{
		typename HandlerList::iterator it;
		for (it = handlers.begin(); it != handlers.end(); ++it)
		{
			if ((*it)->Compare(handle, function))
			{
				delete (*it);
				handlers.erase(it);
				break;
			}
		}
	}
#line 294
	template <class Class>
	void ReleaseHandler(Class* handle, void (Class::*_function)(Arg1, Arg2))
	{
		void* function = *(void**)(size_t)&_function;
		ReleaseHandler((void*) handle, function);
	}
#line 303
	void ReleaseHandler(void (*_function)(Arg1, Arg2))
	{
		void* function = *(void**)(size_t)&_function;
		ReleaseHandler(NULL, function);
	}
#line 314
	void operator()(Arg1 argument1, Arg2 argument2)
	{
		intptr_t index = handlers.size() - 1;
		for (; index >= 0; --index)
		{
			(*handlers[index])(argument1, argument2);
		}
	}
};
#line 329
template <class Arg1, class Arg2, class Arg3>
class FUEvent3
{
private:
	typedef IFunctor3<Arg1, Arg2, Arg3, void> Handler;
	typedef fm::pvector<Handler> HandlerList;
	HandlerList handlers;

public:

	FUEvent3() {}
#line 342
	~FUEvent3()
	{
		FUAssert(handlers.empty(), CLEAR_POINTER_VECTOR(handlers));
	}
#line 349
	size_t GetHandlerCount() { return handlers.size(); }
#line 354
	template <class Class>
	void InsertHandler(Class* handle, void (Class::*_function)(Arg1, Arg2, Arg3))
	{
		handlers.push_back(new FUFunctor3<Class, Arg1, Arg2, Arg3, void>(handle, _function));
	}
#line 363
	void InsertHandler(Handler* functor)
	{
		handlers.push_back(functor);
	}
#line 370
	void InsertHandler(void (*_function)(Arg1, Arg2, Arg3))
	{
		handlers.push_back(new FUStaticFunctor3<Arg1, Arg2, Arg3, void>(_function));
	}
#line 379
	void ReleaseHandler(void* handle, void* function)
	{
		typename HandlerList::iterator it;
		for (it = handlers.begin(); it != handlers.end(); ++it)
		{
			if ((*it)->Compare(handle, function))
			{
				delete (*it);
				handlers.erase(it);
				break;
			}
		}
	}
#line 396
	template <class Class>
	void ReleaseHandler(Class* handle, void (Class::*_function)(Arg1, Arg2, Arg3))
	{
		void* function = *(void**)(size_t)&_function;
		ReleaseHandler((void*) handle, function);
	}
#line 405
	void ReleaseHandler(void (*_function)(Arg1, Arg2, Arg3))
	{
		void* function = *(void**)(size_t)&_function;
		ReleaseHandler(NULL, function);
	}
#line 417
	void operator()(Arg1 argument1, Arg2 argument2, Arg3 argument3)
	{
		intptr_t index = handlers.size() - 1;
		for (; index >= 0; --index)
		{
			(*handlers[index])(argument1, argument2, argument3);
		}
	}
};

#endif
#line 19 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUError.h"
#endif
#ifndef _FU_CRITICAL_SECTION_H_
// #include "FUtils/FUCriticalSection.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUCriticalSection.h"
#ifndef _FU_CRITICAL_SECTION_H_
#define _FU_CRITICAL_SECTION_H_

#ifdef __APPLE__
// #include <CoreServices/CoreServices.h>   (not taken)
#endif
#line 28
class FCOLLADA_EXPORT FUCriticalSection
{
private:
#ifdef WIN32
	CRITICAL_SECTION criticalSection;
#elif defined (__APPLE__)

	MPCriticalRegionID criticalSection;
#elif defined (LINUX)
#else
#warning "FUCriticalSection: Critical section not implemented for other platforms."
#endif

public:

	FUCriticalSection();
#line 46
	~FUCriticalSection();
#line 51
	void Enter();
#line 54
	void Leave();
};

#endif
#line 22 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUError.h"
#endif
#line 25
#undef ERROR
#line 33
class FCOLLADA_EXPORT FUError
{
public:
#line 39
	enum Code
	{
#line 44
		ERROR_DEFAULT_ERROR = 0, ERROR_MALFORMED_XML, ERROR_PARSING_FAILED, ERROR_INVALID_ELEMENT, ERROR_MISSING_ELEMENT,
		ERROR_UNKNOWN_ELEMENT, ERROR_MISSING_INPUT, ERROR_INVALID_URI, ERROR_WRITE_FILE, ERROR_MISSING_PROPERTY,
		NO_MATCHING_PLUGIN,

		ERROR_ANIM_CURVE_DRIVER_MISSING,
		ERROR_SOURCE_SIZE,
		ERROR_IB_MATRIX_MISSING,
		ERROR_VCOUNT_MISSING,
		ERROR_V_ELEMENT_MISSING,
		ERROR_JC_BPMC_NOT_EQUAL,
		ERROR_INVALID_VCOUNT,
		ERROR_PARSING_PROG_ERROR,
		ERROR_UNKNOWN_CHILD,
		ERROR_UNKNOWN_GEO_CH,
		ERROR_UNKNOWN_MESH_ID,
		ERROR_INVALID_U_KNOT,
		ERROR_INVALID_V_KNOT,
		ERROR_NOT_ENOUGHT_V_KNOT,
		ERROR_NOT_ENOUGHT_U_KNOT,
		ERROR_INVALID_CONTROL_VERTICES,
		ERROR_NO_CONTROL_VERTICES,
		ERROR_UNKNOWN_POLYGONS,
		WARNING_NO_POLYGON,
		ERROR_NO_VERTEX_INPUT,
		ERROR_NO_VCOUNT,
		ERROR_MISPLACED_VCOUNT,
		ERROR_UNKNOWN_PH_ELEMENT,
		ERROR_INVALID_FACE_COUNT,
		ERROR_DUPLICATE_ID,
		ERROR_INVALID_CVS_WEIGHTS,
		ERROR_INVALID_SPLINE,
		ERROR_UNKNOWN_EFFECT_CODE,
		ERROR_BAD_FLOAT_VALUE,
		ERROR_BAD_BOOLEAN_VALUE,
		ERROR_BAD_FLOAT_PARAM,
		ERROR_BAD_FLOAT_PARAM2,
		ERROR_BAD_FLOAT_PARAM3,
		ERROR_BAD_FLOAT_PARAM4,
		ERROR_BAD_MATRIX,
		ERROR_PROG_NODE_MISSING,
		ERROR_INVALID_TEXTURE_SAMPLER,
		ERROR_PARAM_NODE_MISSING,
		ERROR_INVALID_IMAGE_FILENAME,
		ERROR_UNKNOWN_TEXTURE_SAMPLER,
		ERROR_COMMON_TECHNIQUE_MISSING,
		ERROR_TECHNIQUE_NODE_MISSING,
		ERROR_PHYSICS_MODEL_CYCLE_DETECTED,
#line 93
		ERROR_MAX_CANNOT_RESIZE_MUT_LIST,
#line 98
		WARNING_UNSUPPORTED_TEXTURE_UVS,
#line 101
		WARNING_MISSING_URI_TARGET,
		WARNING_UNKNOWN_CHILD_ELEMENT,
		WARNING_UNKNOWN_AC_CHILD_ELEMENT,
		WARNING_BASE_NODE_TYPE,
		WARNING_INST_ENTITY_MISSING,
		WARNING_INVALID_MATERIAL_BINDING,
		WARNING_UNKNOWN_MAT_ID,
		WARNING_RIGID_CONSTRAINT_MISSING,
		WARNING_INVALID_ANIM_LIB,
		WARNING_INVALID_ANIM_TARGET,
		WARNING_UNKNOWN_ANIM_LIB_ELEMENT,
		WARNING_INVALID_SE_PAIR,
		WARNING_CURVES_MISSING,
		WARNING_EMPTY_ANIM_CLIP,
		WARNING_UNKNOWN_CAM_ELEMENT,
		WARNING_NO_STD_PROG_TYPE,
		WARNING_PARAM_ROOT_MISSING,
		WARNING_UNKNOWN_CAM_PROG_TYPE,
		WARNING_UNKNOWN_CAM_PARAM,
		WARNING_UNKNOWN_LIGHT_LIB_ELEMENT,
		WARNING_UNKNOWN_LIGHT_TYPE_VALUE,
		WARNING_UNKNOWN_LT_ELEMENT,
		WARNING_UNKNOWN_LIGHT_PROG_PARAM,
		WARNING_INVALID_CONTROLLER_LIB_NODE,
		WARNING_CONTROLLER_TYPE_CONFLICT,
		WARNING_SM_BASE_MISSING,
		WARNING_UNKNOWN_MC_PROC_METHOD,
		WARNING_UNKNOWN_MC_BASE_TARGET_MISSING,
		WARNING_UNKNOWN_MORPH_TARGET_TYPE,
		WARNING_TARGET_GEOMETRY_MISSING,
		WARNING_CONTROLLER_TARGET_MISSING,
		WARNING_UNKNOWN_SC_VERTEX_INPUT,
		WARNING_INVALID_TARGET_GEOMETRY_OP,
		WARNING_INVALID_JOINT_INDEX,
		WARNING_INVALID_WEIGHT_INDEX,
		WARNING_UNKNOWN_JOINT,
		WARNING_UNKNOWN_GL_ELEMENT,
		WARNING_EMPTY_GEOMETRY,
		WARNING_MESH_VERTICES_MISSING,
		WARNING_VP_INPUT_NODE_MISSING,
		WARNING_GEOMETRY_VERTICES_MISSING,
		WARNING_MESH_TESSELLATION_MISSING,
		WARNING_INVALID_POLYGON_MAT_SYMBOL,
		WARNING_EXTRA_VERTEX_INPUT,
		WARNING_UNKNOWN_POLYGONS_INPUT,
		WARNING_UNKNOWN_POLYGON_CHILD,
		WARNING_INVALID_PRIMITIVE_COUNT,
		WARNING_INVALID_GEOMETRY_SOURCE_ID,
		WARNING_EMPTY_SOURCE,
		WARNING_EMPTY_POLYGONS,
		WARNING_SPLINE_CONTROL_INPUT_MISSING,
		WARNING_CONTROL_VERTICES_MISSING,
		WARNING_VARYING_SPLINE_TYPE,
		WARNING_UNKNOWN_EFFECT_ELEMENT,
		WARNING_UNSUPPORTED_PROFILE,
		WARNING_SID_MISSING,
		WARNING_INVALID_ANNO_TYPE,
		WARNING_GEN_REF_ATTRIBUTE_MISSING,
		WARNING_MOD_REF_ATTRIBUTE_MISSING,
		WARNING_SAMPLER_NODE_MISSING,
		WARNING_EMPTY_SURFACE_SOURCE,
		WARNING_EMPTY_INIT_FROM,
		WARNING_EMPTY_IMAGE_NAME,
		WARNING_UNKNOWN_PASS_ELEMENT,
		WARNING_UNKNOWN_PASS_SHADER_ELEMENT,
		WARNING_UNAMED_EFFECT_PASS_SHADER,
		WARNING_UNKNOWN_EPS_STAGE,
		WARNING_INVALID_PROFILE_INPUT_NODE,
		WARNING_UNKNOWN_STD_MAT_BASE_ELEMENT,
		WARNING_TECHNIQUE_MISSING,
		WARNING_UNKNOWN_MAT_INPUT_SEMANTIC,
		WARNING_UNKNOWN_INPUT_TEXTURE,
		WARNING_UNSUPPORTED_SHADER_TYPE,
		WARNING_UNKNOWN_MAT_PARAM_NAME,
		WARNING_UNKNOWN_TECHNIQUE_ELEMENT,
		WARNING_UNKNOWN_IMAGE_LIB_ELEMENT,
		WARNING_UNKNOWN_TEX_LIB_ELEMENT,
		WARNING_UNKNOWN_CHANNEL_USAGE,
		WARNING_UNKNOWN_INPUTE_SEMANTIC,
		WARNING_UNKNOWN_IMAGE_SOURCE,
		WARNING_UNKNOWN_MAT_LIB_ELEMENT,
		WARNING_UNSUPPORTED_REF_EFFECTS,
		WARNING_EMPTY_INSTANCE_EFFECT,
		WARNING_EFFECT_MISSING,
		WARNING_UNKNOWN_FORCE_FIELD_ELEMENT,
		WARNING_UNKNOWN_ELEMENT,
		WARNING_INVALID_BOX_TYPE,
		WARNING_INVALID_PLANE_TYPE,
		WARNING_INVALID_SPHERE_TYPE,
		WARNING_INVALID_CAPSULE_TYPE,
		WARNING_INVALID_TCAPSULE_TYPE,
		WARNING_INVALID_TCYLINDER_TYPE,
		WARNING_UNKNOWN_PHYS_MAT_LIB_ELEMENT,
		WARNING_UNKNOWN_PHYS_LIB_ELEMENT,
		WARNING_CORRUPTED_INSTANCE,
		WARNING_UNKNOWN_PRB_LIB_ELEMENT,
		WARNING_PHYS_MAT_INST_MISSING,
		WARNING_PHYS_MAT_DEF_MISSING,
		WARNING_UNKNOWN_RGC_LIB_ELEMENT,
		WARNING_INVALID_NODE_TRANSFORM,
		WARNING_RF_NODE_MISSING,
		WARNING_RF_REF_NODE_MISSING,
		WARNING_TARGET_BS_NODE_MISSING,
		WARNING_TARGE_BS_REF_NODE_MISSING,
		WARNING_UNKNOW_PS_LIB_ELEMENT,
		WARNING_FCDGEOMETRY_INST_MISSING,
		WARNING_INVALID_SHAPE_NODE,
		WARNING_SHAPE_NODE_MISSING,
		WARNING_UNKNOW_NODE_ELEMENT_TYPE,
		WARNING_CYCLE_DETECTED,
		WARNING_INVALID_NODE_INST,
		WARNING_INVALID_WEAK_NODE_INST,
		WARNING_UNSUPPORTED_EXTERN_REF,
		WARNING_UNEXPECTED_ASSET,
		WARNING_INVALID_TRANSFORM,
		WARNING_TARGET_SCENE_NODE_MISSING,
		WARNING_UNSUPPORTED_EXTERN_REF_NODE,
		WARNING_XREF_UNASSIGNED,
		WARNING_MASS_AND_DENSITY_MISSING,
#line 224
		DEBUG_LOAD_SUCCESSFUL,
		DEBUG_WRITE_SUCCESSFUL,

		ERROR_CUSTOM_STRING = 5000
	};
#line 233
	enum Level
	{
		DEBUG_LEVEL = 0,
		WARNING_LEVEL = 1,
		ERROR_LEVEL = 2,

		LEVEL_COUNT
	};
#line 243
	typedef IFunctor3<FUError::Level, uint32, uint32, void> FUErrorFunctor;

private:
	static FUCriticalSection criticalSection;
	static FUEvent3<FUError::Level, uint32, uint32> onErrorEvent;
	static FUEvent3<FUError::Level, uint32, uint32> onWarningEvent;
	static FUEvent3<FUError::Level, uint32, uint32> onDebugEvent;
	static fm::string customErrorString;
	static FUError::Level fatalLevel;
#line 254
	FUError();
	~FUError();

public:
#line 264
	static bool Error(FUError::Level errorLevel, uint32 errorCode, uint32 line = 0);
#line 269
	static void AddErrorCallback(FUError::Level errorLevel, FUErrorFunctor* callback);
#line 275
	template <class Class>
	static void AddErrorCallback(FUError::Level errorLevel, Class* handle, void (Class::*_function)(FUError::Level, uint32, uint32))
	{
		AddErrorCallback(errorLevel, new FUFunctor3<Class, FUError::Level, uint32, uint32, void>(handle, _function));
	}
#line 284
	static void AddErrorCallback(FUError::Level errorLevel, void (*_function)(FUError::Level, uint32, uint32))
	{
		AddErrorCallback(errorLevel, new FUStaticFunctor3<FUError::Level, uint32, uint32, void>(_function));
	}
#line 293
	static void RemoveErrorCallback(FUError::Level errorLevel, void* object, void* function);
#line 299
	template <class Class>
	static void RemoveErrorCallback(FUError::Level errorLevel, Class* handle, void (Class::*_function)(FUError::Level, uint32, uint32))
	{
		void* function = *(void**)(size_t)&_function;
		RemoveErrorCallback(errorLevel, (void*) handle, function);
	}
#line 309
	static void RemoveErrorCallback(FUError::Level errorLevel, void (*_function)(FUError::Level, uint32, uint32))
	{
		void* function = *(void**)(size_t)&_function;
		RemoveErrorCallback(errorLevel, NULL, function);
	}
#line 318
	static const char* GetErrorString(FUError::Code errorCode);
#line 324
	static void SetCustomErrorString(const char* customErrorString);
#line 328
	static FUError::Level GetFatalityLevel() { return fatalLevel; }
#line 332
	static void SetFatalityLevel(FUError::Level _fatalLevel) { fatalLevel = _fatalLevel; }
};
#line 341
class FCOLLADA_EXPORT FUErrorSimpleHandler
{
private:
	FUSStringBuilder message;
	FUError::Level localFatalityLevel;
	bool fails;

public:
#line 352
	FUErrorSimpleHandler(FUError::Level fatalLevel = FUError::ERROR_LEVEL);
#line 355
	~FUErrorSimpleHandler();
#line 362
	inline const char* GetErrorString() const { return message.ToCharPtr(); }
#line 366
	inline bool IsSuccessful() const { return !fails; }

private:
	void OnError(FUError::Level errorLevel, uint32 errorCode, uint32 lineNumber);
};

#endif
#line 130 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
#endif

#ifndef RETAIL
#define ENABLE_TEST
#endif

#endif
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\futils\\StdAfx.h"
#endif
#line 16 ".\\FUtils\\FUDaeEnum.cpp"
// #include "FUDaeEnum.h"   (FCollada 3.05B, pasted in place)
#line 15 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\futils\\FUDaeEnum.h"
#ifndef _FU_DAE_ENUM_H_
#define _FU_DAE_ENUM_H_

#undef NEVER
#undef TRANSPARENT
#undef RELATIVE
#undef IN
#undef OUT
#undef DIFFERENCE
#line 26
namespace FUDaeInterpolation
{

	enum Interpolation
	{
		STEP = 0,

		LINEAR,
		BEZIER,
		TCB,
#line 38
		UNKNOWN,
		DEFAULT = STEP,
	};
#line 45
	FCOLLADA_EXPORT Interpolation FromString(const fm::string& value);
#line 50
	FCOLLADA_EXPORT const char* ToString(const Interpolation& value);
};
#line 54
typedef fm::vector<FUDaeInterpolation::Interpolation> FUDaeInterpolationList;
#line 57
namespace FUDaeSplineType
{

	enum Type
	{
		LINEAR = 0,
		BEZIER,
		NURBS,

		UNKNOWN,
		DEFAULT = NURBS,
	};
#line 73
	FCOLLADA_EXPORT Type FromString(const fm::string& value);
#line 78
	FCOLLADA_EXPORT const char* ToString(const Type& value);
};
#line 82
namespace FUDaeSplineForm
{

	enum Form
	{
		OPEN = 0,

		CLOSED,

		UNKNOWN,
		DEFAULT = OPEN,
	};
#line 98
	FCOLLADA_EXPORT Form FromString(const fm::string& value);
#line 103
	FCOLLADA_EXPORT const char* ToString(const Form& value);
};
#line 108
namespace FUDaeTextureChannel
{
#line 114
	enum Channel
	{
		AMBIENT = 0,
		BUMP,
		DIFFUSE,
		DISPLACEMENT,
		EMISSION,
		FILTER,
		REFLECTION,
		REFRACTION,
		SHININESS,
		SPECULAR,
		SPECULAR_LEVEL,
		TRANSPARENT,

		COUNT,
		UNKNOWN,
		DEFAULT = DIFFUSE,
	};
#line 137
	FCOLLADA_EXPORT Channel FromString(const fm::string& value);
};
#line 141
namespace FUDaeTextureWrapMode
{
	enum WrapMode
	{
		NONE = 0,
		WRAP,
		MIRROR,
		CLAMP,
		BORDER,

		UNKNOWN,
		DEFAULT = WRAP,
	};
#line 158
	FCOLLADA_EXPORT WrapMode FromString(const char* value);
	inline WrapMode FromString(const fm::string& value) { return FromString(value.c_str()); }
#line 164
	FCOLLADA_EXPORT const char* ToString(WrapMode wrap);
};
#line 168
namespace FUDaeTextureFilterFunction
{
	enum FilterFunction
	{
		NONE = 0,
		NEAREST,
		LINEAR,
		NEAREST_MIPMAP_NEAREST,
		LINEAR_MIPMAP_NEAREST,
		NEAREST_MIPMAP_LINEAR,
		LINEAR_MIPMAP_LINEAR,

		UNKNOWN,
		DEFAULT = NONE,
	};
#line 187
	FCOLLADA_EXPORT FilterFunction FromString(const char* value);
	inline FilterFunction FromString(const fm::string& value) { return FromString(value.c_str()); }
#line 193
	FCOLLADA_EXPORT const char* ToString(FilterFunction function);
};
#line 197
namespace FUDaeMorphMethod
{
#line 205
	enum Method
	{
		NORMALIZED = 0,
		RELATIVE,

		UNKNOWN,
		DEFAULT = NORMALIZED,
	};
#line 217
	FCOLLADA_EXPORT Method FromString(const char* value);
#line 222
	FCOLLADA_EXPORT const char* ToString(Method method);
	inline Method FromString(const fm::string& value) { return FromString(value.c_str()); }
};
#line 227
namespace FUDaeInfinity
{
#line 231
	enum Infinity
	{
		CONSTANT = 0,
		LINEAR,
#line 237
		CYCLE,

		CYCLE_RELATIVE,
#line 243
		OSCILLATE,
#line 247
		UNKNOWN,
		DEFAULT = CONSTANT
	};
#line 254
	FCOLLADA_EXPORT Infinity FromString(const char* value);
#line 259
	FCOLLADA_EXPORT const char* ToString(Infinity infinity);
	inline Infinity FromString(const fm::string& value) { return FromString(value.c_str()); }
};
#line 264
namespace FUDaeBlendMode
{

	enum Mode
	{
		NONE,
		OVER,
		IN,
		OUT,
		ADD,
		SUBTRACT,
		MULTIPLY,
		DIFFERENCE,
		LIGHTEN,
		DARKEN,
		SATURATE,
		DESATURATE,
		ILLUMINATE,

		UNKNOWN,
		DEFAULT = NONE,
	};
#line 290
	FCOLLADA_EXPORT Mode FromString(const char* value);
#line 295
	FCOLLADA_EXPORT const char* ToString(Mode mode);
	inline Mode FromString(const fm::string& value) { return FromString(value.c_str()); }
}
#line 300
namespace FUDaeGeometryInput
{

	enum Semantic
	{
		POSITION = 0,
		VERTEX,
		NORMAL,
		GEOTANGENT,
		GEOBINORMAL,
		TEXCOORD,
		TEXTANGENT,
		TEXBINORMAL,
		UV,
		COLOR,
		EXTRA,

		POINT_SIZE,

		POINT_ROTATION,

		UNKNOWN = -1,
	};
	typedef fm::vector<Semantic> SemanticList;
#line 328
	FCOLLADA_EXPORT Semantic FromString(const char* value);
#line 333
    FCOLLADA_EXPORT const char* ToString(Semantic semantic);
	inline Semantic FromString(const fm::string& value) { return FromString(value.c_str()); }
}
#line 338
namespace FUDaeProfileType
{

	enum Type
	{
		CG,
		HLSL,
		GLSL,
		GLES,
		COMMON,

		UNKNOWN
	};
#line 356
	FCOLLADA_EXPORT Type FromString(const char* value);
	inline Type FromString(const fm::string& value) { return FromString(value.c_str()); }
#line 363
	FCOLLADA_EXPORT const char* ToString(Type type);
}
#line 367
namespace FUDaePassStateFunction
{
#line 374
	enum Function
	{
		NEVER = 0x0200,
		LESS = 0x0201,
		EQUAL = 0x0202,
		LESS_EQUAL = 0x0203,
		GREATER = 0x0204,
		NOT_EQUAL = 0x0205,
		GREATER_EQUAL = 0x0206,
		ALWAYS = 0x0207,

		INVALID
	};
#line 391
	FCOLLADA_EXPORT Function FromString(const char* value);
	inline Function FromString(const fm::string& value) { return FromString(value.c_str()); }
#line 397
	FCOLLADA_EXPORT const char* ToString(Function fn);
};
#line 401
namespace FUDaePassStateStencilOperation
{

	enum Operation
	{
		KEEP = 0x1E00,
		ZERO = 0x0000,
		REPLACE = 0x1E01,
		INCREMENT = 0x1E02,
		DECREMENT = 0x1E03,
		INVERT = 0x1E0A,

		INCREMENT_WRAP = 0x8507,
		DECREMENT_WRAP = 0x8508,

		INVALID
	};
#line 422
	FCOLLADA_EXPORT Operation FromString(const char* value);
	inline Operation FromString(const fm::string& value) { return FromString(value.c_str()); }
#line 428
	FCOLLADA_EXPORT const char* ToString(Operation op);
};
#line 432
namespace FUDaePassStateBlendType
{
#line 441
	enum Type
	{
		ZERO = 0x0000,
		ONE = 0x0001,
		SOURCE_COLOR = 0x0300,
		ONE_MINUS_SOURCE_COLOR = 0x0301,
		DESTINATION_COLOR = 0x0306,
		ONE_MINUS_DESTINATION_COLOR = 0x0307,
		SOURCE_ALPHA = 0x0302,
		ONE_MINUS_SOURCE_ALPHA = 0x0303,
		DESTINATION_ALPHA = 0x0304,
		ONE_MINUS_DESTINATION_ALPHA = 0x0305,
		CONSTANT_COLOR = 0x8001,
		ONE_MINUS_CONSTANT_COLOR = 0x8002,
		CONSTANT_ALPHA = 0x8003,
		ONE_MINUS_CONSTANT_ALPHA = 0x8004,
		SOURCE_ALPHA_SATURATE = 0x0308,

		INVALID
	};
#line 465
	FCOLLADA_EXPORT Type FromString(const char* value);
	inline Type FromString(const fm::string& value) { return FromString(value.c_str()); }
#line 471
	FCOLLADA_EXPORT const char* ToString(Type type);
};
#line 475
namespace FUDaePassStateFaceType
{
#line 480
	enum Type
	{
		FRONT = 0x0404,
		BACK = 0x0405,
		FRONT_AND_BACK = 0x0408,

		INVALID
	};
#line 492
	FCOLLADA_EXPORT Type FromString(const char* value);
	inline Type FromString(const fm::string& value) { return FromString(value.c_str()); }
#line 498
	FCOLLADA_EXPORT const char* ToString(Type type);
};
#line 502
namespace FUDaePassStateBlendEquation
{

	enum Equation
	{
		ADD = 0x8006,
		SUBTRACT = 0x800A,
		REVERSE_SUBTRACT = 0x800B,
		MIN = 0x8007,
		MAX = 0x8008,

		INVALID
	};
#line 519
	FCOLLADA_EXPORT Equation FromString(const char* value);
	inline Equation FromString(const fm::string& value) { return FromString(value.c_str()); }
#line 525
	FCOLLADA_EXPORT const char* ToString(Equation equation);
};
#line 529
namespace FUDaePassStateMaterialType
{

	enum Type
	{
		EMISSION = 0x1600,
		AMBIENT = 0x1200,
		DIFFUSE = 0x1201,
		SPECULAR = 0x1202,
		AMBIENT_AND_DIFFUSE = 0x1602,

		INVALID
	};
#line 546
	FCOLLADA_EXPORT Type FromString(const char* value);
	inline Type FromString(const fm::string& value) { return FromString(value.c_str()); }
#line 552
	FCOLLADA_EXPORT const char* ToString(Type type);
};
#line 556
namespace FUDaePassStateFogType
{

	enum Type
	{
		LINEAR = 0x2601,
		EXP = 0x0800,
		EXP2 = 0x0801,

		INVALID
	};
#line 571
	FCOLLADA_EXPORT Type FromString(const char* value);
	inline Type FromString(const fm::string& value) { return FromString(value.c_str()); }
#line 577
	FCOLLADA_EXPORT const char* ToString(Type type);
}
#line 581
namespace FUDaePassStateFogCoordinateType
{

	enum Type
	{
		FOG_COORDINATE = 0x8451,
		FRAGMENT_DEPTH = 0x8452,

		INVALID
	};
#line 595
	FCOLLADA_EXPORT Type FromString(const char* value);
	inline Type FromString(const fm::string& value) { return FromString(value.c_str()); }
#line 601
	FCOLLADA_EXPORT const char* ToString(Type type);
};
#line 605
namespace FUDaePassStateFrontFaceType
{

	enum Type
	{
		CLOCKWISE = 0x0900,
		COUNTER_CLOCKWISE = 0x0901,

		INVALID
	};
#line 619
	FCOLLADA_EXPORT Type FromString(const char* value);
	inline Type FromString(const fm::string& value) { return FromString(value.c_str()); }
#line 625
	FCOLLADA_EXPORT const char* ToString(Type type);
};
#line 629
namespace FUDaePassStateLogicOperation
{
#line 633
	enum Operation
	{
		CLEAR = 0x1500,
		AND = 0x1501,
		AND_REVERSE = 0x1502,
		COPY = 0x1503,
		AND_INVERTED = 0x1504,
		NOOP = 0x1505,
		XOR = 0x1506,
		OR = 0x1507,
		NOR = 0x1508,
		EQUIV = 0x1509,
		INVERT = 0x150A,
		OR_REVERSE = 0x150B,
		COPY_INVERTED = 0x150C,
		NAND = 0x150E,
		SET = 0x150F,

		INVALID
	};
#line 657
	FCOLLADA_EXPORT Operation FromString(const char* value);
	inline Operation FromString(const fm::string& value) { return FromString(value.c_str()); }
#line 663
	FCOLLADA_EXPORT const char* ToString(Operation op);
};
#line 667
namespace FUDaePassStatePolygonMode
{

	enum Mode
	{
		POINT = 0x1B00,
		LINE = 0x1B01,
		FILL = 0x1B02,

		INVALID
	};
#line 682
	FCOLLADA_EXPORT Mode FromString(const char* value);
	inline Mode FromString(const fm::string& value) { return FromString(value.c_str()); }
#line 688
	FCOLLADA_EXPORT const char* ToString(Mode mode);
};
#line 692
namespace FUDaePassStateShadeModel
{

	enum Model
	{
		FLAT = 0x1D00,
		SMOOTH = 0x1D01,

		INVALID
	};
#line 706
	FCOLLADA_EXPORT Model FromString(const char* value);
	inline Model FromString(const fm::string& value) { return FromString(value.c_str()); }
#line 712
	FCOLLADA_EXPORT const char* ToString(Model model);
};
#line 716
namespace FUDaePassStateLightModelColorControlType
{

	enum Type
	{
		SINGLE_COLOR = 0x81F9,
		SEPARATE_SPECULAR_COLOR = 0x81FA,

		INVALID
	};
#line 730
	FCOLLADA_EXPORT Type FromString(const char* value);
	inline Type FromString(const fm::string& value) { return FromString(value.c_str()); }
#line 736
	FCOLLADA_EXPORT const char* ToString(Type type);
};
#line 740
namespace FUDaePassState
{
#line 749
	enum State
	{
		ALPHA_FUNC = 0,
		BLEND_FUNC,
		BLEND_FUNC_SEPARATE,
		BLEND_EQUATION,
		BLEND_EQUATION_SEPARATE,
		COLOR_MATERIAL,
		CULL_FACE,
		DEPTH_FUNC,
		FOG_MODE,
		FOG_COORD_SRC,

		FRONT_FACE = 10,
		LIGHT_MODEL_COLOR_CONTROL,
		LOGIC_OP,
		POLYGON_MODE,
		SHADE_MODEL,
		STENCIL_FUNC,
		STENCIL_OP,
		STENCIL_FUNC_SEPARATE,
		STENCIL_OP_SEPARATE,
		STENCIL_MASK_SEPARATE,

		LIGHT_ENABLE = 20,
		LIGHT_AMBIENT,
		LIGHT_DIFFUSE,
		LIGHT_SPECULAR,
		LIGHT_POSITION,
		LIGHT_CONSTANT_ATTENUATION,
		LIGHT_LINEAR_ATTENUATION,
		LIGHT_QUADRATIC_ATTENUATION,
		LIGHT_SPOT_CUTOFF,
		LIGHT_SPOT_DIRECTION,
		LIGHT_SPOT_EXPONENT = 30,

		TEXTURE1D = 31,
		TEXTURE2D,
		TEXTURE3D,
		TEXTURECUBE,
		TEXTURERECT,
		TEXTUREDEPTH,
		TEXTURE1D_ENABLE,
		TEXTURE2D_ENABLE,
		TEXTURE3D_ENABLE,
		TEXTURECUBE_ENABLE,
		TEXTURERECT_ENABLE,
		TEXTUREDEPTH_ENABLE,
		TEXTURE_ENV_COLOR,
		TEXTURE_ENV_MODE,

		CLIP_PLANE = 45,
		CLIP_PLANE_ENABLE,
		BLEND_COLOR,
		CLEAR_COLOR,
		CLEAR_STENCIL,
		CLEAR_DEPTH,
		COLOR_MASK,
		DEPTH_BOUNDS,
		DEPTH_MASK,
		DEPTH_RANGE,

		FOG_DENSITY = 55,
		FOG_START,
		FOG_END,
		FOG_COLOR,
		LIGHT_MODEL_AMBIENT,
		LIGHTING_ENABLE,
		LINE_STIPPLE,
		LINE_WIDTH,

		MATERIAL_AMBIENT = 63,
		MATERIAL_DIFFUSE,
		MATERIAL_EMISSION,
		MATERIAL_SHININESS,
		MATERIAL_SPECULAR,
		MODEL_VIEW_MATRIX,
		POINT_DISTANCE_ATTENUATION,
		POINT_FADE_THRESHOLD_SIZE,
		POINT_SIZE,
		POINT_SIZE_MIN,
		POINT_SIZE_MAX,

		POLYGON_OFFSET = 74,
		PROJECTION_MATRIX,
		SCISSOR,
		STENCIL_MASK,
		ALPHA_TEST_ENABLE,
		AUTO_NORMAL_ENABLE,
		BLEND_ENABLE,
		COLOR_LOGIC_OP_ENABLE,
		COLOR_MATERIAL_ENABLE,
		CULL_FACE_ENABLE,

		DEPTH_BOUNDS_ENABLE = 84,
		DEPTH_CLAMP_ENABLE,
		DEPTH_TEST_ENABLE,
		DITHER_ENABLE,
		FOG_ENABLE,
		LIGHT_MODEL_LOCAL_VIEWER_ENABLE,
		LIGHT_MODEL_TWO_SIDE_ENABLE,
		LINE_SMOOTH_ENABLE,
		LINE_STIPPLE_ENABLE,
		LOGIC_OP_ENABLE,
		MULTISAMPLE_ENABLE,

		NORMALIZE_ENABLE = 95,
		POINT_SMOOTH_ENABLE,
		POLYGON_OFFSET_FILL_ENABLE,
		POLYGON_OFFSET_LINE_ENABLE,
		POLYGON_OFFSET_POINT_ENABLE,
		POLYGON_SMOOTH_ENABLE,
		POLYGON_STIPPLE_ENABLE,
		RESCALE_NORMAL_ENABLE,

		SAMPLE_ALPHA_TO_COVERAGE_ENABLE = 103,
		SAMPLE_ALPHA_TO_ONE_ENABLE,
		SAMPLE_COVERAGE_ENABLE,
		SCISSOR_TEST_ENABLE,
		STENCIL_TEST_ENABLE,

		COUNT = 108,
		INVALID
	};
#line 877
	FCOLLADA_EXPORT State FromString(const char* value);
	inline State FromString(const fm::string& value) { return FromString(value.c_str()); }
#line 883
	FCOLLADA_EXPORT const char* ToString(State state);
};
#line 887
namespace FUDaeAccessor
{
#line 891
	extern const char* XY[3];
	extern const char* XYZW[5];
	extern const char* RGBA[5];
	extern const char* STPQ[5];
}

#endif
#line 17 ".\\FUtils\\FUDaeEnum.cpp"
// #include "FUDaeEnumSyntax.h"   (FCollada 3.05B, pasted in place)
#line 9 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\futils\\FUDaeEnumSyntax.h"
#ifndef _FU_DAE_ENUM_SYNTAX_H_
#define _FU_DAE_ENUM_SYNTAX_H_

#define	DAE_STEP_INTERPOLATION						"STEP"
#define DAE_LINEAR_INTERPOLATION					"LINEAR"
#define DAE_BEZIER_INTERPOLATION					"BEZIER"
#define DAE_TCB_INTERPOLATION						"TCB"
#line 18
#define DAE_LINEAR_SPLINE_TYPE						"LINEAR"
#define DAE_BEZIER_SPLINE_TYPE						"BEZIER"
#define DAE_TCB_SPLINE_TYPE							"TCB"
#define DAE_NURBS_SPLINE_TYPE						"NURBS"
#define DAE_UNKNOWN_SPLINE_TYPE						"UNKNOWN"
#line 25
#define DAE_OPEN_SPLINE_FORM						"OPEN"
#define DAE_CLOSED_SPLINE_FORM						"CLOSED"
#define DAE_UNKNOWN_SPLINE_FORM						"UNKNOWN"
#line 30
#define DAE_TEXTURE_WRAP_NONE						"NONE"
#define DAE_TEXTURE_WRAP_WRAP						"WRAP"
#define DAE_TEXTURE_WRAP_MIRROR						"MIRROR"
#define DAE_TEXTURE_WRAP_CLAMP						"CLAMP"
#define DAE_TEXTURE_WRAP_BORDER						"BORDER"
#define DAE_TEXTURE_WRAP_UNKNOWN					"UNKNOWN"
#line 38
#define DAE_TEXTURE_FILTER_NONE						"NONE"
#define DAE_TEXTURE_FILTER_NEAREST					"NEAREST"
#define DAE_TEXTURE_FILTER_LINEAR					"LINEAR"
#define DAE_TEXTURE_FILTER_NEAR_MIP_NEAR			"NEAREST_MIPMAP_NEAREST"
#define DAE_TEXTURE_FILTER_LIN_MIP_NEAR				"LINEAR_MIPMAP_NEAREST"
#define DAE_TEXTURE_FILTER_NEAR_MIP_LIN				"NEAREST_MIPMAP_LINEAR"
#define DAE_TEXTURE_FILTER_LIN_MIP_LIN				"LINEAR_MIPMAP_LINEAR"
#define DAE_TEXTURE_FILTER_UNKNOWN					"UNKNOWN"
#line 48
#define DAE_CONSTANT_FUNCTION						"CONSTANT"
#define DAE_LINEAR_FUNCTION							"LINEAR"
#define DAE_QUADRATIC_FUNCTION						"QUADRATIC"

#define DAE_AMBIENT_TEXTURE_CHANNEL					"AMBIENT"
#define DAE_BUMP_TEXTURE_CHANNEL					"BUMP"
#define DAE_DIFFUSE_TEXTURE_CHANNEL					"DIFFUSE"
#define DAE_DISPLACEMENT_TEXTURE_CHANNEL			"DISPLACEMENT"
#define DAE_EMISSION_TEXTURE_CHANNEL				"GLOW"
#define DAE_FILTER_TEXTURE_CHANNEL					"FILTER"
#define	DAE_OPACITY_TEXTURE_CHANNEL					"OPACITY"
#define DAE_REFLECTION_TEXTURE_CHANNEL				"REFLECTION"
#define DAE_REFRACTION_TEXTURE_CHANNEL				"REFRACTION"
#define DAE_SHININESS_TEXTURE_CHANNEL				"SHININESS"
#define DAE_SPECULAR_TEXTURE_CHANNEL				"SPECULAR"
#define DAE_SPECULARLEVEL_TEXTURE_CHANNEL			"SPECULAR-LEVEL"
#define DAE_TRANSPARENT_TEXTURE_CHANNEL				"TRANSPARENT"

#define DAE_NORMALIZED_MORPH_METHOD					"NORMALIZED"
#define DAE_RELATIVE_MORPH_METHOD					"RELATIVE"

#define DAE_COLOR_INPUT								"COLOR"
#define DAE_GEOBINORMAL_INPUT						"BINORMAL"
#define DAE_GEOTANGENT_INPUT						"TANGENT"
#define DAE_MAPPING_INPUT							"UV"
#define DAE_NORMAL_INPUT							"NORMAL"
#define DAE_POSITION_INPUT							"POSITION"
#define DAE_TEXCOORD_INPUT							"TEXCOORD"
#define DAE_TEXBINORMAL_INPUT						"TEXBINORMAL"
#define DAE_TEXTANGENT_INPUT						"TEXTANGENT"
#define DAE_VERTEX_INPUT							"VERTEX"
#define DAEMAYA_EXTRA_INPUT							"EXTRA"

#define DAE_FX_PROFILE_COMMON_ELEMENT				"profile_COMMON"
#define DAE_FX_PROFILE_CG_ELEMENT					"profile_CG"
#define DAE_FX_PROFILE_HLSL_ELEMENT					"profile_HLSL"
#define DAE_FX_PROFILE_GLSL_ELEMENT					"profile_GLSL"
#define DAE_FX_PROFILE_GLES_ELEMENT					"profile_GLES"

#define DAE_FX_FUNCTION_NEVER						"NEVER"
#define DAE_FX_FUNCTION_LESS						"LESS"
#define DAE_FX_FUNCTION_EQUAL						"EQUAL"
#define DAE_FX_FUNCTION_LEQUAL						"LEQUAL"
#define DAE_FX_FUNCTION_GREATER						"GREATER"
#define DAE_FX_FUNCTION_NEQUAL						"NOTEQUAL"
#define DAE_FX_FUNCTION_GEQUAL						"GEQUAL"
#define DAE_FX_FUNCTION_ALWAYS						"ALWAYS"

#define DAE_FX_STATE_STENCILOP_KEEP					"KEEP"
#define DAE_FX_STATE_STENCILOP_ZERO					"ZERO"
#define DAE_FX_STATE_STENCILOP_REPLACE				"REPLACE"
#define DAE_FX_STATE_STENCILOP_INCREMENT			"INCR"
#define DAE_FX_STATE_STENCILOP_DECREMENT			"DECR"
#define DAE_FX_STATE_STENCILOP_INVERT				"INVERT"
#define DAE_FX_STATE_STENCILOP_INCREMENT_WRAP		"INCR_WRAP"
#define DAE_FX_STATE_STENCILOP_DECREMENT_WRAP		"DECR_WRAP"

#define DAE_FX_STATE_BLENDTYPE_ZERO							"ZERO"
#define DAE_FX_STATE_BLENDTYPE_ONE							"ONE"
#define DAE_FX_STATE_BLENDTYPE_SOURCE_COLOR					"SRC_COLOR"
#define DAE_FX_STATE_BLENDTYPE_ONE_MINUS_SOURCE_COLOR		"ONE_MINUS_SRC_COLOR"
#define DAE_FX_STATE_BLENDTYPE_DESTINATION_COLOR			"DEST_COLOR"
#define DAE_FX_STATE_BLENDTYPE_ONE_MINUS_DESTINATION_COLOR	"ONE_MINUS_DEST_COLOR"
#define DAE_FX_STATE_BLENDTYPE_SOURCE_ALPHA					"SRC_ALPHA"
#define DAE_FX_STATE_BLENDTYPE_ONE_MINUS_SOURCE_ALPHA		"ONE_MINUS_SRC_ALPHA"
#define DAE_FX_STATE_BLENDTYPE_DESTINATION_ALPHA			"DEST_ALPHA"
#define DAE_FX_STATE_BLENDTYPE_ONE_MINUS_DESTINATION_ALPHA	"ONE_MINUS_DEST_ALPHA"
#define DAE_FX_STATE_BLENDTYPE_CONSTANT_COLOR				"CONSTANT_COLOR"
#define DAE_FX_STATE_BLENDTYPE_ONE_MINUS_CONSTANT_COLOR		"ONE_MINUS_CONSTANT_COLOR"
#define DAE_FX_STATE_BLENDTYPE_CONSTANT_ALPHA				"CONSTANT_ALPHA"
#define DAE_FX_STATE_BLENDTYPE_ONE_MINUS_CONSTANT_ALPHA		"ONE_MINUS_CONSTANT_ALPHA"
#define DAE_FX_STATE_BLENDTYPE_SOURCE_ALPHA_SATURATE		"SRC_ALPHA_SATURATE"

#define DAE_FX_STATE_FACETYPE_FRONT					"FRONT"
#define DAE_FX_STATE_FACETYPE_BACK					"BACK"
#define DAE_FX_STATE_FACETYPE_FRONT_AND_BACK		"FRONT_AND_BACK"

#define DAE_FX_STATE_BLENDEQ_ADD					"FUNC_ADD"
#define DAE_FX_STATE_BLENDEQ_SUBTRACT				"FUNC_SUBTRACT"
#define DAE_FX_STATE_BLENDEQ_REVERSE_SUBTRACT		"FUNC_REVERSE_SUBTRACT"
#define DAE_FX_STATE_BLENDEQ_MIN					"MIN"
#define DAE_FX_STATE_BLENDEQ_MAX					"MAX"

#define DAE_FX_STATE_MATERIALTYPE_EMISSION			"EMISSION"
#define DAE_FX_STATE_MATERIALTYPE_AMBIENT			"AMBIENT"
#define DAE_FX_STATE_MATERIALTYPE_DIFFUSE			"DIFFUSE"
#define DAE_FX_STATE_MATERIALTYPE_SPECULAR			"SPECULAR"
#define DAE_FX_STATE_MATERIALTYPE_AMBDIFF			"AMBIENT_AND_DIFFUSE"

#define DAE_FX_STATE_FOGTYPE_LINEAR					"LINEAR"
#define DAE_FX_STATE_FOGTYPE_EXP					"EXP"
#define DAE_FX_STATE_FOGTYPE_EXP2					"EXP2"

#define DAE_FX_STATE_FOGCOORD_FOG_COORDINATE		"FOG_COORDINATE"
#define DAE_FX_STATE_FOGCOORD_FRAGMENT_DEPTH		"FRAGMENT_DEPTH"

#define DAE_FX_STATE_FFACE_CW						"CW"
#define DAE_FX_STATE_FFACE_CCW						"CCW"

#define DAE_FX_STATE_LOGICOP_CLEAR					"CLEAR"
#define DAE_FX_STATE_LOGICOP_AND					"AND"
#define DAE_FX_STATE_LOGICOP_AND_REVERSE			"AND_REVERSE"
#define DAE_FX_STATE_LOGICOP_COPY					"COPY"
#define DAE_FX_STATE_LOGICOP_AND_INVERTED			"AND_INVERTED"
#define DAE_FX_STATE_LOGICOP_NOOP					"NOOP"
#define DAE_FX_STATE_LOGICOP_XOR					"XOR"
#define DAE_FX_STATE_LOGICOP_OR						"OR"
#define DAE_FX_STATE_LOGICOP_NOR					"NOR"
#define DAE_FX_STATE_LOGICOP_EQUIV					"EQUIV"
#define DAE_FX_STATE_LOGICOP_INVERT					"INVERT"
#define DAE_FX_STATE_LOGICOP_OR_REVERSE				"OR_REVERSE"
#define DAE_FX_STATE_LOGICOP_COPY_INVERTED			"COPY_INVERTED"
#define DAE_FX_STATE_LOGICOP_NAND					"NAND"
#define DAE_FX_STATE_LOGICOP_SET					"SET"

#define DAE_FX_STATE_POLYMODE_POINT					"POINT"
#define DAE_FX_STATE_POLYMODE_LINE					"LINE"
#define DAE_FX_STATE_POLYMODE_FILL					"FILL"

#define DAE_FX_STATE_SHADEMODEL_FLAT				"FLAT"
#define DAE_FX_STATE_SHADEMODEL_SMOOTH				"SMOOTH"

#define DAE_FX_STATE_LMCCT_SINGLE_COLOR				"SINGLE_COLOR"
#define DAE_FX_STATE_LMCCT_SEPARATE_SPECULAR_COLOR	"SEPARATE_SPECULAR_COLOR"

#define DAE_FX_STATE_ALPHA_FUNC						"alpha_func"
#define DAE_FX_STATE_BLEND_FUNC						"blend_func"
#define DAE_FX_STATE_BLEND_FUNC_SEPARATE			"blend_func_separate"
#define DAE_FX_STATE_BLEND_EQUATION					"blend_equation"
#define DAE_FX_STATE_BLEND_EQUATION_SEPARATE		"blend_equation_separate"
#define DAE_FX_STATE_COLOR_MATERIAL					"color_material"
#define DAE_FX_STATE_CULL_FACE						"cull_face"
#define DAE_FX_STATE_DEPTH_FUNC						"depth_func"
#define DAE_FX_STATE_FOG_MODE						"fog_mode"
#define DAE_FX_STATE_FOG_COORD_SRC					"fog_coord_src"
#define DAE_FX_STATE_FRONT_FACE						"front_face"
#define DAE_FX_STATE_LIGHT_MODEL_COLOR_CONTROL		"light_model_color_control"
#define DAE_FX_STATE_LOGIC_OP						"logic_op"
#define DAE_FX_STATE_POLYGON_MODE					"polygon_mode"
#define DAE_FX_STATE_SHADE_MODEL					"shade_model"
#define DAE_FX_STATE_STENCIL_FUNC					"stencil_func"
#define DAE_FX_STATE_STENCIL_OP						"stencil_op"
#define DAE_FX_STATE_STENCIL_FUNC_SEPARATE			"stencil_func_separate"
#define DAE_FX_STATE_STENCIL_OP_SEPARATE			"stencil_op_separate"
#define DAE_FX_STATE_STENCIL_MASK_SEPARATE			"stencil_mask_separate"
#define DAE_FX_STATE_LIGHT_ENABLE					"light_enable"
#define DAE_FX_STATE_LIGHT_AMBIENT					"light_ambient"
#define DAE_FX_STATE_LIGHT_DIFFUSE					"light_diffuse"
#define DAE_FX_STATE_LIGHT_SPECULAR					"light_specular"
#define DAE_FX_STATE_LIGHT_POSITION					"light_position"
#define DAE_FX_STATE_LIGHT_CONSTANT_ATTENUATION		"light_constant_attenuation"
#define DAE_FX_STATE_LIGHT_LINEAR_ATTENUATION		"light_linear_attenuation"
#define DAE_FX_STATE_LIGHT_QUADRATIC_ATTENUATION	"light_quadratic_attenuation"
#define DAE_FX_STATE_LIGHT_SPOT_CUTOFF				"light_spot_cutoff"
#define DAE_FX_STATE_LIGHT_SPOT_DIRECTION			"light_spot_direction"
#define DAE_FX_STATE_LIGHT_SPOT_EXPONENT			"light_spot_exponent"
#define DAE_FX_STATE_TEXTURE1D						"texture1D"
#define DAE_FX_STATE_TEXTURE2D						"texture2D"
#define DAE_FX_STATE_TEXTURE3D						"texture3D"
#define DAE_FX_STATE_TEXTURECUBE					"textureCUBE"
#define DAE_FX_STATE_TEXTURERECT					"textureRECT"
#define DAE_FX_STATE_TEXTUREDEPTH					"textureDEPTH"
#define DAE_FX_STATE_TEXTURE1D_ENABLE				"texture1D_enable"
#define DAE_FX_STATE_TEXTURE2D_ENABLE				"texture2D_enable"
#define DAE_FX_STATE_TEXTURE3D_ENABLE				"texture3D_enable"
#define DAE_FX_STATE_TEXTURECUBE_ENABLE				"textureCUBE_enable"
#define DAE_FX_STATE_TEXTURERECT_ENABLE				"textureRECT_enable"
#define DAE_FX_STATE_TEXTUREDEPTH_ENABLE			"textureDEPTH_enable"
#define DAE_FX_STATE_TEXTURE_ENV_COLOR				"texture_env_color"
#define DAE_FX_STATE_TEXTURE_ENV_MODE				"texture_env_mode"
#define DAE_FX_STATE_CLIP_PLANE						"clip_plane"
#define DAE_FX_STATE_CLIP_PLANE_ENABLE				"clip_plane_enable"
#define DAE_FX_STATE_BLEND_COLOR					"blend_color"
#define DAE_FX_STATE_CLEAR_COLOR					"clear_color"
#define DAE_FX_STATE_CLEAR_STENCIL					"clear_stencil"
#define DAE_FX_STATE_CLEAR_DEPTH					"clear_depth"
#define DAE_FX_STATE_COLOR_MASK						"color_mask"
#define DAE_FX_STATE_DEPTH_BOUNDS					"depth_bounds"
#define DAE_FX_STATE_DEPTH_MASK						"depth_mask"
#define DAE_FX_STATE_DEPTH_RANGE					"depth_range"
#define DAE_FX_STATE_FOG_DENSITY					"fog_density"
#define DAE_FX_STATE_FOG_START						"fog_start"
#define DAE_FX_STATE_FOG_END						"fog_end"
#define DAE_FX_STATE_FOG_COLOR						"fog_color"
#define DAE_FX_STATE_LIGHT_MODEL_AMBIENT			"light_model_ambient"
#define DAE_FX_STATE_LIGHTING_ENABLE				"lighting_enable"
#define DAE_FX_STATE_LINE_STIPPLE					"line_stipple"
#define DAE_FX_STATE_LINE_STIPPLE_ENABLE			"line_stipple_enable"
#define DAE_FX_STATE_LINE_WIDTH						"line_width"
#define DAE_FX_STATE_MATERIAL_AMBIENT				"material_ambient"
#define DAE_FX_STATE_MATERIAL_DIFFUSE				"material_diffuse"
#define DAE_FX_STATE_MATERIAL_EMISSION				"material_emission"
#define DAE_FX_STATE_MATERIAL_SHININESS				"material_shininess"
#define DAE_FX_STATE_MATERIAL_SPECULAR				"material_specular"
#define DAE_FX_STATE_MODEL_VIEW_MATRIX				"model_view_matrix"
#define DAE_FX_STATE_POINT_DISTANCE_ATTENUATION		"point_distance_attenuation"
#define DAE_FX_STATE_POINT_FADE_THRESHOLD_SIZE		"point_fade_threshold_size"
#define DAE_FX_STATE_POINT_SIZE						"point_size"
#define DAE_FX_STATE_POINT_SIZE_MIN					"point_size_min"
#define DAE_FX_STATE_POINT_SIZE_MAX					"point_size_max"
#define DAE_FX_STATE_POLYGON_OFFSET					"polygon_offset"
#define DAE_FX_STATE_PROJECTION_MATRIX				"projection_matrix"
#define DAE_FX_STATE_SCISSOR						"scissor"
#define DAE_FX_STATE_STENCIL_MASK					"stencil_mask"
#define DAE_FX_STATE_ALPHA_TEST_ENABLE				"alpha_test_enable"
#define DAE_FX_STATE_AUTO_NORMAL_ENABLE				"auto_normal_enable"
#define DAE_FX_STATE_BLEND_ENABLE					"blend_enable"
#define DAE_FX_STATE_COLOR_LOGIC_OP_ENABLE			"color_logic_op_enable"
#define DAE_FX_STATE_COLOR_MATERIAL_ENABLE			"color_material_enable"
#define DAE_FX_STATE_CULL_FACE_ENABLE				"cull_face_enable"
#define DAE_FX_STATE_DEPTH_BOUNDS_ENABLE			"depth_bounds_enable"
#define DAE_FX_STATE_DEPTH_CLAMP_ENABLE				"depth_clamp_enable"
#define DAE_FX_STATE_DEPTH_TEST_ENABLE				"depth_test_enable"
#define DAE_FX_STATE_DITHER_ENABLE					"dither_enable"
#define DAE_FX_STATE_FOG_ENABLE						"fog_enable"
#define DAE_FX_STATE_LIGHT_MODEL_LOCAL_VIEWER_ENABLE "light_model_local_viewer_enable"
#define DAE_FX_STATE_LIGHT_MODEL_TWO_SIDE_ENABLE	"light_model_two_side_enable"
#define DAE_FX_STATE_LINE_SMOOTH_ENABLE				"line_smooth_enable"
#define DAE_FX_STATE_LOGIC_OP_ENABLE				"logic_op_enable"
#define DAE_FX_STATE_MULTISAMPLE_ENABLE				"multisample_enable"
#define DAE_FX_STATE_NORMALIZE_ENABLE				"normalize_enable"
#define DAE_FX_STATE_POINT_SMOOTH_ENABLE			"point_smooth_enable"
#define DAE_FX_STATE_POLYGON_OFFSET_FILL_ENABLE		"polygon_offset_fill_enable"
#define DAE_FX_STATE_POLYGON_OFFSET_LINE_ENABLE		"polygon_offset_line_enable"
#define DAE_FX_STATE_POLYGON_OFFSET_POINT_ENABLE	"polygon_offset_point_enable"
#define DAE_FX_STATE_POLYGON_SMOOTH_ENABLE			"polygon_smooth_enable"
#define DAE_FX_STATE_POLYGON_STIPPLE_ENABLE			"polygon_stipple_enable"
#define DAE_FX_STATE_RESCALE_NORMAL_ENABLE			"rescale_normal_enable"
#define DAE_FX_STATE_SAMPLE_ALPHA_TO_COVERAGE_ENABLE "sample_alpha_to_coverage_enable"
#define DAE_FX_STATE_SAMPLE_ALPHA_TO_ONE_ENABLE		"sample_alpha_to_one_enable"
#define DAE_FX_STATE_SAMPLE_COVERAGE_ENABLE			"sample_coverage_enable"
#define DAE_FX_STATE_SCISSOR_TEST_ENABLE			"scissor_test_enable"
#define DAE_FX_STATE_STENCIL_TEST_ENABLE			"stencil_test_enable"
#line 284
#define DAEMAYA_CONSTANT_INFINITY						"CONSTANT"
#define DAEMAYA_LINEAR_INFINITY							"LINEAR"
#define DAEMAYA_CYCLE_INFINITY							"CYCLE"
#define DAEMAYA_CYCLE_RELATIVE_INFINITY					"CYCLE_RELATIVE"
#define DAEMAYA_OSCILLATE_INFINITY						"OSCILLATE"

#define DAEMAYA_NONE_BLENDMODE							"NONE"
#define DAEMAYA_OVER_BLENDMODE							"OVER"
#define DAEMAYA_IN_BLENDMODE							"IN"
#define DAEMAYA_OUT_BLENDMODE							"OUT"
#define DAEMAYA_ADD_BLENDMODE							"ADD"
#define DAEMAYA_SUBTRACT_BLENDMODE						"SUBTRACT"
#define DAEMAYA_MULTIPLY_BLENDMODE						"MULTIPLY"
#define DAEMAYA_DIFFERENCE_BLENDMODE					"DIFFERENCE"
#define DAEMAYA_LIGHTEN_BLENDMODE						"LIGHTEN"
#define DAEMAYA_DARKEN_BLENDMODE						"DARKEN"
#define DAEMAYA_SATURATE_BLENDMODE						"SATURATE"
#define DAEMAYA_DESATURATE_BLENDMODE					"DESATURATE"
#define DAEMAYA_ILLUMINATE_BLENDMODE					"ILLUMINATE"

#endif
#line 18 ".\\FUtils\\FUDaeEnum.cpp"
// #include "FUDaeSyntax.h"   (FCollada 3.05B, pasted in place)
#line 15 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\futils\\FUDaeSyntax.h"
#ifndef _DAE_SYNTAX_H_
#define _DAE_SYNTAX_H_
#line 21
#define DAE_NAMESPACE_ATTRIBUTE						"xmlns"
#define DAE_SCHEMA_LOCATION							"http://www.collada.org/2005/11/COLLADASchema"
#define DAE_VERSION_ATTRIBUTE						"version"
#define DAE_SCHEMA_VERSION							"1.4.1"
#line 27
#define DAE_LIBRARY_ANIMATION_ELEMENT				"library_animations"
#define DAE_LIBRARY_ANIMATION_CLIP_ELEMENT			"library_animation_clips"
#define DAE_LIBRARY_CAMERA_ELEMENT					"library_cameras"
#define DAE_LIBRARY_CONTROLLER_ELEMENT				"library_controllers"
#define DAE_LIBRARY_EFFECT_ELEMENT					"library_effects"
#define DAE_LIBRARY_FFIELDS_ELEMENT					"library_force_fields"
#define DAE_LIBRARY_GEOMETRY_ELEMENT				"library_geometries"
#define DAE_LIBRARY_IMAGE_ELEMENT					"library_images"
#define DAE_LIBRARY_LIGHT_ELEMENT					"library_lights"
#define DAE_LIBRARY_MATERIAL_ELEMENT				"library_materials"
#define DAE_LIBRARY_NODE_ELEMENT					"library_nodes"
#define DAE_LIBRARY_PMATERIAL_ELEMENT				"library_physics_materials"
#define DAE_LIBRARY_PMODEL_ELEMENT					"library_physics_models"
#define DAE_LIBRARY_PSCENE_ELEMENT					"library_physics_scenes"
#define DAE_LIBRARY_VSCENE_ELEMENT					"library_visual_scenes"

#define DAE_INSTANCE_ANIMATION_ELEMENT				"instance_animation"
#define DAE_INSTANCE_CAMERA_ELEMENT					"instance_camera"
#define DAE_INSTANCE_CONTROLLER_ELEMENT				"instance_controller"
#define DAE_INSTANCE_EFFECT_ELEMENT					"instance_effect"
#define DAE_INSTANCE_GEOMETRY_ELEMENT				"instance_geometry"
#define DAE_INSTANCE_LIGHT_ELEMENT					"instance_light"
#define DAE_INSTANCE_MATERIAL_ELEMENT				"instance_material"
#define DAE_INSTANCE_NODE_ELEMENT					"instance_node"
#define DAE_INSTANCE_VSCENE_ELEMENT					"instance_visual_scene"

#define DAE_ANIMCLIP_ELEMENT						"animation_clip"
#define DAE_BIND_ELEMENT							"bind"
#define DAE_BIND_VERTEX_INPUT_ELEMENT				"bind_vertex_input"
#define DAE_BIND_TEXTURE_SURFACE_ELEMENT			"bind_texture_surface"
#define DAE_BINDMATERIAL_ELEMENT					"bind_material"
#define DAE_COLOR_ELEMENT							"color"
#define DAE_CONTROL_VERTICES_ELEMENT				"control_vertices"
#define DAE_EFFECT_ELEMENT							"effect"
#define DAE_MIP_LEVELS								"mip_levels"
#define DAE_MIPMAP_GENERATE							"mipmap_generate"
#define DAE_SAMPLER_ELEMENT							"sampler"
#define DAE_SKELETON_ELEMENT						"skeleton"
#define DAE_TARGETS_ELEMENT							"targets"
#define DAE_TECHNIQUE_COMMON_ELEMENT				"technique_common"
#define DAE_VIEWPORT_RATIO							"viewport_ratio"
#define DAE_VSCENE_ELEMENT							"visual_scene"
#define DAE_WEIGHTS_ELEMENT							"vertex_weights"
#define DAE_VERTEXCOUNT_ELEMENT						"vcount"

#define DAE_INITASNULL_ELEMENT						"init_as_null"
#define DAE_INITASTARGET_ELEMENT					"init_as_target"
#define DAE_INITCUBE_ELEMENT						"init_cube"
#define DAE_INITVOLUME_ELEMENT						"init_volume"
#define DAE_INITPLANAR_ELEMENT						"init_planar"
#define DAE_INITFROM_ELEMENT						"init_from"
#define DAE_ALL_ELEMENT								"all"
#define DAE_PRIMARY_ELEMENT							"primary"
#define DAE_FACE_ELEMENT							"face"
#define DAE_ORDER_ELEMENT							"order"

#define DAE_FXCMN_ANNOTATE_ELEMENT					"annotate"
#define DAE_FXCMN_BIND_ELEMENT						"bind"
#define DAE_FXCMN_BOOL_ELEMENT						"bool"
#define DAE_FXCMN_CODE_ELEMENT						"code"
#define DAE_FXCMN_COMPILERTARGET_ELEMENT			"compiler_target"
#define DAE_FXCMN_COMPILEROPTIONS_ELEMENT			"compiler_options"
#define DAE_FXCMN_INT_ELEMENT						"int"
#define DAE_FXCMN_HALF_ELEMENT						"half"
#define DAE_FXCMN_HALF2_ELEMENT						"half2"
#define DAE_FXCMN_HALF3_ELEMENT						"half3"
#define DAE_FXCMN_HALF4_ELEMENT						"half4"
#define DAE_FXCMN_HALF4X4_ELEMENT					"half4x4"
#define DAE_FXCMN_FLOAT_ELEMENT						"float"
#define DAE_FXCMN_FLOAT2_ELEMENT					"float2"
#define DAE_FXCMN_FLOAT3_ELEMENT					"float3"
#define DAE_FXCMN_FLOAT4_ELEMENT					"float4"
#define DAE_FXCMN_FLOAT4X4_ELEMENT					"float4x4"
#define DAE_FXCMN_HINT_ELEMENT						"technique_hint"
#define DAE_FXCMN_INCLUDE_ELEMENT					"include"
#define DAE_FXCMN_SURFACE_ELEMENT					"surface"
#define DAE_FXCMN_SAMPLER1D_ELEMENT					"sampler1D"
#define DAE_FXCMN_SAMPLER2D_ELEMENT					"sampler2D"
#define DAE_FXCMN_SAMPLER3D_ELEMENT					"sampler3D"
#define DAE_FXCMN_SAMPLERCUBE_ELEMENT				"samplerCUBE"
#define DAE_FXCMN_SEMANTIC_ELEMENT					"semantic"
#define DAE_FXCMN_SETPARAM_ELEMENT					"setparam"
#define DAE_FXCMN_NEWPARAM_ELEMENT					"newparam"
#define DAE_FXCMN_STRING_ELEMENT					"string"
#define DAE_FXCMN_NAME_ELEMENT						"name"

#define DAE_FXCMN_VERTEX_SHADER						"VERTEX"
#define DAE_FXCMN_FRAGMENT_SHADER					"FRAGMENT"
#define DAE_FXGLSL_VERTEX_SHADER                    "VERTEXPROGRAM"
#define DAE_FXGLSL_FRAGMENT_SHADER                  "FRAGMENTPROGRAM"

#define DAE_FXSTD_CONSTANT_ELEMENT					"constant"
#define DAE_FXSTD_LAMBERT_ELEMENT					"lambert"
#define DAE_FXSTD_PHONG_ELEMENT						"phong"
#define DAE_FXSTD_BLINN_ELEMENT						"blinn"
#define DAE_FXSTD_COLOR_ELEMENT						"color"
#define DAE_FXSTD_FLOAT_ELEMENT						"float"
#define DAE_FXSTD_TEXTURE_ELEMENT					"texture"
#define DAE_FXSTD_TEXTURE_ATTRIBUTE					"texture"
#define DAE_FXSTD_TEXTURESET_ATTRIBUTE				"texcoord"

#define DAE_FXSTD_STATE_ALPHA_ELEMENT				"alpha"
#define DAE_FXSTD_STATE_BACK_ELEMENT				"back"
#define DAE_FXSTD_STATE_DEST_ELEMENT				"dest"
#define DAE_FXSTD_STATE_DESTALPHA_ELEMENT			"dest_alpha"
#define DAE_FXSTD_STATE_DESTRGB_ELEMENT				"dest_rgb"
#define DAE_FXSTD_STATE_FACE_ELEMENT				"face"
#define DAE_FXSTD_STATE_FAIL_ELEMENT				"fail"
#define DAE_FXSTD_STATE_FUNC_ELEMENT				"func"
#define DAE_FXSTD_STATE_FRONT_ELEMENT				"front"
#define DAE_FXSTD_STATE_MASK_ELEMENT				"mask"
#define DAE_FXSTD_STATE_MODE_ELEMENT				"mode"
#define DAE_FXSTD_STATE_REF_ELEMENT					"ref"
#define DAE_FXSTD_STATE_RGB_ELEMENT					"rgb"
#define DAE_FXSTD_STATE_SRC_ELEMENT					"src"
#define DAE_FXSTD_STATE_SRCALPHA_ELEMENT			"src_alpha"
#define DAE_FXSTD_STATE_SRCRGB_ELEMENT				"src_rgb"
#define DAE_FXSTD_STATE_VALUE_ELEMENT				"value"
#define DAE_FXSTD_STATE_ZFAIL_ELEMENT				"zfail"
#define DAE_FXSTD_STATE_ZPASS_ELEMENT				"zpass"

#define DAE_CONTROLLER_SKIN_ELEMENT					"skin"
#define DAE_CONTROLLER_MORPH_ELEMENT				"morph"

#define DAE_CAMERA_PERSP_ELEMENT					"perspective"
#define DAE_CAMERA_ORTHO_ELEMENT					"orthographic"

#define DAE_RGB_ZERO_ELEMENT						"RGB_ZERO"
#define DAE_A_ONE_ELEMENT							"A_ONE"

#define DAE_ASPECT_CAMERA_PARAMETER					"aspect_ratio"
#define DAE_XFOV_CAMERA_PARAMETER					"xfov"
#define DAE_YFOV_CAMERA_PARAMETER					"yfov"
#define DAE_ZNEAR_CAMERA_PARAMETER					"znear"
#define DAE_ZFAR_CAMERA_PARAMETER					"zfar"
#define DAE_XMAG_CAMERA_PARAMETER					"xmag"
#define DAE_YMAG_CAMERA_PARAMETER					"ymag"

#define DAE_AMBIENT_MATERIAL_PARAMETER				"ambient"
#define DAE_BUMP_MATERIAL_PARAMETER					"bump"
#define DAE_DIFFUSE_MATERIAL_PARAMETER				"diffuse"
#define DAE_EMISSION_MATERIAL_PARAMETER				"emission"
#define DAE_TRANSPARENCY_MATERIAL_PARAMETER			"transparency"
#define DAE_TRANSPARENT_MATERIAL_PARAMETER			"transparent"
#define DAE_OPAQUE_MATERIAL_ATTRIBUTE				"opaque"
#define DAE_REFLECTIVE_MATERIAL_PARAMETER			"reflective"
#define DAE_REFLECTIVITY_MATERIAL_PARAMETER			"reflectivity"
#define DAE_INDEXOFREFRACTION_MATERIAL_PARAMETER	"index_of_refraction"
#define DAE_SHININESS_MATERIAL_PARAMETER			"shininess"
#define DAE_SPECULAR_MATERIAL_PARAMETER				"specular"

#define DAE_LIGHT_AMBIENT_ELEMENT					"ambient"
#define DAE_LIGHT_POINT_ELEMENT						"point"
#define DAE_LIGHT_DIRECTIONAL_ELEMENT				"directional"
#define DAE_LIGHT_SPOT_ELEMENT						"spot"

#define DAE_COLOR_LIGHT_PARAMETER					"color"
#define DAE_CONST_ATTENUATION_LIGHT_PARAMETER		"constant_attenuation"
#define DAE_LIN_ATTENUATION_LIGHT_PARAMETER			"linear_attenuation"
#define DAE_QUAD_ATTENUATION_LIGHT_PARAMETER		"quadratic_attenuation"
#define DAE_FALLOFFEXPONENT_LIGHT_PARAMETER			"falloff_exponent"
#define DAE_FALLOFFANGLE_LIGHT_PARAMETER			"falloff_angle"

#define DAE_BINDSHAPEMX_SKIN_PARAMETER				"bind_shape_matrix"

#define DAE_CONTRIBUTOR_ASSET_ELEMENT				"contributor"
#define DAE_AUTHOR_ASSET_PARAMETER					"author"
#define DAE_AUTHORINGTOOL_ASSET_PARAMETER			"authoring_tool"
#define DAE_CREATED_ASSET_PARAMETER					"created"
#define DAE_COMMENTS_ASSET_PARAMETER				"comments"
#define DAE_COPYRIGHT_ASSET_PARAMETER				"copyright"
#define DAE_KEYWORDS_ASSET_PARAMETER				"keywords"
#define DAE_MODIFIED_ASSET_PARAMETER				"modified"
#define DAE_REVISION_ASSET_PARAMETER				"revision"
#define DAE_SOURCEDATA_ASSET_PARAMETER				"source_data"
#define DAE_SUBJECT_ASSET_PARAMETER					"subject"
#define DAE_TITLE_ASSET_PARAMETER					"title"
#define DAE_UNITS_ASSET_PARAMETER					"unit"
#define DAE_UPAXIS_ASSET_PARAMETER					"up_axis"

#define DAE_PHYSICS_STATIC_FRICTION					"static_friction"
#define DAE_PHYSICS_DYNAMIC_FRICTION				"dynamic_friction"
#define DAE_PHYSICS_RESTITUTION						"restitution"
#line 212
#define DAE_CLOSED_ATTRIBUTE						"closed"
#define DAE_CLOSEDU_ATTRIBUTE						"closed_u"
#define DAE_CLOSEDV_ATTRIBUTE						"closed_v"
#define DAE_COUNT_ATTRIBUTE							"count"
#define DAE_DEGREE_ATTRIBUTE						"degree"
#define DAE_UDEGREE_ATTRIBUTE						"udegree"
#define DAE_VDEGREE_ATTRIBUTE						"vdegree"
#define DAE_END_ATTRIBUTE							"end"
#define	DAE_ID_ATTRIBUTE							"id"
#define DAE_MATERIAL_ATTRIBUTE						"material"
#define DAE_METERS_ATTRIBUTE						"meter"
#define DAE_METHOD_ATTRIBUTE						"method"
#define DAE_NAME_ATTRIBUTE							"name"
#define DAE_OFFSET_ATTRIBUTE						"offset"
#define DAE_PLATFORM_ATTRIBUTE						"platform"
#define DAE_PROFILE_ATTRIBUTE						"profile"
#define DAE_REF_ATTRIBUTE							"ref"
#define DAE_SEMANTIC_ATTRIBUTE						"semantic"
#define DAE_INDEX_ATTRIBUTE							"index"
#define DAE_INPUT_SEMANTIC_ATTRIBUTE				"input_semantic"
#define DAE_INPUT_SET_ATTRIBUTE						"input_set"
#define DAE_SET_ATTRIBUTE							"set"
#define DAE_SID_ATTRIBUTE							"sid"
#define DAE_START_ATTRIBUTE							"start"
#define DAE_STRIDE_ATTRIBUTE						"stride"
#define DAE_SOURCE_ATTRIBUTE						"source"
#define DAE_SURFACE_ATTRIBUTE						"surface"
#define DAE_SYMBOL_ATTRIBUTE						"symbol"
#define	DAE_TARGET_ATTRIBUTE						"target"
#define DAE_TEXTURE_ATTRIBUTE						"texture"
#define DAE_TYPE_ATTRIBUTE							"type"
#define DAE_URL_ATTRIBUTE							"url"
#define DAE_STAGE_ATTRIBUTE							"stage"
#define DAE_VALUE_ATTRIBUTE							"value"

#define	DAE_MIP_ATTRIBUTE							"mip"
#define DAE_SLICE_ATTRIBUTE							"slice"
#define	DAE_FACE_ATTRIBUTE							"face"
#line 252
#define DAE_FLOAT_TYPE								"float"
#define DAE_IDREF_TYPE								"IDREF"
#define DAE_MATRIX_TYPE								"float4x4"
#define DAE_NAME_TYPE								"Name"

#define DAE_IMAGE_INPUT								"IMAGE"
#define DAE_TEXTURE_INPUT							"TEXTURE"
#define DAE_WEIGHT_MORPH_INPUT						"MORPH_WEIGHT"
#define DAE_WEIGHT_MORPH_INPUT_DEPRECATED			"WEIGHT"
#define DAE_TARGET_MORPH_INPUT						"MORPH_TARGET"
#define DAE_TARGET_MORPH_INPUT_DEPRECATED			"TARGET"

#define DAE_TIME_TARGET								"TIME"

#define DAE_JOINT_NODE_TYPE							"JOINT"
#define DAE_NODE_NODE_TYPE							"NODE"
#line 270
#define DAE_CVS_SPLINE_INPUT						"POSITION"
#line 276
#define DAE_KNOT_SPLINE_INPUT						"KNOTS"
#define DAE_WEIGHT_SPLINE_INPUT						"WEIGHTS"
#line 281
#define DAE_PHYSICS_MATERIAL_ELEMENT				"physics_material"
#define DAE_PHYSICS_MODEL_ELEMENT					"physics_model"
#define DAE_PHYSICS_SCENE_ELEMENT					"physics_scene"
#define DAE_INSTANCE_PHYSICS_MATERIAL_ELEMENT		"instance_physics_material"
#define DAE_INSTANCE_PHYSICS_MODEL_ELEMENT			"instance_physics_model"
#define DAE_INSTANCE_PHYSICS_SCENE_ELEMENT			"instance_physics_scene"
#define DAE_INSTANCE_RIGID_BODY_ELEMENT				"instance_rigid_body"
#define DAE_INSTANCE_RIGID_CONSTRAINT_ELEMENT		"instance_rigid_constraint"
#define DAE_INSTANCE_FORCE_FIELD_ELEMENT			"instance_force_field"
#define DAE_TIME_STEP_ATTRIBUTE						"time_step"
#define DAE_GRAVITY_ATTRIBUTE						"gravity"
#define DAE_RESTITUTION_ATTRIBUTE					"restitution"
#define DAE_STATIC_FRICTION_ATTRIBUTE				"static_friction"
#define DAE_DYNAMIC_FRICTION_ATTRIBUTE				"dynamic_friction"
#define DAE_VELOCITY_ELEMENT						"velocity"
#define DAE_ANGULAR_VELOCITY_ELEMENT				"angular_velocity"
#define DAE_BODY_ATTRIBUTE							"body"
#define DAE_CONSTRAINT_ATTRIBUTE					"constraint"
#define DAE_MASS_FRAME_ELEMENT						"mass_frame"
#define DAE_LIMITS_ELEMENT							"limits"
#define DAE_LINEAR_ELEMENT							"linear"
#define DAE_ANGULAR_ELEMENT							"angular"
#define DAE_SWING_CONE_AND_TWIST_ELEMENT			"swing_cone_and_twist"
#define DAE_CONVEX_HULL_OF_ATTRIBUTE				"convex_hull_of"
#define DAE_HEIGHT_ELEMENT							"height"
#line 308
#define DAE_MIN_ELEMENT								"min"
#define DAE_MAX_ELEMENT								"max"
#define DAE_SHAPE_ELEMENT							"shape"
#define	DAE_RIGID_BODY_ELEMENT						"rigid_body"
#define DAE_DYNAMIC_ELEMENT							"dynamic"
#define DAE_HOLLOW_ELEMENT							"hollow"
#define DAE_MASS_ELEMENT							"mass"
#define DAE_BOX_ELEMENT								"box"
#define DAE_SPHERE_ELEMENT							"sphere"
#define DAE_CAPSULE_ELEMENT							"capsule"
#define DAE_CYLINDER_ELEMENT						"cylinder"
#define DAE_ELLIPSOID_ELEMENT						"ellipsoid"
#define DAE_TAPERED_CAPSULE_ELEMENT					"tapered_capsule"
#define DAE_TAPERED_CYLINDER_ELEMENT				"tapered_cylinder"
#define DAE_PLANE_ELEMENT							"plane"
#define DAE_FORMAT_ELEMENT							"format"
#define DAE_FORMAT_HINT_ELEMENT						"format_hint"
#define DAE_PRECISION_ELEMENT						"precision"
#define DAE_OPTION_ELEMENT							"option"
#define DAE_HALF_EXTENTS_ELEMENT					"half_extents"
#define DAE_EQUATION_ELEMENT						"equation"
#define DAE_SIZE_ELEMENT							"size"
#define DAE_RADIUS_ELEMENT							"radius"
#define DAE_RADIUS1_ELEMENT							"radius1"
#define DAE_RADIUS2_ELEMENT							"radius2"
#define DAE_CONVEX_MESH_ELEMENT						"convex_mesh"
#define DAE_INERTIA_ELEMENT							"inertia"
#define DAE_DENSITY_ELEMENT							"density"
#define DAE_CENTER_OF_MASS_ELEMENT					"center_of_mass"
#define DAE_DYNAMICS_ELEMENT						"dynamics"
#define DAE_RIGID_CONSTRAINT_ELEMENT				"rigid_constraint"
#define DAE_FORCE_FIELD_ELEMENT						"force_field"
#define DAE_ATTACHMENT_ELEMENT						"attachment"
#define DAE_REF_ATTACHMENT_ELEMENT					"ref_attachment"
#define DAE_ROT_LIMIT_MIN_ELEMENT					"rot_limit_min"
#define DAE_ROT_LIMIT_MAX_ELEMENT					"rot_limit_max"
#define DAE_TRANS_LIMIT_MIN_ELEMENT					"trans_limit_min"
#define DAE_TRANS_LIMIT_MAX_ELEMENT					"trans_limit_max"
#define DAE_ENABLED_ELEMENT							"enabled"
#define DAE_INTERPENETRATE_ELEMENT					"interpenetrate"
#define DAE_SPRING_ELEMENT							"spring"
#define DAE_STIFFNESS_ELEMENT						"stiffness"
#define DAE_DAMPING_ELEMENT							"damping"
#define DAE_TARGET_VALUE_ELEMENT					"target_value"
#define DAE_ANNOTATE_ELEMENT						"annotate"
#define DAE_TRUE_KEYWORD							"true"
#define DAE_FALSE_KEYWORD							"false"
#line 357
#define DAE_FORMAT_HINT_RGB_VALUE					"RGB"
#define DAE_FORMAT_HINT_RGBA_VALUE					"RGBA"
#define DAE_FORMAT_HINT_L_VALUE						"L"
#define DAE_FORMAT_HINT_LA_VALUE					"LA"
#define DAE_FORMAT_HINT_D_VALUE						"D"
#define DAE_FORMAT_HINT_XYZ_VALUE					"XYZ"
#define DAE_FORMAT_HINT_XYZW_VALUE					"XYZW"
#define DAE_FORMAT_HINT_SNORM_VALUE					"SNORM"
#define DAE_FORMAT_HINT_UNORM_VALUE					"UNORM"
#define DAE_FORMAT_HINT_SINT_VALUE					"SINT"
#define DAE_FORMAT_HINT_UINT_VALUE					"UINT"
#define DAE_FORMAT_HINT_FLOAT_VALUE					"FLOAT"
#define DAE_FORMAT_HINT_LOW_VALUE					"LOW"
#define DAE_FORMAT_HINT_MID_VALUE					"MID"
#define DAE_FORMAT_HINT_HIGH_VALUE					"HIGH"
#define DAE_FORMAT_HINT_SRGB_GAMMA_VALUE			"SRGB_GAMMA"
#define DAE_FORMAT_HINT_NORMALIZED3_VALUE			"NORMALIZED3"
#define DAE_FORMAT_HINT_NORMALIZED4_VALUE			"NORMALIZED4"
#define DAE_FORMAT_HINT_COMPRESSABLE_VALUE			"COMPRESSABLE"
#line 378
#define DAE_EMITTER_ELEMENT							"emitter"
#define DAE_LIBRARY_EMITTER_ELEMENT					"library_emitters"
#define DAE_INSTANCE_EMITTER_ELEMENT				"instance_emitter"
#define DAE_INSTANCE_SPRITE_ELEMENT					"sprite"
#line 384
#define	DAE_ACCESSOR_ELEMENT						"accessor"
#define DAE_ANIMATION_ELEMENT						"animation"
#define DAE_ASSET_ELEMENT							"asset"
#define DAE_CAMERA_ELEMENT							"camera"
#define DAE_CHANNEL_ELEMENT							"channel"
#define DAE_CHANNELS_ELEMENT						"channels"
#define DAE_COLLADA_ELEMENT							"COLLADA"
#define DAE_CONTROLLER_ELEMENT						"controller"
#define DAE_DEPTH_ELEMENT							"depth"
#define DAE_EXTRA_ELEMENT							"extra"
#define DAE_RANGE_ELEMENT							"range"
#define DAE_FLOAT_ARRAY_ELEMENT						"float_array"
#define DAE_GEOMETRY_ELEMENT						"geometry"
#define DAE_HOLE_ELEMENT							"h"
#define DAE_IDREF_ARRAY_ELEMENT						"IDREF_array"
#define	DAE_IMAGE_ELEMENT							"image"
#define DAE_INPUT_ELEMENT							"input"
#define DAE_INT_ARRAY_ELEMENT						"int_array"
#define DAE_JOINTS_ELEMENT							"joints"
#define DAE_LIGHT_ELEMENT							"light"
#define DAE_LINES_ELEMENT							"lines"
#define DAE_LINESTRIPS_ELEMENT						"linestrips"
#define DAE_LOOKAT_ELEMENT							"lookat"
#define DAE_MATERIAL_ELEMENT						"material"
#define DAE_MATRIX_ELEMENT							"matrix"
#define DAE_MESH_ELEMENT							"mesh"
#define DAE_MIN_FILTER_ELEMENT						"minfilter"
#define DAE_MAG_FILTER_ELEMENT						"magfilter"
#define DAE_MIP_FILTER_ELEMENT						"mipfilter"
#define DAE_NAME_ARRAY_ELEMENT						"Name_array"
#define DAE_NODE_ELEMENT							"node"
#define DAE_OPTICS_ELEMENT							"optics"
#define DAE_PARAMETER_ELEMENT						"param"
#define DAE_PASS_ELEMENT							"pass"
#define DAE_POLYGON_ELEMENT							"p"
#define DAE_POLYGONHOLED_ELEMENT					"ph"
#define DAE_POLYGONS_ELEMENT						"polygons"
#define DAE_POLYLIST_ELEMENT						"polylist"
#define DAE_POINTS_ELEMENT							"points"
#define DAE_REST_LENGTH_ELEMENT1_3					"rest_length"
#define DAE_ROTATE_ELEMENT							"rotate"
#define	DAE_SCALE_ELEMENT							"scale"
#define DAE_SCENE_ELEMENT							"scene"
#define	DAE_SHADER_ELEMENT							"shader"
#define	DAE_SOURCE_ELEMENT							"source"
#define DAE_SPLINE_ELEMENT							"spline"
#define DAE_SKEW_ELEMENT							"skew"
#define DAE_TECHNIQUE_ELEMENT						"technique"
#define DAE_TEXTURE_ELEMENT							"texture"
#define DAE_TEXTURE_SURFACE_ELEMENT					"texture_surface"
#define	DAE_TRANSLATE_ELEMENT						"translate"
#define DAE_TRIANGLES_ELEMENT						"triangles"
#define DAE_TRIFANS_ELEMENT							"trifans"
#define DAE_TRIM_GROUP_ELEMENT						"trim_group"
#define DAE_TRISTRIPS_ELEMENT						"tristrips"
#define DAE_VERTEX_ELEMENT							"v"
#define DAE_VERTICES_ELEMENT						"vertices"
#define DAE_WIDTH_ELEMENT							"width"
#define DAE_WRAP_S_ELEMENT							"wrap_s"
#define DAE_WRAP_T_ELEMENT							"wrap_t"
#define DAE_WRAP_P_ELEMENT							"wrap_p"

#define DAE_BINDMATRIX_SKIN_INPUT					"INV_BIND_MATRIX"
#define DAE_JOINT_SKIN_INPUT						"JOINT"
#define DAE_WEIGHT_SKIN_INPUT						"WEIGHT"

#define DAE_INPUT_ANIMATION_INPUT					"INPUT"
#define DAE_OUTPUT_ANIMATION_INPUT					"OUTPUT"
#define DAE_INTANGENT_ANIMATION_INPUT				"IN_TANGENT"
#define DAE_OUTTANGENT_ANIMATION_INPUT				"OUT_TANGENT"
#define DAE_INTERPOLATION_ANIMATION_INPUT			"INTERPOLATION"
#define DAEFC_TCB_ANIMATION_INPUT					"TCB"
#define DAEFC_EASE_INOUT_ANIMATION_INPUT			"EASE_IN_OUT"

#define DAE_X_UP									"X_UP"
#define DAE_Y_UP									"Y_UP"
#define DAE_Z_UP									"Z_UP"
#line 463
#define DAE_POINT_LIST_INSTANCE						"points_list"
#define DAE_POINT_LIST_ITEM							"point"
#define DAE_POINT_LIST_POS							"position"
#define DAE_POINT_LIST_COLOR						"color"
#define DAE_POINT_LIST_SIZE							"size"
#line 471
#define DAESHD_DOUBLESIDED_PARAMETER				"double_sided"
#line 474
#define DAEMAX_MAX_PROFILE							"MAX3D"

#define DAEMAX_TARGET_CAMERA_PARAMETER				"target"
#define DAEMAX_ASPECTRATIO_LIGHT_PARAMETER			"aspect_ratio"
#define DAEMAX_TARGET_LIGHT_PARAMETER				"target"
#define DAEMAX_DEFAULT_TARGET_DIST_LIGHT_PARAMETER	"target_default_dist"
#define DAEMAX_OUTERCONE_LIGHT_PARAMETER			"outer_cone"
#define DAEMAX_OVERSHOOT_LIGHT_PARAMETER			"overshoot"
#define DAEMAX_SPECLEVEL_MATERIAL_PARAMETER			"spec_level"
#define DAEMAX_DISPLACEMENT_MATERIAL_PARAMETER		"displacement"
#define DAEMAX_EMISSIONLEVEL_MATERIAL_PARAMETER		"emission_level"
#define DAEMAX_FACETED_MATERIAL_PARAMETER			"faceted"
#define DAEMAX_FILTERCOLOR_MATERIAL_PARAMETER		"filter_color"
#define DAEMAX_INDEXOFREFRACTION_MATERIAL_PARAMETER "index_of_refraction"
#define DAEMAX_USERPROPERTIES_NODE_PARAMETER		"user_properties"
#define DAEMAX_WIREFRAME_MATERIAL_PARAMETER			"wireframe"
#define DAEMAX_FACEMAP_MATERIAL_PARAMETER			"face_map"
#define DAEMAX_AMOUNT_TEXTURE_PARAMETER				"amount"
#define DAEMAX_BUMP_INTERP_TEXTURE_PARAMETER		"bumpInterp"
#define DAEMAX_CAMERA_TARGETDISTANCE_PARAMETER		"target_distance"
#define DAEMAX_FRAMERATE_PARAMETER					"frame_rate"
#line 497
#define DAEMAX_DECAY_TYPE_PARAMETER					"decay_type"
#define DAEMAX_DECAY_START_PARAMETER				"decay_start"
#define DAEMAX_USE_NEAR_ATTEN_PARAMETER				"use_near_attenuation"
#define DAEMAX_NEAR_ATTEN_START_PARAMETER			"near_attenuation_start"
#define DAEMAX_NEAR_ATTEN_END_PARAMETER				"near_attenuation_end"
#define DAEMAX_USE_FAR_ATTEN_PARAMETER				"use_far_attenuation"
#define DAEMAX_FAR_ATTEN_START_PARAMETER			"far_attenuation_start"
#define DAEMAX_FAR_ATTEN_END_PARAMETER				"far_attenuation_end"
#line 507
#define DAEMAX_SHADOW_ATTRIBS						"shadow_attributes"
#define DAEMAX_SHADOW_TYPE							"type"
#define DAEMAX_SHADOW_TYPE_MAP						"type_map"
#define DAEMAX_SHADOW_TYPE_RAYTRACE					"type_raytrace"
#define DAEMAX_SHADOW_AFFECTS						"affect_list"
#define DAEMAX_SHADOW_LIST_NODES					"list_nodes"
#define DAEMAX_SHADOW_LIST_EXCLUDES					"list_is_exclusive"
#define DAEMAX_SHADOW_LIST_ILLUMINATES				"is_illuminated"
#define DAEMAX_SHADOW_LIST_CASTS					"casts_shadows"

#define DAEMAX_LIGHT_AFFECTS_SHADOW					"light_affects_shadow"
#define DAEMAX_PROJ_IMAGE							"proj_image"

#define DAEMAX_LIGHT_MAP							"light_map"
#define DAEMAX_SHADOW_MAP							"shadow_map"
#define DAEMAX_SHADOW_PROJ_COLOR					"shadow_color"
#define DAEMAX_SHADOW_PROJ_COLOR_MULT				"shadow_color_mult"
#line 527
#define DAEMAX_SKY_LIGHT							"skylight"
#define DAEMAX_SKY_RAYS_PER_SAMPLE_PARAMETER		"rays_per_sample"
#define DAEMAX_SKY_RAY_BIAS_PARAMETER				"ray_bias"
#define DAEMAX_SKY_CAST_SHADOWS_PARAMETER			"cast_shadows"
#define DAEMAX_SKY_COLOR_MAP						"color_map"
#define DAEMAX_SKY_COLOR_MAP_ON_PARAMETER			"color_map_on"
#define DAEMAX_SKY_COLOR_MAP_AMOUNT_PARAMETER		"color_map_amount"
#define DAEMAX_SKY_SKYMODE							"sky_mode"
#define DAEMAX_SKY_INTENSITY_ON						"intensity_on"
#line 538
#define DAEMAX_CAMERA_MOTIONBLUR_ELEMENT			"motion_blur"
#define DAEMAX_CAMERA_MB_DISPLAYPASSES_PARAMETER	"display_passes"
#define DAEMAX_CAMERA_MB_TOTALPASSES_PARAMETER		"total_passes"
#define DAEMAX_CAMERA_MB_DURATION_PARAMETER			"duration"
#define DAEMAX_CAMERA_MB_BIAS_PARAMETER				"bias"
#define DAEMAX_CAMERA_MB_NORMWEIGHTS_PARAMETER		"normalized_weights"
#define DAEMAX_CAMERA_MB_DITHERSTRENGTH_PARAMETER	"dither_strength"
#define DAEMAX_CAMERA_MB_TILESIZE_PARAMETER			"tile_size"
#define DAEMAX_CAMERA_MB_DISABLEFILTER_PARAMETER	"disable_filtering"
#define DAEMAX_CAMERA_MB_DISABLEANTIALIAS_PARAMETER	"disable_antialiasing"
#line 553
#define DAEMAYA_MAYA_PROFILE							"MAYA"

#define DAEMAYA_VAPERTURE_PARAMETER						"vertical_aperture"
#define DAEMAYA_HAPERTURE_PARAMETER						"horizontal_aperture"
#define DAEMAYA_LENSSQUEEZE_PARAMETER					"lens_squeeze"

#define DAEMAYA_PENUMBRA_LIGHT_PARAMETER				"penumbra_angle"
#define DAEMAYA_DROPOFF_LIGHT_PARAMETER					"dropoff"
#define DAEMAYA_AMBIENTSHADE_LIGHT_PARAMETER			"ambient_shade"

#define DAEMAYA_NOTE_PARAMETER							"note"
#define DAEMAYA_ENDTIME_PARAMETER						"end_time"
#define DAEMAYA_STARTTIME_PARAMETER						"start_time"
#define DAEMAYA_SEGMENTSCALECOMP_PARAMETER				"segment_scale_compensate"

#define DAEMAYA_DRIVER_INPUT							"DRIVER"
#define DAEMAYA_WEIGHT_INPUT							"WEIGHT"

#define DAEMAYA_TEXTURE_NODETYPE						"dgnode_type"
#define DAEMAYA_TEXTURE_FILETEXTURE						"kFile"
#define DAEMAYA_TEXTURE_PSDTEXTURE						"kPSDFile"

#define DAEMAYA_TEXTURE_IMAGE_SEQUENCE					"image_sequence"

#define DAEMAYA_CAMERA_FILMFIT							"film_fit"
#define DAEMAYA_CAMERA_FILMFITOFFSET					"film_fit_offset"
#define DAEMAYA_CAMERA_FILMOFFSETX						"film_offsetX"
#define DAEMAYA_CAMERA_FILMOFFSETY						"film_offsetY"
#line 583
#define DAEMAYA_BLINDNAME_PARAMETER						"BLINDNAME"
#define DAEMAYA_BLINDTYPEID_PARAMETER					"BLINDTYPEID"
#define DAEMAYA_DOUBLE_SIDED_PARAMETER					"DOUBLE_SIDED"
#define DAEMAYA_LAYER_PARAMETER							"layer"
#define DAEMAYA_LONGNAME_PARAMETER						"long_name"
#define DAEMAYA_PREINFINITY_PARAMETER					"pre_infinity"
#define DAEMAYA_POSTINFINITY_PARAMETER					"post_infinity"
#define DAEMAYA_SHORTNAME_PARAMETER						"short_name"

#define DAEMAYA_TEXTURE_WRAPU_PARAMETER					"wrapU"
#define DAEMAYA_TEXTURE_WRAPV_PARAMETER					"wrapV"
#define DAEMAYA_TEXTURE_MIRRORU_PARAMETER				"mirrorU"
#define DAEMAYA_TEXTURE_MIRRORV_PARAMETER				"mirrorV"
#define DAEMAYA_TEXTURE_COVERAGEU_PARAMETER				"coverageU"
#define DAEMAYA_TEXTURE_COVERAGEV_PARAMETER				"coverageV"
#define DAEMAYA_TEXTURE_TRANSFRAMEU_PARAMETER			"translateFrameU"
#define DAEMAYA_TEXTURE_TRANSFRAMEV_PARAMETER			"translateFrameV"
#define DAEMAYA_TEXTURE_ROTFRAME_PARAMETER				"rotateFrame"
#define DAEMAYA_TEXTURE_STAGGER_PARAMETER				"stagger"
#define DAEMAYA_TEXTURE_REPEATU_PARAMETER				"repeatU"
#define DAEMAYA_TEXTURE_REPEATV_PARAMETER				"repeatV"
#define DAEMAYA_TEXTURE_OFFSETU_PARAMETER				"offsetU"
#define DAEMAYA_TEXTURE_OFFSETV_PARAMETER				"offsetV"
#define DAEMAYA_TEXTURE_ROTATEUV_PARAMETER				"rotateUV"
#define DAEMAYA_TEXTURE_NOISEU_PARAMETER				"noiseU"
#define DAEMAYA_TEXTURE_NOISEV_PARAMETER				"noiseV"
#define DAEMAYA_TEXTURE_FAST_PARAMETER					"fast"
#define DAEMAYA_TEXTURE_BLENDMODE_PARAMETER				"blend_mode"

#define DAEMAYA_PROJECTION_ELEMENT						"projection"
#define DAEMAYA_PROJECTION_TYPE_PARAMETER				"type"
#define DAEMAYA_PROJECTION_MATRIX_PARAMETER				"matrix"
#line 617
#define DAE_FCOLLADA_PROFILE							"FCOLLADA"
#line 620
#define DAEFC_LIBRARIES_TYPE							"libraries"
#define DAEFC_INSTANCES_TYPE							"instances"
#line 624
#define DAEFC_DYNAMIC_ATTRIBUTES_ELEMENT				"dynamic_attributes"
#define DAEFC_BOOLEAN_ATTRIBUTE_TYPE					"bool"
#define DAEFC_INT_ATTRIBUTE_TYPE						"int"
#define DAEFC_INT2_ATTRIBUTE_TYPE						"int2"
#define DAEFC_INT3_ATTRIBUTE_TYPE						"int3"
#define DAEFC_STRING_ATTRIBUTE_TYPE						"string"
#define DAEFC_FLOAT_ATTRIBUTE_TYPE						"float"
#define DAEFC_FLOAT2_ATTRIBUTE_TYPE						"float2"
#define DAEFC_FLOAT3_ATTRIBUTE_TYPE						"float3"
#define DAEFC_FLOAT4_ATTRIBUTE_TYPE						"float4"
#define DAEFC_MATRIX_ATTRIBUTE_TYPE						"float4x4"
#define DAEFC_COLOR3_ATTRIBUTE_TYPE						"color3"
#line 638
#define DAEFC_CAMERA_DEPTH_OF_FIELD_ELEMENT				"depth_of_field"
#define DAEFC_CAMERA_DOF_USETARGETDIST_PARAMETER		"use_target_dist"
#define DAEFC_CAMERA_DOF_DISPLAYPASSES_PARAMETER		"display_passes"
#define DAEFC_CAMERA_DOF_FOCALDEPTH_PARAMETER			"focal_depth"
#define DAEFC_CAMERA_DOF_TOTALPASSES_PARAMETER			"total_passes"
#define DAEFC_CAMERA_DOF_SAMPLERADIUS_PARAMETER			"sample_radius"
#define DAEFC_CAMERA_DOF_SAMPLEBIAS_PARAMETER			"sample_bias"
#define DAEFC_CAMERA_DOF_NORMWEIGHTS_PARAMETER			"normalized_weights"
#define DAEFC_CAMERA_DOF_DITHERSTR_PARAMETER			"dither_strength"
#define DAEFC_CAMERA_DOF_TILESIZE_PARAMETER				"tile_size"
#define DAEFC_CAMERA_DOF_DISFILTERING_PARAMETER			"disable_filtering"
#define DAEFC_CAMERA_DOF_DISANTIALIAS_PARAMETER			"disable_antialiasing"
#define DAEFC_CAMERA_DOF_USEORIGLOC_PARAMETER			"use_original_location"
#line 653
#define DAEFC_TARGET_PARAMETER							"target"
#define DAEFC_INTENSITY_LIGHT_PARAMETER					"intensity"
#define DAEFC_VISIBILITY_PARAMETER						"visibility"
#line 660
#define DAEERR_UNKNOWN_ELEMENT							"unknown"
#define DAEERR_UNKNOWN_IDREF							"UNKNOWN_IDREF"
#define DAEERR_UNKNOWN_INPUT							"UNKNOWN"
#define DAEERR_UNKNOWN_MORPH_METHOD						"UNKNOWN"
#line 666
#define DAENV_NVIMPORT_PROFILE							"NV_import"
#define DAENV_IMPORT_ELEMENT							"import"
#define DAENV_PROFILE_PROPERTY							"profile"
#define DAENV_HLSL_PROFILE								"d3dfx"
#define DAENV_FILENAME_PROPERTY							"url"

#endif
#line 19 ".\\FUtils\\FUDaeEnum.cpp"

namespace FUDaeAccessor
{
	const char* XY[3] = { "X", "Y", 0 };
	const char* XYZW[5] = { "X", "Y", "Z", "W", 0 };
	const char* RGBA[5] = { "R", "G", "B", "A", 0 };
	const char* STPQ[5] = { "S", "T", "P", "Q", 0 };
};

namespace FUDaeInterpolation
{
	Interpolation FromString(const fm::string& value)
	{
		if (value == DAE_STEP_INTERPOLATION) return STEP;
		else if (value == DAE_LINEAR_INTERPOLATION) return LINEAR;
		else if (value == DAE_BEZIER_INTERPOLATION) return BEZIER;
		else if (value == DAE_TCB_INTERPOLATION) return TCB;
		else if (value.empty()) return BEZIER; // COLLADA 1.4.1, p4.92: application defined

		else return UNKNOWN;
	}

	const char* ToString(const Interpolation& value)
	{
		switch (value)
		{
		case STEP: return DAE_STEP_INTERPOLATION;
		case LINEAR: return DAE_LINEAR_INTERPOLATION;
		case BEZIER: return DAE_BEZIER_INTERPOLATION;
		case TCB: return DAE_TCB_INTERPOLATION;
		case UNKNOWN:
		default: return DAEERR_UNKNOWN_ELEMENT;
		}
	}
};

namespace FUDaeSplineType
{
	Type FromString(const fm::string& value)
	{
		if (IsEquivalent(value, DAE_LINEAR_SPLINE_TYPE)) return LINEAR;
		else if (IsEquivalent(value, DAE_BEZIER_SPLINE_TYPE)) return BEZIER;
		else if (IsEquivalent(value, DAE_NURBS_SPLINE_TYPE)) return NURBS;
		else return UNKNOWN;
	}

	const char* ToString(const Type& value)
	{
		switch (value)
		{
		case LINEAR: return DAE_LINEAR_SPLINE_TYPE;
		case BEZIER: return DAE_BEZIER_SPLINE_TYPE;
		case NURBS: return DAE_NURBS_SPLINE_TYPE;
		default: return DAE_UNKNOWN_SPLINE_TYPE;
		}
	}
};

namespace FUDaeSplineForm
{
	Form FromString(const fm::string& value)
	{
		if (IsEquivalent(value, DAE_OPEN_SPLINE_FORM)) return OPEN;
		else if (IsEquivalent(value, DAE_CLOSED_SPLINE_FORM)) return CLOSED;
		else return UNKNOWN;
	}

	const char* ToString(const Form& value)
	{
		switch (value)
		{
		case OPEN: return DAE_OPEN_SPLINE_FORM;
		case CLOSED: return DAE_CLOSED_SPLINE_FORM;
		default: return DAE_UNKNOWN_SPLINE_FORM;
		}
	}
};


namespace FUDaeTextureChannel
{
	Channel FromString(const fm::string& value)
	{
		if (value == DAE_AMBIENT_TEXTURE_CHANNEL) return AMBIENT;
		else if (value == DAE_BUMP_TEXTURE_CHANNEL) return BUMP;
		else if (value == DAE_DIFFUSE_TEXTURE_CHANNEL) return DIFFUSE;
		else if (value == DAE_DISPLACEMENT_TEXTURE_CHANNEL) return DISPLACEMENT;
		else if (value == DAE_EMISSION_TEXTURE_CHANNEL) return EMISSION;
		else if (value == DAE_FILTER_TEXTURE_CHANNEL) return FILTER;
//		else if (value == DAE_OPACITY_TEXTURE_CHANNEL) return OPACITY;
		else if (value == DAE_REFLECTION_TEXTURE_CHANNEL) return REFLECTION;
		else if (value == DAE_REFRACTION_TEXTURE_CHANNEL) return REFRACTION;
		else if (value == DAE_SHININESS_TEXTURE_CHANNEL) return SHININESS;
		else if (value == DAE_SPECULAR_TEXTURE_CHANNEL) return SPECULAR;
		else if (value == DAE_SPECULARLEVEL_TEXTURE_CHANNEL) return SPECULAR_LEVEL;
		else if (value == DAE_TRANSPARENT_TEXTURE_CHANNEL) return TRANSPARENT;
		else return UNKNOWN;
	}
};

namespace FUDaeTextureWrapMode
{
	WrapMode FromString(const char* value)
	{
		if (IsEquivalent(value, DAE_TEXTURE_WRAP_NONE)) return NONE;
		else if (IsEquivalent(value, DAE_TEXTURE_WRAP_WRAP)) return WRAP;
		else if (IsEquivalent(value, DAE_TEXTURE_WRAP_MIRROR)) return MIRROR;
		else if (IsEquivalent(value, DAE_TEXTURE_WRAP_CLAMP)) return CLAMP;
		else if (IsEquivalent(value, DAE_TEXTURE_WRAP_BORDER)) return BORDER;
		else return UNKNOWN;
	}

	const char* ToString(WrapMode wrap)
	{
		switch (wrap)
		{
		case NONE: return DAE_TEXTURE_WRAP_NONE;
		case WRAP: return DAE_TEXTURE_WRAP_WRAP;
		case MIRROR: return DAE_TEXTURE_WRAP_MIRROR;
		case CLAMP: return DAE_TEXTURE_WRAP_CLAMP;
		case BORDER: return DAE_TEXTURE_WRAP_BORDER;
		default: return DAE_TEXTURE_WRAP_UNKNOWN;
		}
	}
};

/** Contains the texture filter functions.*/
namespace FUDaeTextureFilterFunction
{
	FilterFunction FromString(const char* value)
	{
		if (IsEquivalent(value, DAE_TEXTURE_FILTER_NONE)) return NONE;
		else if (IsEquivalent(value, DAE_TEXTURE_FILTER_NEAREST)) return NEAREST;
		else if (IsEquivalent(value, DAE_TEXTURE_FILTER_LINEAR)) return LINEAR;
		else if (IsEquivalent(value, DAE_TEXTURE_FILTER_NEAR_MIP_NEAR)) return NEAREST_MIPMAP_NEAREST;
		else if (IsEquivalent(value, DAE_TEXTURE_FILTER_LIN_MIP_NEAR)) return LINEAR_MIPMAP_NEAREST;
		else if (IsEquivalent(value, DAE_TEXTURE_FILTER_NEAR_MIP_LIN)) return NEAREST_MIPMAP_LINEAR;
		else if (IsEquivalent(value, DAE_TEXTURE_FILTER_LIN_MIP_LIN)) return LINEAR_MIPMAP_LINEAR;
		else return UNKNOWN;
	}

	const char* ToString(FilterFunction function)
	{
		switch (function)
		{
		case NONE: return DAE_TEXTURE_FILTER_NONE;
		case NEAREST: return DAE_TEXTURE_FILTER_NEAREST;
		case NEAREST_MIPMAP_NEAREST: return DAE_TEXTURE_FILTER_NEAR_MIP_NEAR;
		case LINEAR_MIPMAP_NEAREST: return DAE_TEXTURE_FILTER_LIN_MIP_NEAR;
		case NEAREST_MIPMAP_LINEAR: return DAE_TEXTURE_FILTER_NEAR_MIP_LIN;
		case LINEAR_MIPMAP_LINEAR: return DAE_TEXTURE_FILTER_LIN_MIP_LIN;
		default: return DAE_TEXTURE_FILTER_UNKNOWN;
		}
	}
};

namespace FUDaeMorphMethod
{
	Method FromString(const char* value)
	{
		if (IsEquivalent(value, DAE_NORMALIZED_MORPH_METHOD)) return NORMALIZED;
		else if (IsEquivalent(value, DAE_RELATIVE_MORPH_METHOD)) return RELATIVE;
		else return DEFAULT;
	}

	const char* ToString(Method method)
	{
		switch (method)
		{
		case NORMALIZED: return DAE_NORMALIZED_MORPH_METHOD;
		case RELATIVE: return DAE_RELATIVE_MORPH_METHOD;
		case UNKNOWN:
		default: return DAEERR_UNKNOWN_MORPH_METHOD;
		}
	}
};

namespace FUDaeInfinity
{
	Infinity FromString(const char* value)
	{
		if (IsEquivalent(value, DAEMAYA_CONSTANT_INFINITY)) return CONSTANT;
		else if (IsEquivalent(value, DAEMAYA_LINEAR_INFINITY)) return LINEAR;
		else if (IsEquivalent(value, DAEMAYA_CYCLE_INFINITY)) return CYCLE;
		else if (IsEquivalent(value, DAEMAYA_CYCLE_RELATIVE_INFINITY)) return CYCLE_RELATIVE;
		else if (IsEquivalent(value, DAEMAYA_OSCILLATE_INFINITY)) return OSCILLATE;
		else return DEFAULT;
	}

	const char* ToString(Infinity type)
	{
		switch (type)
		{
		case CONSTANT: return DAEMAYA_CONSTANT_INFINITY;
		case LINEAR: return DAEMAYA_LINEAR_INFINITY;
		case CYCLE: return DAEMAYA_CYCLE_INFINITY;
		case CYCLE_RELATIVE: return DAEMAYA_CYCLE_RELATIVE_INFINITY;
		case OSCILLATE: return DAEMAYA_OSCILLATE_INFINITY;
		default: return DAEMAYA_CONSTANT_INFINITY;
		}
	}
};

namespace FUDaeBlendMode
{
	Mode FromString(const char* value)
	{
		if (IsEquivalent(value, DAEMAYA_NONE_BLENDMODE)) return NONE;
		else if (IsEquivalent(value, DAEMAYA_OVER_BLENDMODE)) return OVER;
		else if (IsEquivalent(value, DAEMAYA_IN_BLENDMODE)) return IN;
		else if (IsEquivalent(value, DAEMAYA_OUT_BLENDMODE)) return OUT;
		else if (IsEquivalent(value, DAEMAYA_ADD_BLENDMODE)) return ADD;
		else if (IsEquivalent(value, DAEMAYA_SUBTRACT_BLENDMODE)) return SUBTRACT;
		else if (IsEquivalent(value, DAEMAYA_MULTIPLY_BLENDMODE)) return MULTIPLY;
		else if (IsEquivalent(value, DAEMAYA_DIFFERENCE_BLENDMODE)) return DIFFERENCE;
		else if (IsEquivalent(value, DAEMAYA_LIGHTEN_BLENDMODE)) return LIGHTEN;
		else if (IsEquivalent(value, DAEMAYA_DARKEN_BLENDMODE)) return DARKEN;
		else if (IsEquivalent(value, DAEMAYA_SATURATE_BLENDMODE)) return SATURATE;
		else if (IsEquivalent(value, DAEMAYA_DESATURATE_BLENDMODE)) return DESATURATE;
		else if (IsEquivalent(value, DAEMAYA_ILLUMINATE_BLENDMODE)) return ILLUMINATE;
		else return UNKNOWN;
	}

	const char* ToString(Mode mode)
	{
		switch (mode)
		{
		case NONE: return DAEMAYA_NONE_BLENDMODE;
		case OVER: return DAEMAYA_OVER_BLENDMODE;
		case IN: return DAEMAYA_IN_BLENDMODE;
		case OUT: return DAEMAYA_OUT_BLENDMODE;
		case ADD: return DAEMAYA_ADD_BLENDMODE;
		case SUBTRACT: return DAEMAYA_SUBTRACT_BLENDMODE;
		case MULTIPLY: return DAEMAYA_MULTIPLY_BLENDMODE;
		case DIFFERENCE: return DAEMAYA_DIFFERENCE_BLENDMODE;
		case LIGHTEN: return DAEMAYA_LIGHTEN_BLENDMODE;
		case DARKEN: return DAEMAYA_DARKEN_BLENDMODE;
		case SATURATE: return DAEMAYA_SATURATE_BLENDMODE;
		case DESATURATE: return DAEMAYA_DESATURATE_BLENDMODE;
		case ILLUMINATE: return DAEMAYA_ILLUMINATE_BLENDMODE;
		default: return DAEMAYA_NONE_BLENDMODE;
		}
	}
}

namespace FUDaeGeometryInput
{
	Semantic FromString(const char* value)
	{
		if (IsEquivalent(value, DAE_POSITION_INPUT)) return POSITION;
		else if (IsEquivalent(value, DAE_VERTEX_INPUT)) return VERTEX;
		else if (IsEquivalent(value, DAE_NORMAL_INPUT)) return NORMAL;
		else if (IsEquivalent(value, DAE_GEOTANGENT_INPUT)) return GEOTANGENT;
		else if (IsEquivalent(value, DAE_GEOBINORMAL_INPUT)) return GEOBINORMAL;
		else if (IsEquivalent(value, DAE_TEXCOORD_INPUT)) return TEXCOORD;
		else if (IsEquivalent(value, DAE_TEXTANGENT_INPUT)) return TEXTANGENT;
		else if (IsEquivalent(value, DAE_TEXBINORMAL_INPUT)) return TEXBINORMAL;
		else if (IsEquivalent(value, DAE_MAPPING_INPUT)) return UV;
		else if (IsEquivalent(value, DAE_COLOR_INPUT)) return COLOR;
		else if (IsEquivalent(value, "POINT_SIZE")) return POINT_SIZE;
		else if (IsEquivalent(value, "POINT_ROT")) return POINT_ROTATION;
		else if (IsEquivalent(value, DAEMAYA_EXTRA_INPUT)) return EXTRA;
		else return UNKNOWN;
	}

    const char* ToString(Semantic semantic)
	{
		switch (semantic)
		{
		case POSITION: return DAE_POSITION_INPUT;
		case VERTEX: return DAE_VERTEX_INPUT;
		case NORMAL: return DAE_NORMAL_INPUT;
		case GEOTANGENT: return DAE_GEOTANGENT_INPUT;
		case GEOBINORMAL: return DAE_GEOBINORMAL_INPUT;
		case TEXCOORD: return DAE_TEXCOORD_INPUT;
		case TEXTANGENT: return DAE_TEXTANGENT_INPUT;
		case TEXBINORMAL: return DAE_TEXBINORMAL_INPUT;
		case UV: return DAE_MAPPING_INPUT;
		case COLOR: return DAE_COLOR_INPUT;
		case POINT_SIZE: return "POINT_SIZE";
		case POINT_ROTATION: return "POINT_ROT";
		case EXTRA: return DAEMAYA_EXTRA_INPUT;

		case UNKNOWN:
		default: return DAEERR_UNKNOWN_INPUT;
		}
	}
}

namespace FUDaeProfileType
{
	Type FromString(const char* value)
	{
		if (IsEquivalent(value, DAE_FX_PROFILE_COMMON_ELEMENT)) return COMMON;
		else if (IsEquivalent(value, DAE_FX_PROFILE_CG_ELEMENT)) return CG;
		else if (IsEquivalent(value, DAE_FX_PROFILE_HLSL_ELEMENT)) return HLSL;
		else if (IsEquivalent(value, DAE_FX_PROFILE_GLSL_ELEMENT)) return GLSL;
		else if (IsEquivalent(value, DAE_FX_PROFILE_GLES_ELEMENT)) return GLES;
		else return UNKNOWN;
	}

    const char* ToString(Type type)
	{
		switch (type)
		{
		case COMMON: return DAE_FX_PROFILE_COMMON_ELEMENT;
		case CG: return DAE_FX_PROFILE_CG_ELEMENT;
		case HLSL: return DAE_FX_PROFILE_HLSL_ELEMENT;
		case GLSL: return DAE_FX_PROFILE_GLSL_ELEMENT;
		case GLES: return DAE_FX_PROFILE_GLES_ELEMENT;

		case UNKNOWN:
		default: return DAEERR_UNKNOWN_INPUT;
		}
	}
}

namespace FUDaePassStateFunction
{
	Function FromString(const char* value)
	{
		if (IsEquivalent(value, DAE_FX_FUNCTION_NEVER)) return NEVER;
		else if (IsEquivalent(value, DAE_FX_FUNCTION_LESS)) return LESS;
		else if (IsEquivalent(value, DAE_FX_FUNCTION_EQUAL)) return EQUAL;
		else if (IsEquivalent(value, DAE_FX_FUNCTION_LEQUAL)) return LESS_EQUAL;
		else if (IsEquivalent(value, DAE_FX_FUNCTION_GREATER)) return GREATER;
		else if (IsEquivalent(value, DAE_FX_FUNCTION_NEQUAL)) return NOT_EQUAL;
		else if (IsEquivalent(value, DAE_FX_FUNCTION_GEQUAL)) return GREATER_EQUAL;
		else if (IsEquivalent(value, DAE_FX_FUNCTION_ALWAYS)) return ALWAYS;
		else return INVALID;
	}

	const char* ToString(Function fn)
	{
		switch (fn)
		{
		case NEVER: return DAE_FX_FUNCTION_NEVER;
		case LESS: return DAE_FX_FUNCTION_LESS;
		case EQUAL: return DAE_FX_FUNCTION_EQUAL;
		case LESS_EQUAL: return DAE_FX_FUNCTION_LEQUAL;
		case GREATER: return DAE_FX_FUNCTION_GREATER;
		case NOT_EQUAL: return DAE_FX_FUNCTION_NEQUAL;
		case GREATER_EQUAL: return DAE_FX_FUNCTION_GEQUAL;
		case ALWAYS: return DAE_FX_FUNCTION_ALWAYS;
		case INVALID:
		default: return DAEERR_UNKNOWN_INPUT;
		}
	}
};

namespace FUDaePassStateStencilOperation
{
	Operation FromString(const char* value)
	{
		if (IsEquivalent(value, DAE_FX_STATE_STENCILOP_KEEP)) return KEEP;
		else if (IsEquivalent(value, DAE_FX_STATE_STENCILOP_ZERO)) return ZERO;
		else if (IsEquivalent(value, DAE_FX_STATE_STENCILOP_REPLACE)) return REPLACE;
		else if (IsEquivalent(value, DAE_FX_STATE_STENCILOP_INCREMENT)) return INCREMENT;
		else if (IsEquivalent(value, DAE_FX_STATE_STENCILOP_DECREMENT)) return DECREMENT;
		else if (IsEquivalent(value, DAE_FX_STATE_STENCILOP_INVERT)) return INVERT;
		else if (IsEquivalent(value, DAE_FX_STATE_STENCILOP_INCREMENT_WRAP)) return INCREMENT_WRAP;
		else if (IsEquivalent(value, DAE_FX_STATE_STENCILOP_DECREMENT_WRAP)) return DECREMENT_WRAP;
		else return INVALID;
	}

	const char* ToString(Operation op)
	{
		switch (op)
		{
		case KEEP: return DAE_FX_STATE_STENCILOP_KEEP;
		case ZERO: return DAE_FX_STATE_STENCILOP_ZERO;
		case REPLACE: return DAE_FX_STATE_STENCILOP_REPLACE;
		case INCREMENT: return DAE_FX_STATE_STENCILOP_INCREMENT;
		case DECREMENT: return DAE_FX_STATE_STENCILOP_DECREMENT;
		case INVERT: return DAE_FX_STATE_STENCILOP_INVERT;
		case INCREMENT_WRAP: return DAE_FX_STATE_STENCILOP_INCREMENT_WRAP;
		case DECREMENT_WRAP: return DAE_FX_STATE_STENCILOP_DECREMENT_WRAP;
		case INVALID:
		default: return DAEERR_UNKNOWN_INPUT;
		}
	}
};

namespace FUDaePassStateBlendType
{
	Type FromString(const char* value)
	{
		if (IsEquivalent(value, DAE_FX_STATE_BLENDTYPE_ZERO)) return ZERO;
		else if (IsEquivalent(value, DAE_FX_STATE_BLENDTYPE_ONE)) return ONE;
		else if (IsEquivalent(value, DAE_FX_STATE_BLENDTYPE_SOURCE_COLOR)) return SOURCE_COLOR;
		else if (IsEquivalent(value, DAE_FX_STATE_BLENDTYPE_ONE_MINUS_SOURCE_COLOR)) return ONE_MINUS_SOURCE_COLOR;
		else if (IsEquivalent(value, DAE_FX_STATE_BLENDTYPE_DESTINATION_COLOR)) return DESTINATION_COLOR;
		else if (IsEquivalent(value, DAE_FX_STATE_BLENDTYPE_ONE_MINUS_DESTINATION_COLOR)) return ONE_MINUS_DESTINATION_COLOR;
		else if (IsEquivalent(value, DAE_FX_STATE_BLENDTYPE_SOURCE_ALPHA)) return SOURCE_ALPHA;
		else if (IsEquivalent(value, DAE_FX_STATE_BLENDTYPE_ONE_MINUS_SOURCE_ALPHA)) return ONE_MINUS_SOURCE_ALPHA;
		else if (IsEquivalent(value, DAE_FX_STATE_BLENDTYPE_DESTINATION_ALPHA)) return DESTINATION_ALPHA;
		else if (IsEquivalent(value, DAE_FX_STATE_BLENDTYPE_ONE_MINUS_DESTINATION_ALPHA)) return ONE_MINUS_DESTINATION_ALPHA;
		else if (IsEquivalent(value, DAE_FX_STATE_BLENDTYPE_CONSTANT_COLOR)) return CONSTANT_COLOR;
		else if (IsEquivalent(value, DAE_FX_STATE_BLENDTYPE_ONE_MINUS_CONSTANT_COLOR)) return ONE_MINUS_CONSTANT_COLOR;
		else if (IsEquivalent(value, DAE_FX_STATE_BLENDTYPE_CONSTANT_ALPHA)) return CONSTANT_ALPHA;
		else if (IsEquivalent(value, DAE_FX_STATE_BLENDTYPE_ONE_MINUS_CONSTANT_ALPHA)) return ONE_MINUS_CONSTANT_ALPHA;
		else if (IsEquivalent(value, DAE_FX_STATE_BLENDTYPE_SOURCE_ALPHA_SATURATE)) return SOURCE_ALPHA_SATURATE;
		else return INVALID;
	}

	const char* ToString(Type type)
	{
		switch (type)
		{
		case ZERO: return DAE_FX_STATE_BLENDTYPE_ZERO;
		case ONE: return DAE_FX_STATE_BLENDTYPE_ONE;
		case SOURCE_COLOR: return DAE_FX_STATE_BLENDTYPE_SOURCE_COLOR;
		case ONE_MINUS_SOURCE_COLOR: return DAE_FX_STATE_BLENDTYPE_ONE_MINUS_SOURCE_COLOR;
		case DESTINATION_COLOR: return DAE_FX_STATE_BLENDTYPE_DESTINATION_COLOR;
		case ONE_MINUS_DESTINATION_COLOR: return DAE_FX_STATE_BLENDTYPE_ONE_MINUS_DESTINATION_COLOR;
		case SOURCE_ALPHA: return DAE_FX_STATE_BLENDTYPE_SOURCE_ALPHA;
		case ONE_MINUS_SOURCE_ALPHA: return DAE_FX_STATE_BLENDTYPE_ONE_MINUS_SOURCE_ALPHA;
		case DESTINATION_ALPHA: return DAE_FX_STATE_BLENDTYPE_DESTINATION_ALPHA;
		case ONE_MINUS_DESTINATION_ALPHA: return DAE_FX_STATE_BLENDTYPE_ONE_MINUS_DESTINATION_ALPHA;
		case CONSTANT_COLOR: return DAE_FX_STATE_BLENDTYPE_CONSTANT_COLOR;
		case ONE_MINUS_CONSTANT_COLOR: return DAE_FX_STATE_BLENDTYPE_ONE_MINUS_CONSTANT_COLOR;
		case CONSTANT_ALPHA: return DAE_FX_STATE_BLENDTYPE_CONSTANT_ALPHA;
		case ONE_MINUS_CONSTANT_ALPHA: return DAE_FX_STATE_BLENDTYPE_ONE_MINUS_CONSTANT_ALPHA;
		case SOURCE_ALPHA_SATURATE: return DAE_FX_STATE_BLENDTYPE_SOURCE_ALPHA_SATURATE;
		case INVALID:
		default: return DAEERR_UNKNOWN_INPUT;
		}
	}
};

/** The render state face types. */
namespace FUDaePassStateFaceType
{
	Type FromString(const char* value)
	{
		if (IsEquivalent(value, DAE_FX_STATE_FACETYPE_FRONT)) return FRONT;
		else if (IsEquivalent(value, DAE_FX_STATE_FACETYPE_BACK)) return BACK;
		else if (IsEquivalent(value, DAE_FX_STATE_FACETYPE_FRONT_AND_BACK)) return FRONT_AND_BACK;
		else return INVALID;
	}

	const char* ToString(Type type)
	{
		switch (type)
		{
		case FRONT: return DAE_FX_STATE_FACETYPE_FRONT;
		case BACK: return DAE_FX_STATE_FACETYPE_BACK;
		case FRONT_AND_BACK: return DAE_FX_STATE_FACETYPE_FRONT_AND_BACK;
		case INVALID:
		default: return DAEERR_UNKNOWN_INPUT;
		}
	}
};

namespace FUDaePassStateBlendEquation
{
	Equation FromString(const char* value)
	{
		if (IsEquivalent(value, DAE_FX_STATE_BLENDEQ_ADD)) return ADD;
		else if (IsEquivalent(value, DAE_FX_STATE_BLENDEQ_SUBTRACT)) return SUBTRACT;
		else if (IsEquivalent(value, DAE_FX_STATE_BLENDEQ_REVERSE_SUBTRACT)) return REVERSE_SUBTRACT;
		else if (IsEquivalent(value, DAE_FX_STATE_BLENDEQ_MIN)) return MIN;
		else if (IsEquivalent(value, DAE_FX_STATE_BLENDEQ_MAX)) return MAX;
		else return INVALID;
	}

	const char* ToString(Equation equation)
	{
		switch (equation)
		{
		case ADD: return DAE_FX_STATE_BLENDEQ_ADD;
		case SUBTRACT: return DAE_FX_STATE_BLENDEQ_SUBTRACT;
		case REVERSE_SUBTRACT: return DAE_FX_STATE_BLENDEQ_REVERSE_SUBTRACT;
		case MIN: return DAE_FX_STATE_BLENDEQ_MIN;
		case MAX: return DAE_FX_STATE_BLENDEQ_MAX;
		case INVALID:
		default: return DAEERR_UNKNOWN_INPUT;
		}
	}
};

namespace FUDaePassStateMaterialType
{
	Type FromString(const char* value)
	{
		if (IsEquivalent(value, DAE_FX_STATE_MATERIALTYPE_EMISSION)) return EMISSION;
		else if (IsEquivalent(value, DAE_FX_STATE_MATERIALTYPE_AMBIENT)) return AMBIENT;
		else if (IsEquivalent(value, DAE_FX_STATE_MATERIALTYPE_DIFFUSE)) return DIFFUSE;
		else if (IsEquivalent(value, DAE_FX_STATE_MATERIALTYPE_SPECULAR)) return SPECULAR;
		else if (IsEquivalent(value, DAE_FX_STATE_MATERIALTYPE_AMBDIFF)) return AMBIENT_AND_DIFFUSE;
		else return INVALID;
	}

	const char* ToString(Type type)
	{
		switch (type)
		{
		case EMISSION: return DAE_FX_STATE_MATERIALTYPE_EMISSION;
		case AMBIENT: return DAE_FX_STATE_MATERIALTYPE_AMBIENT;
		case DIFFUSE: return DAE_FX_STATE_MATERIALTYPE_DIFFUSE;
		case SPECULAR: return DAE_FX_STATE_MATERIALTYPE_SPECULAR;
		case AMBIENT_AND_DIFFUSE: return DAE_FX_STATE_MATERIALTYPE_AMBDIFF;
		case INVALID:
		default: return DAEERR_UNKNOWN_INPUT;
		}
	}
};

namespace FUDaePassStateFogType
{
	Type FromString(const char* value)
	{
		if (IsEquivalent(value, DAE_FX_STATE_FOGTYPE_LINEAR)) return LINEAR;
		else if (IsEquivalent(value, DAE_FX_STATE_FOGTYPE_EXP)) return EXP;
		else if (IsEquivalent(value, DAE_FX_STATE_FOGTYPE_EXP2)) return EXP2;
		else return INVALID;
	}

	const char* ToString(Type type)
	{
		switch (type)
		{
		case LINEAR: return DAE_FX_STATE_FOGTYPE_LINEAR;
		case EXP: return DAE_FX_STATE_FOGTYPE_EXP;
		case EXP2: return DAE_FX_STATE_FOGTYPE_EXP2;
		case INVALID:
		default: return DAEERR_UNKNOWN_INPUT;
		}
	}
}

namespace FUDaePassStateFogCoordinateType
{
	Type FromString(const char* value)
	{
		if (IsEquivalent(value, DAE_FX_STATE_FOGCOORD_FOG_COORDINATE)) return FOG_COORDINATE;
		else if (IsEquivalent(value, DAE_FX_STATE_FOGCOORD_FRAGMENT_DEPTH)) return FRAGMENT_DEPTH;
		else return INVALID;
	}

	const char* ToString(Type type)
	{
		switch (type)
		{
		case FOG_COORDINATE: return DAE_FX_STATE_FOGCOORD_FOG_COORDINATE;
		case FRAGMENT_DEPTH: return DAE_FX_STATE_FOGCOORD_FRAGMENT_DEPTH;
		case INVALID:
		default: return DAEERR_UNKNOWN_INPUT;
		}
	}
};

namespace FUDaePassStateFrontFaceType
{
	Type FromString(const char* value)
	{
		if (IsEquivalent(value, DAE_FX_STATE_FFACE_CW)) return CLOCKWISE;
		else if (IsEquivalent(value, DAE_FX_STATE_FFACE_CCW)) return COUNTER_CLOCKWISE;
		else return INVALID;
	}

	const char* ToString(Type type)
	{
		switch (type)
		{
		case CLOCKWISE: return DAE_FX_STATE_FFACE_CW;
		case COUNTER_CLOCKWISE: return DAE_FX_STATE_FFACE_CCW;
		case INVALID:
		default: return DAEERR_UNKNOWN_INPUT;
		}
	}
};


/** The render state logic operations. */
namespace FUDaePassStateLogicOperation
{
	Operation FromString(const char* value)
	{
		if (IsEquivalent(value, DAE_FX_STATE_LOGICOP_CLEAR)) return CLEAR;
		else if (IsEquivalent(value, DAE_FX_STATE_LOGICOP_AND)) return AND;
		else if (IsEquivalent(value, DAE_FX_STATE_LOGICOP_AND_REVERSE)) return AND_REVERSE;
		else if (IsEquivalent(value, DAE_FX_STATE_LOGICOP_COPY)) return COPY;
		else if (IsEquivalent(value, DAE_FX_STATE_LOGICOP_AND_INVERTED)) return AND_INVERTED;
		else if (IsEquivalent(value, DAE_FX_STATE_LOGICOP_NOOP)) return NOOP;
		else if (IsEquivalent(value, DAE_FX_STATE_LOGICOP_XOR)) return XOR;
		else if (IsEquivalent(value, DAE_FX_STATE_LOGICOP_OR)) return OR;
		else if (IsEquivalent(value, DAE_FX_STATE_LOGICOP_NOR)) return NOR;
		else if (IsEquivalent(value, DAE_FX_STATE_LOGICOP_EQUIV)) return EQUIV;
		else if (IsEquivalent(value, DAE_FX_STATE_LOGICOP_INVERT)) return INVERT;
		else if (IsEquivalent(value, DAE_FX_STATE_LOGICOP_OR_REVERSE)) return OR_REVERSE;
		else if (IsEquivalent(value, DAE_FX_STATE_LOGICOP_COPY_INVERTED)) return COPY_INVERTED;
		else if (IsEquivalent(value, DAE_FX_STATE_LOGICOP_NAND)) return NAND;
		else if (IsEquivalent(value, DAE_FX_STATE_LOGICOP_SET)) return SET;
		else return INVALID;
	}

	const char* ToString(Operation op)
	{
		switch (op)
		{
		case CLEAR: return DAE_FX_STATE_LOGICOP_CLEAR;
		case AND: return DAE_FX_STATE_LOGICOP_AND;
		case AND_REVERSE: return DAE_FX_STATE_LOGICOP_AND_REVERSE;
		case COPY: return DAE_FX_STATE_LOGICOP_COPY;
		case AND_INVERTED: return DAE_FX_STATE_LOGICOP_AND_INVERTED;
		case NOOP: return DAE_FX_STATE_LOGICOP_NOOP;
		case XOR: return DAE_FX_STATE_LOGICOP_XOR;
		case OR: return DAE_FX_STATE_LOGICOP_OR;
		case NOR: return DAE_FX_STATE_LOGICOP_NOR;
		case EQUIV: return DAE_FX_STATE_LOGICOP_EQUIV;
		case INVERT: return DAE_FX_STATE_LOGICOP_INVERT;
		case OR_REVERSE: return DAE_FX_STATE_LOGICOP_OR_REVERSE;
		case COPY_INVERTED: return DAE_FX_STATE_LOGICOP_COPY_INVERTED;
		case NAND: return DAE_FX_STATE_LOGICOP_NAND;
		case SET: return DAE_FX_STATE_LOGICOP_SET;
		case INVALID:
		default: return DAEERR_UNKNOWN_INPUT;
		}
	}
};

/** The render state polygon modes. */
namespace FUDaePassStatePolygonMode
{
	Mode FromString(const char* value)
	{
		if (IsEquivalent(value,	DAE_FX_STATE_POLYMODE_POINT)) return POINT;
		else if (IsEquivalent(value, DAE_FX_STATE_POLYMODE_LINE)) return LINE;
		else if (IsEquivalent(value, DAE_FX_STATE_POLYMODE_FILL)) return FILL;
		else return INVALID;
	}

	const char* ToString(Mode mode)
	{
		switch (mode)
		{
		case POINT: return DAE_FX_STATE_POLYMODE_POINT;
		case LINE: return DAE_FX_STATE_POLYMODE_LINE;
		case FILL: return DAE_FX_STATE_POLYMODE_FILL;
		case INVALID:
		default: return DAEERR_UNKNOWN_INPUT;
		}
	}
};

/** The render state shading model. */
namespace FUDaePassStateShadeModel
{
	Model FromString(const char* value)
	{
		if (IsEquivalent(value, DAE_FX_STATE_SHADEMODEL_FLAT)) return FLAT;
		else if (IsEquivalent(value, DAE_FX_STATE_SHADEMODEL_SMOOTH)) return SMOOTH;
		else return INVALID;
	}

	const char* ToString(Model model)
	{
		switch (model)
		{
		case FLAT: return DAE_FX_STATE_SHADEMODEL_FLAT;
		case SMOOTH: return DAE_FX_STATE_SHADEMODEL_SMOOTH;
		case INVALID:
		default: return DAEERR_UNKNOWN_INPUT;
		}
	}
};

namespace FUDaePassStateLightModelColorControlType
{
	Type FromString(const char* value)
	{
		if (IsEquivalent(value, DAE_FX_STATE_LMCCT_SINGLE_COLOR)) return SINGLE_COLOR;
		else if (IsEquivalent(value, DAE_FX_STATE_LMCCT_SEPARATE_SPECULAR_COLOR)) return SEPARATE_SPECULAR_COLOR;
		else return INVALID;
	}

	const char* ToString(Type type)
	{
		switch (type)
		{
		case SINGLE_COLOR: return DAE_FX_STATE_LMCCT_SINGLE_COLOR;
		case SEPARATE_SPECULAR_COLOR: return DAE_FX_STATE_LMCCT_SEPARATE_SPECULAR_COLOR;
		case INVALID:
		default: return DAEERR_UNKNOWN_INPUT;
		}
	}
};

namespace FUDaePassState
{
	State FromString(const char* value)
	{
		if (IsEquivalent(value, DAE_FX_STATE_ALPHA_FUNC)) return ALPHA_FUNC;
		else if (IsEquivalent(value, DAE_FX_STATE_BLEND_FUNC)) return BLEND_FUNC;
		else if (IsEquivalent(value, DAE_FX_STATE_BLEND_FUNC_SEPARATE)) return BLEND_FUNC_SEPARATE;
		else if (IsEquivalent(value, DAE_FX_STATE_BLEND_EQUATION)) return BLEND_EQUATION;
		else if (IsEquivalent(value, DAE_FX_STATE_BLEND_EQUATION_SEPARATE)) return BLEND_EQUATION_SEPARATE;
		else if (IsEquivalent(value, DAE_FX_STATE_COLOR_MATERIAL)) return COLOR_MATERIAL;
		else if (IsEquivalent(value, DAE_FX_STATE_CULL_FACE)) return CULL_FACE;
		else if (IsEquivalent(value, DAE_FX_STATE_DEPTH_FUNC)) return DEPTH_FUNC;
		else if (IsEquivalent(value, DAE_FX_STATE_FOG_MODE)) return FOG_MODE;
		else if (IsEquivalent(value, DAE_FX_STATE_FOG_COORD_SRC)) return FOG_COORD_SRC;
		else if (IsEquivalent(value, DAE_FX_STATE_FRONT_FACE)) return FRONT_FACE;
		else if (IsEquivalent(value, DAE_FX_STATE_LIGHT_MODEL_COLOR_CONTROL)) return LIGHT_MODEL_COLOR_CONTROL;
		else if (IsEquivalent(value, DAE_FX_STATE_LOGIC_OP)) return LOGIC_OP;
		else if (IsEquivalent(value, DAE_FX_STATE_POLYGON_MODE)) return POLYGON_MODE;
		else if (IsEquivalent(value, DAE_FX_STATE_SHADE_MODEL)) return SHADE_MODEL;
		else if (IsEquivalent(value, DAE_FX_STATE_STENCIL_FUNC)) return STENCIL_FUNC;
		else if (IsEquivalent(value, DAE_FX_STATE_STENCIL_OP)) return STENCIL_OP;
		else if (IsEquivalent(value, DAE_FX_STATE_STENCIL_FUNC_SEPARATE)) return STENCIL_FUNC_SEPARATE;
		else if (IsEquivalent(value, DAE_FX_STATE_STENCIL_OP_SEPARATE)) return STENCIL_OP_SEPARATE;
		else if (IsEquivalent(value, DAE_FX_STATE_STENCIL_MASK_SEPARATE)) return STENCIL_MASK_SEPARATE;
		else if (IsEquivalent(value, DAE_FX_STATE_LIGHT_ENABLE)) return LIGHT_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_LIGHT_AMBIENT)) return LIGHT_AMBIENT;
		else if (IsEquivalent(value, DAE_FX_STATE_LIGHT_DIFFUSE)) return LIGHT_DIFFUSE;
		else if (IsEquivalent(value, DAE_FX_STATE_LIGHT_SPECULAR)) return LIGHT_SPECULAR;
		else if (IsEquivalent(value, DAE_FX_STATE_LIGHT_POSITION)) return LIGHT_POSITION;
		else if (IsEquivalent(value, DAE_FX_STATE_LIGHT_CONSTANT_ATTENUATION)) return LIGHT_CONSTANT_ATTENUATION;
		else if (IsEquivalent(value, DAE_FX_STATE_LIGHT_LINEAR_ATTENUATION)) return LIGHT_LINEAR_ATTENUATION;
		else if (IsEquivalent(value, DAE_FX_STATE_LIGHT_QUADRATIC_ATTENUATION)) return LIGHT_QUADRATIC_ATTENUATION;
		else if (IsEquivalent(value, DAE_FX_STATE_LIGHT_SPOT_CUTOFF)) return LIGHT_SPOT_CUTOFF;
		else if (IsEquivalent(value, DAE_FX_STATE_LIGHT_SPOT_DIRECTION)) return LIGHT_SPOT_DIRECTION;
		else if (IsEquivalent(value, DAE_FX_STATE_LIGHT_SPOT_EXPONENT)) return LIGHT_SPOT_EXPONENT;
		else if (IsEquivalent(value, DAE_FX_STATE_TEXTURE1D)) return TEXTURE1D;
		else if (IsEquivalent(value, DAE_FX_STATE_TEXTURE2D)) return TEXTURE2D;
		else if (IsEquivalent(value, DAE_FX_STATE_TEXTURE3D)) return TEXTURE3D;
		else if (IsEquivalent(value, DAE_FX_STATE_TEXTURECUBE)) return TEXTURECUBE;
		else if (IsEquivalent(value, DAE_FX_STATE_TEXTURERECT)) return TEXTURERECT;
		else if (IsEquivalent(value, DAE_FX_STATE_TEXTUREDEPTH)) return TEXTUREDEPTH;
		else if (IsEquivalent(value, DAE_FX_STATE_TEXTURE1D_ENABLE)) return TEXTURE1D_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_TEXTURE2D_ENABLE)) return TEXTURE2D_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_TEXTURE3D_ENABLE)) return TEXTURE3D_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_TEXTURECUBE_ENABLE)) return TEXTURECUBE_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_TEXTURERECT_ENABLE)) return TEXTURERECT_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_TEXTUREDEPTH_ENABLE)) return TEXTUREDEPTH_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_TEXTURE_ENV_COLOR)) return TEXTURE_ENV_COLOR;
		else if (IsEquivalent(value, DAE_FX_STATE_TEXTURE_ENV_MODE)) return TEXTURE_ENV_MODE;
		else if (IsEquivalent(value, DAE_FX_STATE_CLIP_PLANE)) return CLIP_PLANE;
		else if (IsEquivalent(value, DAE_FX_STATE_CLIP_PLANE_ENABLE)) return CLIP_PLANE_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_BLEND_COLOR)) return BLEND_COLOR;
		else if (IsEquivalent(value, DAE_FX_STATE_CLEAR_COLOR)) return CLEAR_COLOR;
		else if (IsEquivalent(value, DAE_FX_STATE_CLEAR_STENCIL)) return CLEAR_STENCIL;
		else if (IsEquivalent(value, DAE_FX_STATE_CLEAR_DEPTH)) return CLEAR_DEPTH;
		else if (IsEquivalent(value, DAE_FX_STATE_COLOR_MASK)) return COLOR_MASK;
		else if (IsEquivalent(value, DAE_FX_STATE_DEPTH_BOUNDS)) return DEPTH_BOUNDS;
		else if (IsEquivalent(value, DAE_FX_STATE_DEPTH_MASK)) return DEPTH_MASK;
		else if (IsEquivalent(value, DAE_FX_STATE_DEPTH_RANGE)) return DEPTH_RANGE;
		else if (IsEquivalent(value, DAE_FX_STATE_FOG_DENSITY)) return FOG_DENSITY;
		else if (IsEquivalent(value, DAE_FX_STATE_FOG_START)) return FOG_START;
		else if (IsEquivalent(value, DAE_FX_STATE_FOG_END)) return FOG_END;
		else if (IsEquivalent(value, DAE_FX_STATE_FOG_COLOR)) return FOG_COLOR;
		else if (IsEquivalent(value, DAE_FX_STATE_LIGHT_MODEL_AMBIENT)) return LIGHT_MODEL_AMBIENT;
		else if (IsEquivalent(value, DAE_FX_STATE_LIGHTING_ENABLE)) return LIGHTING_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_LINE_STIPPLE)) return LINE_STIPPLE;
		else if (IsEquivalent(value, DAE_FX_STATE_LINE_WIDTH)) return LINE_WIDTH;
		else if (IsEquivalent(value, DAE_FX_STATE_MATERIAL_AMBIENT)) return MATERIAL_AMBIENT;
		else if (IsEquivalent(value, DAE_FX_STATE_MATERIAL_DIFFUSE)) return MATERIAL_DIFFUSE;
		else if (IsEquivalent(value, DAE_FX_STATE_MATERIAL_EMISSION)) return MATERIAL_EMISSION;
		else if (IsEquivalent(value, DAE_FX_STATE_MATERIAL_SHININESS)) return MATERIAL_SHININESS;
		else if (IsEquivalent(value, DAE_FX_STATE_MATERIAL_SPECULAR)) return MATERIAL_SPECULAR;
		else if (IsEquivalent(value, DAE_FX_STATE_MODEL_VIEW_MATRIX)) return MODEL_VIEW_MATRIX;
		else if (IsEquivalent(value, DAE_FX_STATE_POINT_DISTANCE_ATTENUATION)) return POINT_DISTANCE_ATTENUATION;
		else if (IsEquivalent(value, DAE_FX_STATE_POINT_FADE_THRESHOLD_SIZE)) return POINT_FADE_THRESHOLD_SIZE;
		else if (IsEquivalent(value, DAE_FX_STATE_POINT_SIZE)) return POINT_SIZE;
		else if (IsEquivalent(value, DAE_FX_STATE_POINT_SIZE_MIN)) return POINT_SIZE_MIN;
		else if (IsEquivalent(value, DAE_FX_STATE_POINT_SIZE_MAX)) return POINT_SIZE_MAX;
		else if (IsEquivalent(value, DAE_FX_STATE_POLYGON_OFFSET)) return POLYGON_OFFSET;
		else if (IsEquivalent(value, DAE_FX_STATE_PROJECTION_MATRIX)) return PROJECTION_MATRIX;
		else if (IsEquivalent(value, DAE_FX_STATE_SCISSOR)) return SCISSOR;
		else if (IsEquivalent(value, DAE_FX_STATE_STENCIL_MASK)) return STENCIL_MASK;
		else if (IsEquivalent(value, DAE_FX_STATE_ALPHA_TEST_ENABLE)) return ALPHA_TEST_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_AUTO_NORMAL_ENABLE)) return AUTO_NORMAL_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_BLEND_ENABLE)) return BLEND_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_COLOR_LOGIC_OP_ENABLE)) return COLOR_LOGIC_OP_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_COLOR_MATERIAL_ENABLE)) return COLOR_MATERIAL_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_CULL_FACE_ENABLE)) return CULL_FACE_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_DEPTH_BOUNDS_ENABLE)) return DEPTH_BOUNDS_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_DEPTH_CLAMP_ENABLE)) return DEPTH_CLAMP_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_DEPTH_TEST_ENABLE)) return DEPTH_TEST_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_DITHER_ENABLE)) return DITHER_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_FOG_ENABLE)) return FOG_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_LIGHT_MODEL_LOCAL_VIEWER_ENABLE)) return LIGHT_MODEL_LOCAL_VIEWER_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_LIGHT_MODEL_TWO_SIDE_ENABLE)) return LIGHT_MODEL_TWO_SIDE_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_LINE_SMOOTH_ENABLE)) return LINE_SMOOTH_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_LINE_STIPPLE_ENABLE)) return LINE_STIPPLE_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_LOGIC_OP_ENABLE)) return LOGIC_OP_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_MULTISAMPLE_ENABLE)) return MULTISAMPLE_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_NORMALIZE_ENABLE)) return NORMALIZE_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_POINT_SMOOTH_ENABLE)) return POINT_SMOOTH_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_POLYGON_OFFSET_FILL_ENABLE)) return POLYGON_OFFSET_FILL_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_POLYGON_OFFSET_LINE_ENABLE)) return POLYGON_OFFSET_LINE_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_POLYGON_OFFSET_POINT_ENABLE)) return POLYGON_OFFSET_POINT_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_POLYGON_SMOOTH_ENABLE)) return POLYGON_SMOOTH_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_POLYGON_STIPPLE_ENABLE)) return POLYGON_STIPPLE_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_RESCALE_NORMAL_ENABLE)) return RESCALE_NORMAL_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_SAMPLE_ALPHA_TO_COVERAGE_ENABLE)) return SAMPLE_ALPHA_TO_COVERAGE_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_SAMPLE_ALPHA_TO_ONE_ENABLE)) return SAMPLE_ALPHA_TO_ONE_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_SAMPLE_COVERAGE_ENABLE)) return SAMPLE_COVERAGE_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_SCISSOR_TEST_ENABLE)) return SCISSOR_TEST_ENABLE;
		else if (IsEquivalent(value, DAE_FX_STATE_STENCIL_TEST_ENABLE)) return STENCIL_TEST_ENABLE;
		else return INVALID;
	}

	const char* ToString(State state)
	{
		switch (state)
		{
		case ALPHA_FUNC: return DAE_FX_STATE_ALPHA_FUNC;
		case BLEND_FUNC: return DAE_FX_STATE_BLEND_FUNC;
		case BLEND_FUNC_SEPARATE: return DAE_FX_STATE_BLEND_FUNC_SEPARATE;
		case BLEND_EQUATION: return DAE_FX_STATE_BLEND_EQUATION;
		case BLEND_EQUATION_SEPARATE: return DAE_FX_STATE_BLEND_EQUATION_SEPARATE;
		case COLOR_MATERIAL: return DAE_FX_STATE_COLOR_MATERIAL;
		case CULL_FACE: return DAE_FX_STATE_CULL_FACE;
		case DEPTH_FUNC: return DAE_FX_STATE_DEPTH_FUNC;
		case FOG_MODE: return DAE_FX_STATE_FOG_MODE;
		case FOG_COORD_SRC: return DAE_FX_STATE_FOG_COORD_SRC;
		case FRONT_FACE: return DAE_FX_STATE_FRONT_FACE;
		case LIGHT_MODEL_COLOR_CONTROL: return DAE_FX_STATE_LIGHT_MODEL_COLOR_CONTROL;
		case LOGIC_OP: return DAE_FX_STATE_LOGIC_OP;
		case POLYGON_MODE: return DAE_FX_STATE_POLYGON_MODE;
		case SHADE_MODEL: return DAE_FX_STATE_SHADE_MODEL;
		case STENCIL_FUNC: return DAE_FX_STATE_STENCIL_FUNC;
		case STENCIL_OP: return DAE_FX_STATE_STENCIL_OP;
		case STENCIL_FUNC_SEPARATE: return DAE_FX_STATE_STENCIL_FUNC_SEPARATE;
		case STENCIL_OP_SEPARATE: return DAE_FX_STATE_STENCIL_OP_SEPARATE;
		case STENCIL_MASK_SEPARATE: return DAE_FX_STATE_STENCIL_MASK_SEPARATE;
		case LIGHT_ENABLE: return DAE_FX_STATE_LIGHT_ENABLE;
		case LIGHT_AMBIENT: return DAE_FX_STATE_LIGHT_AMBIENT;
		case LIGHT_DIFFUSE: return DAE_FX_STATE_LIGHT_DIFFUSE;
		case LIGHT_SPECULAR: return DAE_FX_STATE_LIGHT_SPECULAR;
		case LIGHT_POSITION: return DAE_FX_STATE_LIGHT_POSITION;
		case LIGHT_CONSTANT_ATTENUATION: return DAE_FX_STATE_LIGHT_CONSTANT_ATTENUATION;
		case LIGHT_LINEAR_ATTENUATION: return DAE_FX_STATE_LIGHT_LINEAR_ATTENUATION;
		case LIGHT_QUADRATIC_ATTENUATION: return DAE_FX_STATE_LIGHT_QUADRATIC_ATTENUATION;
		case LIGHT_SPOT_CUTOFF: return DAE_FX_STATE_LIGHT_SPOT_CUTOFF;
		case LIGHT_SPOT_DIRECTION: return DAE_FX_STATE_LIGHT_SPOT_DIRECTION;
		case LIGHT_SPOT_EXPONENT: return DAE_FX_STATE_LIGHT_SPOT_EXPONENT;
		case TEXTURE1D: return DAE_FX_STATE_TEXTURE1D;
		case TEXTURE2D: return DAE_FX_STATE_TEXTURE2D;
		case TEXTURE3D: return DAE_FX_STATE_TEXTURE3D;
		case TEXTURECUBE: return DAE_FX_STATE_TEXTURECUBE;
		case TEXTURERECT: return DAE_FX_STATE_TEXTURERECT;
		case TEXTUREDEPTH: return DAE_FX_STATE_TEXTUREDEPTH;
		case TEXTURE1D_ENABLE: return DAE_FX_STATE_TEXTURE1D_ENABLE;
		case TEXTURE2D_ENABLE: return DAE_FX_STATE_TEXTURE2D_ENABLE;
		case TEXTURE3D_ENABLE: return DAE_FX_STATE_TEXTURE3D_ENABLE;
		case TEXTURECUBE_ENABLE: return DAE_FX_STATE_TEXTURECUBE_ENABLE;
		case TEXTURERECT_ENABLE: return DAE_FX_STATE_TEXTURERECT_ENABLE;
		case TEXTUREDEPTH_ENABLE: return DAE_FX_STATE_TEXTUREDEPTH_ENABLE;
		case TEXTURE_ENV_COLOR: return DAE_FX_STATE_TEXTURE_ENV_COLOR;
		case TEXTURE_ENV_MODE: return DAE_FX_STATE_TEXTURE_ENV_MODE;
		case CLIP_PLANE: return DAE_FX_STATE_CLIP_PLANE;
		case CLIP_PLANE_ENABLE: return DAE_FX_STATE_CLIP_PLANE_ENABLE;
		case BLEND_COLOR: return DAE_FX_STATE_BLEND_COLOR;
		case CLEAR_COLOR: return DAE_FX_STATE_CLEAR_COLOR;
		case CLEAR_STENCIL: return DAE_FX_STATE_CLEAR_STENCIL;
		case CLEAR_DEPTH: return DAE_FX_STATE_CLEAR_DEPTH;
		case COLOR_MASK: return DAE_FX_STATE_COLOR_MASK;
		case DEPTH_BOUNDS: return DAE_FX_STATE_DEPTH_BOUNDS;
		case DEPTH_MASK: return DAE_FX_STATE_DEPTH_MASK;
		case DEPTH_RANGE: return DAE_FX_STATE_DEPTH_RANGE;
		case FOG_DENSITY: return DAE_FX_STATE_FOG_DENSITY;
		case FOG_START: return DAE_FX_STATE_FOG_START;
		case FOG_END: return DAE_FX_STATE_FOG_END;
		case FOG_COLOR: return DAE_FX_STATE_FOG_COLOR;
		case LIGHT_MODEL_AMBIENT: return DAE_FX_STATE_LIGHT_MODEL_AMBIENT;
		case LIGHTING_ENABLE: return DAE_FX_STATE_LIGHTING_ENABLE;
		case LINE_STIPPLE: return DAE_FX_STATE_LINE_STIPPLE;
		case LINE_WIDTH: return DAE_FX_STATE_LINE_WIDTH;
		case MATERIAL_AMBIENT: return DAE_FX_STATE_MATERIAL_AMBIENT;
		case MATERIAL_DIFFUSE: return DAE_FX_STATE_MATERIAL_DIFFUSE;
		case MATERIAL_EMISSION: return DAE_FX_STATE_MATERIAL_EMISSION;
		case MATERIAL_SHININESS: return DAE_FX_STATE_MATERIAL_SHININESS;
		case MATERIAL_SPECULAR: return DAE_FX_STATE_MATERIAL_SPECULAR;
		case MODEL_VIEW_MATRIX: return DAE_FX_STATE_MODEL_VIEW_MATRIX;
		case POINT_DISTANCE_ATTENUATION: return DAE_FX_STATE_POINT_DISTANCE_ATTENUATION;
		case POINT_FADE_THRESHOLD_SIZE: return DAE_FX_STATE_POINT_FADE_THRESHOLD_SIZE;
		case POINT_SIZE: return DAE_FX_STATE_POINT_SIZE;
		case POINT_SIZE_MIN: return DAE_FX_STATE_POINT_SIZE_MIN;
		case POINT_SIZE_MAX: return DAE_FX_STATE_POINT_SIZE_MAX;
		case POLYGON_OFFSET: return DAE_FX_STATE_POLYGON_OFFSET;
		case PROJECTION_MATRIX: return DAE_FX_STATE_PROJECTION_MATRIX;
		case SCISSOR: return DAE_FX_STATE_SCISSOR;
		case STENCIL_MASK: return DAE_FX_STATE_STENCIL_MASK;
		case ALPHA_TEST_ENABLE: return DAE_FX_STATE_ALPHA_TEST_ENABLE;
		case AUTO_NORMAL_ENABLE: return DAE_FX_STATE_AUTO_NORMAL_ENABLE;
		case BLEND_ENABLE: return DAE_FX_STATE_BLEND_ENABLE;
		case COLOR_LOGIC_OP_ENABLE: return DAE_FX_STATE_COLOR_LOGIC_OP_ENABLE;
		case COLOR_MATERIAL_ENABLE: return DAE_FX_STATE_COLOR_MATERIAL_ENABLE;
		case CULL_FACE_ENABLE: return DAE_FX_STATE_CULL_FACE_ENABLE;
		case DEPTH_BOUNDS_ENABLE: return DAE_FX_STATE_DEPTH_BOUNDS_ENABLE;
		case DEPTH_CLAMP_ENABLE: return DAE_FX_STATE_DEPTH_CLAMP_ENABLE;
		case DEPTH_TEST_ENABLE: return DAE_FX_STATE_DEPTH_TEST_ENABLE;
		case DITHER_ENABLE: return DAE_FX_STATE_DITHER_ENABLE;
		case FOG_ENABLE: return DAE_FX_STATE_FOG_ENABLE;
		case LIGHT_MODEL_LOCAL_VIEWER_ENABLE: return DAE_FX_STATE_LIGHT_MODEL_LOCAL_VIEWER_ENABLE;
		case LIGHT_MODEL_TWO_SIDE_ENABLE: return DAE_FX_STATE_LIGHT_MODEL_TWO_SIDE_ENABLE;
		case LINE_SMOOTH_ENABLE: return DAE_FX_STATE_LINE_SMOOTH_ENABLE;
		case LINE_STIPPLE_ENABLE: return DAE_FX_STATE_LINE_STIPPLE_ENABLE;
		case LOGIC_OP_ENABLE: return DAE_FX_STATE_LOGIC_OP_ENABLE;
		case MULTISAMPLE_ENABLE: return DAE_FX_STATE_MULTISAMPLE_ENABLE;
		case NORMALIZE_ENABLE: return DAE_FX_STATE_NORMALIZE_ENABLE;
		case POINT_SMOOTH_ENABLE: return DAE_FX_STATE_POINT_SMOOTH_ENABLE;
		case POLYGON_OFFSET_FILL_ENABLE: return DAE_FX_STATE_POLYGON_OFFSET_FILL_ENABLE;
		case POLYGON_OFFSET_LINE_ENABLE: return DAE_FX_STATE_POLYGON_OFFSET_LINE_ENABLE;
		case POLYGON_OFFSET_POINT_ENABLE: return DAE_FX_STATE_POLYGON_OFFSET_POINT_ENABLE;
		case POLYGON_SMOOTH_ENABLE: return DAE_FX_STATE_POLYGON_SMOOTH_ENABLE;
		case POLYGON_STIPPLE_ENABLE: return DAE_FX_STATE_POLYGON_STIPPLE_ENABLE;
		case RESCALE_NORMAL_ENABLE: return DAE_FX_STATE_RESCALE_NORMAL_ENABLE;
		case SAMPLE_ALPHA_TO_COVERAGE_ENABLE: return DAE_FX_STATE_SAMPLE_ALPHA_TO_COVERAGE_ENABLE;
		case SAMPLE_ALPHA_TO_ONE_ENABLE: return DAE_FX_STATE_SAMPLE_ALPHA_TO_ONE_ENABLE;
		case SAMPLE_COVERAGE_ENABLE: return DAE_FX_STATE_SAMPLE_COVERAGE_ENABLE;
		case SCISSOR_TEST_ENABLE: return DAE_FX_STATE_SCISSOR_TEST_ENABLE;
		case STENCIL_TEST_ENABLE: return DAE_FX_STATE_STENCIL_TEST_ENABLE;
		case INVALID:
		default: return DAEERR_UNKNOWN_ELEMENT;
		}
	}
};
