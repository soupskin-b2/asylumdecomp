// FCDEffectStandard.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// FCollada 3.05B (Feeling Software; MIT license), FCollada/FCDocument/FCDEffectStandard.cpp, unchanged.
// The function at 0x0186ee50 is ??0FCDEffectStandard@@QAE@PAVFCDocument@@PAVFCDEffect@@@Z
// FCollada has no kit headers, so the headers this file includes are pasted in place of their #include
// lines. To keep this file small the pasted headers have their comments and the text the preprocessor
// skips removed; nothing else in them is changed, and the #line directives keep __FILE__ and __LINE__
// as they were in the original build (FUAssert prints them). The source file itself starts at the line
// `#line 1 ".\\...cpp"`.
#define WIN32
#define UNICODE
#include "ue3/Win32.h" // stands in for <windows.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
extern "C" __declspec(dllimport) char* __cdecl _getcwd(char* buffer, int maxlen); // <direct.h>
typedef struct _xmlNode xmlNode; // stands in for <libxml/tree.h>
#line 1 ".\\FCDocument\\FCDEffectStandard.cpp"
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
#line 9 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\StdAfx.h"
#ifndef _STDAFX_H_
#define _STDAFX_H_

#define FCOLLADA_INTERNAL
// #include "FCollada.h"   (FCollada 3.05B, pasted in place)
#line 25 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCollada.h"
#ifndef _FCOLLADA_H_
#define _FCOLLADA_H_
#line 36
#ifdef _DEBUG
#line 40
#else
#define FCOLLADA_EXCEPTION 1
#define _FTRY try
#define _FCATCH_ALL catch (...)
#endif

#define PREMIUM

#ifndef _F_UTILS_H_
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
#line 39
#endif
#ifdef min
#line 42
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
#line 66
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
#line 23
#ifdef FCOLLADA_INTERNAL
#line 26
#else
#line 29
#endif
#elif defined(__APPLE__) || defined(LINUX)
#line 33
#endif
#else
#define FCOLLADA_EXPORT
#define FCOLLADA_LOCAL
#endif

#ifdef __PPU__
#line 41
#endif
#line 44
#ifdef UNICODE
#ifndef _UNICODE
#define _UNICODE
#endif
#else
#ifdef _UNICODE
#line 51
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
#line 76
#else
#if defined(LINUX) || defined(__PPU__)
#line 88
#else
#line 90
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

#line 119
#ifndef _CLIMITS_
#line 121
#endif

#endif
#line 126
#if defined(__APPLE__) || defined (LINUX)
#line 130
#ifndef isinf
#line 132
#endif
#line 137
#elif defined(__PPU__)
#line 140
#endif
#line 143
#ifdef WIN32

#define vsnprintf _vsnprintf
#define snprintf _snprintf
#define vsnwprintf _vsnwprintf
#if _MSC_VER >= 1400
	#define snwprintf _snwprintf_s
#else
#line 152
#endif

#define strlower _strlwr

#else

#line 161
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
#line 182
	#elif defined(WIN32)
		#define fstricmp _wcsicmp
	#else
#line 186
	#endif

	#ifdef WIN32
		#define fstrlower _wcslwr
	#else
#line 192
	#endif

	#ifdef WIN32
		#define fchdir _tchdir
	#else
#line 198
	#endif

#else

#line 218
#endif

#ifndef WIN32
#line 222
#endif

#ifdef WIN32
#line 230
#define ALIGN_STRUCT(byteCount)
#else
#line 233
#endif

#if defined(WIN32) && _MSC_VER >= 1400
#define DEPRECATED(versionNumber, alternative) __declspec(deprecated("[" #versionNumber "] This function is now deprecated. Please use '" #alternative "' instead."))
#else
#line 243
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

#line 42
#endif
#line 46
#define FUBreak \
	static bool ignoreAssert = false; \
#line 49
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
#line 21
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
#line 22
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
#line 71
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
#line 20
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
#line 92
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
#line 19
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
#line 151
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
#line 471
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
#line 566
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
#line 110
#else
#line 112
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
#line 44
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
#line 45
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
#line 40
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
#line 47
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
#line 46
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
#line 95
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
#line 20
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

#line 176
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
#line 19
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
#line 20
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
#line 135
#else
	inline void append(unsigned int i) { append((uint32) i); }
#endif
#else
#line 141
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
#line 231
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
#line 392
#endif

#endif
#line 587 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUString.h"
#define FS(a) fstring(FC(a))

#define TO_FSTRING(a) FUStringConversion::ToFString(a)

#define TO_STRING(a) FUStringConversion::ToString(a)
#line 594
extern FCOLLADA_EXPORT const fm::string emptyString;

extern FCOLLADA_EXPORT const fstring emptyFString;
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
#line 23
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
#line 19
#endif
#line 28
class FCOLLADA_EXPORT FUCriticalSection
{
private:
#ifdef WIN32
	CRITICAL_SECTION criticalSection;
#elif defined (__APPLE__)

#line 36
#elif defined (LINUX)
#else
#line 39
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
#line 50 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCollada.h"
#endif
#line 62
#define FCOLLADA_VERSION 0x00030005
#line 68
#define FCOLLADA_BUILDSTR "B"
#line 71
class FCDocument;
class FUTestBed;
class FColladaPluginManager;
typedef fm::pvector<FCDocument> FCDocumentList;
class FUPlugin;
typedef IFunctor0<bool>* CancelLoadingCallback;
#line 81
namespace FCollada
{
#line 87
	FCOLLADA_EXPORT unsigned long GetVersion();
#line 96
	FCOLLADA_EXPORT void Initialize();
#line 106
	FCOLLADA_EXPORT size_t Release();
#line 114
	FCOLLADA_EXPORT FCDocument* NewTopDocument();
#line 121
	FCOLLADA_EXPORT FCDocument* NewDocument();
#line 125
	FCOLLADA_EXPORT size_t GetTopDocumentCount();
#line 130
	FCOLLADA_EXPORT FCDocument* GetTopDocument(size_t index);
#line 135
	FCOLLADA_EXPORT bool IsTopDocument(FCDocument* document);
#line 140
	FCOLLADA_EXPORT void GetAllDocuments(FCDocumentList& documents);
#line 145
	FCOLLADA_EXPORT bool LoadDocumentFromFile(FCDocument* document, const fchar* filename);
	DEPRECATED(3.05A, LoadDocumentFromFile) inline bool LoadDocument(FCDocument* document, const fchar* filename) { return LoadDocumentFromFile(document, filename); }
	DEPRECATED(3.05A, NewTopDocument and LoadDocumentFromFile) FCOLLADA_EXPORT FCDocument* LoadDocument(const fchar* filename);
#line 155
	FCOLLADA_EXPORT bool LoadDocumentFromMemory(const fchar* filename, FCDocument* document, void* data, size_t length);
#line 161
	FCOLLADA_EXPORT bool SaveDocument(FCDocument* document, const fchar* filename);
#line 168
	FCOLLADA_EXPORT bool GetDereferenceFlag();
#line 175
	FCOLLADA_EXPORT void SetDereferenceFlag(bool flag);
#line 180
	DEPRECATED(3.05A, GetPluginManager()->RegisterPlugin) FCOLLADA_EXPORT bool RegisterPlugin(FUPlugin* plugin);
#line 184
	FCOLLADA_EXPORT FColladaPluginManager* GetPluginManager();

#ifndef RETAIL
#line 190
	FCOLLADA_EXPORT void RunTests(FUTestBed& testBed);
#endif
#line 196
	FCOLLADA_EXPORT void SetCancelLoadingCallback(CancelLoadingCallback callback);
#line 200
	FCOLLADA_EXPORT bool CancelLoading();
}
#line 207
#endif
#line 15 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\StdAfx.h"
#endif
#line 16 ".\\FCDocument\\FCDEffectStandard.cpp"
// #include "FCDocument/FCDocument.h"   (FCollada 3.05B, pasted in place)
#line 20 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDocument.h"
#ifndef _FC_DOCUMENT_H_
#define _FC_DOCUMENT_H_

#ifndef __FCD_OBJECT_H_
// #include "FCDocument/FCDObject.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDObject.h"
#ifndef __FCD_OBJECT_H_
#define __FCD_OBJECT_H_

#ifndef _FU_PARAMETERIZABLE_H_
// #include "FUtils/FUParameterizable.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUParameterizable.h"
#ifndef _FU_PARAMETERIZABLE_H_
#define _FU_PARAMETERIZABLE_H_

#ifndef _FU_TRACKER_H_
#line 19
#endif

class FUParameter;
#line 28
#define DeclareFlag(flag_name, local_position) \
	static const uint32 FLAG_##flag_name = (1 << (Parent::nextAvailableBit + local_position)); \
	inline void Set##flag_name##Flag(bool value) { flags &= ~FLAG_##flag_name; flags |= FLAG_##flag_name * value; } \
	inline void Set##flag_name##Flag() { flags |= FLAG_##flag_name; } \
	inline void Reset##flag_name##Flag() { flags &= ~FLAG_##flag_name; } \
	inline bool Get##flag_name##Flag() const { return (flags & FLAG_##flag_name) != 0; }
#line 38
#define DeclareFlagCount(count) \
protected: \
	static const uint32 nextAvailableBit = Parent::nextAvailableBit + count;
#line 51
class FCOLLADA_EXPORT FUParameterizable : public FUTrackable
{
private:
	DeclareObjectType(FUTrackable);

protected:

	uint32 flags;

public:
	DeclareFlag(Dirty, 0);
	DeclareFlag(ValueChanged, 1);
#line 65
	DeclareFlag(StructureChanged, 2);
#line 69
	DeclareFlagCount(3);

public:

	FUParameterizable();
#line 76
	virtual ~FUParameterizable();
#line 81
	inline void SetFlag(uint32 f, bool value) { flags &= ~f; flags |= f * value; }
#line 86
	inline void SetFlag(uint32 f) { flags |= f; }
#line 91
	inline uint32 TestFlag(uint32 f) const { return flags & f; }
#line 96
	inline void ClearFlag(uint32 f) { flags &= ~f; }
#line 99
	virtual void SetValueChange() {}
};

#endif
#line 19 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDObject.h"
#endif

class FCDocument;
#line 43
class FCOLLADA_EXPORT FCDObject : public FUParameterizable
{
private:
	DeclareObjectType(FUParameterizable);
#line 49
	FCDocument* document;
#line 53
	void* userHandle;

public:
#line 59
	DeclareFlag(Transient, 0);

	DeclareFlag(NewChild, 1);

	DeclareFlagCount(2);

public:
#line 68
	FCDObject(FCDocument* document);
#line 71
	virtual ~FCDObject();
#line 75
	inline FCDocument* GetDocument() { return document; }
	inline const FCDocument* GetDocument() const { return document; }
#line 81
	inline bool IsLocal(const FCDObject* object) const { return document == object->document; }
#line 86
	inline bool IsExternal(const FCDObject* object) const { return document != object->document; }
#line 92
	inline void* GetUserHandle() const { return userHandle; }
#line 98
	inline void SetUserHandle(void* handle) { userHandle = handle; SetDirtyFlag(); }
#line 101
	virtual void SetValueChange() { SetValueChangedFlag(); }
};

#endif
#line 25 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDocument.h"
#endif
#ifndef _FU_PARAMETER_H_
// #include "FUtils/FUParameter.h"   (FCollada 3.05B, pasted in place)
#line 9 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUParameter.h"
#ifndef _FU_PARAMETER_H_
#define _FU_PARAMETER_H_
#line 19
#ifdef WIN32
#pragma warning(disable:4355)
#endif
#line 24
namespace FUParameterQualifiers
{

	enum Qualifiers
	{
		SIMPLE = 0,
		VECTOR = 0,
		COLOR = 1
	};
};
#line 47
template <class TYPE>
class FUParameterT
{
private:
	TYPE value;

public:

	FUParameterT() {}

	FUParameterT(const TYPE& defaultValue) : value(defaultValue) {}

	virtual ~FUParameterT() {}

	inline operator TYPE&() { return value; }
	inline operator const TYPE&() const { return value; }
	inline TYPE& operator *() { return value; }
	inline const TYPE& operator *() const { return value; }
	inline TYPE* operator->() { return &value; }
	inline const TYPE* operator->() const { return &value; }

	FUParameterT<TYPE>& operator= (const TYPE& copy) { value = copy; return *this; }
};

typedef FUParameterT<bool> FUParameterBoolean;
typedef FUParameterT<float> FUParameterFloat;
typedef FUParameterT<FMVector2> FUParameterVector2;
typedef FUParameterT<FMVector3> FUParameterVector3;
typedef FUParameterT<FMVector3> FUParameterColor3;
typedef FUParameterT<FMVector4> FUParameterVector4;
typedef FUParameterT<FMVector4> FUParameterColor4;
typedef FUParameterT<FMMatrix44> FUParameterMatrix44;
typedef FUParameterT<int32> FUParameterInt32;
typedef FUParameterT<uint32> FUParameterUInt32;
typedef FUParameterT<fm::string> FUParameterString;
typedef FUParameterT<fstring> FUParameterFString;

typedef fm::vector<float, true> FUParameterFloatList;
typedef fm::vector<FMVector2, true> FUParameterVector2List;
typedef fm::vector<FMVector3, true> FUParameterVector3List;
typedef fm::vector<FMVector3, true> FUParameterColor3List;
typedef fm::vector<FMVector4, true> FUParameterVector4List;
typedef fm::vector<FMVector4, true> FUParameterColor4List;
typedef fm::vector<FMMatrix44, true> FUParameterMatrix44List;
typedef fm::vector<int32, true> FUParameterInt32List;
typedef fm::vector<uint32, true> FUParameterUInt32List;
typedef fm::vector<fm::string, false> FUParameterStringList;
typedef fm::vector<fstring, false> FUParameterFStringList;
#line 111
#define DeclareParameter(type, qual, parameterName, niceName) \
	class Parameter_##parameterName : public FUParameterT<type> { \
	public: Parameter_##parameterName() : FUParameterT<type>() {} \
	Parameter_##parameterName(const type& defaultValue) : FUParameterT<type>(defaultValue) {} \
	virtual ~Parameter_##parameterName() {} \
	inline Parameter_##parameterName& operator= (const type& copy) { FUParameterT<type>::operator=(copy); return *this; } \
	} parameterName;
#line 120
#define DeclareParameterPtr(type, parameterName, niceName) FUTrackedPtr<type> parameterName;

#define DeclareParameterRef(type, parameterName, niceName) FUObjectRef<type> parameterName;

#define DeclareParameterList(list_type, parameterName, niceName) FUParameter##list_type##List parameterName;

#define DeclareParameterTrackList(type, parameterName, niceName) FUTrackedList<type> parameterName;

#define DeclareParameterContainer(type, parameterName, niceName) FUObjectContainer<type> parameterName;
#line 145
#define ImplementParameterObject(objectClassName, parameterClassName, parameterName, ...)

#define ImplementParameterObjectNoArg(objectClassName, parameterClassName, parameterName)

#define ImplementParameterObjectNoCtr(objectClassName, parameterClassName, parameterName)

#define ImplementParameterObjectT(objectClassName, parameterClassName, parameterName, ...)

#define ImplementParameterObjectNoArgT(objectClassName, parameterClassName, parameterName)

#define ImplementParameterObjectNoCtrT(objectClassName, parameterClassName, parameterName)
#line 166
#define InitializeParameterNoArg(parameterName) parameterName()

#define InitializeParameter(parameterName, ...) parameterName(__VA_ARGS__)

#if defined(__APPLE__) || defined(LINUX)
#line 172
#endif

#endif
#line 28 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDocument.h"
#endif

#if defined(WIN32)
template <class T> class FCOLLADA_EXPORT FCDLibrary;
template <class T> class FCOLLADA_EXPORT FUUniqueStringMapT;
#elif defined(LINUX) || defined(__APPLE__)
#line 36
#endif

class FCDAnimated;
class FCDAnimation;
class FCDAnimationChannel;
class FCDAnimationClip;
class FCDAsset;
class FCDCamera;
class FCDController;
class FCDEffect;
class FCDEntity;
class FCDEntityReference;
class FCDEmitter;
class FCDExternalReferenceManager;
class FCDExtra;
class FCDForceField;
class FCDGeometry;
class FCDImage;
class FCDLight;
class FCDMaterial;
class FCDObject;
class FCDPhysicsMaterial;
class FCDPhysicsModel;
class FCDPhysicsScene;
class FCDTexture;
class FCDSceneNode;
class FCDVersion;
class FUFileManager;
#line 69
class FCOLLADA_EXPORT FCDLayer
{
public:
	fm::string name;
	StringList objects;
};

typedef fm::pvector<FCDLayer> FCDLayerList;

typedef FCDLibrary<FCDAnimation> FCDAnimationLibrary;
typedef FCDLibrary<FCDAnimationClip> FCDAnimationClipLibrary;
typedef FCDLibrary<FCDCamera> FCDCameraLibrary;
typedef FCDLibrary<FCDController> FCDControllerLibrary;
typedef FCDLibrary<FCDEffect> FCDEffectLibrary;
typedef FCDLibrary<FCDEmitter> FCDEmitterLibrary;
typedef	FCDLibrary<FCDForceField> FCDForceFieldLibrary;
typedef FCDLibrary<FCDGeometry> FCDGeometryLibrary;
typedef FCDLibrary<FCDImage> FCDImageLibrary;
typedef FCDLibrary<FCDLight> FCDLightLibrary;
typedef FCDLibrary<FCDMaterial> FCDMaterialLibrary;
typedef FCDLibrary<FCDSceneNode> FCDVisualSceneNodeLibrary;
typedef FCDLibrary<FCDPhysicsModel> FCDPhysicsModelLibrary;
typedef FCDLibrary<FCDPhysicsMaterial> FCDPhysicsMaterialLibrary;
typedef	FCDLibrary<FCDPhysicsScene> FCDPhysicsSceneLibrary;
typedef FUUniqueStringMapT<char> FUSUniqueStringMap;
typedef fm::map<FCDExtra*, FCDExtra*> FCDExtraSet;
#line 109
class FCOLLADA_EXPORT FCDocument : public FCDObject
{
private:
	DeclareObjectType(FCDObject);

	FUFileManager* fileManager;
	FUObjectRef<FCDExternalReferenceManager> externalReferenceManager;
	fstring fileUrl;
	FCDVersion* version;
	FCDExtraSet extraTrees;

	FUSUniqueStringMap* uniqueNameMap;
	DeclareParameterRef(FCDEntityReference, visualSceneRoot, FC("Root Visual Scene"));
	DeclareParameterContainer(FCDEntityReference, physicsSceneRoots, FC("Root Physics Scenes"));
#line 125
	DeclareParameterRef(FCDAsset, asset, FC("Asset Tag"));
	DeclareParameterRef(FCDExtra, extra, FC("Extra Tree"));
	bool hasStartTime, hasEndTime;
	DeclareParameter(float, FUParameterQualifiers::SIMPLE, startTime, FC("Start Time"));
	DeclareParameter(float, FUParameterQualifiers::SIMPLE, endTime, FC("End Time"));
	FCDLayerList layers;
#line 133
	DeclareParameterRef(FCDAnimationLibrary, animationLibrary, FC("Animation Library"));
	DeclareParameterRef(FCDAnimationClipLibrary, animationClipLibrary, FC("Animation Clip Library"));
	DeclareParameterRef(FCDCameraLibrary, cameraLibrary, FC("Camera Library"));
	DeclareParameterRef(FCDControllerLibrary, controllerLibrary, FC("Controller Library"));
	DeclareParameterRef(FCDEffectLibrary, effectLibrary, FC("Effect Library"));
	DeclareParameterRef(FCDForceFieldLibrary, forceFieldLibrary, FC("Force-field Library"));
	DeclareParameterRef(FCDGeometryLibrary, geometryLibrary, FC("Geometry Library"));
	DeclareParameterRef(FCDImageLibrary, imageLibrary, FC("Image Library"));
	DeclareParameterRef(FCDLightLibrary, lightLibrary, FC("Light Library"));
	DeclareParameterRef(FCDMaterialLibrary, materialLibrary, FC("Material Library"));
	DeclareParameterRef(FCDPhysicsModelLibrary, physicsModelLibrary, FC("Physics Model Library"));
	DeclareParameterRef(FCDPhysicsMaterialLibrary, physicsMaterialLibrary, FC("Physics Material Library"));
	DeclareParameterRef(FCDPhysicsSceneLibrary, physicsSceneLibrary, FC("Physics Scene Library"));
	DeclareParameterRef(FCDVisualSceneNodeLibrary, visualSceneLibrary, FC("Visual Scene Library"));
	DeclareParameterRef(FCDEmitterLibrary, emitterLibrary, FC("Emitter Library"));
#line 150
	typedef fm::map<FCDAnimated*, FCDAnimated*> FCDAnimatedSet;
	FCDAnimatedSet animatedValues;

public:

	FCDocument();
#line 158
	virtual ~FCDocument();
#line 162
	inline FCDAsset* GetAsset() { return asset; }
	inline const FCDAsset* GetAsset() const { return asset; }
#line 168
	inline FCDExtra* GetExtra() { return extra; }
	inline const FCDExtra* GetExtra() const { return extra; }
#line 173
	inline FCDVersion& GetVersion() { return *version; }
	inline const FCDVersion& GetVersion() const { return *version; }
#line 179
	inline FUFileManager* GetFileManager() { return fileManager; }
	inline const FUFileManager* GetFileManager() const { return fileManager; }
#line 185
	inline FCDSceneNode* GetVisualSceneInstance() { return const_cast<FCDSceneNode*>(const_cast<const FCDocument*>(this)->GetVisualSceneInstance()); }
	const FCDSceneNode* GetVisualSceneInstance() const;
	DEPRECATED(3.04A, FCDocument::GetVisualSceneInstance) inline FCDSceneNode* GetVisualSceneRoot() { return GetVisualSceneInstance(); }
	DEPRECATED(3.04A, FCDocument::GetVisualSceneInstance) inline const FCDSceneNode* GetVisualSceneRoot() const { return GetVisualSceneInstance(); }
#line 192
	inline FCDEntityReference* GetVisualSceneInstanceReference() { return visualSceneRoot; }
	inline const FCDEntityReference* GetVisualSceneInstanceReference() const { return visualSceneRoot; }
#line 197
	inline size_t GetPhysicsSceneInstanceCount() const { return physicsSceneRoots.size(); }
#line 203
	inline FCDPhysicsScene* GetPhysicsSceneInstance(size_t index = 0) { return const_cast<FCDPhysicsScene*>(const_cast<const FCDocument*>(this)->GetPhysicsSceneInstance(index)); }
	const FCDPhysicsScene* GetPhysicsSceneInstance(size_t index = 0) const;
	DEPRECATED(3.04A, FCDocument::GetPhysicsSceneInstance) inline FCDPhysicsScene* GetPhysicsSceneRoot(size_t index = 0) { return GetPhysicsSceneInstance(index); }
	DEPRECATED(3.04A, FCDocument::GetPhysicsSceneInstance) inline const FCDPhysicsScene* GetPhysicsSceneRoot(size_t index = 0) const { return GetPhysicsSceneInstance(index); }
#line 210
	void AddPhysicsSceneInstance(FCDPhysicsScene* scene);
#line 216
	inline FCDEntityReference* GetPhysicsSceneInstanceReference(size_t index = 0) { if (index == 0 && physicsSceneRoots.empty()) return NULL; FUAssert(index < physicsSceneRoots.size(), return NULL); return physicsSceneRoots[index]; }
	inline const FCDEntityReference* GetPhysicsSceneInstanceReference(size_t index = 0) const { if (index == 0 && physicsSceneRoots.empty()) return NULL; FUAssert(index < physicsSceneRoots.size(), return NULL); return physicsSceneRoots[index]; }
#line 221
	FCDEntityReference* AddPhysicsSceneInstanceReference();
#line 225
	inline FUSUniqueStringMap* GetUniqueNameMap() { return uniqueNameMap; }
	inline const FUSUniqueStringMap* GetUniqueNameMap() const { return uniqueNameMap; }
#line 230
	inline FCDExternalReferenceManager* GetExternalReferenceManager() { return externalReferenceManager; }
	inline const FCDExternalReferenceManager* GetExternalReferenceManager() const { return externalReferenceManager; }
#line 235
	const fstring& GetFileUrl() const { return fileUrl; }
#line 240
	void SetFileUrl(const fstring& filename);
#line 244
	inline bool HasStartTime() const { return hasStartTime; }
#line 247
	inline float GetStartTime() const { return startTime; }
#line 250
	inline void SetStartTime(float time) { startTime = time; hasStartTime = true; }
#line 254
	inline bool HasEndTime() const { return hasEndTime; }
#line 257
	inline float GetEndTime() const { return endTime; }
#line 260
	inline void SetEndTime(float time) { endTime = time; hasEndTime = true; }
#line 264
	inline void SetCurrentTime(float time);
#line 268
	inline FCDLayerList& GetLayers() { return layers; }
	inline const FCDLayerList& GetLayers() const { return layers; }
#line 273
	inline size_t GetLayerCount() const { return layers.size(); }
#line 279
	inline FCDLayer* GetLayer(size_t index) { FUAssert(index < GetLayerCount(), return NULL); return layers.at(index); }
	inline const FCDLayer* GetLayer(size_t index) const { FUAssert(index < GetLayerCount(), return NULL); return layers.at(index); }
#line 284
	FCDLayer* AddLayer();
#line 288
	void ReleaseLayer(FCDLayer* layer);
#line 295
	inline FCDAnimationLibrary* GetAnimationLibrary() { return animationLibrary; }
	inline const FCDAnimationLibrary* GetAnimationLibrary() const { return animationLibrary; }
#line 302
	inline FCDAnimationClipLibrary* GetAnimationClipLibrary() { return animationClipLibrary; }
	inline const FCDAnimationClipLibrary* GetAnimationClipLibrary() const { return animationClipLibrary; }
#line 308
	inline FCDCameraLibrary* GetCameraLibrary() { return cameraLibrary; }
	inline const FCDCameraLibrary* GetCameraLibrary() const { return cameraLibrary; }
#line 314
	inline FCDControllerLibrary* GetControllerLibrary() { return controllerLibrary; }
	inline const FCDControllerLibrary* GetControllerLibrary() const { return controllerLibrary; }
#line 321
	inline FCDGeometryLibrary* GetGeometryLibrary() { return geometryLibrary; }
	inline const FCDGeometryLibrary* GetGeometryLibrary() const { return geometryLibrary; }
#line 327
	inline FCDForceFieldLibrary* GetForceFieldLibrary() { return forceFieldLibrary; }
	inline const FCDForceFieldLibrary* GetForceFieldLibrary() const { return forceFieldLibrary; }
#line 333
	inline FCDImageLibrary* GetImageLibrary() { return imageLibrary; }
	inline const FCDImageLibrary* GetImageLibrary() const { return imageLibrary; }
#line 340
	inline FCDLightLibrary* GetLightLibrary() { return lightLibrary; }
	inline const FCDLightLibrary* GetLightLibrary() const { return lightLibrary; }
#line 347
	inline FCDMaterialLibrary* GetMaterialLibrary() { return materialLibrary; }
	inline const FCDMaterialLibrary* GetMaterialLibrary() const { return materialLibrary; }
#line 354
	inline FCDEffectLibrary* GetEffectLibrary() { return effectLibrary; }
	inline const FCDEffectLibrary* GetEffectLibrary() const { return effectLibrary; }
#line 364
	inline FCDVisualSceneNodeLibrary* GetVisualSceneLibrary() { return visualSceneLibrary; }
	inline const FCDVisualSceneNodeLibrary* GetVisualSceneLibrary() const { return visualSceneLibrary; }
#line 370
	inline FCDPhysicsModelLibrary* GetPhysicsModelLibrary() { return physicsModelLibrary; }
	inline const FCDPhysicsModelLibrary* GetPhysicsModelLibrary() const { return physicsModelLibrary; }
#line 376
	inline FCDPhysicsMaterialLibrary* GetPhysicsMaterialLibrary() { return physicsMaterialLibrary; }
	inline const FCDPhysicsMaterialLibrary* GetPhysicsMaterialLibrary() const { return physicsMaterialLibrary; }
#line 382
	inline FCDPhysicsSceneLibrary* GetPhysicsSceneLibrary() { return physicsSceneLibrary; }
	inline const FCDPhysicsSceneLibrary* GetPhysicsSceneLibrary() const { return physicsSceneLibrary; }
#line 388
	inline FCDEmitterLibrary* GetEmitterLibrary() { return emitterLibrary; }
	inline const FCDEmitterLibrary* GetEmitterLibrary() const { return emitterLibrary; }
#line 394
	FCDSceneNode* AddVisualScene();
#line 399
	FCDPhysicsScene* AddPhysicsScene();
#line 405
	FCDAnimation* FindAnimation(const fm::string& daeId);
#line 411
	FCDAnimationClip* FindAnimationClip(const fm::string& daeId);
#line 416
	FCDCamera* FindCamera(const fm::string& daeId);
#line 421
	FCDController* FindController(const fm::string& daeId);
#line 426
	FCDEffect* FindEffect(const fm::string& daeId);
#line 433
	FCDEntity* FindEntity(const fm::string& daeId);
#line 438
	FCDEmitter* FindEmitter(const fm::string& daeId);
#line 443
	FCDForceField* FindForceField(const fm::string& daeId);
#line 448
	FCDGeometry* FindGeometry(const fm::string& daeId);
#line 453
	FCDImage* FindImage(const fm::string& daeId);
#line 459
	FCDLayer* FindLayer(const fm::string& name);
#line 464
	FCDLight* FindLight(const fm::string& daeId);
#line 469
	FCDMaterial* FindMaterial(const fm::string& daeId);
#line 474
	FCDSceneNode* FindVisualScene(const fm::string& daeId);
#line 479
	FCDPhysicsScene* FindPhysicsScene(const fm::string& daeId);
#line 484
	FCDPhysicsMaterial* FindPhysicsMaterial(const fm::string& daeId);
#line 489
	FCDPhysicsModel* FindPhysicsModel(const fm::string& daeId);
#line 496
	const FCDSceneNode* FindSceneNode(const char* daeId) const;
	inline FCDSceneNode* FindSceneNode(const char* daeId) { return const_cast<FCDSceneNode*>(const_cast<const FCDocument*>(this)->FindSceneNode(daeId)); }
#line 502
	void RegisterAnimatedValue(FCDAnimated* animated);
#line 507
	void UnregisterAnimatedValue(FCDAnimated* animated);
#line 512
	inline void RegisterExtraTree(FCDExtra* tree) { extraTrees.insert(tree, tree); }
#line 517
	inline void UnregisterExtraTree(FCDExtra* tree) { FUAssert(extraTrees.find(tree) != extraTrees.end(), return); extraTrees.erase(tree); }
#line 522
	inline FCDExtraSet& GetExtraTrees() { return extraTrees; }
};

#endif
#line 17 ".\\FCDocument\\FCDEffectStandard.cpp"
// #include "FCDocument/FCDAnimated.h"   (FCollada 3.05B, pasted in place)
#line 20 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDAnimated.h"
#ifndef _FCD_ANIMATED_H_
#define _FCD_ANIMATED_H_

#ifndef __FCD_OBJECT_H_
#line 25
#endif

class FCDocument;
class FCDAnimated;
class FCDAnimationCurve;
class FCDAnimationChannel;
class FCDAnimationMultiCurve;

typedef fm::pvector<float> FloatPtrList;
typedef fm::pvector<FCDAnimationCurve> FCDAnimationCurveList;
typedef FUTrackedList<FCDAnimationCurve> FCDAnimationCurveTrackList;
typedef fm::vector<FCDAnimationCurveTrackList> FCDAnimationCurveListList;
typedef fm::pvector<FCDAnimationChannel> FCDAnimationChannelList;
typedef fm::pvector<FCDAnimated> FCDAnimatedList;
#line 55
class FCOLLADA_EXPORT FCDAnimated : public FCDObject, FUTracker
{
private:
	DeclareObjectType(FCDObject);

protected:

	FloatPtrList values;
#line 66
	StringList qualifiers;
#line 71
	FCDAnimationCurveListList curves;
#line 74
	FCDObject* target;
#line 80
	int32 arrayElement;

public:
	DeclareFlag(RelativeAnimation, 0);
	DeclareFlagCount(1);

public:
#line 93
	FCDAnimated(FCDObject* object, size_t valueCount, const char** qualifiers, float** values);
#line 101
	FCDAnimated(FCDocument* document, size_t valueCount, const char** qualifiers, float** values);
#line 104
	virtual ~FCDAnimated();
#line 108
	inline size_t GetValueCount() const { return values.size(); }
#line 113
    inline size_t GetCurveCount(size_t index) const { FUAssert(index < GetValueCount(), return 0); return curves[index].size(); }
#line 121
	inline FCDAnimationCurve* GetCurve(size_t index, size_t curveIndex = 0) { FUAssert(index < GetValueCount(), return NULL); return curveIndex < curves.at(index).size() ? curves.at(index).at(curveIndex) : NULL; }
	inline const FCDAnimationCurve* GetCurve(size_t index, size_t curveIndex = 0) const { FUAssert(index < GetValueCount(), return NULL); return curveIndex < curves.at(index).size() ? curves.at(index).at(curveIndex) : NULL; }
#line 127
	inline FCDAnimationCurveListList& GetCurves() { return curves; }
	inline const FCDAnimationCurveListList& GetCurves() const { return curves; }
#line 136
	bool AddCurve(size_t index, FCDAnimationCurve* curve);
	bool AddCurve(size_t index, FCDAnimationCurveList& curve);
#line 143
	bool RemoveCurve(size_t index);
#line 149
	inline float* GetValue(size_t index) { FUAssert(index < GetValueCount(), return NULL); return values.at(index); }
	inline const float* GetValue(size_t index) const { FUAssert(index < GetValueCount(), return NULL); return values.at(index); }
#line 156
	inline void SetValue(size_t index, float* value) { FUAssert(index < GetValueCount(), return); values.at(index) = value; }
#line 162
	const fm::string& GetQualifier(size_t index) const;
#line 167
	StringList& GetQualifiers(){ return qualifiers; }
#line 173
	float* FindValue(const fm::string& qualifier);
	const float* FindValue(const fm::string& qualifier) const;
#line 181
	inline FCDAnimationCurve* FindCurve(const char* qualifier) { size_t index = FindQualifier(qualifier); return index < GetValueCount() ? GetCurve(index) : NULL; }
	inline FCDAnimationCurve* FindCurve(const fm::string& qualifier) { return FindCurve(qualifier.c_str()); }
	inline const FCDAnimationCurve* FindCurve(const char* qualifier) const { size_t index = FindQualifier(qualifier); return index < GetValueCount() ? GetCurve(index) : NULL; }
	inline const FCDAnimationCurve* FindCurve(const fm::string& qualifier) const { return FindCurve(qualifier.c_str()); }
#line 191
	inline FCDAnimationCurve* FindCurve(const float* value) { size_t index = FindValue(value); return index < GetValueCount() ? GetCurve(index) : NULL; }
	inline const FCDAnimationCurve* FindCurve(const float* value) const { size_t index = FindValue(value); return index < GetValueCount() ? GetCurve(index) : NULL; }
#line 198
	size_t FindQualifier(const char* qualifier) const;
	inline size_t FindQualifier(const fm::string& qualifier) const { return FindQualifier(qualifier.c_str()); }
#line 205
	size_t FindValue(const float* value) const;
#line 209
	void SetTargetObject(FCDObject* _target);
#line 213
	FCDObject* GetTargetObject() { return target; }
#line 220
	inline int32 GetArrayElement() const { return arrayElement; }
#line 227
	inline void SetArrayElement(int32 index) { arrayElement = index; SetDirtyFlag(); }
#line 232
	bool HasCurve() const;
#line 238
	FCDAnimationMultiCurve* CreateMultiCurve() const;
#line 247
	static FCDAnimationMultiCurve* CreateMultiCurve(const FCDAnimatedList& toMerge);
#line 253
	void Evaluate(float time);
#line 258
	FCDAnimated* Clone(FCDocument* document) const;
#line 263
	FCDAnimated* Clone(FCDAnimated* clone) const;
#line 267
	virtual void OnObjectReleased(FUTrackable* object);
};
#line 274
class FCOLLADA_EXPORT FCDAnimatedCustom : public FCDAnimated
{
private:
	DeclareObjectType(FCDAnimated);
	float dummy;

	bool Link(xmlNode* node);

public:
#line 286
	FCDAnimatedCustom(FCDObject* object);
#line 292
	void Copy(const FCDAnimated* copy);
#line 296
	float& GetDummy() { return dummy; }
	const float& GetDummy() const { return dummy; }
#line 304
	void Resize(size_t count, const char** qualifiers = NULL, bool prependDot = true);
#line 309
	void Resize(const StringList& qualifiers = NULL, bool prependDot = true);
};
#line 313
namespace FCDAnimatedStandardQualifiers
{
#line 317
	FCOLLADA_EXPORT extern const char* EMPTY[1];
	FCOLLADA_EXPORT extern const char* XYZW[4];
	FCOLLADA_EXPORT extern const char* RGBA[4];

	FCOLLADA_EXPORT extern const char* ROTATE_AXIS[4];
	FCOLLADA_EXPORT extern const char* SKEW[7];
	FCOLLADA_EXPORT extern const char* MATRIX[16];
	FCOLLADA_EXPORT extern const char* LOOKAT[9];
};

#endif
#line 18 ".\\FCDocument\\FCDEffectStandard.cpp"
// #include "FCDocument/FCDEffect.h"   (FCollada 3.05B, pasted in place)
#line 20 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDEffect.h"
#ifndef _FCD_EFFECT_H_
#define _FCD_EFFECT_H_

#ifndef _FU_DAE_ENUM_H_
// #include "FUtils/FUDaeEnum.h"   (FCollada 3.05B, pasted in place)
#line 15 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUDaeEnum.h"
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
#line 25 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDEffect.h"
#endif
#ifndef _FCD_ENTITY_H_
// #include "FCDocument/FCDEntity.h"   (FCollada 3.05B, pasted in place)
#line 20 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDEntity.h"
#ifndef _FCD_ENTITY_H_
#define _FCD_ENTITY_H_

#ifndef __FCD_OBJECT_WITH_ID_H_
// #include "FCDocument/FCDObjectWithId.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDObjectWithId.h"
#ifndef __FCD_OBJECT_WITH_ID_H_
#define __FCD_OBJECT_WITH_ID_H_

#ifndef __FCD_OBJECT_H_
#line 19
#endif
#ifndef _FU_PARAMETER_H_
#line 22
#endif
#line 37
class FCOLLADA_EXPORT FCDObjectWithId : public FCDObject
{
private:
	DeclareObjectType(FCDObject);

	DeclareParameter(fm::string, FUParameterQualifiers::SIMPLE, daeId, FC("Unique Id"));

private:
	DeclareFlag(UniqueId, 0);
public:
	DeclareFlag(DaeIdChanged, 1);
	DeclareFlagCount(2);

public:
#line 54
	FCDObjectWithId(FCDocument* document, const char* baseId = "ObjectWithID");
#line 57
	virtual ~FCDObjectWithId();
#line 63
	const fm::string& GetDaeId() const;
#line 70
	void SetDaeId(const fm::string& id);
#line 77
	void SetDaeId(fm::string& id);
#line 82
	void RemoveDaeId();
#line 88
	void Clone(FCDObjectWithId* clone) const;
#line 95
	static fm::string CleanId(const char* id);
	inline static const fm::string CleanId(const fm::string& id) { return CleanId(id.c_str()); }
#line 104
	static fm::string CleanSubId(const char* sid);
	inline static const fm::string CleanSubId(const fm::string& sid) { return CleanSubId(sid.c_str()); }
};

#endif
#line 25 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDEntity.h"
#endif
#ifndef _FU_PARAMETER_H_
#line 28
#endif

class FCDocument;
class FCDAsset;
class FCDExtra;

typedef fm::pvector<FCDAsset> FCDAssetList;
typedef fm::pvector<const FCDAsset> FCDAssetConstList;
#line 52
class FCOLLADA_EXPORT FCDEntity : public FCDObjectWithId
{
public:
#line 58
	enum Type
	{
		ENTITY,
		ANIMATION,
		ANIMATION_CLIP,
		CAMERA,
		LIGHT,
		IMAGE,
		MATERIAL,
		EFFECT,
		GEOMETRY,
		CONTROLLER,
		SCENE_NODE,
		PHYSICS_RIGID_CONSTRAINT,
		PHYSICS_MATERIAL,
		PHYSICS_RIGID_BODY,
		PHYSICS_SHAPE,
		PHYSICS_ANALYTICAL_GEOMETRY,
		PHYSICS_MODEL,
		PHYSICS_SCENE_NODE,
		FORCE_FIELD,
		EMITTER,
		TYPE_COUNT
	};

private:
	DeclareObjectType(FCDObjectWithId);

	DeclareParameter(fstring, FUParameterQualifiers::SIMPLE, name, FC("Name"));
	DeclareParameterRef(FCDExtra, extra, FC("Extra Tree"));
	DeclareParameterRef(FCDAsset, asset, FC("Asset Tag"));
	DeclareParameter(fstring, FUParameterQualifiers::SIMPLE, note, FC("Note"));

public:
#line 96
	FCDEntity(FCDocument* document, const char* baseId = "GenericEntity");
#line 99
	virtual ~FCDEntity();
#line 106
	virtual Type GetType() const { return ENTITY; }
#line 112
	const fstring& GetName() const { return name; }
#line 118
	void SetName(const fstring& _name);
#line 125
	FCDExtra* GetExtra() { return extra; }
	const FCDExtra* GetExtra() const { return extra; }
#line 134
	FCDAsset* GetAsset();
	inline const FCDAsset* GetAsset() const { return asset; }
#line 140
	inline void GetHierarchicalAssets(FCDAssetList& assets) { GetHierarchicalAssets(*(FCDAssetConstList*) &assets); }
	virtual void GetHierarchicalAssets(FCDAssetConstList& assets) const;
#line 147
	bool HasNote() const;
#line 153
	const fstring& GetNote() const;
#line 159
	void SetNote(const fstring& _note);
#line 167
	virtual FCDEntity* FindDaeId(const fm::string& daeId) { return const_cast<FCDEntity*>(const_cast<const FCDEntity*>(this)->FindDaeId(daeId)); }
	virtual const FCDEntity* FindDaeId(const fm::string& daeId) const;
#line 179
	virtual FCDEntity* Clone(FCDEntity* clone = NULL, bool cloneChildren = false) const;
#line 184
	static fstring CleanName(const fchar* c);
};

#endif
#line 28 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDEffect.h"
#endif

class FCDocument;
class FCDEffectStandard;
class FCDEffectParameter;
class FCDEffectProfile;
#line 53
class FCOLLADA_EXPORT FCDEffect : public FCDEntity
{
private:
	DeclareObjectType(FCDEntity);
	DeclareParameterContainer(FCDEffectProfile, profiles, FC("Profiles"));
	DeclareParameterContainer(FCDEffectParameter, parameters, FC("Parameters"));

public:
#line 64
	FCDEffect(FCDocument* document);
#line 67
	virtual ~FCDEffect();
#line 72
	virtual Type GetType() const { return FCDEntity::EFFECT; }
#line 76
	size_t GetProfileCount() const { return profiles.size(); }
#line 81
	FCDEffectProfile* GetProfile(size_t index) { FUAssert(index < GetProfileCount(), return NULL); return profiles.at(index); }
	const FCDEffectProfile* GetProfile(size_t index) const { FUAssert(index < GetProfileCount(), return NULL); return profiles.at(index); }
#line 86
	DEPRECATED(3.05A, GetProfileCount and GetProfile(index)) void GetProfiles() const {}
#line 94
	const FCDEffectProfile* FindProfile(FUDaeProfileType::Type type) const;
	inline FCDEffectProfile* FindProfile(FUDaeProfileType::Type type) { return const_cast<FCDEffectProfile*>(const_cast<const FCDEffect*>(this)->FindProfile(type)); }
#line 104
	inline FCDEffectProfile* FindProfileByTypeAndPlatform(FUDaeProfileType::Type type, const fm::string& platform) { return const_cast<FCDEffectProfile*>(const_cast<const FCDEffect*>(this)->FindProfileByTypeAndPlatform(type, platform)); }
	const FCDEffectProfile* FindProfileByTypeAndPlatform(FUDaeProfileType::Type type, const fm::string& platform) const;
#line 110
	inline bool HasProfile(FUDaeProfileType::Type type) const { return FindProfile(type) != NULL; }
#line 117
	FCDEffectProfile* AddProfile(FUDaeProfileType::Type type);
#line 121
	inline size_t GetEffectParameterCount() const { return parameters.size(); }
#line 126
	inline FCDEffectParameter* GetEffectParameter(size_t index) { FUAssert(index < parameters.size(), return NULL); return parameters.at(index); }
	inline const FCDEffectParameter* GetEffectParameter(size_t index) const { FUAssert(index < parameters.size(), return NULL); return parameters.at(index); }
#line 133
	FCDEffectParameter* AddEffectParameter(uint32 type);
#line 141
	virtual FCDEntity* Clone(FCDEntity* clone = NULL, bool cloneChildren = false) const;
#line 146
	DEPRECATED(3.05A, not recommended) void Flatten();
};

#endif
#line 19 ".\\FCDocument\\FCDEffectStandard.cpp"
// #include "FCDocument/FCDEffectParameter.h"   (FCollada 3.05B, pasted in place)
#line 15 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDEffectParameter.h"
#ifndef _FCD_EFFECT_PARAMETER_H_
#define _FCD_EFFECT_PARAMETER_H_

#ifndef __FCD_OBJECT_H_
#line 20
#endif
#ifndef _FCD_PARAMETER_ANIMATABLE_H_
// #include "FCDocument/FCDParameterAnimatable.h"   (FCollada 3.05B, pasted in place)
#line 9 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDParameterAnimatable.h"
#ifndef _FCD_PARAMETER_ANIMATABLE_H_
#define _FCD_PARAMETER_ANIMATABLE_H_
#line 17
#ifndef _FU_PARAMETER_H_
#line 19
#endif
#ifndef _FM_ANGLEAXIS_H_
// #include <FMath/FMAngleAxis.h>   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMAngleAxis.h"
#ifndef _FM_ANGLEAXIS_H_
#define _FM_ANGLEAXIS_H_
#line 21
class FCOLLADA_EXPORT FMAngleAxis
{
public:
	FMVector3 axis;
	float angle;
#line 28
	FMAngleAxis();
#line 33
	FMAngleAxis(const FMVector3& _axis, float _angle);
};
#line 40
bool operator==(const FMAngleAxis& first, const FMAngleAxis& other);

#endif
#line 22 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDParameterAnimatable.h"
#endif
#ifndef _FM_LOOKAT_H_
// #include <FMath/FMLookAt.h>   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMLookAt.h"
#ifndef _FM_LOOKAT_H_
#define _FM_LOOKAT_H_
#line 21
class FCOLLADA_EXPORT FMLookAt
{
public:
	FMVector3 position;

	FMVector3 target;

	FMVector3 up;
#line 32
	FMLookAt();
#line 38
	FMLookAt(const FMVector3& _position, const FMVector3& _target, const FMVector3& _up);
};
#line 44
bool operator==(const FMLookAt& first, const FMLookAt& other);

#endif
#line 25 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDParameterAnimatable.h"
#endif
#ifndef _FM_SKEW_H_
// #include <FMath/FMSkew.h>   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMSkew.h"
#ifndef _FM_SKEW_H_
#define _FM_SKEW_H_
#line 21
class FCOLLADA_EXPORT FMSkew
{
public:
	FMVector3 rotateAxis;
	FMVector3 aroundAxis;
	float angle;
#line 29
	FMSkew();
#line 35
	FMSkew(const FMVector3& rotateAxis, const FMVector3& aroundAxis, float angle);
};
#line 41
bool operator==(const FMSkew& first, const FMSkew& other);

#endif
#line 28 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDParameterAnimatable.h"
#endif

class FCDAnimated;
class FUParameterizable;
#line 37
class FCOLLADA_EXPORT FCDParameterAnimatable
{
private:
	FUParameterizable* parent;
	FUObjectRef<FCDAnimated> animated;

public:
#line 46
	FCDParameterAnimatable(FUParameterizable* parent);
#line 49
	virtual ~FCDParameterAnimatable();
#line 53
	virtual FUParameterizable* GetParent() { return parent; }
#line 58
	FCDAnimated* GetAnimated();
	const FCDAnimated* GetAnimated() const;
#line 63
	bool IsAnimated() const;
#line 69
	FCDParameterAnimatable& operator= (FCDParameterAnimatable& parameter);

protected:
#line 76
	virtual FCDAnimated* CreateAnimated();
};
#line 83
template <class TYPE, int QUALIFIERS>
class FCOLLADA_EXPORT FCDParameterAnimatableT : public FCDParameterAnimatable
{
private:
	TYPE value;

public:
#line 92
	FCDParameterAnimatableT(FUParameterizable* parent);
#line 97
	FCDParameterAnimatableT(FUParameterizable* parent, const TYPE& defaultValue);
#line 100
	virtual ~FCDParameterAnimatableT();
#line 104
	inline operator TYPE&() { return value; }
	inline operator const TYPE&() const { return value; }
	inline TYPE& operator *() { return value; }
	inline const TYPE& operator *() const { return value; }
	inline TYPE* operator->() { return &value; }
	inline const TYPE* operator->() const { return &value; }
#line 114
	FCDParameterAnimatableT<TYPE, QUALIFIERS>& operator= (const TYPE& copy);

protected:
#line 120
	virtual FCDAnimated* CreateAnimated();
};

typedef FCDParameterAnimatableT<float, 0> FCDParameterAnimatableFloat;
typedef FCDParameterAnimatableT<FMVector2, 0> FCDParameterAnimatableVector2;
typedef FCDParameterAnimatableT<FMVector3, 0> FCDParameterAnimatableVector3;
typedef FCDParameterAnimatableT<FMVector3, 1> FCDParameterAnimatableColor3;
typedef FCDParameterAnimatableT<FMVector4, 0> FCDParameterAnimatableVector4;
typedef FCDParameterAnimatableT<FMVector4, 1> FCDParameterAnimatableColor4;
typedef FCDParameterAnimatableT<FMMatrix44, 0> FCDParameterAnimatableMatrix44;
typedef FCDParameterAnimatableT<FMAngleAxis, 0> FCDParameterAnimatableAngleAxis;
typedef FCDParameterAnimatableT<FMLookAt, 0> FCDParameterAnimatableLookAt;
typedef FCDParameterAnimatableT<FMSkew, 0> FCDParameterAnimatableSkew;
#line 138
class FCOLLADA_EXPORT FCDParameterListAnimatable
{
private:
	FUParameterizable* parent;

protected:
#line 147
	FUObjectContainer<FCDAnimated> animateds;

public:
#line 152
	FCDParameterListAnimatable(FUParameterizable* parent);
#line 155
	virtual ~FCDParameterListAnimatable();
#line 159
	virtual FUParameterizable* GetParent() { return parent; }
#line 165
	FCDAnimated* GetAnimated(size_t index);
	const FCDAnimated* GetAnimated(size_t index) const;
#line 172
	bool IsAnimated(size_t index = ~(size_t)0) const;
#line 176
	inline FUObjectContainer<FCDAnimated>& GetAnimatedValues() { return animateds; }
	inline const FUObjectContainer<FCDAnimated>& GetAnimatedValues() const { return animateds; }

protected:
#line 185
	virtual FCDAnimated* CreateAnimated(size_t index);
#line 192
	void OnInsertion(size_t offset, size_t count);
#line 199
	void OnRemoval(size_t offset, size_t count);

private:
	size_t BinarySearch(size_t arrayElementIndex) const;
};
#line 209
template <class TYPE, int QUALIFIERS>
class FCOLLADA_EXPORT FCDParameterListAnimatableT : public FCDParameterListAnimatable
{
private:
	fm::vector<TYPE, true> values;

public:
#line 218
	FCDParameterListAnimatableT(FUParameterizable* parent);
#line 221
	virtual ~FCDParameterListAnimatableT();
#line 225
	inline size_t size() const { return values.size(); }
#line 229
	inline bool empty() const { return values.size() == 0; }
#line 233
	void resize(size_t count);
#line 238
	void resize(size_t count, const TYPE& value);
#line 245
	inline const TYPE& at(size_t index) const { return values[index]; }
	inline const TYPE& operator[](size_t index) const { return values[index]; }
	template <class INTEGER> inline const TYPE& operator[](INTEGER index) const { return values[index]; }
#line 252
	void set(size_t index, const TYPE& value);
#line 257
	void insert(size_t index, const TYPE& value);
#line 263
	void insert(size_t index, size_t count, const TYPE& value);
#line 269
	void insert(size_t index, const TYPE* values, size_t count);
#line 273
	void erase(size_t index);
#line 277
	void erase(const TYPE& value);
#line 282
	void erase(size_t start, size_t end);
#line 285
	void clear();
#line 291
	inline size_t find(const TYPE& value) const { return values.find(value) - values.begin(); }
#line 296
	inline bool contains(const TYPE& value) const { return values.contains(value); }
#line 300
	void push_back(const TYPE& value);
#line 304
	void push_front(const TYPE& value);
#line 307
	void pop_back();
#line 310
	void pop_front();
#line 314
	inline TYPE& front() { return values.front(); }
	inline const TYPE& front() const { return values.front(); }
#line 319
	inline TYPE& back() { return values.back(); }
	inline const TYPE& back() const { return values.back(); }
#line 324
	inline TYPE** GetDataPtr() { return values.GetDataPtr(); }
	inline const TYPE** GetDataPtr() const { return values.GetDataPtr(); }
#line 329
	inline fm::vector<TYPE, true>& GetDataList() { return values; }
	inline const fm::vector<TYPE, true>& GetDataList() const { return values; }
#line 334
	inline size_t capacity() const { return values.capacity(); }

protected:
#line 340
	virtual FCDAnimated* CreateAnimated(size_t index);

private:
#line 346
	void OnPotentialSizeChange();
};

typedef FCDParameterListAnimatableT<float, 0> FCDParameterListAnimatableFloat;
typedef FCDParameterListAnimatableT<FMVector2, 0> FCDParameterListAnimatableVector2;
typedef FCDParameterListAnimatableT<FMVector3, 0> FCDParameterListAnimatableVector3;
typedef FCDParameterListAnimatableT<FMVector3, 1> FCDParameterListAnimatableColor3;
typedef FCDParameterListAnimatableT<FMVector4, 0> FCDParameterListAnimatableVector4;
typedef FCDParameterListAnimatableT<FMVector4, 1> FCDParameterListAnimatableColor4;
#line 371
#define DeclareParameterAnimatable(type, qual, parameterName, niceName) \
	class Parameter_##parameterName : public FCDParameterAnimatableT<type, qual> { \
	public: Parameter_##parameterName(FUParameterizable* parent) : FCDParameterAnimatableT<type, qual>(parent) {} \
	Parameter_##parameterName(FUParameterizable* parent, const type& defaultValue) : FCDParameterAnimatableT<type, qual>(parent, defaultValue) {} \
	virtual ~Parameter_##parameterName() {} \
	Parameter_##parameterName& operator= (const type& copy) { FCDParameterAnimatableT<type, qual>::operator=(copy); return *this; } \
	} parameterName;
#line 380
#define DeclareParameterListAnimatable(type, qual, parameterName, niceName) \
	class Parameter_##parameterName : public FCDParameterListAnimatableT<type, qual> { \
	public: Parameter_##parameterName(FUParameterizable* parent) : FCDParameterListAnimatableT<type, qual>(parent) {} \
	virtual ~Parameter_##parameterName() {} \
	} parameterName;
#line 395
#define InitializeParameterAnimatableNoArg(parameterName) parameterName(this)

#define InitializeParameterAnimatable(parameterName, ...) parameterName(this, __VA_ARGS__)

#if defined(__APPLE__) || defined(LINUX)
#line 401
#endif

#endif
#line 23 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDEffectParameter.h"
#endif

class FCDocument;
class FCDEffectParameterAnnotation;
#line 43
class FCOLLADA_EXPORT FCDEffectParameter : public FCDObject
{
public:

	enum Type
	{
		SAMPLER,
		INTEGER,
		BOOLEAN,
		FLOAT,
		FLOAT2,
		FLOAT3,
		VECTOR,
		MATRIX,
		STRING,
		SURFACE
	};
#line 62
	enum ParamType
	{
		GENERATOR,

		MODIFIER,

		ANIMATOR,

		REFERENCER,

		CONSTANT

	};

private:
	DeclareObjectType(FCDObject);

	DeclareParameter(uint32, FUParameterQualifiers::SIMPLE, paramType, FC("Parameter Type"));
	DeclareParameter(fm::string, FUParameterQualifiers::SIMPLE, reference, FC("Identifier"));
	DeclareParameter(fm::string, FUParameterQualifiers::SIMPLE, semantic, FC("Semantic"));
	DeclareParameterContainer(FCDEffectParameterAnnotation, annotations, FC("Annotations"));

public:
#line 88
	FCDEffectParameter(FCDocument* document);
#line 91
	virtual ~FCDEffectParameter();
#line 95
	virtual Type GetType() const = 0;
#line 101
	inline ParamType GetParamType() const { return (ParamType) *paramType; }
#line 106
	inline const fm::string& GetReference() const { return reference; }
#line 111
	void SetReference(const char* _reference);
#line 115
	inline const fm::string& GetSemantic() const { return semantic; }
#line 119
	void SetSemantic(const char* _semantic) { semantic = _semantic; SetDirtyFlag(); }
#line 125
	inline bool IsGenerator() const { return paramType == GENERATOR; }
#line 128
	inline void SetGenerator() { paramType = GENERATOR; SetDirtyFlag(); }
#line 134
	inline bool IsModifier() const { return paramType == MODIFIER; }
#line 137
	inline void SetModifier() { paramType = MODIFIER; SetDirtyFlag(); }
#line 143
	inline bool IsAnimator() const { return paramType == ANIMATOR; }
#line 146
	inline void SetAnimator() { paramType = ANIMATOR; SetDirtyFlag(); }
#line 152
	inline bool IsReferencer() const { return paramType == REFERENCER; }
#line 155
	inline void SetReferencer() { paramType = REFERENCER; SetDirtyFlag(); }
#line 161
	inline bool IsConstant() const { return paramType == CONSTANT; }
#line 164
	inline void SetConstant() { paramType = CONSTANT; SetDirtyFlag(); }
#line 168
	inline const FCDEffectParameterAnnotation** GetAnnotations() const { return annotations.begin(); }
#line 172
	inline size_t GetAnnotationCount() const { return annotations.size(); }
#line 178
	inline FCDEffectParameterAnnotation* GetAnnotation(size_t index) { FUAssert(index < GetAnnotationCount(), return NULL); return annotations.at(index); }
	inline const FCDEffectParameterAnnotation* GetAnnotation(size_t index) const { FUAssert(index < GetAnnotationCount(), return NULL); return annotations.at(index); }
#line 183
	FCDEffectParameterAnnotation* AddAnnotation();
#line 189
	void AddAnnotation(const fchar* name, FCDEffectParameter::Type type, const fchar* value);
	inline void AddAnnotation(const fstring& name, FCDEffectParameter::Type type, const fchar* value) { AddAnnotation(name.c_str(), type, value); }
	inline void AddAnnotation(const fchar* name, FCDEffectParameter::Type type, const fstring& value) { AddAnnotation(name, type, value.c_str()); }
	inline void AddAnnotation(const fstring& name, FCDEffectParameter::Type type, const fstring& value) { AddAnnotation(name.c_str(), type, value.c_str()); }
	template <class T> inline void AddAnnotation(const fchar* name, FCDEffectParameter::Type type, const T& value) { FUStringBuilder builder; builder.set(value); AddAnnotation(name, type, builder.ToCharPtr()); }
	template <class T> inline void AddAnnotation(const fstring& name, FCDEffectParameter::Type type, const T& value) { FUStringBuilder builder; builder.set(value); AddAnnotation(name.c_str(), type, builder.ToCharPtr()); }
#line 198
	DEPRECATED(3.05A, annotation->Release) inline void ReleaseAnnotation(FCDEffectParameterAnnotation* annotation) { ((FCDObject*) annotation)->Release(); }
#line 203
	virtual bool IsValueEqual(FCDEffectParameter *parameter) = 0;
#line 210
	virtual FCDEffectParameter* Clone(FCDEffectParameter* clone = NULL) const;
#line 215
	virtual void Overwrite(FCDEffectParameter* target);
};
#line 222
template <class PrimitiveType>
class FCOLLADA_EXPORT FCDEffectParameterT : public FCDEffectParameter
{
private:
	DeclareObjectType(FCDEffectParameter);
	DeclareParameter(PrimitiveType, FUParameterQualifiers::SIMPLE, value, FC("Value"));

public:
#line 233
	FCDEffectParameterT(FCDocument* document);
#line 236
	virtual ~FCDEffectParameterT();
#line 240
	virtual Type GetType() const;
#line 244
	inline const PrimitiveType& GetValue() const { return *value; }
#line 248
	inline void SetValue(const PrimitiveType& _value) { value = _value; SetDirtyFlag(); }
#line 253
	virtual bool IsValueEqual(FCDEffectParameter *parameter);
#line 260
	virtual FCDEffectParameter* Clone(FCDEffectParameter* clone = NULL) const;
#line 265
	virtual void Overwrite(FCDEffectParameter* target);
};

typedef FCDEffectParameterT<int32> FCDEffectParameterInt;
typedef FCDEffectParameterT<bool> FCDEffectParameterBool;
typedef FCDEffectParameterT<fm::string> FCDEffectParameterString;
#line 276
template <class PrimitiveType, int Qualifiers>
class FCOLLADA_EXPORT FCDEffectParameterAnimatableT : public FCDEffectParameter
{
public:

	enum FloatType
	{
		FLOAT,
		HALF
	};

private:
	DeclareObjectType(FCDEffectParameter);
	FloatType floatType;
	DeclareParameterAnimatable(PrimitiveType, Qualifiers, value, FC("Value"));

public:
#line 296
	FCDEffectParameterAnimatableT(FCDocument* document);
#line 299
	virtual ~FCDEffectParameterAnimatableT();
#line 303
	virtual Type GetType() const;
#line 307
	inline FloatType GetFloatType() const { return floatType; }
#line 311
	inline void SetFloatType(FloatType type) { floatType = type; SetDirtyFlag(); }
#line 315
	inline FCDParameterAnimatableT<PrimitiveType, Qualifiers>& GetValue() { return value; }
	inline const FCDParameterAnimatableT<PrimitiveType, Qualifiers>& GetValue() const { return value; }
#line 320
	inline void SetValue(const PrimitiveType& _value) { value = _value; SetDirtyFlag(); }
#line 325
	virtual bool IsValueEqual(FCDEffectParameter *parameter);
#line 332
	virtual FCDEffectParameter* Clone(FCDEffectParameter* clone = NULL) const;
#line 337
	virtual void Overwrite(FCDEffectParameter* target);
};

typedef FCDEffectParameterAnimatableT<float, FUParameterQualifiers::SIMPLE> FCDEffectParameterFloat;
typedef FCDEffectParameterAnimatableT<FMVector2, FUParameterQualifiers::SIMPLE> FCDEffectParameterFloat2;
typedef FCDEffectParameterAnimatableT<FMVector3, FUParameterQualifiers::VECTOR> FCDEffectParameterFloat3;
typedef FCDEffectParameterAnimatableT<FMVector3, FUParameterQualifiers::COLOR> FCDEffectParameterColor3;
typedef FCDEffectParameterAnimatableT<FMVector4, FUParameterQualifiers::VECTOR> FCDEffectParameterVector;
typedef FCDEffectParameterAnimatableT<FMVector4, FUParameterQualifiers::COLOR> FCDEffectParameterColor4;
typedef FCDEffectParameterAnimatableT<FMMatrix44, FUParameterQualifiers::SIMPLE> FCDEffectParameterMatrix;
#line 355
class FCOLLADA_EXPORT FCDEffectParameterAnnotation : public FUParameterizable
{
private:
	DeclareObjectType(FUParameterizable);

public:
#line 363
	FCDEffectParameterAnnotation();

	virtual ~FCDEffectParameterAnnotation();

	DeclareParameter(fstring, FUParameterQualifiers::SIMPLE, name, FC("Name"));
	DeclareParameter(uint32, FUParameterQualifiers::SIMPLE, type, FC("Value Type"));
	DeclareParameter(fstring, FUParameterQualifiers::SIMPLE, value, FC("Value"));
};

#if defined(__APPLE__) || defined(LINUX)
#line 374
#endif

#endif
#line 20 ".\\FCDocument\\FCDEffectStandard.cpp"
// #include "FCDocument/FCDEffectParameterFactory.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDEffectParameterFactory.h"
#ifndef _FCD_EFFECT_PARAMETER_FACTORY_H_
#define _FCD_EFFECT_PARAMETER_FACTORY_H_

class FCDocument;
class FCDEffectParameter;
#line 28
class FCOLLADA_EXPORT FCDEffectParameterFactory
{
private:

	FCDEffectParameterFactory() {}

public:
#line 40
	static FCDEffectParameter* Create(FCDocument* document, uint32 type);
};

#endif
#line 21 ".\\FCDocument\\FCDEffectStandard.cpp"
// #include "FCDocument/FCDEffectStandard.h"   (FCollada 3.05B, pasted in place)
#line 20 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDEffectStandard.h"
#ifndef _FCD_MATERIAL_STANDARD_H_
#define _FCD_MATERIAL_STANDARD_H_

#ifndef _FU_DAE_ENUM_H_
#line 25
#endif
#ifndef _FCD_EFFECT_PROFILE_H_
// #include "FCDocument/FCDEffectProfile.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDEffectProfile.h"
#ifndef _FCD_EFFECT_PROFILE_H_
#define _FCD_EFFECT_PROFILE_H_

#ifndef _FU_DAE_ENUM_H_
#line 19
#endif
#ifndef __FCD_OBJECT_H_
#line 22
#endif

class FCDocument;
class FCDEffect;
class FCDEffectParameter;
class FCDExtra;
#line 41
class FCOLLADA_EXPORT FCDEffectProfile : public FCDObject
{
private:
	DeclareObjectType(FCDObject);
	FCDEffect* parent;
	DeclareParameterContainer(FCDEffectParameter, parameters, FC("Effect Parameters"));
	DeclareParameterRef(FCDExtra, extra, FC("Extra Tree"));

public:
#line 54
	FCDEffectProfile(FCDocument* document, FCDEffect* parent);
#line 57
	virtual ~FCDEffectProfile();
#line 63
	virtual FUDaeProfileType::Type GetType() const = 0;
#line 68
	FCDEffect* GetParent() { return parent; }
	const FCDEffect* GetParent() const { return parent; }
#line 74
	DEPRECATED(3.05A, GetParent()->GetDaeId) const fm::string& GetDaeId() const { return emptyString; }
#line 80
	inline FCDExtra* GetExtra() { return extra; }
	inline const FCDExtra* GetExtra() const { return extra; }
#line 89
	virtual FCDEffectProfile* Clone(FCDEffectProfile* clone = NULL) const;
#line 93
	inline size_t GetEffectParameterCount() const { return parameters.size(); }
#line 98
	inline FCDEffectParameter* GetEffectParameter(size_t index) { FUAssert(index < parameters.size(), return NULL); return parameters.at(index); }
	inline const FCDEffectParameter* GetEffectParameter(size_t index) const { FUAssert(index < parameters.size(), return NULL); return parameters.at(index); }
#line 105
	FCDEffectParameter* AddEffectParameter(uint32 type);
#line 111
	DEPRECATED(3.05A, not recommended) void Flatten() {}
};

#endif
#line 28 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDEffectStandard.h"
#endif
#ifndef _FCD_EFFECT_PARAMETER_H_
#line 31
#endif

class FCDocument;
class FCDEffect;
class FCDTexture;
class FCDEffectParameter;

#if defined(WIN32)
template <class T, int Q> class FCOLLADA_EXPORT FCDEffectParameterAnimatableT;
#elif defined(LINUX) || defined(__APPLE__)
#line 42
#endif
typedef FCDEffectParameterAnimatableT<FMVector4, 1> FCDEffectParameterColor4;
typedef FCDEffectParameterAnimatableT<float, 0> FCDEffectParameterFloat;
#line 56
class FCOLLADA_EXPORT FCDEffectStandard : public FCDEffectProfile
{
public:

	enum LightingType
	{
#line 68
		CONSTANT,
#line 75
		LAMBERT,
#line 81
		PHONG,
#line 87
		BLINN,
#line 90
		UNKNOWN
	};
#line 94
	enum TransparencyMode
	{
#line 98
		A_ONE,
#line 102
		RGB_ZERO
	};

private:
	DeclareObjectType(FCDEffectProfile);

	DeclareParameter(uint32, FUParameterQualifiers::SIMPLE, type, FC("Lighting Type"));
#line 111
	DeclareParameterContainer(FCDTexture, emissionTextures, FC("Emission Textures"));
	DeclareParameterRef(FCDEffectParameterColor4, emissionColor, FC("Emission Color"));
	DeclareParameterRef(FCDEffectParameterFloat, emissionFactor, FC("Emission Factor"));
	DeclareParameter(bool, FUParameterQualifiers::SIMPLE, isEmissionFactor, FC("Is Emission Factor"));
#line 117
	DeclareParameterContainer(FCDTexture, reflectivityTextures, FC("Reflectivity Textures"));
	DeclareParameterRef(FCDEffectParameterColor4, reflectivityColor, FC("Reflectivity Color"));
	DeclareParameterRef(FCDEffectParameterFloat, reflectivityFactor, FC("Reflectivity Factor"));
	DeclareParameter(bool, FUParameterQualifiers::SIMPLE, isReflective, FC("Is Reflective"));
#line 123
	DeclareParameterContainer(FCDTexture, refractionTextures, FC("Refraction Textures"));
	DeclareParameterRef(FCDEffectParameterFloat, indexOfRefraction, FC("Index of Refraction"));
	DeclareParameter(bool, FUParameterQualifiers::SIMPLE, isRefractive, FC("Is Refractive"));
#line 128
	DeclareParameterContainer(FCDTexture, translucencyTextures, FC("Translucency Textures"));
	DeclareParameterRef(FCDEffectParameterColor4, translucencyColor, FC("Translucency Color"));
	DeclareParameterRef(FCDEffectParameterFloat, translucencyFactor, FC("Translucency Factor"));
	DeclareParameter(uint32, FUParameterQualifiers::SIMPLE, transparencyMode, FC("Translucency Mode"));
#line 134
	DeclareParameterContainer(FCDTexture, diffuseTextures, FC("Diffuse Textures"));
	DeclareParameterRef(FCDEffectParameterColor4, diffuseColor, FC("Diffuse Color"));
#line 138
	DeclareParameterContainer(FCDTexture, ambientTextures, FC("Ambient Textures"));
	DeclareParameterRef(FCDEffectParameterColor4, ambientColor, FC("Ambient Color"));
#line 142
	DeclareParameterContainer(FCDTexture, specularTextures, FC("Specular Color Textures"));
	DeclareParameterRef(FCDEffectParameterColor4, specularColor, FC("Specular Color"));
	DeclareParameterContainer(FCDTexture, specularFactorTextures, FC("Specular Factor Textures"));
	DeclareParameterRef(FCDEffectParameterFloat, specularFactor, FC("Specular Factor"));
#line 148
	DeclareParameterContainer(FCDTexture, shininessTextures, FC("Shininess Textures"));
	DeclareParameterRef(FCDEffectParameterFloat, shininess, FC("Shininess Factor"));
#line 152
	DeclareParameterContainer(FCDTexture, bumpTextures, FC("Bump Maps"));
	DeclareParameterContainer(FCDTexture, displacementTextures, FC("Displacement Maps"));
	DeclareParameterContainer(FCDTexture, filterTextures, FC("Filter Maps"));

public:
#line 162
	FCDEffectStandard(FCDocument* document, FCDEffect* parent);
#line 165
	virtual ~FCDEffectStandard();
#line 169
	inline LightingType GetLightingType() const { return (LightingType) *type; }
#line 174
	inline void SetLightingType(LightingType _type) { type = _type; SetDirtyFlag(); }
#line 180
	virtual FUDaeProfileType::Type GetType() const { return FUDaeProfileType::COMMON; }
#line 186
	inline FCDTexture** GetTextureBucket(uint32 bucket) { return const_cast<FCDTexture**>(const_cast<const FCDEffectStandard*>(this)->GetTextureBucket(bucket)); }
	const FCDTexture** GetTextureBucket(uint32 bucket) const;
#line 193
	size_t GetTextureCount(uint32 bucket) const;
#line 200
	inline FCDTexture* GetTexture(uint32 bucket, size_t index) { FUAssert(index < GetTextureCount(bucket), return NULL); return GetTextureBucket(bucket)[index]; }
	inline const FCDTexture* GetTexture(uint32 bucket, size_t index) const { FUAssert(index < GetTextureCount(bucket), return NULL); return GetTextureBucket(bucket)[index]; }
#line 207
	FCDTexture* AddTexture(uint32 bucket);
#line 211
	DEPRECATED(3.05A, texture->Release()) void ReleaseTexture(FCDTexture* texture) { ((FUObject*) texture)->Release(); }
#line 218
	FCDEffectParameter* GetParam(const fm::string& semantic, bool* isFloat);
#line 231
	inline FMVector4& GetTranslucencyColor() { return translucencyColor->GetValue(); }
	inline const FMVector4& GetTranslucencyColor() const { return translucencyColor->GetValue(); }
#line 239
	inline FCDEffectParameterColor4* GetTranslucencyColorParam() { return translucencyColor; }
	inline const FCDEffectParameterColor4* GetTranslucencyColorParam() const { return translucencyColor; }
#line 244
	inline void SetTranslucencyColor(const FMVector4& color) { translucencyColor->SetValue(color); SetDirtyFlag(); }
#line 255
	inline float& GetTranslucencyFactor() { return translucencyFactor->GetValue(); }
	inline const float& GetTranslucencyFactor() const { return translucencyFactor->GetValue(); }
#line 263
	inline FCDEffectParameterFloat* GetTranslucencyFactorParam() { return translucencyFactor; }
	inline const FCDEffectParameterFloat* GetTranslucencyFactorParam() const { return translucencyFactor; }
#line 268
	inline void SetTranslucencyFactor(float factor) { translucencyFactor->SetValue(factor); SetDirtyFlag(); }
#line 276
	inline TransparencyMode GetTransparencyMode() const { return (TransparencyMode) *transparencyMode; }
#line 280
	inline void SetTransparencyMode(TransparencyMode mode) { transparencyMode = mode; SetDirtyFlag(); }
#line 287
	float GetOpacity() const;
#line 297
	inline FMVector4& GetEmissionColor() { return emissionColor->GetValue(); }
	inline const FMVector4& GetEmissionColor() const { return emissionColor->GetValue(); }
#line 305
	inline FCDEffectParameterColor4* GetEmissionColorParam() { return emissionColor; }
	inline const FCDEffectParameterColor4* GetEmissionColorParam() const { return emissionColor; }
#line 310
	inline void SetEmissionColor(const FMVector4& color) { emissionColor->SetValue(color); SetDirtyFlag(); }
#line 319
	inline float& GetEmissionFactor() { return emissionFactor->GetValue(); }
	inline const float& GetEmissionFactor() const { return emissionFactor->GetValue(); }
#line 327
	inline FCDEffectParameterFloat* GetEmissionFactorParam() { return emissionFactor; }
	inline const FCDEffectParameterFloat* GetEmissionFactorParam() const { return emissionFactor; }
#line 332
	inline void SetEmissionFactor(float factor) { emissionFactor->SetValue(factor); SetDirtyFlag(); }
#line 342
	inline bool IsEmissionFactor() const { return isEmissionFactor; }
#line 348
	inline void SetIsEmissionFactor(bool useFactor) { isEmissionFactor = useFactor; SetDirtyFlag(); }
#line 357
	inline FMVector4& GetDiffuseColor() { return diffuseColor->GetValue(); }
	inline const FMVector4& GetDiffuseColor() const { return diffuseColor->GetValue(); }
#line 365
	inline FCDEffectParameterColor4* GetDiffuseColorParam() { return diffuseColor; }
	inline const FCDEffectParameterColor4* GetDiffuseColorParam() const { return diffuseColor; }
#line 370
	inline void SetDiffuseColor(const FMVector4& color) { diffuseColor->SetValue(color); SetDirtyFlag(); }
#line 379
	inline FMVector4& GetAmbientColor() { return ambientColor->GetValue(); }
	inline const FMVector4& GetAmbientColor() const { return ambientColor->GetValue(); }
#line 387
	inline FCDEffectParameterColor4* GetAmbientColorParam() { return ambientColor; }
	inline const FCDEffectParameterColor4* GetAmbientColorParam() const { return ambientColor; }
#line 392
	inline void SetAmbientColor(const FMVector4& color) { ambientColor->SetValue(color); SetDirtyFlag(); }
#line 403
	inline FMVector4& GetSpecularColor() { return specularColor->GetValue(); }
	inline const FMVector4& GetSpecularColor() const { return specularColor->GetValue(); }
#line 411
	inline FCDEffectParameterColor4* GetSpecularColorParam() { return specularColor; }
	inline const FCDEffectParameterColor4* GetSpecularColorParam() const { return specularColor; }
#line 416
	inline void SetSpecularColor(const FMVector4& color) { specularColor->SetValue(color); SetDirtyFlag(); }
#line 427
	inline float& GetSpecularFactor() { return specularFactor->GetValue(); }
	inline const float& GetSpecularFactor() const { return specularFactor->GetValue(); }
#line 435
	inline FCDEffectParameterFloat* GetSpecularFactorParam() { return specularFactor; }
	inline const FCDEffectParameterFloat* GetSpecularFactorParam() const { return specularFactor; }
#line 440
	inline void SetSpecularFactor(float factor) { specularFactor->SetValue(factor); SetDirtyFlag(); }
#line 452
	inline float& GetShininess() { return shininess->GetValue(); }
	inline const float& GetShininess() const { return shininess->GetValue(); }
#line 460
	inline FCDEffectParameterFloat* GetShininessParam() { return shininess; }
	inline const FCDEffectParameterFloat* GetShininessParam() const { return shininess; }
#line 468
	inline void SetShininess(float _shininess) { shininess->SetValue(_shininess); SetDirtyFlag(); }
#line 476
	inline bool IsReflective() const { return isReflective; }
#line 480
	inline void SetReflective(bool r) { isReflective = r; }
#line 491
    inline FMVector4& GetReflectivityColor() { return reflectivityColor->GetValue(); }
    inline const FMVector4& GetReflectivityColor() const { return reflectivityColor->GetValue(); }
#line 499
	inline FCDEffectParameterColor4* GetReflectivityColorParam() { return reflectivityColor; }
	inline const FCDEffectParameterColor4* GetReflectivityColorParam() const { return reflectivityColor; }
#line 504
	inline void SetReflectivityColor(const FMVector4& color) { reflectivityColor->SetValue(color); isReflective = true; SetDirtyFlag(); }
#line 515
	inline float& GetReflectivityFactor() { return reflectivityFactor->GetValue(); }
	inline const float& GetReflectivityFactor() const { return reflectivityFactor->GetValue(); }
#line 523
	inline FCDEffectParameterFloat* GetReflectivityFactorParam() { return reflectivityFactor; }
	inline const FCDEffectParameterFloat* GetReflectivityFactorParam() const { return reflectivityFactor; }
#line 528
	inline void SetReflectivityFactor(float factor) { reflectivityFactor->SetValue(factor); isReflective = true; SetDirtyFlag(); }
#line 535
	float GetReflectivity() const;
#line 543
	inline bool IsRefractive() const { return isRefractive; }
#line 547
	inline void SetRefractive(bool r) { isRefractive = r; }
#line 556
	inline float& GetIndexOfRefraction() { return indexOfRefraction->GetValue(); }
	inline const float& GetIndexOfRefraction() const { return indexOfRefraction->GetValue(); }
#line 564
	inline FCDEffectParameterFloat* GetIndexOfRefractionParam() { return indexOfRefraction; }
	inline const FCDEffectParameterFloat* GetIndexOfRefractionParam() const { return indexOfRefraction; }
#line 569
	inline void SetIndexOfRefraction(float index) { indexOfRefraction->SetValue(index); isRefractive = true; SetDirtyFlag(); }
#line 580
	virtual FCDEffectProfile* Clone(FCDEffectProfile* clone = NULL) const;
#line 584
	DEPRECATED(3.05A, not recommended) void Flatten() {}
#line 590
	void AddExtraAttribute(const char *profile, const char *key, const fchar *value);
#line 595
	const fchar* GetExtraAttribute(const char *profile, const char *key) const;

public:
	static const fm::string EmissionColorSemantic;
	static const fm::string EmissionFactorSemantic;
	static const fm::string ReflectivityColorSemantic;
	static const fm::string ReflectivityFactorSemantic;
	static const fm::string IndexOfRefractionSemantic;
	static const fm::string TranslucencyColorSemantic;
	static const fm::string TranslucencyFactorSemantic;
	static const fm::string DiffuseColorSemantic;
	static const fm::string AmbientColorSemantic;
	static const fm::string SpecularColorSemantic;
	static const fm::string SpecularFactorSemantic;
	static const fm::string ShininessSemantic;

};

#endif
#line 22 ".\\FCDocument\\FCDEffectStandard.cpp"
// #include "FCDocument/FCDExtra.h"   (FCollada 3.05B, pasted in place)
#line 15 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDExtra.h"
#ifndef _FCD_EXTRA_H_
#define _FCD_EXTRA_H_

#ifndef __FCD_OBJECT_H_
#line 20
#endif
#ifndef _FU_PARAMETER_H_
#line 23
#endif

class FCDAnimated;
class FCDAnimatedCustom;
class FCDEAttribute;
class FCDETechnique;
class FCDEType;
class FCDENode;

typedef fm::pvector<FCDENode> FCDENodeList;
#line 42
class FCOLLADA_EXPORT FCDExtra : public FCDObject
{
private:
	DeclareObjectType(FCDObject);

	FUObject* parent;
	DeclareParameterContainer(FCDEType, types, FC("Extra Types"));

public:
#line 56
	FCDExtra(FCDocument* document, FUObject* parent);
#line 59
	virtual ~FCDExtra();
#line 63
	inline FUObject* GetParent() { return parent; }
	inline const FUObject* GetParent() const { return parent; }
#line 68
	DEPRECATED(3.05A, GetTypeCount and GetType(index)) inline void GetTypes() const {}
#line 72
	size_t GetTypeCount() const { return types.size(); }
#line 78
	inline FCDEType* GetDefaultType() { return const_cast<FCDEType*>(const_cast<const FCDExtra*>(this)->GetDefaultType()); }
	inline const FCDEType* GetDefaultType() const { return FindType(""); }
#line 84
	inline FCDEType* GetType(size_t index) { FUAssert(index < types.size(), return NULL); return types.at(index); }
	inline const FCDEType* GetType(size_t index) const { FUAssert(index < types.size(), return NULL); return types.at(index); }
#line 92
	FCDEType* AddType(const char* name);
	inline FCDEType* AddType(const fm::string& name) { return AddType(name.c_str()); }
#line 99
	inline FCDEType* FindType(const char* name) { return const_cast<FCDEType*>(const_cast<const FCDExtra*>(this)->FindType(name)); }
	const FCDEType* FindType(const char* name) const;
	inline FCDEType* FindType(const fm::string& name) { return FindType(name.c_str()); }
	inline const FCDEType* FindType(const fm::string& name) const { return FindType(name.c_str()); }
#line 108
	bool HasContent() const;
#line 115
	FCDExtra* Clone(FCDExtra* clone = NULL) const;
};
#line 126
class FCOLLADA_EXPORT FCDEType : public FCDObject
{
private:
	DeclareObjectType(FCDObject);

	FCDExtra* parent;
	DeclareParameter(fm::string, FUParameterQualifiers::SIMPLE, name, FC("Type name"));
	DeclareParameterContainer(FCDETechnique, techniques, FC("Profile-specific Techniques"));

public:
#line 141
	FCDEType(FCDocument* document, FCDExtra* parent, const char* type);
#line 144
	virtual ~FCDEType();
#line 148
	inline FCDExtra* GetParent() { return parent; }
	inline const FCDExtra* GetParent() const { return parent; }
#line 153
	inline const fm::string& GetName() const { return name; }
#line 159
	inline void SetName(const fm::string& _name) { name = _name; }
#line 163
	DEPRECATED(3.05A, GetTechniqueCount and GetTechnique(index)) inline void GetTechniques() const {}
#line 167
	inline size_t GetTechniqueCount() const { return techniques.size(); }
#line 173
	inline FCDETechnique* GetTechnique(size_t index) { FUAssert(index < techniques.size(), return NULL); return techniques.at(index); }
	inline const FCDETechnique* GetTechnique(size_t index) const { FUAssert(index < techniques.size(), return NULL); return techniques.at(index); }
#line 181
	FCDETechnique* AddTechnique(const char* profile);
	inline FCDETechnique* AddTechnique(const fm::string& profile) { return AddTechnique(profile.c_str()); }
#line 188
	FCDETechnique* FindTechnique(const char* profile) { return const_cast<FCDETechnique*>(const_cast<const FCDEType*>(this)->FindTechnique(profile)); }
	const FCDETechnique* FindTechnique(const char* profile) const;
	inline FCDETechnique* FindTechnique(const fm::string& profile) { return FindTechnique(profile.c_str()); }
	inline const FCDETechnique* FindTechnique(const fm::string& profile) const { return FindTechnique(profile.c_str()); }
#line 199
	inline FCDENode* FindRootNode(const char* name) { return const_cast<FCDENode*>(const_cast<const FCDEType*>(this)->FindRootNode(name)); }
	const FCDENode* FindRootNode(const char* name) const;
	inline FCDENode* FindRootNode(const fm::string& name) { return FindRootNode(name.c_str()); }
	inline const FCDENode* FindRootNode(const fm::string& name) const { return FindRootNode(name.c_str()); }
#line 209
	FCDEType* Clone(FCDEType* clone = NULL) const;
};
#line 221
class FCOLLADA_EXPORT FCDENode : public FCDObject
{
private:
	DeclareObjectType(FCDObject);

	FCDENode* parent;
	DeclareParameter(fm::string, FUParameterQualifiers::SIMPLE, name, FC("Node name"));
	DeclareParameter(fstring, FUParameterQualifiers::SIMPLE, content, FC("Node content"));

	DeclareParameterContainer(FCDENode, children, FC("Children"));
	DeclareParameterContainer(FCDEAttribute, attributes, FC("Attributes"));

	DeclareParameterRef(FCDAnimatedCustom, animated, FC("Custom Animatable"));

public:
#line 240
	FCDENode(FCDocument* document, FCDENode* parent);
#line 243
	virtual ~FCDENode();
#line 248
	inline const char* GetName() const { return name->c_str(); }
#line 253
	inline void SetName(const char* _name) { fm::string n = _name; SetName(n); }
	inline void SetName(const fm::string& _name) { fm::string n = _name; SetName(n); }
	void SetName(fm::string& _name);
#line 261
	static void CleanName(fm::string& n);
#line 267
	const fchar* GetContent() const;
#line 273
	void SetContent(const fchar* _content);
	inline void SetContent(const fstring& _content) { return SetContent(_content.c_str()); }
#line 279
	void SetContentDirect(const fstring& _content) { content = _content; }
#line 285
	FCDAnimatedCustom* GetAnimated() { return animated; }
	const FCDAnimatedCustom* GetAnimated() const { return animated; }
#line 291
	void SetAnimated(FCDAnimatedCustom* animatedCustom);
#line 298
	FCDENode* GetParent() { return parent; }
	const FCDENode* GetParent() const { return parent; }
#line 303
	DEPRECATED(3.05A, GetChildNodeCount and GetChildNode(index)) void GetChildNodes() const {}
#line 307
	size_t GetChildNodeCount() const { return children.size(); }
#line 313
	FCDENode* GetChildNode(size_t index) { FUAssert(index < children.size(), return NULL); return children.at(index); }
	const FCDENode* GetChildNode(size_t index) const { FUAssert(index < children.size(), return NULL); return children.at(index); }
#line 319
	FCDENode* AddChildNode();
#line 325
	FCDENode* AddChildNode(const char* name);
	inline FCDENode* AddChildNode(const fm::string& name) { return AddChildNode(name.c_str()); }
#line 333
	inline FCDENode* FindChildNode(const char* name) { return const_cast<FCDENode*>(const_cast<const FCDENode*>(this)->FindChildNode(name)); }
	const FCDENode* FindChildNode(const char* name) const;
	inline FCDENode* FindChildNode(const fm::string& name) { return FindChildNode(name.c_str()); }
	inline const FCDENode* FindChildNode(const fm::string& name) const { return FindChildNode(name.c_str()); }
#line 342
	void FindChildrenNodes(const char* name, FCDENodeList& nodes) const;
	inline void FindChildrenNodes(const fm::string& name, FCDENodeList& nodes) const { FindChildrenNodes(name.c_str(), nodes); }
#line 351
	const FCDENode* FindParameter(const char* name) const;
	inline FCDENode* FindParameter(const char* name) { return const_cast<FCDENode*>(const_cast<const FCDENode*>(this)->FindParameter(name)); }
#line 359
	void FindParameters(FCDENodeList& nodes, StringList& names);
#line 363
	DEPRECATED(3.05A, GetAttributeCount and GetAttribute(index)) void GetAttributes() const {}
#line 367
	size_t GetAttributeCount() const { return attributes.size(); }
#line 373
	FCDEAttribute* GetAttribute(size_t index) { FUAssert(index < attributes.size(), return NULL); return attributes.at(index); }
	const FCDEAttribute* GetAttribute(size_t index) const { FUAssert(index < attributes.size(), return NULL); return attributes.at(index); }
#line 383
	FCDEAttribute* AddAttribute(fm::string& _name, const fchar* _value);
	inline FCDEAttribute* AddAttribute(const char* _name, const fchar* _value) { fm::string n = _name; return AddAttribute(n, _value); }
	inline FCDEAttribute* AddAttribute(const fm::string& _name, const fchar* _value) { fm::string n = _name; return AddAttribute(n, _value); }
	inline FCDEAttribute* AddAttribute(const char* _name, const fstring& _value) { fm::string n = _name; return AddAttribute(n, _value.c_str()); }
	inline FCDEAttribute* AddAttribute(fm::string& _name, const fstring& _value) { return AddAttribute(_name, _value.c_str()); }
	inline FCDEAttribute* AddAttribute(const fm::string& _name, const fstring& _value) { fm::string n = _name; return AddAttribute(n, _value.c_str()); }
	template <typename T> inline FCDEAttribute* AddAttribute(const char* _name, const T& _value) { fm::string n = _name; return AddAttribute(n, TO_FSTRING(_value)); }
	template <typename T> inline FCDEAttribute* AddAttribute(fm::string& _name, const T& _value) { return AddAttribute(_name, TO_FSTRING(_value)); }
	template <typename T> inline FCDEAttribute* AddAttribute(const fm::string& _name, const T& _value) { fm::string n = _name; return AddAttribute(n, TO_FSTRING(_value)); }
#line 398
	inline FCDEAttribute* FindAttribute(const char* name) { return const_cast<FCDEAttribute*>(const_cast<const FCDENode*>(this)->FindAttribute(name)); }
	const FCDEAttribute* FindAttribute(const char* name) const;
#line 406
	const fstring& ReadAttribute(const char* name) const;
#line 414
	FCDENode* AddParameter(const char* name, const fchar* value);
	inline FCDENode* AddParameter(const fm::string& name, const fchar* value) { return AddParameter(name.c_str(), value); }
	inline FCDENode* AddParameter(const char* name, const fstring& value) { return AddParameter(name, value.c_str()); }
	inline FCDENode* AddParameter(const fm::string& name, const fstring& value) { return AddParameter(name.c_str(), value.c_str()); }
	template <class T>
	inline FCDENode* AddParameter(const char* name, const T& value) { return AddParameter(name, TO_FSTRING(value)); }
	template <class T>
	inline FCDENode* AddParameter(const fm::string& name, const T& value) { return AddParameter(name.c_str(), TO_FSTRING(value)); }
#line 427
	virtual FCDENode* Clone(FCDENode* clone) const;
};
#line 439
class FCOLLADA_EXPORT FCDETechnique : public FCDENode
{
private:
	DeclareObjectType(FCDENode);

	FCDEType* parent;
	DeclareParameterPtr(FUTrackable, pluginOverride, FC("Plug-in Override Object"));
	DeclareParameter(fm::string, FUParameterQualifiers::SIMPLE, profile, FC("Profile Name"));

public:
#line 454
	FCDETechnique(FCDocument* document, FCDEType* parent, const char* profile);
#line 457
	virtual ~FCDETechnique();
#line 461
	const char* GetProfile() const { return profile->c_str(); }
#line 468
	void SetProfile(const fm::string& _profile) { profile = _profile; }
#line 474
	FUTrackable* GetPluginObject() { return pluginOverride; }
	const FUTrackable* GetPluginObject() const { return pluginOverride; }
#line 478
	void SetPluginObject(FUTrackable* plugin) { pluginOverride = plugin; }
#line 485
	virtual FCDENode* Clone(FCDENode* clone) const;
};
#line 492
class FCDEAttribute : public FUParameterizable
{
private:
	DeclareParameter(fm::string, FUParameterQualifiers::SIMPLE, name, FC("Attribute Name"));
	DeclareParameter(fstring, FUParameterQualifiers::SIMPLE, value, FC("Attribute Value"));

public:
#line 501
	FCDEAttribute();
#line 507
	FCDEAttribute(const char* name, const fchar* value);
#line 511
	inline const fm::string& GetName() const { return name; }
#line 515
	inline void SetName(const fm::string& _name) { name = _name; }
#line 519
	inline const fstring& GetValue() const { return value; }
#line 523
	inline void SetValue(const fstring& _value) { value = _value; }
};

#endif
#line 23 ".\\FCDocument\\FCDEffectStandard.cpp"
// #include "FCDocument/FCDMaterial.h"   (FCollada 3.05B, pasted in place)
#line 20 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDMaterial.h"
#ifndef _FCD_MATERIAL_H_
#define _FCD_MATERIAL_H_

#ifndef _FCD_ENTITY_H_
#line 25
#endif

class FCDocument;
class FCDEffect;
class FCDEffectParameter;
class FCDEntityReference;
#line 38
class FCOLLADA_EXPORT FCDMaterialTechniqueHint
{
public:
	fstring platform;
	fm::string technique;
};
#line 46
typedef fm::vector<FCDMaterialTechniqueHint> FCDMaterialTechniqueHintList;
#line 57
class FCOLLADA_EXPORT FCDMaterial : public FCDEntity
{
private:
	DeclareObjectType(FCDEntity);
	bool ownsEffect;
	DeclareParameterPtr(FCDEntityReference, effect, FC("Effect"));
	DeclareParameterContainer(FCDEffectParameter, parameters, FC("Effect Parameters"))
	FCDMaterialTechniqueHintList techniqueHints;

public:
#line 70
	FCDMaterial(FCDocument* document);
#line 73
	virtual ~FCDMaterial();
#line 78
	virtual Type GetType() const { return FCDEntity::MATERIAL; }
#line 83
	FCDEffect* GetEffect() { return const_cast<FCDEffect*>(const_cast<const FCDMaterial*>(this)->GetEffect()); }
	const FCDEffect* GetEffect() const;
#line 90
	FCDEntityReference* GetEffectReference() { return effect; }
	const FCDEntityReference* GetEffectReference() const { return effect; }
#line 95
	void SetEffect(FCDEffect* _effect);
#line 99
	FCDMaterialTechniqueHintList& GetTechniqueHints() { return techniqueHints; }
	const FCDMaterialTechniqueHintList& GetTechniqueHints() const { return techniqueHints; }
#line 104
	inline size_t GetEffectParameterCount() const { return parameters.size(); }
#line 109
	inline FCDEffectParameter* GetEffectParameter(size_t index) { FUAssert(index < parameters.size(), return NULL); return parameters.at(index); }
	inline const FCDEffectParameter* GetEffectParameter(size_t index) const { FUAssert(index < parameters.size(), return NULL); return parameters.at(index); }
#line 116
	FCDEffectParameter* AddEffectParameter(uint32 type);
#line 124
	virtual FCDEntity* Clone(FCDEntity* clone = NULL, bool cloneChildren = false) const;
#line 130
	DEPRECATED(3.05A, not recommended) void Flatten() {}
};

#endif
#line 24 ".\\FCDocument\\FCDEffectStandard.cpp"
// #include "FCDocument/FCDTexture.h"   (FCollada 3.05B, pasted in place)
#line 20 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDTexture.h"
#ifndef _FCD_TEXTURE_H_
#define _FCD_TEXTURE_H_

#ifndef _FCD_ENTITY_H_
#line 25
#endif
#ifndef _FU_DAE_ENUM_H_
#line 28
#endif

class FCDocument;
class FCDEffectParameter;
class FCDEffectParameterSampler;
class FCDEffectStandard;
class FCDImage;

#if defined(WIN32)
template <class T> class FCOLLADA_EXPORT FCDEffectParameterT;
#elif defined(LINUX) || defined(__APPLE__)
#line 40
#endif
typedef FCDEffectParameterT<int32> FCDEffectParameterInt;
#line 57
class FCOLLADA_EXPORT FCDTexture : public FCDObject
{
private:
	DeclareObjectType(FCDObject);

	FCDEffectStandard* parent;
	DeclareParameterPtr(FCDEffectParameterSampler, sampler, FC("Sampler"));
	DeclareParameterRef(FCDEffectParameterInt, set, FC("Set"));
	DeclareParameterRef(FCDExtra, extra, FC("Extra Tree"));

public:
#line 72
	FCDTexture(FCDocument* document, FCDEffectStandard* parent = NULL);
#line 75
	virtual ~FCDTexture();
#line 79
	FCDEffectStandard* GetParent() const { return parent; }
#line 84
	inline FCDImage* GetImage() { return const_cast<FCDImage*>(const_cast<const FCDTexture*>(this)->GetImage()); }
	const FCDImage* GetImage() const;
#line 92
	void SetImage(FCDImage* image);
#line 97
	FCDEffectParameterSampler* GetSampler();
	inline const FCDEffectParameterSampler* GetSampler() const { return sampler; }
#line 102
	inline void SetSampler(FCDEffectParameterSampler* _sampler) { sampler = _sampler; }
#line 106
	inline bool HasSampler() { return sampler != NULL; }
#line 111
	inline FCDEffectParameterInt* GetSet() { return set; }
	inline const FCDEffectParameterInt* GetSet() const { return set; }
#line 116
	inline FCDExtra* GetExtra() { return extra; }
	inline const FCDExtra* GetExtra() const { return extra; }
#line 123
	virtual FCDTexture* Clone(FCDTexture* clone = NULL) const;
};

#endif
#line 25 ".\\FCDocument\\FCDEffectStandard.cpp"
// #include "FCDocument/FCDVersion.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FCDocument/FCDVersion.h"
#ifndef _FCD_VERSION_H_
#define _FCD_VERSION_H_

#ifdef major
#line 19
#endif
#ifdef minor
#line 22
#endif
#line 30
class FCOLLADA_EXPORT FCDVersion
{
public:
	uint32 major;
	uint32 minor;
	uint32 revision;
#line 38
	FCDVersion();
#line 42
	FCDVersion(const fm::string& v);
#line 48
	FCDVersion(uint32 major, uint32 minor, uint32 revision);
#line 51
	~FCDVersion() {}
#line 56
	void ParseVersionNumbers(const fm::string& v);
#line 62
	friend FCOLLADA_EXPORT bool IsEquivalent(const FCDVersion& a, const FCDVersion& b);
#line 67
	bool operator< (const FCDVersion& b) const;
#line 72
	bool operator<= (const FCDVersion& b) const;
#line 77
	inline bool operator> (const FCDVersion& b) const { return b <= *this; }
#line 82
	inline bool operator>= (const FCDVersion& b) const { return b < *this; }
};

#endif
// @baa 0x0186ee50
#line 26 ".\\FCDocument\\FCDEffectStandard.cpp"
// #include "FUtils/FUDaeEnum.h"   (already above)
// #include "FUtils/FUStringConversion.h"   (already above)

//
// FCDEffectStandard
//

ImplementObjectType(FCDEffectStandard);
ImplementParameterObject(FCDEffectStandard, FCDTexture, emissionTextures, new FCDTexture(parent->GetDocument(), parent));
ImplementParameterObject(FCDEffectStandard, FCDEffectParameterColor4, emissionColor, new FCDEffectParameterColor4(parent->GetDocument()));
ImplementParameterObject(FCDEffectStandard, FCDEffectParameterFloat, emissionFactor, new FCDEffectParameterFloat(parent->GetDocument()));
ImplementParameterObject(FCDEffectStandard, FCDTexture, reflectivityTextures, new FCDTexture(parent->GetDocument(), parent));
ImplementParameterObject(FCDEffectStandard, FCDEffectParameterColor4, reflectivityColor, new FCDEffectParameterColor4(parent->GetDocument()));
ImplementParameterObject(FCDEffectStandard, FCDEffectParameterFloat, reflectivityFactor, new FCDEffectParameterFloat(parent->GetDocument()));
ImplementParameterObject(FCDEffectStandard, FCDTexture, refractionTextures, new FCDTexture(parent->GetDocument(), parent));
ImplementParameterObject(FCDEffectStandard, FCDEffectParameterFloat, indexOfRefraction, new FCDEffectParameterFloat(parent->GetDocument()));
ImplementParameterObject(FCDEffectStandard, FCDTexture, translucencyTextures, new FCDTexture(parent->GetDocument(), parent));
ImplementParameterObject(FCDEffectStandard, FCDEffectParameterColor4, translucencyColor, new FCDEffectParameterColor4(parent->GetDocument()));
ImplementParameterObject(FCDEffectStandard, FCDEffectParameterFloat, translucencyFactor, new FCDEffectParameterFloat(parent->GetDocument()));
ImplementParameterObject(FCDEffectStandard, FCDTexture, diffuseTextures, new FCDTexture(parent->GetDocument(), parent));
ImplementParameterObject(FCDEffectStandard, FCDEffectParameterColor4, diffuseColor, new FCDEffectParameterColor4(parent->GetDocument()));
ImplementParameterObject(FCDEffectStandard, FCDTexture, ambientTextures, new FCDTexture(parent->GetDocument(), parent));
ImplementParameterObject(FCDEffectStandard, FCDEffectParameterColor4, ambientColor, new FCDEffectParameterColor4(parent->GetDocument()));
ImplementParameterObject(FCDEffectStandard, FCDTexture, specularTextures, new FCDTexture(parent->GetDocument()));
ImplementParameterObject(FCDEffectStandard, FCDEffectParameterColor4, specularColor, new FCDEffectParameterColor4(parent->GetDocument()));
ImplementParameterObject(FCDEffectStandard, FCDTexture, specularFactorTextures, new FCDTexture(parent->GetDocument(), parent));
ImplementParameterObject(FCDEffectStandard, FCDEffectParameterFloat, specularFactor, new FCDEffectParameterFloat(parent->GetDocument()));
ImplementParameterObject(FCDEffectStandard, FCDTexture, shininessTextures, new FCDTexture(parent->GetDocument(), parent));
ImplementParameterObject(FCDEffectStandard, FCDEffectParameterFloat, shininess, new FCDEffectParameterFloat(parent->GetDocument()));
ImplementParameterObject(FCDEffectStandard, FCDTexture, bumpTextures, new FCDTexture(parent->GetDocument(), parent));
ImplementParameterObject(FCDEffectStandard, FCDTexture, displacementTextures, new FCDTexture(parent->GetDocument(), parent));
ImplementParameterObject(FCDEffectStandard, FCDTexture, filterTextures, new FCDTexture(parent->GetDocument()));

const fm::string FCDEffectStandard::EmissionColorSemantic("EMISSION");
const fm::string FCDEffectStandard::EmissionFactorSemantic("EMISSIONFACTOR");
const fm::string FCDEffectStandard::ReflectivityColorSemantic("REFLECTIVITY");
const fm::string FCDEffectStandard::ReflectivityFactorSemantic("REFLECTIVITYFACTOR");
const fm::string FCDEffectStandard::IndexOfRefractionSemantic("INDEXOFREFRACTION");
const fm::string FCDEffectStandard::TranslucencyColorSemantic("TRANSLUCENCY");
const fm::string FCDEffectStandard::TranslucencyFactorSemantic("TRANSLUCENCYFACTOR");
const fm::string FCDEffectStandard::DiffuseColorSemantic("DIFFUSE");
const fm::string FCDEffectStandard::AmbientColorSemantic("AMBIENT");
const fm::string FCDEffectStandard::SpecularColorSemantic("SPECULAR");
const fm::string FCDEffectStandard::SpecularFactorSemantic("SPECULARFACTOR");
const fm::string FCDEffectStandard::ShininessSemantic("SHININESS");

FCDEffectStandard::FCDEffectStandard(FCDocument* document, FCDEffect* _parent)
:	FCDEffectProfile(document, _parent)
,	InitializeParameter(type, CONSTANT)
,	InitializeParameterNoArg(emissionTextures)
,	InitializeParameterNoArg(emissionColor)
,	InitializeParameterNoArg(emissionFactor)
,	InitializeParameter(isEmissionFactor, false)
,	InitializeParameterNoArg(reflectivityTextures)
,	InitializeParameterNoArg(reflectivityColor)
,	InitializeParameterNoArg(reflectivityFactor)
,	InitializeParameter(isReflective, false)
,	InitializeParameterNoArg(refractionTextures)
,	InitializeParameterNoArg(indexOfRefraction)
,	InitializeParameter(isRefractive, false)
,	InitializeParameterNoArg(translucencyTextures)
,	InitializeParameterNoArg(translucencyColor)
,	InitializeParameterNoArg(translucencyFactor)
,	InitializeParameter(transparencyMode, A_ONE)
,	InitializeParameterNoArg(diffuseTextures)
,	InitializeParameterNoArg(diffuseColor)
,	InitializeParameterNoArg(ambientTextures)
,	InitializeParameterNoArg(ambientColor)
,	InitializeParameterNoArg(specularTextures)
,	InitializeParameterNoArg(specularColor)
,	InitializeParameterNoArg(specularFactorTextures)
,	InitializeParameterNoArg(specularFactor)
,	InitializeParameterNoArg(shininessTextures)
,	InitializeParameterNoArg(shininess)
,	InitializeParameterNoArg(bumpTextures)
,	InitializeParameterNoArg(displacementTextures)
,	InitializeParameterNoArg(filterTextures)
{
	emissionColor = new FCDEffectParameterColor4(GetDocument());
	emissionColor->SetValue(FMVector4::AlphaOne);
	emissionColor->SetConstant();
	emissionFactor = new FCDEffectParameterFloat(GetDocument());
	emissionFactor->SetValue(1.0f);
	emissionFactor->SetConstant();
	reflectivityColor = new FCDEffectParameterColor4(GetDocument());
	reflectivityColor->SetValue(FMVector4::One);
	reflectivityColor->SetConstant();
	reflectivityFactor = new FCDEffectParameterFloat(GetDocument());
	reflectivityFactor->SetValue(1.0f);
	reflectivityFactor->SetConstant();
	indexOfRefraction = new FCDEffectParameterFloat(GetDocument());
	indexOfRefraction->SetValue(1.0f);
	indexOfRefraction->SetConstant();
	translucencyColor = new FCDEffectParameterColor4(GetDocument());
	translucencyColor->SetValue(FMVector4::AlphaOne);
	translucencyColor->SetConstant();
	translucencyFactor = new FCDEffectParameterFloat(GetDocument());
	translucencyFactor->SetValue(1.0f);
	translucencyFactor->SetConstant();
	diffuseColor = new FCDEffectParameterColor4(GetDocument());
	diffuseColor->SetValue(FMVector4::AlphaOne);
	diffuseColor->SetConstant();
	ambientColor = new FCDEffectParameterColor4(GetDocument());
	ambientColor->SetValue(FMVector4::AlphaOne);
	ambientColor->SetConstant();
	specularColor = new FCDEffectParameterColor4(GetDocument());
	specularColor->SetValue(FMVector4::AlphaOne);
	specularColor->SetConstant();
	specularFactor = new FCDEffectParameterFloat(GetDocument());
	specularFactor->SetValue(1.0f);
	specularFactor->SetConstant();
	shininess = new FCDEffectParameterFloat(GetDocument());
	shininess->SetValue(20.0f);
	shininess->SetConstant();

	// Note: the 1.4.1 spec calls for A_ONE as default, which breaks backwards compatibility
	// with 1.3 by having a transparency factor of 1 for opaque instead of 0 in 1.3.
	// If we're lower than 1.4.1, we default to RGB_ZERO and a transparency (or translucency)
	// factor of 0.0.
	if (GetDocument()->GetVersion() < FCDVersion(1,4,1)) transparencyMode = RGB_ZERO;
}

FCDEffectStandard::~FCDEffectStandard()
{
}

// Retrieve one of the buckets
const FCDTexture** FCDEffectStandard::GetTextureBucket(uint32 bucket) const
{
	switch (bucket)
	{
	case FUDaeTextureChannel::AMBIENT: return ambientTextures.begin();
	case FUDaeTextureChannel::BUMP: return bumpTextures.begin();
	case FUDaeTextureChannel::DIFFUSE: return diffuseTextures.begin();
	case FUDaeTextureChannel::DISPLACEMENT: return displacementTextures.begin();
	case FUDaeTextureChannel::EMISSION: return emissionTextures.begin();
	case FUDaeTextureChannel::FILTER: return filterTextures.begin();
	case FUDaeTextureChannel::REFLECTION: return reflectivityTextures.begin();
	case FUDaeTextureChannel::REFRACTION: return refractionTextures.begin();
	case FUDaeTextureChannel::SHININESS: return shininessTextures.begin();
	case FUDaeTextureChannel::SPECULAR: return specularTextures.begin();
	case FUDaeTextureChannel::SPECULAR_LEVEL: return specularFactorTextures.begin();
	case FUDaeTextureChannel::TRANSPARENT: return translucencyTextures.begin();

	case FUDaeTextureChannel::UNKNOWN:
	default:
		FUFail(return filterTextures.begin()); // because I think this one will almost always be empty.
	}
}

size_t FCDEffectStandard::GetTextureCount(uint32 bucket) const
{
	switch (bucket)
	{
	case FUDaeTextureChannel::AMBIENT: return ambientTextures.size();
	case FUDaeTextureChannel::BUMP: return bumpTextures.size();
	case FUDaeTextureChannel::DIFFUSE: return diffuseTextures.size();
	case FUDaeTextureChannel::DISPLACEMENT: return displacementTextures.size();
	case FUDaeTextureChannel::EMISSION: return emissionTextures.size();
	case FUDaeTextureChannel::FILTER: return filterTextures.size();
	case FUDaeTextureChannel::REFLECTION: return reflectivityTextures.size();
	case FUDaeTextureChannel::REFRACTION: return refractionTextures.size();
	case FUDaeTextureChannel::SHININESS: return shininessTextures.size();
	case FUDaeTextureChannel::SPECULAR: return specularTextures.size();
	case FUDaeTextureChannel::SPECULAR_LEVEL: return specularFactorTextures.size();
	case FUDaeTextureChannel::TRANSPARENT: return translucencyTextures.size();

	case FUDaeTextureChannel::UNKNOWN:
	default:
		FUFail(return 0);
	}
}

// Adds a texture to a specific channel.
FCDTexture* FCDEffectStandard::AddTexture(uint32 bucket)
{
	FCDTexture* texture = new FCDTexture(GetDocument(), this);
	switch (bucket)
	{
	case FUDaeTextureChannel::AMBIENT: ambientTextures.push_back(texture); break;
	case FUDaeTextureChannel::BUMP: bumpTextures.push_back(texture); break;
	case FUDaeTextureChannel::DIFFUSE: diffuseTextures.push_back(texture); break;
	case FUDaeTextureChannel::DISPLACEMENT: displacementTextures.push_back(texture); break;
	case FUDaeTextureChannel::EMISSION: emissionTextures.push_back(texture); break;
	case FUDaeTextureChannel::FILTER: filterTextures.push_back(texture); break;
	case FUDaeTextureChannel::REFLECTION: reflectivityTextures.push_back(texture); break;
	case FUDaeTextureChannel::REFRACTION: refractionTextures.push_back(texture); break;
	case FUDaeTextureChannel::SHININESS: shininessTextures.push_back(texture); break;
	case FUDaeTextureChannel::SPECULAR: specularTextures.push_back(texture); break;
	case FUDaeTextureChannel::SPECULAR_LEVEL: specularFactorTextures.push_back(texture); break;
	case FUDaeTextureChannel::TRANSPARENT: translucencyTextures.push_back(texture); break;

	case FUDaeTextureChannel::UNKNOWN:
	default:
		FUFail(texture->Release(); return NULL);
	}
	SetNewChildFlag();
	return texture;
}

// Calculate the opacity for this material
float FCDEffectStandard::GetOpacity() const
{
	if (transparencyMode == RGB_ZERO)
		return 1.0f - (translucencyColor->GetValue()->x + translucencyColor->GetValue()->x + translucencyColor->GetValue()->x) / 3.0f * translucencyFactor->GetValue();
	else
		return translucencyColor->GetValue()->w * translucencyFactor->GetValue();
}

// Calculate the overall reflectivity for this material
float FCDEffectStandard::GetReflectivity() const
{
	return (reflectivityColor->GetValue()->x + reflectivityColor->GetValue()->x + reflectivityColor->GetValue()->x) / 3.0f * reflectivityFactor->GetValue();
}

// Clone the standard effect
FCDEffectProfile* FCDEffectStandard::Clone(FCDEffectProfile* _clone) const
{
	FCDEffectStandard* clone = NULL;
	if (_clone == NULL) _clone = clone = new FCDEffectStandard(const_cast<FCDocument*>(GetDocument()), const_cast<FCDEffect*>(GetParent()));
	else if (_clone->GetObjectType() == FCDEffectStandard::GetClassType()) clone = (FCDEffectStandard*) _clone;

	if (_clone != NULL) FCDEffectProfile::Clone(_clone);
	if (clone != NULL)
	{
		clone->type = type;
		for (uint32 i = 0; i < FUDaeTextureChannel::COUNT; ++i)
		{
			size_t count = GetTextureCount(i);
			for (size_t t = 0; t < count; ++t)
			{
				const FCDTexture* texture = GetTexture(i, t);
				texture->Clone(clone->AddTexture(i));
			}
		}
		clone->transparencyMode = transparencyMode;

#define CLONE_ANIMATED(value) clone->value->SetValue(value->GetValue()); if (value->GetValue().IsAnimated()) value->GetValue().GetAnimated()->Clone(clone->value->GetValue().GetAnimated());

		CLONE_ANIMATED(emissionColor); CLONE_ANIMATED(emissionFactor); clone->isEmissionFactor = isEmissionFactor;
		CLONE_ANIMATED(translucencyColor); CLONE_ANIMATED(translucencyFactor);
		CLONE_ANIMATED(diffuseColor); CLONE_ANIMATED(ambientColor);
		CLONE_ANIMATED(specularColor); CLONE_ANIMATED(specularFactor); CLONE_ANIMATED(shininess);
		CLONE_ANIMATED(reflectivityColor); CLONE_ANIMATED(reflectivityFactor); CLONE_ANIMATED(indexOfRefraction);

#undef CLONE_ANIMATED
	}

	return _clone;
}

void FCDEffectStandard::AddExtraAttribute(const char* profile, const char* key, const fchar* value)
{
	FUAssert(GetParent() != NULL, return);
	FCDETechnique* extraTech = GetParent()->GetExtra()->GetDefaultType()->FindTechnique(profile);
	if (extraTech == NULL) extraTech = GetParent()->GetExtra()->GetDefaultType()->AddTechnique(profile);
	FCDENode *enode= extraTech->AddParameter(key, value);
	enode->SetName(key);
	enode->SetContent(value);
	SetNewChildFlag();
}

const fchar* FCDEffectStandard::GetExtraAttribute(const char* profile, const char* key) const
{
	FUAssert(GetParent() != NULL, return NULL);
	const FCDETechnique * extraTech = GetParent()->GetExtra()->GetDefaultType()->FindTechnique(profile);
	if (extraTech == NULL) return NULL;
	const FCDENode * enode = extraTech->FindParameter(key);
	if (enode == NULL) return NULL;
	return enode->GetContent();
}

FCDEffectParameter* FCDEffectStandard::GetParam(const fm::string& semantic, bool* isFloat)
{
	if (semantic == FCDEffectStandard::AmbientColorSemantic)
	{
		*isFloat = false;
		return ambientColor;
	}
	else if (semantic == FCDEffectStandard::DiffuseColorSemantic)
	{
		*isFloat = false;
		return diffuseColor;
	}
	else if (semantic == FCDEffectStandard::EmissionColorSemantic)
	{
		*isFloat = false;
		return emissionColor;
	}
	else if (semantic == FCDEffectStandard::EmissionFactorSemantic)
	{
		*isFloat = true;
		return emissionFactor;
	}
	else if (semantic == FCDEffectStandard::IndexOfRefractionSemantic)
	{
		*isFloat = true;
		return indexOfRefraction;
	}
	else if (semantic == FCDEffectStandard::ReflectivityColorSemantic)
	{
		*isFloat = false;
		return reflectivityColor;
	}
	else if (semantic == FCDEffectStandard::ReflectivityFactorSemantic)
	{
		*isFloat = true;
		return reflectivityFactor;
	}
	else if (semantic == FCDEffectStandard::ShininessSemantic)
	{
		*isFloat = true;
		return shininess;
	}
	else if (semantic == FCDEffectStandard::SpecularColorSemantic)
	{
		*isFloat = false;
		return specularColor;
	}
	else if (semantic == FCDEffectStandard::SpecularFactorSemantic)
	{
		*isFloat = true;
		return specularFactor;
	}
	else if (semantic == FCDEffectStandard::TranslucencyColorSemantic)
	{
		*isFloat = false;
		return translucencyColor;
	}
	else if (semantic == FCDEffectStandard::TranslucencyFactorSemantic)
	{
		*isFloat = true;
		return translucencyFactor;
	}
	else
	{
		*isFloat = true;
		return NULL;
	}
}
