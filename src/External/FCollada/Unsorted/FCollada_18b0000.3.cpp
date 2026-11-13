// FCollada_18b0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// FCollada 3.05B (Feeling Software; MIT license), FColladaPlugins/FArchiveXML/FAXAnimationImport.cpp, unchanged.
// The function at 0x018bc1e0 is ?LoadAnimationChannel@FArchiveXML@@SA_NPAVFCDObject@@PAU_xmlNode@@@Z
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
#include <stdarg.h>
#include <stdio.h>
extern "C" __declspec(dllimport) char* __cdecl _getcwd(char* buffer, int maxlen); // <direct.h>
#line 1 ".\\FAXAnimationImport.cpp"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

// #include "StdAfx.h"   (FCollada 3.05B, pasted in place)
#line 9 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\StdAfx.h"
#ifndef _STD_AFX_PCH_H_
#define _STD_AFX_PCH_H_

#define FCOLLADA_INTERNAL
// #include "FCollada.h"   (FCollada 3.05B, pasted in place)
#line 25 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCollada.h"
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
// #include <libxml/tree.h>   (FCollada 3.05B, pasted in place)
#line 12 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/tree.h"
#ifndef __XML_TREE_H__
#define __XML_TREE_H__

#include <stdio.h>
// #include <libxml/xmlversion.h>   (FCollada 3.05B, pasted in place)
#line 10 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/xmlversion.h"
#ifndef __XML_VERSION_H__
#define __XML_VERSION_H__

// #include <libxml/xmlexports.h>   (FCollada 3.05B, pasted in place)
#line 10 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/xmlexports.h"
#ifndef __XML_EXPORTS_H__
#define __XML_EXPORTS_H__
#line 30
#define XMLPUBFUN
#line 36
#define XMLPUBVAR extern
#line 42
#define XMLCALL
#line 47
#if defined(_WIN32) && defined(_MSC_VER)
  #undef XMLPUBFUN
  #undef XMLPUBVAR
  #undef XMLCALL
  #if defined(IN_LIBXML) && !defined(LIBXML_STATIC)
#line 54
  #else
    #define XMLPUBFUN
    #if !defined(LIBXML_STATIC)
#line 58
    #else
      #define XMLPUBVAR extern
    #endif
  #endif
  #define XMLCALL __cdecl
  #if !defined _REENTRANT
    #define _REENTRANT
  #endif
#endif
#line 69
#if defined(_WIN32) && defined(__BORLANDC__)
#line 73
  #if defined(IN_LIBXML) && !defined(LIBXML_STATIC)
#line 76
  #else
#line 78
    #if !defined(LIBXML_STATIC)
#line 80
    #else
#line 82
    #endif
  #endif
#line 85
  #if !defined _REENTRANT
#line 87
  #endif
#endif
#line 91
#if defined(_WIN32) && defined(__MINGW32__)
#line 95
  #if defined(IN_LIBXML) && !defined(LIBXML_STATIC)
#line 98
  #else
#line 100
    #if !defined(LIBXML_STATIC)
#line 102
    #else
#line 104
    #endif
  #endif
#line 107
  #if !defined _REENTRANT
#line 109
  #endif
#endif
#line 113
#if defined(_WIN32) && defined(__CYGWIN__)
#line 117
  #if defined(IN_LIBXML) && !defined(LIBXML_STATIC)
#line 120
  #else
#line 122
    #if !defined(LIBXML_STATIC)
#line 124
    #else
#line 126
    #endif
  #endif
#line 129
#endif
#line 132
#if !defined(LIBXML_DLL_IMPORT)
#define LIBXML_DLL_IMPORT XMLPUBVAR
#endif

#endif
#line 15 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/xmlversion.h"
#ifdef __cplusplus
extern "C" {
#endif
#line 23
#ifndef LIBXML2_COMPILING_MSCCDEF
XMLPUBFUN void XMLCALL xmlCheckVersion(int version);
#endif
#line 32
#define LIBXML_DOTTED_VERSION "2.6.19"
#line 39
#define LIBXML_VERSION 20619
#line 46
#define LIBXML_VERSION_STRING "20619"
#line 53
#define LIBXML_VERSION_EXTRA ""
#line 61
#define LIBXML_TEST_VERSION xmlCheckVersion(20619);

#ifndef VMS
#if 0
#line 71
#else
#line 77
#define WITHOUT_TRIO
#endif
#else
#line 86
#endif
#line 93
#if 0
#if defined(_REENTRANT) || defined(__MT__) || (_POSIX_C_SOURCE - 0 >= 199506L)
#line 96
#endif
#endif
#line 104
#if 1
#define LIBXML_TREE_ENABLED
#endif
#line 113
#if 1
#define LIBXML_OUTPUT_ENABLED
#endif
#line 122
#if 1
#define LIBXML_PUSH_ENABLED
#endif
#line 131
#if 1
#define LIBXML_READER_ENABLED
#endif
#line 140
#if 0
#line 142
#endif
#line 149
#if 1
#define LIBXML_WRITER_ENABLED
#endif
#line 158
#if 1
#define LIBXML_SAX1_ENABLED
#endif
#line 167
#if 0
#line 169
#endif
#line 176
#if 0
#line 178
#endif
#line 185
#if 0
#line 187
#endif
#line 194
#if 0
#line 196
#endif
#line 203
#if 0
#line 205
#endif
#line 212
#if 0
#line 214
#endif
#line 221
#if 0
#line 223
#endif
#line 230
#if 0
#line 232
#endif
#line 239
#if 0
#line 241
#endif
#line 248
#if 0
#line 250
#endif
#line 257
#if 0
#line 259
#endif
#line 266
#if 0
#line 268
#endif
#line 275
#if 0
#line 277
#endif
#line 284
#if 0
#line 286
#endif
#line 293
#if 0
#line 295
#endif
#line 302
#if 0
#line 304
#endif
#line 311
#if 1
#define LIBXML_UNICODE_ENABLED
#endif
#line 320
#if 0
#line 322
#endif
#line 329
#if 0
#line 331
#endif
#line 338
#if 0
#line 340
#endif
#line 347
#if 0
#line 350
#endif
#line 357
#ifdef __GNUC__
#ifdef HAVE_ANSIDECL_H
#line 360
#endif
#ifndef ATTRIBUTE_UNUSED
#line 363
#endif
#else
#define ATTRIBUTE_UNUSED
#endif

#ifdef __cplusplus
}
#endif
#endif
#line 17 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/tree.h"
// #include <libxml/xmlstring.h>   (FCollada 3.05B, pasted in place)
#line 11 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/xmlstring.h"
#ifndef __XML_STRING_H__
#define __XML_STRING_H__

#include <stdarg.h>
// #include <libxml/xmlversion.h>   (already above)

#ifdef __cplusplus
extern "C" {
#endif
#line 29
typedef unsigned char xmlChar;
#line 36
#define BAD_CAST (xmlChar *)
#line 41
XMLPUBFUN xmlChar * XMLCALL
                xmlStrdup                (const xmlChar *cur);
XMLPUBFUN xmlChar * XMLCALL
                xmlStrndup               (const xmlChar *cur,
					 intptr_t len);
XMLPUBFUN xmlChar * XMLCALL
                xmlCharStrndup           (const char *cur,
                                         intptr_t len);
XMLPUBFUN xmlChar * XMLCALL
                xmlCharStrdup            (const char *cur);
XMLPUBFUN xmlChar * XMLCALL
                xmlStrsub                (const xmlChar *str,
                                         intptr_t start,
                                         intptr_t len);
XMLPUBFUN const xmlChar * XMLCALL
                xmlStrchr                (const xmlChar *str,
                                         xmlChar val);
XMLPUBFUN const xmlChar * XMLCALL
                xmlStrstr                (const xmlChar *str,
                                         const xmlChar *val);
XMLPUBFUN const xmlChar * XMLCALL
                xmlStrcasestr            (const xmlChar *str,
                                         xmlChar *val);
XMLPUBFUN intptr_t XMLCALL
                xmlStrcmp                (const xmlChar *str1,
                                         const xmlChar *str2);
XMLPUBFUN intptr_t XMLCALL
                xmlStrncmp               (const xmlChar *str1,
                                         const xmlChar *str2,
                                         intptr_t len);
XMLPUBFUN intptr_t XMLCALL
                xmlStrcasecmp            (const xmlChar *str1,
                                         const xmlChar *str2);
XMLPUBFUN intptr_t XMLCALL
                xmlStrncasecmp           (const xmlChar *str1,
                                         const xmlChar *str2,
                                         intptr_t len);
XMLPUBFUN intptr_t XMLCALL
                xmlStrEqual              (const xmlChar *str1,
                                         const xmlChar *str2);
XMLPUBFUN intptr_t XMLCALL
                xmlStrQEqual             (const xmlChar *pref,
                                         const xmlChar *name,
                                         const xmlChar *str);
XMLPUBFUN intptr_t XMLCALL
                xmlStrlen                (const xmlChar *str);
XMLPUBFUN xmlChar * XMLCALL
                xmlStrcat                (xmlChar *cur,
                                         const xmlChar *add);
XMLPUBFUN xmlChar * XMLCALL
                xmlStrncat               (xmlChar *cur,
                                         const xmlChar *add,
                                         intptr_t len);
XMLPUBFUN xmlChar * XMLCALL
                xmlStrncatNew            (const xmlChar *str1,
                                         const xmlChar *str2,
                                         intptr_t len);
XMLPUBFUN intptr_t XMLCALL
                xmlStrPrintf             (xmlChar *buf,
                                         intptr_t len,
                                         const xmlChar *msg,
                                         ...);
XMLPUBFUN intptr_t XMLCALL
                xmlStrVPrintf                (xmlChar *buf,
                                         intptr_t len,
                                         const xmlChar *msg,
                                         va_list ap);

XMLPUBFUN intptr_t XMLCALL
        xmlGetUTF8Char                   (const unsigned char *utf,
                                         intptr_t *len);
XMLPUBFUN intptr_t XMLCALL
        xmlCheckUTF8                     (const unsigned char *utf);
XMLPUBFUN intptr_t XMLCALL
        xmlUTF8Strsize                   (const xmlChar *utf,
                                         intptr_t len);
XMLPUBFUN xmlChar * XMLCALL
        xmlUTF8Strndup                   (const xmlChar *utf,
                                         intptr_t len);
XMLPUBFUN const xmlChar * XMLCALL
        xmlUTF8Strpos                    (const xmlChar *utf,
                                         intptr_t pos);
XMLPUBFUN intptr_t XMLCALL
        xmlUTF8Strloc                    (const xmlChar *utf,
                                         const xmlChar *utfchar);
XMLPUBFUN xmlChar * XMLCALL
        xmlUTF8Strsub                    (const xmlChar *utf,
                                         intptr_t start,
                                         intptr_t len);
XMLPUBFUN intptr_t XMLCALL
        xmlUTF8Strlen                    (const xmlChar *utf);
XMLPUBFUN intptr_t XMLCALL
        xmlUTF8Size                      (const xmlChar *utf);
XMLPUBFUN intptr_t XMLCALL
        xmlUTF8Charcmp                   (const xmlChar *utf1,
                                         const xmlChar *utf2);

#ifdef __cplusplus
}
#endif
#endif
#line 19 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/tree.h"
#ifdef __cplusplus
extern "C" {
#endif
#line 27
typedef struct _xmlParserInputBuffer xmlParserInputBuffer;
typedef xmlParserInputBuffer *xmlParserInputBufferPtr;

typedef struct _xmlOutputBuffer xmlOutputBuffer;
typedef xmlOutputBuffer *xmlOutputBufferPtr;
#line 34
typedef struct _xmlParserInput xmlParserInput;
typedef xmlParserInput *xmlParserInputPtr;

typedef struct _xmlParserCtxt xmlParserCtxt;
typedef xmlParserCtxt *xmlParserCtxtPtr;

typedef struct _xmlSAXLocator xmlSAXLocator;
typedef xmlSAXLocator *xmlSAXLocatorPtr;

typedef struct _xmlSAXHandler xmlSAXHandler;
typedef xmlSAXHandler *xmlSAXHandlerPtr;
#line 47
typedef struct _xmlEntity xmlEntity;
typedef xmlEntity *xmlEntityPtr;
#line 55
#define BASE_BUFFER_SIZE 4096
#line 63
#define XML_XML_NAMESPACE \
    (const xmlChar *) "http://www.w3.org/XML/1998/namespace"
#line 71
#define XML_XML_ID (const xmlChar *) "xml:id"
#line 82
typedef enum {
    XML_ELEMENT_NODE=		1,
    XML_ATTRIBUTE_NODE=		2,
    XML_TEXT_NODE=		3,
    XML_CDATA_SECTION_NODE=	4,
    XML_ENTITY_REF_NODE=	5,
    XML_ENTITY_NODE=		6,
    XML_PI_NODE=		7,
    XML_COMMENT_NODE=		8,
    XML_DOCUMENT_NODE=		9,
    XML_DOCUMENT_TYPE_NODE=	10,
    XML_DOCUMENT_FRAG_NODE=	11,
    XML_NOTATION_NODE=		12,
    XML_HTML_DOCUMENT_NODE=	13,
    XML_DTD_NODE=		14,
    XML_ELEMENT_DECL=		15,
    XML_ATTRIBUTE_DECL=		16,
    XML_ENTITY_DECL=		17,
    XML_NAMESPACE_DECL=		18,
    XML_XINCLUDE_START=		19,
    XML_XINCLUDE_END=		20
#ifdef LIBXML_DOCB_ENABLED
#line 105
#endif
} xmlElementType;
#line 115
typedef struct _xmlNotation xmlNotation;
typedef xmlNotation *xmlNotationPtr;
struct _xmlNotation {
    const xmlChar               *name;
    const xmlChar               *PublicID;
    const xmlChar               *SystemID;
};
#line 129
typedef enum {
    XML_ATTRIBUTE_CDATA = 1,
    XML_ATTRIBUTE_ID,
    XML_ATTRIBUTE_IDREF	,
    XML_ATTRIBUTE_IDREFS,
    XML_ATTRIBUTE_ENTITY,
    XML_ATTRIBUTE_ENTITIES,
    XML_ATTRIBUTE_NMTOKEN,
    XML_ATTRIBUTE_NMTOKENS,
    XML_ATTRIBUTE_ENUMERATION,
    XML_ATTRIBUTE_NOTATION
} xmlAttributeType;
#line 148
typedef enum {
    XML_ATTRIBUTE_NONE = 1,
    XML_ATTRIBUTE_REQUIRED,
    XML_ATTRIBUTE_IMPLIED,
    XML_ATTRIBUTE_FIXED
} xmlAttributeDefault;
#line 161
typedef struct _xmlEnumeration xmlEnumeration;
typedef xmlEnumeration *xmlEnumerationPtr;
struct _xmlEnumeration {
    struct _xmlEnumeration    *next;
    const xmlChar            *name;
};
#line 174
typedef struct _xmlAttribute xmlAttribute;
typedef xmlAttribute *xmlAttributePtr;
struct _xmlAttribute {
    void           *_private;
    xmlElementType          type;
    const xmlChar          *name;
    struct _xmlNode    *children;
    struct _xmlNode        *last;
    struct _xmlDtd       *parent;
    struct _xmlNode        *next;
    struct _xmlNode        *prev;
    struct _xmlDoc          *doc;

    struct _xmlAttribute  *nexth;
    xmlAttributeType       atype;
    xmlAttributeDefault      def;
    const xmlChar  *defaultValue;
    xmlEnumerationPtr       tree;
    const xmlChar        *prefix;
    const xmlChar          *elem;
};
#line 201
typedef enum {
    XML_ELEMENT_CONTENT_PCDATA = 1,
    XML_ELEMENT_CONTENT_ELEMENT,
    XML_ELEMENT_CONTENT_SEQ,
    XML_ELEMENT_CONTENT_OR
} xmlElementContentType;
#line 213
typedef enum {
    XML_ELEMENT_CONTENT_ONCE = 1,
    XML_ELEMENT_CONTENT_OPT,
    XML_ELEMENT_CONTENT_MULT,
    XML_ELEMENT_CONTENT_PLUS
} xmlElementContentOccur;
#line 227
typedef struct _xmlElementContent xmlElementContent;
typedef xmlElementContent *xmlElementContentPtr;
struct _xmlElementContent {
    xmlElementContentType     type;
    xmlElementContentOccur    ocur;
    const xmlChar             *name;
    struct _xmlElementContent *c1;
    struct _xmlElementContent *c2;
    struct _xmlElementContent *parent;
    const xmlChar             *prefix;
};
#line 245
typedef enum {
    XML_ELEMENT_TYPE_UNDEFINED = 0,
    XML_ELEMENT_TYPE_EMPTY = 1,
    XML_ELEMENT_TYPE_ANY,
    XML_ELEMENT_TYPE_MIXED,
    XML_ELEMENT_TYPE_ELEMENT
} xmlElementTypeVal;
#line 254
#ifdef __cplusplus
}
#endif
// #include <libxml/xmlregexp.h>   (FCollada 3.05B, pasted in place)
#line 11 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/xmlregexp.h"
#ifndef __XML_REGEXP_H__
#define __XML_REGEXP_H__

// #include <libxml/xmlversion.h>   (already above)

#ifdef LIBXML_REGEXP_ENABLED

#ifdef __cplusplus
#line 20
#endif
#line 39
#ifdef __cplusplus
#line 41
#endif
#line 43
#ifdef __cplusplus
#line 45
#endif
#line 102
#ifdef __cplusplus
#line 104
#endif

#endif

#endif
#line 258 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/tree.h"
#ifdef __cplusplus
extern "C" {
#endif
#line 268
typedef struct _xmlElement xmlElement;
typedef xmlElement *xmlElementPtr;
struct _xmlElement {
    void           *_private;
    xmlElementType          type;
    const xmlChar          *name;
    struct _xmlNode    *children;
    struct _xmlNode        *last;
    struct _xmlDtd       *parent;
    struct _xmlNode        *next;
    struct _xmlNode        *prev;
    struct _xmlDoc          *doc;

    xmlElementTypeVal      etype;
    xmlElementContentPtr content;
    xmlAttributePtr   attributes;
    const xmlChar        *prefix;
#ifdef LIBXML_REGEXP_ENABLED
#line 287
#else
    void	      *contModel;
#endif
};
#line 298
#define XML_LOCAL_NAMESPACE XML_NAMESPACE_DECL
typedef xmlElementType xmlNsType;
#line 311
typedef struct _xmlNs xmlNs;
typedef xmlNs *xmlNsPtr;
struct _xmlNs {
    struct _xmlNs  *next;
    xmlNsType      type;
    const xmlChar *href;
    const xmlChar *prefix;
    void           *_private;
};
#line 327
typedef struct _xmlDtd xmlDtd;
typedef xmlDtd *xmlDtdPtr;
struct _xmlDtd {
    void           *_private;
    xmlElementType  type;
    const xmlChar *name;
    struct _xmlNode *children;
    struct _xmlNode *last;
    struct _xmlDoc  *parent;
    struct _xmlNode *next;
    struct _xmlNode *prev;
    struct _xmlDoc  *doc;
#line 341
    void          *notations;
    void          *elements;
    void          *attributes;
    void          *entities;
    const xmlChar *ExternalID;
    const xmlChar *SystemID;
    void          *pentities;
};
#line 355
typedef struct _xmlAttr xmlAttr;
typedef xmlAttr *xmlAttrPtr;
struct _xmlAttr {
    void           *_private;
    xmlElementType   type;
    const xmlChar   *name;
    struct _xmlNode *children;
    struct _xmlNode *last;
    struct _xmlNode *parent;
    struct _xmlAttr *next;
    struct _xmlAttr *prev;
    struct _xmlDoc  *doc;
    xmlNs           *ns;
    xmlAttributeType atype;
    void            *psvi;
};
#line 378
typedef struct _xmlID xmlID;
typedef xmlID *xmlIDPtr;
struct _xmlID {
    struct _xmlID    *next;
    const xmlChar    *value;
    xmlAttrPtr        attr;
    const xmlChar    *name;
    int               lineno;
    struct _xmlDoc   *doc;
};
#line 395
typedef struct _xmlRef xmlRef;
typedef xmlRef *xmlRefPtr;
struct _xmlRef {
    struct _xmlRef    *next;
    const xmlChar     *value;
    xmlAttrPtr        attr;
    const xmlChar    *name;
    int               lineno;
};
#line 412
typedef enum {
    XML_BUFFER_ALLOC_DOUBLEIT,
    XML_BUFFER_ALLOC_EXACT,
    XML_BUFFER_ALLOC_IMMUTABLE
} xmlBufferAllocationScheme;
#line 423
typedef struct _xmlBuffer xmlBuffer;
typedef xmlBuffer *xmlBufferPtr;
struct _xmlBuffer {
    xmlChar *content;
    size_t use;
    size_t size;
    xmlBufferAllocationScheme alloc;
};
#line 437
typedef struct _xmlNode xmlNode;
typedef xmlNode *xmlNodePtr;
struct _xmlNode {
    void           *_private;
    xmlElementType   type;
    const xmlChar   *name;
    struct _xmlNode *children;
    struct _xmlNode *last;
    struct _xmlNode *parent;
    struct _xmlNode *next;
    struct _xmlNode *prev;
    struct _xmlDoc  *doc;
#line 451
    xmlNs           *ns;
    xmlChar         *content;
    struct _xmlAttr *properties;
    xmlNs           *nsDef;
    void            *psvi;
    unsigned short   line;
    unsigned short   extra;
};
#line 465
#define XML_GET_CONTENT(n)					\
    ((n)->type == XML_ELEMENT_NODE ? NULL : (n)->content)
#line 473
#define XML_GET_LINE(n)						\
    (xmlGetLineNo(n))
#line 482
typedef struct _xmlDoc xmlDoc;
typedef xmlDoc *xmlDocPtr;
struct _xmlDoc {
    void           *_private;
    xmlElementType  type;
    char           *name;
    struct _xmlNode *children;
    struct _xmlNode *last;
    struct _xmlNode *parent;
    struct _xmlNode *next;
    struct _xmlNode *prev;
    struct _xmlDoc  *doc;
#line 496
    int             compression;
    int             standalone;
    struct _xmlDtd  *intSubset;
    struct _xmlDtd  *extSubset;
    struct _xmlNs   *oldNs;
    const xmlChar  *version;
    const xmlChar  *encoding;
    void           *ids;
    void           *refs;
    const xmlChar  *URL;
    int             charset;

    struct _xmlDict *dict;
    void           *psvi;
};
#line 518
#ifndef xmlChildrenNode
#define xmlChildrenNode children
#endif
#line 528
#ifndef xmlRootNode
#define xmlRootNode children
#endif
#line 539
#if defined(LIBXML_TREE_ENABLED) || defined(LIBXML_XPATH_ENABLED) || defined(LIBXML_SCHEMAS_ENABLED) || defined(LIBXML_DEBUG_ENABLED)
XMLPUBFUN int XMLCALL
		xmlValidateNCName	(const xmlChar *value,
					 int space);
#endif

#if defined(LIBXML_TREE_ENABLED) || defined(LIBXML_SCHEMAS_ENABLED)
XMLPUBFUN int XMLCALL
		xmlValidateQName	(const xmlChar *value,
					 int space);
XMLPUBFUN int XMLCALL
		xmlValidateName		(const xmlChar *value,
					 int space);
XMLPUBFUN int XMLCALL
		xmlValidateNMToken	(const xmlChar *value,
					 int space);
#endif

XMLPUBFUN xmlChar * XMLCALL
		xmlBuildQName		(const xmlChar *ncname,
					 const xmlChar *prefix,
					 xmlChar *memory,
					 intptr_t len);
XMLPUBFUN xmlChar * XMLCALL
		xmlSplitQName2		(const xmlChar *name,
					 xmlChar **prefix);
XMLPUBFUN const xmlChar * XMLCALL
		xmlSplitQName3		(const xmlChar *name,
					 intptr_t *len);
#line 573
XMLPUBFUN void XMLCALL
		xmlSetBufferAllocationScheme(xmlBufferAllocationScheme scheme);
XMLPUBFUN xmlBufferAllocationScheme XMLCALL
		xmlGetBufferAllocationScheme(void);

XMLPUBFUN xmlBufferPtr XMLCALL
		xmlBufferCreate		(void);
XMLPUBFUN xmlBufferPtr XMLCALL
		xmlBufferCreateSize	(size_t size);
XMLPUBFUN xmlBufferPtr XMLCALL
		xmlBufferCreateStatic	(void *mem,
					 size_t size);
XMLPUBFUN int XMLCALL
		xmlBufferResize		(xmlBufferPtr buf,
					 size_t size);
XMLPUBFUN void XMLCALL
		xmlBufferFree		(xmlBufferPtr buf);
XMLPUBFUN intptr_t XMLCALL
		xmlBufferDump		(FILE *file,
					 xmlBufferPtr buf);
XMLPUBFUN int XMLCALL
		xmlBufferAdd		(xmlBufferPtr buf,
					 const xmlChar *str,
					 intptr_t len);
XMLPUBFUN int XMLCALL
		xmlBufferAddHead	(xmlBufferPtr buf,
					 const xmlChar *str,
					 intptr_t len);
XMLPUBFUN int XMLCALL
		xmlBufferCat		(xmlBufferPtr buf,
					 const xmlChar *str);
XMLPUBFUN int XMLCALL
		xmlBufferCCat		(xmlBufferPtr buf,
					 const char *str);
XMLPUBFUN intptr_t XMLCALL
		xmlBufferShrink		(xmlBufferPtr buf,
					 size_t len);
XMLPUBFUN intptr_t XMLCALL
		xmlBufferGrow		(xmlBufferPtr buf,
					 size_t len);
XMLPUBFUN void XMLCALL
		xmlBufferEmpty		(xmlBufferPtr buf);
XMLPUBFUN const xmlChar* XMLCALL
		xmlBufferContent	(const xmlBufferPtr buf);
XMLPUBFUN void XMLCALL
		xmlBufferSetAllocationScheme(xmlBufferPtr buf,
					 xmlBufferAllocationScheme scheme);
XMLPUBFUN size_t XMLCALL
		xmlBufferLength		(const xmlBufferPtr buf);
#line 626
XMLPUBFUN xmlDtdPtr XMLCALL
		xmlCreateIntSubset	(xmlDocPtr doc,
					 const xmlChar *name,
					 const xmlChar *ExternalID,
					 const xmlChar *SystemID);
XMLPUBFUN xmlDtdPtr XMLCALL
		xmlNewDtd		(xmlDocPtr doc,
					 const xmlChar *name,
					 const xmlChar *ExternalID,
					 const xmlChar *SystemID);
XMLPUBFUN xmlDtdPtr XMLCALL
		xmlGetIntSubset		(xmlDocPtr doc);
XMLPUBFUN void XMLCALL
		xmlFreeDtd		(xmlDtdPtr cur);
#ifdef LIBXML_LEGACY_ENABLED
#line 645
#endif
XMLPUBFUN xmlNsPtr XMLCALL
		xmlNewNs		(xmlNodePtr node,
					 const xmlChar *href,
					 const xmlChar *prefix);
XMLPUBFUN void XMLCALL
		xmlFreeNs		(xmlNsPtr cur);
XMLPUBFUN void XMLCALL
		xmlFreeNsList		(xmlNsPtr cur);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlNewDoc		(const xmlChar *version);
XMLPUBFUN void XMLCALL
		xmlFreeDoc		(xmlDocPtr cur);
XMLPUBFUN xmlAttrPtr XMLCALL
		xmlNewDocProp		(xmlDocPtr doc,
					 const xmlChar *name,
					 const xmlChar *value);
#if defined(LIBXML_TREE_ENABLED) || defined(LIBXML_HTML_ENABLED) || \
    defined(LIBXML_SCHEMAS_ENABLED)
XMLPUBFUN xmlAttrPtr XMLCALL
		xmlNewProp		(xmlNodePtr node,
					 const xmlChar *name,
					 const xmlChar *value);
#endif
XMLPUBFUN xmlAttrPtr XMLCALL
		xmlNewNsProp		(xmlNodePtr node,
					 xmlNsPtr ns,
					 const xmlChar *name,
					 const xmlChar *value);
XMLPUBFUN xmlAttrPtr XMLCALL
		xmlNewNsPropEatName	(xmlNodePtr node,
					 xmlNsPtr ns,
					 xmlChar *name,
					 const xmlChar *value);
XMLPUBFUN void XMLCALL
		xmlFreePropList		(xmlAttrPtr cur);
XMLPUBFUN void XMLCALL
		xmlFreeProp		(xmlAttrPtr cur);
XMLPUBFUN xmlAttrPtr XMLCALL
		xmlCopyProp		(xmlNodePtr target,
					 xmlAttrPtr cur);
XMLPUBFUN xmlAttrPtr XMLCALL
		xmlCopyPropList		(xmlNodePtr target,
					 xmlAttrPtr cur);
#ifdef LIBXML_TREE_ENABLED
XMLPUBFUN xmlDtdPtr XMLCALL
		xmlCopyDtd		(xmlDtdPtr dtd);
#endif
#if defined(LIBXML_TREE_ENABLED) || defined(LIBXML_SCHEMAS_ENABLED)
XMLPUBFUN xmlDocPtr XMLCALL
		xmlCopyDoc		(xmlDocPtr doc,
					 int recursive);
#endif
#line 701
XMLPUBFUN xmlNodePtr XMLCALL
		xmlNewDocNode		(xmlDocPtr doc,
					 xmlNsPtr ns,
					 const xmlChar *name,
					 const xmlChar *content);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlNewDocNodeEatName	(xmlDocPtr doc,
					 xmlNsPtr ns,
					 xmlChar *name,
					 const xmlChar *content);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlNewNode		(xmlNsPtr ns,
					 const xmlChar *name);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlNewNodeEatName	(xmlNsPtr ns,
					 xmlChar *name);
#if defined(LIBXML_TREE_ENABLED) || defined(LIBXML_SCHEMAS_ENABLED)
XMLPUBFUN xmlNodePtr XMLCALL
		xmlNewChild		(xmlNodePtr parent,
					 xmlNsPtr ns,
					 const xmlChar *name,
					 const xmlChar *content);
#endif
XMLPUBFUN xmlNodePtr XMLCALL
		xmlNewDocText		(xmlDocPtr doc,
					 const xmlChar *content);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlNewText		(const xmlChar *content);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlNewDocPI		(xmlDocPtr doc,
					 const xmlChar *name,
					 const xmlChar *content);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlNewPI		(const xmlChar *name,
					 const xmlChar *content);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlNewDocTextLen	(xmlDocPtr doc,
					 const xmlChar *content,
					 intptr_t len);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlNewTextLen		(const xmlChar *content,
					 intptr_t len);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlNewDocComment	(xmlDocPtr doc,
					 const xmlChar *content);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlNewComment		(const xmlChar *content);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlNewCDataBlock	(xmlDocPtr doc,
					 const xmlChar *content,
					 intptr_t len);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlNewCharRef		(xmlDocPtr doc,
					 const xmlChar *name);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlNewReference		(xmlDocPtr doc,
					 const xmlChar *name);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlCopyNode		(const xmlNodePtr node,
					 int recursive);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlDocCopyNode		(const xmlNodePtr node,
					 xmlDocPtr doc,
					 int recursive);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlDocCopyNodeList	(xmlDocPtr doc,
					 const xmlNodePtr node);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlCopyNodeList		(const xmlNodePtr node);
#ifdef LIBXML_TREE_ENABLED
XMLPUBFUN xmlNodePtr XMLCALL
		xmlNewTextChild		(xmlNodePtr parent,
					 xmlNsPtr ns,
					 const xmlChar *name,
					 const xmlChar *content);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlNewDocRawNode	(xmlDocPtr doc,
					 xmlNsPtr ns,
					 const xmlChar *name,
					 const xmlChar *content);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlNewDocFragment	(xmlDocPtr doc);
#endif
#line 788
XMLPUBFUN long XMLCALL
		xmlGetLineNo		(xmlNodePtr node);
#if defined(LIBXML_TREE_ENABLED) || defined(LIBXML_DEBUG_ENABLED)
XMLPUBFUN xmlChar * XMLCALL
		xmlGetNodePath		(xmlNodePtr node);
#endif
XMLPUBFUN xmlNodePtr XMLCALL
		xmlDocGetRootElement	(xmlDocPtr doc);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlGetLastChild		(xmlNodePtr parent);
XMLPUBFUN int XMLCALL
		xmlNodeIsText		(xmlNodePtr node);
XMLPUBFUN int XMLCALL
		xmlIsBlankNode		(xmlNodePtr node);
#line 806
#if defined(LIBXML_TREE_ENABLED) || defined(LIBXML_WRITER_ENABLED)
XMLPUBFUN xmlNodePtr XMLCALL
		xmlDocSetRootElement	(xmlDocPtr doc,
					 xmlNodePtr root);
#endif
#ifdef LIBXML_TREE_ENABLED
XMLPUBFUN void XMLCALL
		xmlNodeSetName		(xmlNodePtr cur,
					 const xmlChar *name);
#endif
XMLPUBFUN xmlNodePtr XMLCALL
		xmlAddChild		(xmlNodePtr parent,
					 xmlNodePtr cur);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlAddChildList		(xmlNodePtr parent,
					 xmlNodePtr cur);
#if defined(LIBXML_TREE_ENABLED) || defined(LIBXML_WRITER_ENABLED)
XMLPUBFUN xmlNodePtr XMLCALL
		xmlReplaceNode		(xmlNodePtr old,
					 xmlNodePtr cur);
#endif
#if defined(LIBXML_TREE_ENABLED) || defined(LIBXML_HTML_ENABLED) || \
    defined(LIBXML_SCHEMAS_ENABLED)
XMLPUBFUN xmlNodePtr XMLCALL
		xmlAddPrevSibling	(xmlNodePtr cur,
					 xmlNodePtr elem);
#endif
XMLPUBFUN xmlNodePtr XMLCALL
		xmlAddSibling		(xmlNodePtr cur,
					 xmlNodePtr elem);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlAddNextSibling	(xmlNodePtr cur,
					 xmlNodePtr elem);
XMLPUBFUN void XMLCALL
		xmlUnlinkNode		(xmlNodePtr cur);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlTextMerge		(xmlNodePtr first,
					 xmlNodePtr second);
XMLPUBFUN int XMLCALL
		xmlTextConcat		(xmlNodePtr node,
					 const xmlChar *content,
					 intptr_t len);
XMLPUBFUN void XMLCALL
		xmlFreeNodeList		(xmlNodePtr cur);
XMLPUBFUN void XMLCALL
		xmlFreeNode		(xmlNodePtr cur);
XMLPUBFUN void XMLCALL
		xmlSetTreeDoc		(xmlNodePtr tree,
					 xmlDocPtr doc);
XMLPUBFUN void XMLCALL
		xmlSetListDoc		(xmlNodePtr list,
					 xmlDocPtr doc);
#line 861
XMLPUBFUN xmlNsPtr XMLCALL
		xmlSearchNs		(xmlDocPtr doc,
					 xmlNodePtr node,
					 const xmlChar *nameSpace);
XMLPUBFUN xmlNsPtr XMLCALL
		xmlSearchNsByHref	(xmlDocPtr doc,
					 xmlNodePtr node,
					 const xmlChar *href);
#if defined(LIBXML_TREE_ENABLED) || defined(LIBXML_XPATH_ENABLED)
XMLPUBFUN xmlNsPtr * XMLCALL
		xmlGetNsList		(xmlDocPtr doc,
					 xmlNodePtr node);
#endif

XMLPUBFUN void XMLCALL
		xmlSetNs		(xmlNodePtr node,
					 xmlNsPtr ns);
XMLPUBFUN xmlNsPtr XMLCALL
		xmlCopyNamespace	(xmlNsPtr cur);
XMLPUBFUN xmlNsPtr XMLCALL
		xmlCopyNamespaceList	(xmlNsPtr cur);
#line 886
#if defined(LIBXML_TREE_ENABLED) || defined(LIBXML_XINCLUDE_ENABLED) || defined(LIBXML_SCHEMAS_ENABLED) || defined(LIBXML_HTML_ENABLED)
XMLPUBFUN xmlAttrPtr XMLCALL
		xmlSetProp		(xmlNodePtr node,
					 const xmlChar *name,
					 const xmlChar *value);
XMLPUBFUN xmlAttrPtr XMLCALL
		xmlSetNsProp		(xmlNodePtr node,
					 xmlNsPtr ns,
					 const xmlChar *name,
					 const xmlChar *value);
#endif
XMLPUBFUN xmlChar * XMLCALL
		xmlGetNoNsProp		(xmlNodePtr node,
					 const xmlChar *name);
XMLPUBFUN xmlChar * XMLCALL
		xmlGetProp		(xmlNodePtr node,
					 const xmlChar *name);
XMLPUBFUN xmlAttrPtr XMLCALL
		xmlHasProp		(xmlNodePtr node,
					 const xmlChar *name);
XMLPUBFUN xmlAttrPtr XMLCALL
		xmlHasNsProp		(xmlNodePtr node,
					 const xmlChar *name,
					 const xmlChar *nameSpace);
XMLPUBFUN xmlChar * XMLCALL
		xmlGetNsProp		(xmlNodePtr node,
					 const xmlChar *name,
					 const xmlChar *nameSpace);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlStringGetNodeList	(xmlDocPtr doc,
					 const xmlChar *value);
XMLPUBFUN xmlNodePtr XMLCALL
		xmlStringLenGetNodeList	(xmlDocPtr doc,
					 const xmlChar *value,
					 intptr_t len);
XMLPUBFUN xmlChar * XMLCALL
		xmlNodeListGetString	(xmlDocPtr doc,
					 xmlNodePtr list,
					 int inLine);
#ifdef LIBXML_TREE_ENABLED
XMLPUBFUN xmlChar * XMLCALL
		xmlNodeListGetRawString	(xmlDocPtr doc,
					 xmlNodePtr list,
					 int inLine);
#endif
XMLPUBFUN void XMLCALL
		xmlNodeSetContent	(xmlNodePtr cur,
					 const xmlChar *content);
#ifdef LIBXML_TREE_ENABLED
XMLPUBFUN void XMLCALL
		xmlNodeSetContentLen	(xmlNodePtr cur,
					 const xmlChar *content,
					 intptr_t len);
#endif
XMLPUBFUN void XMLCALL
		xmlNodeAddContent	(xmlNodePtr cur,
					 const xmlChar *content);
XMLPUBFUN void XMLCALL
		xmlNodeAddContentLen	(xmlNodePtr cur,
					 const xmlChar *content,
					 intptr_t len);
XMLPUBFUN xmlChar * XMLCALL
		xmlNodeGetContent	(xmlNodePtr cur);
XMLPUBFUN int XMLCALL
		xmlNodeBufGetContent	(xmlBufferPtr buffer,
					 xmlNodePtr cur);
XMLPUBFUN xmlChar * XMLCALL
		xmlNodeGetLang		(xmlNodePtr cur);
XMLPUBFUN int XMLCALL
		xmlNodeGetSpacePreserve	(xmlNodePtr cur);
#ifdef LIBXML_TREE_ENABLED
XMLPUBFUN void XMLCALL
		xmlNodeSetLang		(xmlNodePtr cur,
					 const xmlChar *lang);
XMLPUBFUN void XMLCALL
		xmlNodeSetSpacePreserve (xmlNodePtr cur,
					 int val);
#endif
XMLPUBFUN xmlChar * XMLCALL
		xmlNodeGetBase		(xmlDocPtr doc,
					 xmlNodePtr cur);
#if defined(LIBXML_TREE_ENABLED) || defined(LIBXML_XINCLUDE_ENABLED)
XMLPUBFUN void XMLCALL
		xmlNodeSetBase		(xmlNodePtr cur,
					 const xmlChar *uri);
#endif
#line 976
#ifdef LIBXML_TREE_ENABLED
XMLPUBFUN int XMLCALL
		xmlRemoveProp		(xmlAttrPtr cur);
#endif
#if defined(LIBXML_TREE_ENABLED) || defined(LIBXML_SCHEMAS_ENABLED)
XMLPUBFUN int XMLCALL
		xmlUnsetNsProp		(xmlNodePtr node,
					 xmlNsPtr ns,
					 const xmlChar *name);
XMLPUBFUN int XMLCALL
		xmlUnsetProp		(xmlNodePtr node,
					 const xmlChar *name);
#endif
#line 993
XMLPUBFUN void XMLCALL
		xmlBufferWriteCHAR	(xmlBufferPtr buf,
					 const xmlChar *string);
XMLPUBFUN void XMLCALL
		xmlBufferWriteChar	(xmlBufferPtr buf,
					 const char *string);
XMLPUBFUN void XMLCALL
		xmlBufferWriteQuotedString(xmlBufferPtr buf,
					 const xmlChar *string);

#ifdef LIBXML_OUTPUT_ENABLED
XMLPUBFUN void xmlAttrSerializeTxtContent(xmlBufferPtr buf,
					 xmlDocPtr doc,
					 xmlAttrPtr attr,
					 const xmlChar *string);
#endif

#ifdef LIBXML_TREE_ENABLED
#line 1014
XMLPUBFUN int XMLCALL
		xmlReconciliateNs	(xmlDocPtr doc,
					 xmlNodePtr tree);
#endif

#ifdef LIBXML_OUTPUT_ENABLED
#line 1023
XMLPUBFUN void XMLCALL
		xmlDocDumpFormatMemory	(xmlDocPtr cur,
					 xmlChar **mem,
					 intptr_t *size,
					 int format);
XMLPUBFUN void XMLCALL
		xmlDocDumpMemory	(xmlDocPtr cur,
					 xmlChar **mem,
					 intptr_t *size);
XMLPUBFUN void XMLCALL
		xmlDocDumpMemoryEnc	(xmlDocPtr out_doc,
					 xmlChar **doc_txt_ptr,
					 intptr_t* doc_txt_len,
					 const char *txt_encoding);
XMLPUBFUN void XMLCALL
		xmlDocDumpFormatMemoryEnc(xmlDocPtr out_doc,
					 xmlChar **doc_txt_ptr,
					 intptr_t* doc_txt_len,
					 const char *txt_encoding,
					 int format);
XMLPUBFUN intptr_t XMLCALL
		xmlDocFormatDump	(FILE *f,
					 xmlDocPtr cur,
					 int format);
XMLPUBFUN intptr_t XMLCALL
		xmlDocDump		(FILE *f,
					 xmlDocPtr cur);
XMLPUBFUN void XMLCALL
		xmlElemDump		(FILE *f,
					 xmlDocPtr doc,
					 xmlNodePtr cur);
XMLPUBFUN intptr_t XMLCALL
		xmlSaveFile		(const char *filename,
					 xmlDocPtr cur);
XMLPUBFUN intptr_t XMLCALL
		xmlSaveFormatFile	(const char *filename,
					 xmlDocPtr cur,
					 int format);
XMLPUBFUN intptr_t XMLCALL
		xmlNodeDump		(xmlBufferPtr buf,
					 xmlDocPtr doc,
					 xmlNodePtr cur,
					 int level,
					 int format);

XMLPUBFUN intptr_t XMLCALL
		xmlSaveFileTo		(xmlOutputBufferPtr buf,
					 xmlDocPtr cur,
					 const char *encoding);
XMLPUBFUN intptr_t XMLCALL
		xmlSaveFormatFileTo     (xmlOutputBufferPtr buf,
					 xmlDocPtr cur,
				         const char *encoding,
				         int format);
XMLPUBFUN void XMLCALL
		xmlNodeDumpOutput	(xmlOutputBufferPtr buf,
					 xmlDocPtr doc,
					 xmlNodePtr cur,
					 int level,
					 int format,
					 const char *encoding);

XMLPUBFUN intptr_t XMLCALL
		xmlSaveFormatFileEnc    (const char *filename,
					 xmlDocPtr cur,
					 const char *encoding,
					 int format);

XMLPUBFUN intptr_t XMLCALL
		xmlSaveFileEnc		(const char *filename,
					 xmlDocPtr cur,
					 const char *encoding);

#endif
#line 1100
XMLPUBFUN int XMLCALL
		xmlIsXHTML		(const xmlChar *systemID,
					 const xmlChar *publicID);
#line 1107
XMLPUBFUN int XMLCALL
		xmlGetDocCompressMode	(xmlDocPtr doc);
XMLPUBFUN void XMLCALL
		xmlSetDocCompressMode	(xmlDocPtr doc,
					 int mode);
XMLPUBFUN int XMLCALL
		xmlGetCompressMode	(void);
XMLPUBFUN void XMLCALL
		xmlSetCompressMode	(int mode);

#ifdef __cplusplus
}
#endif
#ifndef __XML_PARSER_H__
// #include <libxml/xmlmemory.h>   (FCollada 3.05B, pasted in place)
#line 12 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/xmlmemory.h"
#ifndef __DEBUG_MEMORY_ALLOC__
#define __DEBUG_MEMORY_ALLOC__

#include <stdio.h>
// #include <libxml/xmlversion.h>   (already above)
#line 29
#ifdef DEBUG
#ifndef DEBUG_MEMORY
#line 32
#endif
#endif
#line 41
#ifdef DEBUG_MEMORY_LOCATION
#endif

#ifdef __cplusplus
extern "C" {
#endif
#line 57
typedef void (XMLCALL *xmlFreeFunc)(void *mem);
#line 66
typedef void *(XMLCALL *xmlMallocFunc)(size_t size);
#line 77
typedef void *(XMLCALL *xmlReallocFunc)(void *mem, size_t size);
#line 87
typedef char *(XMLCALL *xmlStrdupFunc)(const char *str);
#line 93
LIBXML_DLL_IMPORT xmlFreeFunc xmlFree;
LIBXML_DLL_IMPORT xmlMallocFunc xmlMalloc;
LIBXML_DLL_IMPORT xmlMallocFunc xmlMallocAtomic;
LIBXML_DLL_IMPORT xmlReallocFunc xmlRealloc;
LIBXML_DLL_IMPORT xmlStrdupFunc xmlMemStrdup;
#line 104
XMLPUBFUN int XMLCALL
	xmlMemSetup	(xmlFreeFunc freeFunc,
			 xmlMallocFunc mallocFunc,
			 xmlReallocFunc reallocFunc,
			 xmlStrdupFunc strdupFunc);
XMLPUBFUN int XMLCALL
	xmlMemGet	(xmlFreeFunc *freeFunc,
			 xmlMallocFunc *mallocFunc,
			 xmlReallocFunc *reallocFunc,
			 xmlStrdupFunc *strdupFunc);
XMLPUBFUN int XMLCALL
	xmlGcMemSetup	(xmlFreeFunc freeFunc,
			 xmlMallocFunc mallocFunc,
			 xmlMallocFunc mallocAtomicFunc,
			 xmlReallocFunc reallocFunc,
			 xmlStrdupFunc strdupFunc);
XMLPUBFUN int XMLCALL
	xmlGcMemGet	(xmlFreeFunc *freeFunc,
			 xmlMallocFunc *mallocFunc,
			 xmlMallocFunc *mallocAtomicFunc,
			 xmlReallocFunc *reallocFunc,
			 xmlStrdupFunc *strdupFunc);
#line 130
XMLPUBFUN int XMLCALL
	xmlInitMemory	(void);
#line 136
XMLPUBFUN void XMLCALL
                xmlCleanupMemory        (void);
#line 141
XMLPUBFUN size_t XMLCALL
	xmlMemUsed	(void);
XMLPUBFUN size_t XMLCALL
	xmlMemBlocks	(void);
XMLPUBFUN void XMLCALL
	xmlMemDisplay	(FILE *fp);
XMLPUBFUN void XMLCALL
	xmlMemShow	(FILE *fp, int nr);
XMLPUBFUN void XMLCALL
	xmlMemoryDump	(void);
XMLPUBFUN void * XMLCALL
	xmlMemMalloc	(size_t size);
XMLPUBFUN void * XMLCALL
	xmlMemRealloc	(void *ptr,size_t size);
XMLPUBFUN void XMLCALL
	xmlMemFree	(void *ptr);
XMLPUBFUN char * XMLCALL
	xmlMemoryStrdup	(const char *str);
XMLPUBFUN void * XMLCALL
	xmlMallocLoc	(size_t size, const char *file, int line);
XMLPUBFUN void * XMLCALL
	xmlReallocLoc	(void *ptr, size_t size, const char *file, int line);
XMLPUBFUN void * XMLCALL
	xmlMallocAtomicLoc (size_t size, const char *file, int line);
XMLPUBFUN char * XMLCALL
	xmlMemStrdupLoc	(const char *str, const char *file, int line);
#line 169
#ifdef DEBUG_MEMORY_LOCATION
#line 209
#endif

#ifdef __cplusplus
}
#endif

#ifndef __XML_GLOBALS_H
#ifndef __XML_THREADS_H__
// #include <libxml/threads.h>   (FCollada 3.05B, pasted in place)
#line 11 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/threads.h"
#ifndef __XML_THREADS_H__
#define __XML_THREADS_H__

// #include <libxml/xmlversion.h>   (already above)

#ifdef __cplusplus
extern "C" {
#endif
#line 23
typedef struct _xmlMutex xmlMutex;
typedef xmlMutex *xmlMutexPtr;
#line 29
typedef struct _xmlRMutex xmlRMutex;
typedef xmlRMutex *xmlRMutexPtr;

#ifdef __cplusplus
}
#endif
// #include <libxml/globals.h>   (FCollada 3.05B, pasted in place)
#line 14 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/globals.h"
#ifndef __XML_GLOBALS_H
#define __XML_GLOBALS_H

// #include <libxml/xmlversion.h>   (already above)
// #include <libxml/parser.h>   (FCollada 3.05B, pasted in place)
#line 10 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/parser.h"
#ifndef __XML_PARSER_H__
#define __XML_PARSER_H__

#include <stdarg.h>

// #include <libxml/xmlversion.h>   (already above)
// #include <libxml/tree.h>   (already above)
// #include <libxml/dict.h>   (FCollada 3.05B, pasted in place)
#line 11 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/dict.h"
#ifndef __XML_DICT_H__
#define __XML_DICT_H__

// #include <libxml/xmlversion.h>   (already above)
// #include <libxml/tree.h>   (already above)

#ifdef __cplusplus
extern "C" {
#endif
#line 24
typedef struct _xmlDict xmlDict;
typedef xmlDict *xmlDictPtr;
#line 30
XMLPUBFUN xmlDictPtr XMLCALL
			xmlDictCreate	(void);
XMLPUBFUN xmlDictPtr XMLCALL
			xmlDictCreateSub(xmlDictPtr sub);
XMLPUBFUN int XMLCALL
			xmlDictReference(xmlDictPtr dict);
XMLPUBFUN void XMLCALL
			xmlDictFree	(xmlDictPtr dict);
#line 42
XMLPUBFUN const xmlChar * XMLCALL
			xmlDictLookup	(xmlDictPtr dict,
		                         const xmlChar *name,
		                         intptr_t len);
XMLPUBFUN const xmlChar * XMLCALL
			xmlDictExists	(xmlDictPtr dict,
		                         const xmlChar *name,
		                         intptr_t len);
XMLPUBFUN const xmlChar * XMLCALL
			xmlDictQLookup	(xmlDictPtr dict,
		                         const xmlChar *prefix,
		                         const xmlChar *name);
XMLPUBFUN int XMLCALL
			xmlDictOwns	(xmlDictPtr dict,
					 const xmlChar *str);
XMLPUBFUN int XMLCALL
			xmlDictSize	(xmlDictPtr dict);
#line 63
XMLPUBFUN void XMLCALL
                        xmlDictCleanup  (void);

#ifdef __cplusplus
}
#endif
#endif
#line 18 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/parser.h"
// #include <libxml/hash.h>   (FCollada 3.05B, pasted in place)
#line 11 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/hash.h"
#ifndef __XML_HASH_H__
#define __XML_HASH_H__

#ifdef __cplusplus
extern "C" {
#endif
#line 21
typedef struct _xmlHashTable xmlHashTable;
typedef xmlHashTable *xmlHashTablePtr;

#ifdef __cplusplus
}
#endif

// #include <libxml/xmlversion.h>   (already above)
// #include <libxml/parser.h>   (already above)
// #include <libxml/dict.h>   (already above)

#ifdef __cplusplus
extern "C" {
#endif
#line 56
#define XML_CAST_FPTR(fptr) fptr
#line 69
typedef void (*xmlHashDeallocator)(void *payload, xmlChar *name);
#line 79
typedef void *(*xmlHashCopier)(void *payload, xmlChar *name);
#line 88
typedef void (*xmlHashScanner)(void *payload, void *data, xmlChar *name);
#line 99
typedef void (*xmlHashScannerFull)(void *payload, void *data,
				   const xmlChar *name, const xmlChar *name2,
				   const xmlChar *name3);
#line 106
XMLPUBFUN xmlHashTablePtr XMLCALL
			xmlHashCreate	(int size);
XMLPUBFUN xmlHashTablePtr XMLCALL
			xmlHashCreateDict(int size,
					 xmlDictPtr dict);
XMLPUBFUN void XMLCALL
			xmlHashFree	(xmlHashTablePtr table,
					 xmlHashDeallocator f);
#line 118
XMLPUBFUN int XMLCALL
			xmlHashAddEntry	(xmlHashTablePtr table,
		                         const xmlChar *name,
		                         void *userdata);
XMLPUBFUN int XMLCALL
			xmlHashUpdateEntry(xmlHashTablePtr table,
		                         const xmlChar *name,
		                         void *userdata,
					 xmlHashDeallocator f);
XMLPUBFUN int XMLCALL
			xmlHashAddEntry2(xmlHashTablePtr table,
		                         const xmlChar *name,
		                         const xmlChar *name2,
		                         void *userdata);
XMLPUBFUN int XMLCALL
			xmlHashUpdateEntry2(xmlHashTablePtr table,
		                         const xmlChar *name,
		                         const xmlChar *name2,
		                         void *userdata,
					 xmlHashDeallocator f);
XMLPUBFUN int XMLCALL
			xmlHashAddEntry3(xmlHashTablePtr table,
		                         const xmlChar *name,
		                         const xmlChar *name2,
		                         const xmlChar *name3,
		                         void *userdata);
XMLPUBFUN int XMLCALL
			xmlHashUpdateEntry3(xmlHashTablePtr table,
		                         const xmlChar *name,
		                         const xmlChar *name2,
		                         const xmlChar *name3,
		                         void *userdata,
					 xmlHashDeallocator f);
#line 155
XMLPUBFUN int XMLCALL
			xmlHashRemoveEntry(xmlHashTablePtr table, const xmlChar *name,
                           xmlHashDeallocator f);
XMLPUBFUN int XMLCALL
			xmlHashRemoveEntry2(xmlHashTablePtr table, const xmlChar *name,
                            const xmlChar *name2, xmlHashDeallocator f);
XMLPUBFUN int  XMLCALL
			xmlHashRemoveEntry3(xmlHashTablePtr table, const xmlChar *name,
                            const xmlChar *name2, const xmlChar *name3,
                            xmlHashDeallocator f);
#line 169
XMLPUBFUN void * XMLCALL
			xmlHashLookup	(xmlHashTablePtr table,
					 const xmlChar *name);
XMLPUBFUN void * XMLCALL
			xmlHashLookup2	(xmlHashTablePtr table,
					 const xmlChar *name,
					 const xmlChar *name2);
XMLPUBFUN void * XMLCALL
			xmlHashLookup3	(xmlHashTablePtr table,
					 const xmlChar *name,
					 const xmlChar *name2,
					 const xmlChar *name3);
XMLPUBFUN void * XMLCALL
			xmlHashQLookup	(xmlHashTablePtr table,
					 const xmlChar *name,
					 const xmlChar *prefix);
XMLPUBFUN void * XMLCALL
			xmlHashQLookup2	(xmlHashTablePtr table,
					 const xmlChar *name,
					 const xmlChar *prefix,
					 const xmlChar *name2,
					 const xmlChar *prefix2);
XMLPUBFUN void * XMLCALL
			xmlHashQLookup3	(xmlHashTablePtr table,
					 const xmlChar *name,
					 const xmlChar *prefix,
					 const xmlChar *name2,
					 const xmlChar *prefix2,
					 const xmlChar *name3,
					 const xmlChar *prefix3);
#line 203
XMLPUBFUN xmlHashTablePtr XMLCALL
			xmlHashCopy	(xmlHashTablePtr table,
					 xmlHashCopier f);
XMLPUBFUN int XMLCALL
			xmlHashSize	(xmlHashTablePtr table);
XMLPUBFUN void XMLCALL
			xmlHashScan	(xmlHashTablePtr table,
					 xmlHashScanner f,
					 void *data);
XMLPUBFUN void XMLCALL
			xmlHashScan3	(xmlHashTablePtr table,
					 const xmlChar *name,
					 const xmlChar *name2,
					 const xmlChar *name3,
					 xmlHashScanner f,
					 void *data);
XMLPUBFUN void XMLCALL
			xmlHashScanFull	(xmlHashTablePtr table,
					 xmlHashScannerFull f,
					 void *data);
XMLPUBFUN void XMLCALL
			xmlHashScanFull3(xmlHashTablePtr table,
					 const xmlChar *name,
					 const xmlChar *name2,
					 const xmlChar *name3,
					 xmlHashScannerFull f,
					 void *data);
#ifdef __cplusplus
}
#endif
#endif
#line 19 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/parser.h"
// #include <libxml/valid.h>   (FCollada 3.05B, pasted in place)
#line 11 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/valid.h"
#ifndef __XML_VALID_H__
#define __XML_VALID_H__

// #include <libxml/xmlversion.h>   (already above)
// #include <libxml/xmlerror.h>   (FCollada 3.05B, pasted in place)
#line 10 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/xmlerror.h"
// #include <libxml/parser.h>   (already above)

#ifndef __XML_ERROR_H__
#define __XML_ERROR_H__

#ifdef __cplusplus
extern "C" {
#endif
#line 24
typedef enum {
    XML_ERR_NONE = 0,
    XML_ERR_WARNING = 1,
    XML_ERR_ERROR = 2,
    XML_ERR_FATAL = 3
} xmlErrorLevel;
#line 36
typedef enum {
    XML_FROM_NONE = 0,
    XML_FROM_PARSER,
    XML_FROM_TREE,
    XML_FROM_NAMESPACE,
    XML_FROM_DTD,
    XML_FROM_HTML,
    XML_FROM_MEMORY,
    XML_FROM_OUTPUT,
    XML_FROM_IO,
    XML_FROM_FTP,
    XML_FROM_HTTP,
    XML_FROM_XINCLUDE,
    XML_FROM_XPATH,
    XML_FROM_XPOINTER,
    XML_FROM_REGEXP,
    XML_FROM_DATATYPE,
    XML_FROM_SCHEMASP,
    XML_FROM_SCHEMASV,
    XML_FROM_RELAXNGP,
    XML_FROM_RELAXNGV,
    XML_FROM_CATALOG,
    XML_FROM_C14N,
    XML_FROM_XSLT,
    XML_FROM_VALID,
    XML_FROM_CHECK,
    XML_FROM_WRITER,
    XML_FROM_MODULE
} xmlErrorDomain;
#line 72
typedef struct _xmlError xmlError;
typedef xmlError *xmlErrorPtr;
struct _xmlError {
    int		domain;
    int		code;
    char       *message;
    xmlErrorLevel level;
    char       *file;
    int		line;
    char       *str1;
    char       *str2;
    char       *str3;
    int		int1;
    intptr_t	int2;
    void       *ctxt;
    void       *node;
};
#line 95
typedef enum {
    XML_ERR_OK = 0,
    XML_ERR_INTERNAL_ERROR,
    XML_ERR_NO_MEMORY,
    XML_ERR_DOCUMENT_START,
    XML_ERR_DOCUMENT_EMPTY,
    XML_ERR_DOCUMENT_END,
    XML_ERR_INVALID_HEX_CHARREF,
    XML_ERR_INVALID_DEC_CHARREF,
    XML_ERR_INVALID_CHARREF,
    XML_ERR_INVALID_CHAR,
    XML_ERR_CHARREF_AT_EOF,
    XML_ERR_CHARREF_IN_PROLOG,
    XML_ERR_CHARREF_IN_EPILOG,
    XML_ERR_CHARREF_IN_DTD,
    XML_ERR_ENTITYREF_AT_EOF,
    XML_ERR_ENTITYREF_IN_PROLOG,
    XML_ERR_ENTITYREF_IN_EPILOG,
    XML_ERR_ENTITYREF_IN_DTD,
    XML_ERR_PEREF_AT_EOF,
    XML_ERR_PEREF_IN_PROLOG,
    XML_ERR_PEREF_IN_EPILOG,
    XML_ERR_PEREF_IN_INT_SUBSET,
    XML_ERR_ENTITYREF_NO_NAME,
    XML_ERR_ENTITYREF_SEMICOL_MISSING,
    XML_ERR_PEREF_NO_NAME,
    XML_ERR_PEREF_SEMICOL_MISSING,
    XML_ERR_UNDECLARED_ENTITY,
    XML_WAR_UNDECLARED_ENTITY,
    XML_ERR_UNPARSED_ENTITY,
    XML_ERR_ENTITY_IS_EXTERNAL,
    XML_ERR_ENTITY_IS_PARAMETER,
    XML_ERR_UNKNOWN_ENCODING,
    XML_ERR_UNSUPPORTED_ENCODING,
    XML_ERR_STRING_NOT_STARTED,
    XML_ERR_STRING_NOT_CLOSED,
    XML_ERR_NS_DECL_ERROR,
    XML_ERR_ENTITY_NOT_STARTED,
    XML_ERR_ENTITY_NOT_FINISHED,
    XML_ERR_LT_IN_ATTRIBUTE,
    XML_ERR_ATTRIBUTE_NOT_STARTED,
    XML_ERR_ATTRIBUTE_NOT_FINISHED,
    XML_ERR_ATTRIBUTE_WITHOUT_VALUE,
    XML_ERR_ATTRIBUTE_REDEFINED,
    XML_ERR_LITERAL_NOT_STARTED,
    XML_ERR_LITERAL_NOT_FINISHED,
    XML_ERR_COMMENT_NOT_FINISHED,
    XML_ERR_PI_NOT_STARTED,
    XML_ERR_PI_NOT_FINISHED,
    XML_ERR_NOTATION_NOT_STARTED,
    XML_ERR_NOTATION_NOT_FINISHED,
    XML_ERR_ATTLIST_NOT_STARTED,
    XML_ERR_ATTLIST_NOT_FINISHED,
    XML_ERR_MIXED_NOT_STARTED,
    XML_ERR_MIXED_NOT_FINISHED,
    XML_ERR_ELEMCONTENT_NOT_STARTED,
    XML_ERR_ELEMCONTENT_NOT_FINISHED,
    XML_ERR_XMLDECL_NOT_STARTED,
    XML_ERR_XMLDECL_NOT_FINISHED,
    XML_ERR_CONDSEC_NOT_STARTED,
    XML_ERR_CONDSEC_NOT_FINISHED,
    XML_ERR_EXT_SUBSET_NOT_FINISHED,
    XML_ERR_DOCTYPE_NOT_FINISHED,
    XML_ERR_MISPLACED_CDATA_END,
    XML_ERR_CDATA_NOT_FINISHED,
    XML_ERR_RESERVED_XML_NAME,
    XML_ERR_SPACE_REQUIRED,
    XML_ERR_SEPARATOR_REQUIRED,
    XML_ERR_NMTOKEN_REQUIRED,
    XML_ERR_NAME_REQUIRED,
    XML_ERR_PCDATA_REQUIRED,
    XML_ERR_URI_REQUIRED,
    XML_ERR_PUBID_REQUIRED,
    XML_ERR_LT_REQUIRED,
    XML_ERR_GT_REQUIRED,
    XML_ERR_LTSLASH_REQUIRED,
    XML_ERR_EQUAL_REQUIRED,
    XML_ERR_TAG_NAME_MISMATCH,
    XML_ERR_TAG_NOT_FINISHED,
    XML_ERR_STANDALONE_VALUE,
    XML_ERR_ENCODING_NAME,
    XML_ERR_HYPHEN_IN_COMMENT,
    XML_ERR_INVALID_ENCODING,
    XML_ERR_EXT_ENTITY_STANDALONE,
    XML_ERR_CONDSEC_INVALID,
    XML_ERR_VALUE_REQUIRED,
    XML_ERR_NOT_WELL_BALANCED,
    XML_ERR_EXTRA_CONTENT,
    XML_ERR_ENTITY_CHAR_ERROR,
    XML_ERR_ENTITY_PE_INTERNAL,
    XML_ERR_ENTITY_LOOP,
    XML_ERR_ENTITY_BOUNDARY,
    XML_ERR_INVALID_URI,
    XML_ERR_URI_FRAGMENT,
    XML_WAR_CATALOG_PI,
    XML_ERR_NO_DTD,
    XML_ERR_CONDSEC_INVALID_KEYWORD,
    XML_ERR_VERSION_MISSING,
    XML_WAR_UNKNOWN_VERSION,
    XML_WAR_LANG_VALUE,
    XML_WAR_NS_URI,
    XML_WAR_NS_URI_RELATIVE,
    XML_ERR_MISSING_ENCODING,
    XML_NS_ERR_XML_NAMESPACE = 200,
    XML_NS_ERR_UNDEFINED_NAMESPACE,
    XML_NS_ERR_QNAME,
    XML_NS_ERR_ATTRIBUTE_REDEFINED,
    XML_DTD_ATTRIBUTE_DEFAULT = 500,
    XML_DTD_ATTRIBUTE_REDEFINED,
    XML_DTD_ATTRIBUTE_VALUE,
    XML_DTD_CONTENT_ERROR,
    XML_DTD_CONTENT_MODEL,
    XML_DTD_CONTENT_NOT_DETERMINIST,
    XML_DTD_DIFFERENT_PREFIX,
    XML_DTD_ELEM_DEFAULT_NAMESPACE,
    XML_DTD_ELEM_NAMESPACE,
    XML_DTD_ELEM_REDEFINED,
    XML_DTD_EMPTY_NOTATION,
    XML_DTD_ENTITY_TYPE,
    XML_DTD_ID_FIXED,
    XML_DTD_ID_REDEFINED,
    XML_DTD_ID_SUBSET,
    XML_DTD_INVALID_CHILD,
    XML_DTD_INVALID_DEFAULT,
    XML_DTD_LOAD_ERROR,
    XML_DTD_MISSING_ATTRIBUTE,
    XML_DTD_MIXED_CORRUPT,
    XML_DTD_MULTIPLE_ID,
    XML_DTD_NO_DOC,
    XML_DTD_NO_DTD,
    XML_DTD_NO_ELEM_NAME,
    XML_DTD_NO_PREFIX,
    XML_DTD_NO_ROOT,
    XML_DTD_NOTATION_REDEFINED,
    XML_DTD_NOTATION_VALUE,
    XML_DTD_NOT_EMPTY,
    XML_DTD_NOT_PCDATA,
    XML_DTD_NOT_STANDALONE,
    XML_DTD_ROOT_NAME,
    XML_DTD_STANDALONE_WHITE_SPACE,
    XML_DTD_UNKNOWN_ATTRIBUTE,
    XML_DTD_UNKNOWN_ELEM,
    XML_DTD_UNKNOWN_ENTITY,
    XML_DTD_UNKNOWN_ID,
    XML_DTD_UNKNOWN_NOTATION,
    XML_DTD_STANDALONE_DEFAULTED,
    XML_DTD_XMLID_VALUE,
    XML_DTD_XMLID_TYPE,
    XML_HTML_STRUCURE_ERROR = 800,
    XML_HTML_UNKNOWN_TAG,
    XML_RNGP_ANYNAME_ATTR_ANCESTOR = 1000,
    XML_RNGP_ATTR_CONFLICT,
    XML_RNGP_ATTRIBUTE_CHILDREN,
    XML_RNGP_ATTRIBUTE_CONTENT,
    XML_RNGP_ATTRIBUTE_EMPTY,
    XML_RNGP_ATTRIBUTE_NOOP,
    XML_RNGP_CHOICE_CONTENT,
    XML_RNGP_CHOICE_EMPTY,
    XML_RNGP_CREATE_FAILURE,
    XML_RNGP_DATA_CONTENT,
    XML_RNGP_DEF_CHOICE_AND_INTERLEAVE,
    XML_RNGP_DEFINE_CREATE_FAILED,
    XML_RNGP_DEFINE_EMPTY,
    XML_RNGP_DEFINE_MISSING,
    XML_RNGP_DEFINE_NAME_MISSING,
    XML_RNGP_ELEM_CONTENT_EMPTY,
    XML_RNGP_ELEM_CONTENT_ERROR,
    XML_RNGP_ELEMENT_EMPTY,
    XML_RNGP_ELEMENT_CONTENT,
    XML_RNGP_ELEMENT_NAME,
    XML_RNGP_ELEMENT_NO_CONTENT,
    XML_RNGP_ELEM_TEXT_CONFLICT,
    XML_RNGP_EMPTY,
    XML_RNGP_EMPTY_CONSTRUCT,
    XML_RNGP_EMPTY_CONTENT,
    XML_RNGP_EMPTY_NOT_EMPTY,
    XML_RNGP_ERROR_TYPE_LIB,
    XML_RNGP_EXCEPT_EMPTY,
    XML_RNGP_EXCEPT_MISSING,
    XML_RNGP_EXCEPT_MULTIPLE,
    XML_RNGP_EXCEPT_NO_CONTENT,
    XML_RNGP_EXTERNALREF_EMTPY,
    XML_RNGP_EXTERNAL_REF_FAILURE,
    XML_RNGP_EXTERNALREF_RECURSE,
    XML_RNGP_FORBIDDEN_ATTRIBUTE,
    XML_RNGP_FOREIGN_ELEMENT,
    XML_RNGP_GRAMMAR_CONTENT,
    XML_RNGP_GRAMMAR_EMPTY,
    XML_RNGP_GRAMMAR_MISSING,
    XML_RNGP_GRAMMAR_NO_START,
    XML_RNGP_GROUP_ATTR_CONFLICT,
    XML_RNGP_HREF_ERROR,
    XML_RNGP_INCLUDE_EMPTY,
    XML_RNGP_INCLUDE_FAILURE,
    XML_RNGP_INCLUDE_RECURSE,
    XML_RNGP_INTERLEAVE_ADD,
    XML_RNGP_INTERLEAVE_CREATE_FAILED,
    XML_RNGP_INTERLEAVE_EMPTY,
    XML_RNGP_INTERLEAVE_NO_CONTENT,
    XML_RNGP_INVALID_DEFINE_NAME,
    XML_RNGP_INVALID_URI,
    XML_RNGP_INVALID_VALUE,
    XML_RNGP_MISSING_HREF,
    XML_RNGP_NAME_MISSING,
    XML_RNGP_NEED_COMBINE,
    XML_RNGP_NOTALLOWED_NOT_EMPTY,
    XML_RNGP_NSNAME_ATTR_ANCESTOR,
    XML_RNGP_NSNAME_NO_NS,
    XML_RNGP_PARAM_FORBIDDEN,
    XML_RNGP_PARAM_NAME_MISSING,
    XML_RNGP_PARENTREF_CREATE_FAILED,
    XML_RNGP_PARENTREF_NAME_INVALID,
    XML_RNGP_PARENTREF_NO_NAME,
    XML_RNGP_PARENTREF_NO_PARENT,
    XML_RNGP_PARENTREF_NOT_EMPTY,
    XML_RNGP_PARSE_ERROR,
    XML_RNGP_PAT_ANYNAME_EXCEPT_ANYNAME,
    XML_RNGP_PAT_ATTR_ATTR,
    XML_RNGP_PAT_ATTR_ELEM,
    XML_RNGP_PAT_DATA_EXCEPT_ATTR,
    XML_RNGP_PAT_DATA_EXCEPT_ELEM,
    XML_RNGP_PAT_DATA_EXCEPT_EMPTY,
    XML_RNGP_PAT_DATA_EXCEPT_GROUP,
    XML_RNGP_PAT_DATA_EXCEPT_INTERLEAVE,
    XML_RNGP_PAT_DATA_EXCEPT_LIST,
    XML_RNGP_PAT_DATA_EXCEPT_ONEMORE,
    XML_RNGP_PAT_DATA_EXCEPT_REF,
    XML_RNGP_PAT_DATA_EXCEPT_TEXT,
    XML_RNGP_PAT_LIST_ATTR,
    XML_RNGP_PAT_LIST_ELEM,
    XML_RNGP_PAT_LIST_INTERLEAVE,
    XML_RNGP_PAT_LIST_LIST,
    XML_RNGP_PAT_LIST_REF,
    XML_RNGP_PAT_LIST_TEXT,
    XML_RNGP_PAT_NSNAME_EXCEPT_ANYNAME,
    XML_RNGP_PAT_NSNAME_EXCEPT_NSNAME,
    XML_RNGP_PAT_ONEMORE_GROUP_ATTR,
    XML_RNGP_PAT_ONEMORE_INTERLEAVE_ATTR,
    XML_RNGP_PAT_START_ATTR,
    XML_RNGP_PAT_START_DATA,
    XML_RNGP_PAT_START_EMPTY,
    XML_RNGP_PAT_START_GROUP,
    XML_RNGP_PAT_START_INTERLEAVE,
    XML_RNGP_PAT_START_LIST,
    XML_RNGP_PAT_START_ONEMORE,
    XML_RNGP_PAT_START_TEXT,
    XML_RNGP_PAT_START_VALUE,
    XML_RNGP_PREFIX_UNDEFINED,
    XML_RNGP_REF_CREATE_FAILED,
    XML_RNGP_REF_CYCLE,
    XML_RNGP_REF_NAME_INVALID,
    XML_RNGP_REF_NO_DEF,
    XML_RNGP_REF_NO_NAME,
    XML_RNGP_REF_NOT_EMPTY,
    XML_RNGP_START_CHOICE_AND_INTERLEAVE,
    XML_RNGP_START_CONTENT,
    XML_RNGP_START_EMPTY,
    XML_RNGP_START_MISSING,
    XML_RNGP_TEXT_EXPECTED,
    XML_RNGP_TEXT_HAS_CHILD,
    XML_RNGP_TYPE_MISSING,
    XML_RNGP_TYPE_NOT_FOUND,
    XML_RNGP_TYPE_VALUE,
    XML_RNGP_UNKNOWN_ATTRIBUTE,
    XML_RNGP_UNKNOWN_COMBINE,
    XML_RNGP_UNKNOWN_CONSTRUCT,
    XML_RNGP_UNKNOWN_TYPE_LIB,
    XML_RNGP_URI_FRAGMENT,
    XML_RNGP_URI_NOT_ABSOLUTE,
    XML_RNGP_VALUE_EMPTY,
    XML_RNGP_VALUE_NO_CONTENT,
    XML_RNGP_XMLNS_NAME,
    XML_RNGP_XML_NS,
    XML_XPATH_EXPRESSION_OK = 1200,
    XML_XPATH_NUMBER_ERROR,
    XML_XPATH_UNFINISHED_LITERAL_ERROR,
    XML_XPATH_START_LITERAL_ERROR,
    XML_XPATH_VARIABLE_REF_ERROR,
    XML_XPATH_UNDEF_VARIABLE_ERROR,
    XML_XPATH_INVALID_PREDICATE_ERROR,
    XML_XPATH_EXPR_ERROR,
    XML_XPATH_UNCLOSED_ERROR,
    XML_XPATH_UNKNOWN_FUNC_ERROR,
    XML_XPATH_INVALID_OPERAND,
    XML_XPATH_INVALID_TYPE,
    XML_XPATH_INVALID_ARITY,
    XML_XPATH_INVALID_CTXT_SIZE,
    XML_XPATH_INVALID_CTXT_POSITION,
    XML_XPATH_MEMORY_ERROR,
    XML_XPTR_SYNTAX_ERROR,
    XML_XPTR_RESOURCE_ERROR,
    XML_XPTR_SUB_RESOURCE_ERROR,
    XML_XPATH_UNDEF_PREFIX_ERROR,
    XML_XPATH_ENCODING_ERROR,
    XML_XPATH_INVALID_CHAR_ERROR,
    XML_TREE_INVALID_HEX = 1300,
    XML_TREE_INVALID_DEC,
    XML_TREE_UNTERMINATED_ENTITY,
    XML_SAVE_NOT_UTF8 = 1400,
    XML_SAVE_CHAR_INVALID,
    XML_SAVE_NO_DOCTYPE,
    XML_SAVE_UNKNOWN_ENCODING,
    XML_REGEXP_COMPILE_ERROR = 1450,
    XML_IO_UNKNOWN = 1500,
    XML_IO_EACCES,
    XML_IO_EAGAIN,
    XML_IO_EBADF,
    XML_IO_EBADMSG,
    XML_IO_EBUSY,
    XML_IO_ECANCELED,
    XML_IO_ECHILD,
    XML_IO_EDEADLK,
    XML_IO_EDOM,
    XML_IO_EEXIST,
    XML_IO_EFAULT,
    XML_IO_EFBIG,
    XML_IO_EINPROGRESS,
    XML_IO_EINTR,
    XML_IO_EINVAL,
    XML_IO_EIO,
    XML_IO_EISDIR,
    XML_IO_EMFILE,
    XML_IO_EMLINK,
    XML_IO_EMSGSIZE,
    XML_IO_ENAMETOOLONG,
    XML_IO_ENFILE,
    XML_IO_ENODEV,
    XML_IO_ENOENT,
    XML_IO_ENOEXEC,
    XML_IO_ENOLCK,
    XML_IO_ENOMEM,
    XML_IO_ENOSPC,
    XML_IO_ENOSYS,
    XML_IO_ENOTDIR,
    XML_IO_ENOTEMPTY,
    XML_IO_ENOTSUP,
    XML_IO_ENOTTY,
    XML_IO_ENXIO,
    XML_IO_EPERM,
    XML_IO_EPIPE,
    XML_IO_ERANGE,
    XML_IO_EROFS,
    XML_IO_ESPIPE,
    XML_IO_ESRCH,
    XML_IO_ETIMEDOUT,
    XML_IO_EXDEV,
    XML_IO_NETWORK_ATTEMPT,
    XML_IO_ENCODER,
    XML_IO_FLUSH,
    XML_IO_WRITE,
    XML_IO_NO_INPUT,
    XML_IO_BUFFER_FULL,
    XML_IO_LOAD_ERROR,
    XML_IO_ENOTSOCK,
    XML_IO_EISCONN,
    XML_IO_ECONNREFUSED,
    XML_IO_ENETUNREACH,
    XML_IO_EADDRINUSE,
    XML_IO_EALREADY,
    XML_IO_EAFNOSUPPORT,
    XML_XINCLUDE_RECURSION=1600,
    XML_XINCLUDE_PARSE_VALUE,
    XML_XINCLUDE_ENTITY_DEF_MISMATCH,
    XML_XINCLUDE_NO_HREF,
    XML_XINCLUDE_NO_FALLBACK,
    XML_XINCLUDE_HREF_URI,
    XML_XINCLUDE_TEXT_FRAGMENT,
    XML_XINCLUDE_TEXT_DOCUMENT,
    XML_XINCLUDE_INVALID_CHAR,
    XML_XINCLUDE_BUILD_FAILED,
    XML_XINCLUDE_UNKNOWN_ENCODING,
    XML_XINCLUDE_MULTIPLE_ROOT,
    XML_XINCLUDE_XPTR_FAILED,
    XML_XINCLUDE_XPTR_RESULT,
    XML_XINCLUDE_INCLUDE_IN_INCLUDE,
    XML_XINCLUDE_FALLBACKS_IN_INCLUDE,
    XML_XINCLUDE_FALLBACK_NOT_IN_INCLUDE,
    XML_XINCLUDE_DEPRECATED_NS,
    XML_XINCLUDE_FRAGMENT_ID,
    XML_CATALOG_MISSING_ATTR = 1650,
    XML_CATALOG_ENTRY_BROKEN,
    XML_CATALOG_PREFER_VALUE,
    XML_CATALOG_NOT_CATALOG,
    XML_CATALOG_RECURSION,
    XML_SCHEMAP_PREFIX_UNDEFINED = 1700,
    XML_SCHEMAP_ATTRFORMDEFAULT_VALUE,
    XML_SCHEMAP_ATTRGRP_NONAME_NOREF,
    XML_SCHEMAP_ATTR_NONAME_NOREF,
    XML_SCHEMAP_COMPLEXTYPE_NONAME_NOREF,
    XML_SCHEMAP_ELEMFORMDEFAULT_VALUE,
    XML_SCHEMAP_ELEM_NONAME_NOREF,
    XML_SCHEMAP_EXTENSION_NO_BASE,
    XML_SCHEMAP_FACET_NO_VALUE,
    XML_SCHEMAP_FAILED_BUILD_IMPORT,
    XML_SCHEMAP_GROUP_NONAME_NOREF,
    XML_SCHEMAP_IMPORT_NAMESPACE_NOT_URI,
    XML_SCHEMAP_IMPORT_REDEFINE_NSNAME,
    XML_SCHEMAP_IMPORT_SCHEMA_NOT_URI,
    XML_SCHEMAP_INVALID_BOOLEAN,
    XML_SCHEMAP_INVALID_ENUM,
    XML_SCHEMAP_INVALID_FACET,
    XML_SCHEMAP_INVALID_FACET_VALUE,
    XML_SCHEMAP_INVALID_MAXOCCURS,
    XML_SCHEMAP_INVALID_MINOCCURS,
    XML_SCHEMAP_INVALID_REF_AND_SUBTYPE,
    XML_SCHEMAP_INVALID_WHITE_SPACE,
    XML_SCHEMAP_NOATTR_NOREF,
    XML_SCHEMAP_NOTATION_NO_NAME,
    XML_SCHEMAP_NOTYPE_NOREF,
    XML_SCHEMAP_REF_AND_SUBTYPE,
    XML_SCHEMAP_RESTRICTION_NONAME_NOREF,
    XML_SCHEMAP_SIMPLETYPE_NONAME,
    XML_SCHEMAP_TYPE_AND_SUBTYPE,
    XML_SCHEMAP_UNKNOWN_ALL_CHILD,
    XML_SCHEMAP_UNKNOWN_ANYATTRIBUTE_CHILD,
    XML_SCHEMAP_UNKNOWN_ATTR_CHILD,
    XML_SCHEMAP_UNKNOWN_ATTRGRP_CHILD,
    XML_SCHEMAP_UNKNOWN_ATTRIBUTE_GROUP,
    XML_SCHEMAP_UNKNOWN_BASE_TYPE,
    XML_SCHEMAP_UNKNOWN_CHOICE_CHILD,
    XML_SCHEMAP_UNKNOWN_COMPLEXCONTENT_CHILD,
    XML_SCHEMAP_UNKNOWN_COMPLEXTYPE_CHILD,
    XML_SCHEMAP_UNKNOWN_ELEM_CHILD,
    XML_SCHEMAP_UNKNOWN_EXTENSION_CHILD,
    XML_SCHEMAP_UNKNOWN_FACET_CHILD,
    XML_SCHEMAP_UNKNOWN_FACET_TYPE,
    XML_SCHEMAP_UNKNOWN_GROUP_CHILD,
    XML_SCHEMAP_UNKNOWN_IMPORT_CHILD,
    XML_SCHEMAP_UNKNOWN_LIST_CHILD,
    XML_SCHEMAP_UNKNOWN_NOTATION_CHILD,
    XML_SCHEMAP_UNKNOWN_PROCESSCONTENT_CHILD,
    XML_SCHEMAP_UNKNOWN_REF,
    XML_SCHEMAP_UNKNOWN_RESTRICTION_CHILD,
    XML_SCHEMAP_UNKNOWN_SCHEMAS_CHILD,
    XML_SCHEMAP_UNKNOWN_SEQUENCE_CHILD,
    XML_SCHEMAP_UNKNOWN_SIMPLECONTENT_CHILD,
    XML_SCHEMAP_UNKNOWN_SIMPLETYPE_CHILD,
    XML_SCHEMAP_UNKNOWN_TYPE,
    XML_SCHEMAP_UNKNOWN_UNION_CHILD,
    XML_SCHEMAP_ELEM_DEFAULT_FIXED,
    XML_SCHEMAP_REGEXP_INVALID,
    XML_SCHEMAP_FAILED_LOAD,
    XML_SCHEMAP_NOTHING_TO_PARSE,
    XML_SCHEMAP_NOROOT,
    XML_SCHEMAP_REDEFINED_GROUP,
    XML_SCHEMAP_REDEFINED_TYPE,
    XML_SCHEMAP_REDEFINED_ELEMENT,
    XML_SCHEMAP_REDEFINED_ATTRGROUP,
    XML_SCHEMAP_REDEFINED_ATTR,
    XML_SCHEMAP_REDEFINED_NOTATION,
    XML_SCHEMAP_FAILED_PARSE,
    XML_SCHEMAP_UNKNOWN_PREFIX,
    XML_SCHEMAP_DEF_AND_PREFIX,
    XML_SCHEMAP_UNKNOWN_INCLUDE_CHILD,
    XML_SCHEMAP_INCLUDE_SCHEMA_NOT_URI,
    XML_SCHEMAP_INCLUDE_SCHEMA_NO_URI,
    XML_SCHEMAP_NOT_SCHEMA,
    XML_SCHEMAP_UNKNOWN_MEMBER_TYPE,
    XML_SCHEMAP_INVALID_ATTR_USE,
    XML_SCHEMAP_RECURSIVE,
    XML_SCHEMAP_SUPERNUMEROUS_LIST_ITEM_TYPE,
    XML_SCHEMAP_INVALID_ATTR_COMBINATION,
    XML_SCHEMAP_INVALID_ATTR_INLINE_COMBINATION,
    XML_SCHEMAP_MISSING_SIMPLETYPE_CHILD,
    XML_SCHEMAP_INVALID_ATTR_NAME,
    XML_SCHEMAP_REF_AND_CONTENT,
    XML_SCHEMAP_CT_PROPS_CORRECT_1,
    XML_SCHEMAP_CT_PROPS_CORRECT_2,
    XML_SCHEMAP_CT_PROPS_CORRECT_3,
    XML_SCHEMAP_CT_PROPS_CORRECT_4,
    XML_SCHEMAP_CT_PROPS_CORRECT_5,
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_1,
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_2_1_1,
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_2_1_2,
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_2_2,
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_3,
    XML_SCHEMAP_WILDCARD_INVALID_NS_MEMBER,
    XML_SCHEMAP_INTERSECTION_NOT_EXPRESSIBLE,
    XML_SCHEMAP_UNION_NOT_EXPRESSIBLE,
    XML_SCHEMAP_SRC_IMPORT_3_1,
    XML_SCHEMAP_SRC_IMPORT_3_2,
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_4_1,
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_4_2,
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_4_3,
    XML_SCHEMAP_COS_CT_EXTENDS_1_3,
    XML_SCHEMAV_NOROOT = 1801,
    XML_SCHEMAV_UNDECLAREDELEM,
    XML_SCHEMAV_NOTTOPLEVEL,
    XML_SCHEMAV_MISSING,
    XML_SCHEMAV_WRONGELEM,
    XML_SCHEMAV_NOTYPE,
    XML_SCHEMAV_NOROLLBACK,
    XML_SCHEMAV_ISABSTRACT,
    XML_SCHEMAV_NOTEMPTY,
    XML_SCHEMAV_ELEMCONT,
    XML_SCHEMAV_HAVEDEFAULT,
    XML_SCHEMAV_NOTNILLABLE,
    XML_SCHEMAV_EXTRACONTENT,
    XML_SCHEMAV_INVALIDATTR,
    XML_SCHEMAV_INVALIDELEM,
    XML_SCHEMAV_NOTDETERMINIST,
    XML_SCHEMAV_CONSTRUCT,
    XML_SCHEMAV_INTERNAL,
    XML_SCHEMAV_NOTSIMPLE,
    XML_SCHEMAV_ATTRUNKNOWN,
    XML_SCHEMAV_ATTRINVALID,
    XML_SCHEMAV_VALUE,
    XML_SCHEMAV_FACET,
    XML_SCHEMAV_CVC_DATATYPE_VALID_1_2_1,
    XML_SCHEMAV_CVC_DATATYPE_VALID_1_2_2,
    XML_SCHEMAV_CVC_DATATYPE_VALID_1_2_3,
    XML_SCHEMAV_CVC_TYPE_3_1_1,
    XML_SCHEMAV_CVC_TYPE_3_1_2,
    XML_SCHEMAV_CVC_FACET_VALID,
    XML_SCHEMAV_CVC_LENGTH_VALID,
    XML_SCHEMAV_CVC_MINLENGTH_VALID,
    XML_SCHEMAV_CVC_MAXLENGTH_VALID,
    XML_SCHEMAV_CVC_MININCLUSIVE_VALID,
    XML_SCHEMAV_CVC_MAXINCLUSIVE_VALID,
    XML_SCHEMAV_CVC_MINEXCLUSIVE_VALID,
    XML_SCHEMAV_CVC_MAXEXCLUSIVE_VALID,
    XML_SCHEMAV_CVC_TOTALDIGITS_VALID,
    XML_SCHEMAV_CVC_FRACTIONDIGITS_VALID,
    XML_SCHEMAV_CVC_PATTERN_VALID,
    XML_SCHEMAV_CVC_ENUMERATION_VALID,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_2_1,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_2_2,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_2_3,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_2_4,
    XML_SCHEMAV_CVC_ELT_1,
    XML_SCHEMAV_CVC_ELT_2,
    XML_SCHEMAV_CVC_ELT_3_1,
    XML_SCHEMAV_CVC_ELT_3_2_1,
    XML_SCHEMAV_CVC_ELT_3_2_2,
    XML_SCHEMAV_CVC_ELT_4_1,
    XML_SCHEMAV_CVC_ELT_4_2,
    XML_SCHEMAV_CVC_ELT_4_3,
    XML_SCHEMAV_CVC_ELT_5_1_1,
    XML_SCHEMAV_CVC_ELT_5_1_2,
    XML_SCHEMAV_CVC_ELT_5_2_1,
    XML_SCHEMAV_CVC_ELT_5_2_2_1,
    XML_SCHEMAV_CVC_ELT_5_2_2_2_1,
    XML_SCHEMAV_CVC_ELT_5_2_2_2_2,
    XML_SCHEMAV_CVC_ELT_6,
    XML_SCHEMAV_CVC_ELT_7,
    XML_SCHEMAV_CVC_ATTRIBUTE_1,
    XML_SCHEMAV_CVC_ATTRIBUTE_2,
    XML_SCHEMAV_CVC_ATTRIBUTE_3,
    XML_SCHEMAV_CVC_ATTRIBUTE_4,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_3_1,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_3_2_1,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_3_2_2,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_4,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_5_1,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_5_2,
    XML_SCHEMAV_ELEMENT_CONTENT,
    XML_SCHEMAV_DOCUMENT_ELEMENT_MISSING,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_1,
    XML_SCHEMAV_CVC_AU,
    XML_SCHEMAV_CVC_TYPE_1,
    XML_SCHEMAV_CVC_TYPE_2,
    XML_SCHEMAV_CVC_IDC,
    XML_SCHEMAV_CVC_WILDCARD,
    XML_XPTR_UNKNOWN_SCHEME = 1900,
    XML_XPTR_CHILDSEQ_START,
    XML_XPTR_EVAL_FAILED,
    XML_XPTR_EXTRA_OBJECTS,
    XML_C14N_CREATE_CTXT = 1950,
    XML_C14N_REQUIRES_UTF8,
    XML_C14N_CREATE_STACK,
    XML_C14N_INVALID_NODE,
    XML_C14N_UNKNOW_NODE,
    XML_C14N_RELATIVE_NAMESPACE,
    XML_FTP_PASV_ANSWER = 2000,
    XML_FTP_EPSV_ANSWER,
    XML_FTP_ACCNT,
    XML_FTP_URL_SYNTAX,
    XML_HTTP_URL_SYNTAX = 2020,
    XML_HTTP_USE_IP,
    XML_HTTP_UNKNOWN_HOST,
    XML_SCHEMAP_SRC_SIMPLE_TYPE_1 = 3000,
    XML_SCHEMAP_SRC_SIMPLE_TYPE_2,
    XML_SCHEMAP_SRC_SIMPLE_TYPE_3,
    XML_SCHEMAP_SRC_SIMPLE_TYPE_4,
    XML_SCHEMAP_SRC_RESOLVE,
    XML_SCHEMAP_SRC_RESTRICTION_BASE_OR_SIMPLETYPE,
    XML_SCHEMAP_SRC_LIST_ITEMTYPE_OR_SIMPLETYPE,
    XML_SCHEMAP_SRC_UNION_MEMBERTYPES_OR_SIMPLETYPES,
    XML_SCHEMAP_ST_PROPS_CORRECT_1,
    XML_SCHEMAP_ST_PROPS_CORRECT_2,
    XML_SCHEMAP_ST_PROPS_CORRECT_3,
    XML_SCHEMAP_COS_ST_RESTRICTS_1_1,
    XML_SCHEMAP_COS_ST_RESTRICTS_1_2,
    XML_SCHEMAP_COS_ST_RESTRICTS_1_3_1,
    XML_SCHEMAP_COS_ST_RESTRICTS_1_3_2,
    XML_SCHEMAP_COS_ST_RESTRICTS_2_1,
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_1_1,
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_1_2,
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_2_1,
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_2_2,
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_2_3,
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_2_4,
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_2_5,
    XML_SCHEMAP_COS_ST_RESTRICTS_3_1,
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_1,
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_1_2,
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_2_2,
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_2_1,
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_2_3,
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_2_4,
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_2_5,
    XML_SCHEMAP_COS_ST_DERIVED_OK_2_1,
    XML_SCHEMAP_COS_ST_DERIVED_OK_2_2,
    XML_SCHEMAP_S4S_ELEM_NOT_ALLOWED,
    XML_SCHEMAP_S4S_ELEM_MISSING,
    XML_SCHEMAP_S4S_ATTR_NOT_ALLOWED,
    XML_SCHEMAP_S4S_ATTR_MISSING,
    XML_SCHEMAP_S4S_ATTR_INVALID_VALUE,
    XML_SCHEMAP_SRC_ELEMENT_1,
    XML_SCHEMAP_SRC_ELEMENT_2_1,
    XML_SCHEMAP_SRC_ELEMENT_2_2,
    XML_SCHEMAP_SRC_ELEMENT_3,
    XML_SCHEMAP_P_PROPS_CORRECT_1,
    XML_SCHEMAP_P_PROPS_CORRECT_2_1,
    XML_SCHEMAP_P_PROPS_CORRECT_2_2,
    XML_SCHEMAP_E_PROPS_CORRECT_2,
    XML_SCHEMAP_E_PROPS_CORRECT_3,
    XML_SCHEMAP_E_PROPS_CORRECT_4,
    XML_SCHEMAP_E_PROPS_CORRECT_5,
    XML_SCHEMAP_E_PROPS_CORRECT_6,
    XML_SCHEMAP_SRC_INCLUDE,
    XML_SCHEMAP_SRC_ATTRIBUTE_1,
    XML_SCHEMAP_SRC_ATTRIBUTE_2,
    XML_SCHEMAP_SRC_ATTRIBUTE_3_1,
    XML_SCHEMAP_SRC_ATTRIBUTE_3_2,
    XML_SCHEMAP_SRC_ATTRIBUTE_4,
    XML_SCHEMAP_NO_XMLNS,
    XML_SCHEMAP_NO_XSI,
    XML_SCHEMAP_COS_VALID_DEFAULT_1,
    XML_SCHEMAP_COS_VALID_DEFAULT_2_1,
    XML_SCHEMAP_COS_VALID_DEFAULT_2_2_1,
    XML_SCHEMAP_COS_VALID_DEFAULT_2_2_2,
    XML_SCHEMAP_CVC_SIMPLE_TYPE,
    XML_SCHEMAP_COS_CT_EXTENDS_1_1,
    XML_SCHEMAP_SRC_IMPORT_1_1,
    XML_SCHEMAP_SRC_IMPORT_1_2,
    XML_SCHEMAP_SRC_IMPORT_2,
    XML_SCHEMAP_SRC_IMPORT_2_1,
    XML_SCHEMAP_SRC_IMPORT_2_2,
    XML_SCHEMAP_INTERNAL,
    XML_SCHEMAP_NOT_DETERMINISTIC,
    XML_SCHEMAP_SRC_ATTRIBUTE_GROUP_1,
    XML_SCHEMAP_SRC_ATTRIBUTE_GROUP_2,
    XML_SCHEMAP_SRC_ATTRIBUTE_GROUP_3,
    XML_SCHEMAP_MG_PROPS_CORRECT_1,
    XML_SCHEMAP_MG_PROPS_CORRECT_2,
    XML_SCHEMAP_SRC_CT_1,
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_2_1_3,
    XML_SCHEMAP_AU_PROPS_CORRECT_2,
    XML_SCHEMAP_A_PROPS_CORRECT_2,
    XML_MODULE_OPEN = 4900,
    XML_MODULE_CLOSE,
    XML_CHECK_FOUND_ELEMENT = 5000,
    XML_CHECK_FOUND_ATTRIBUTE,
    XML_CHECK_FOUND_TEXT,
    XML_CHECK_FOUND_CDATA,
    XML_CHECK_FOUND_ENTITYREF,
    XML_CHECK_FOUND_ENTITY,
    XML_CHECK_FOUND_PI,
    XML_CHECK_FOUND_COMMENT,
    XML_CHECK_FOUND_DOCTYPE,
    XML_CHECK_FOUND_FRAGMENT,
    XML_CHECK_FOUND_NOTATION,
    XML_CHECK_UNKNOWN_NODE,
    XML_CHECK_ENTITY_TYPE,
    XML_CHECK_NO_PARENT,
    XML_CHECK_NO_DOC,
    XML_CHECK_NO_NAME,
    XML_CHECK_NO_ELEM,
    XML_CHECK_WRONG_DOC,
    XML_CHECK_NO_PREV,
    XML_CHECK_WRONG_PREV,
    XML_CHECK_NO_NEXT,
    XML_CHECK_WRONG_NEXT,
    XML_CHECK_NOT_DTD,
    XML_CHECK_NOT_ATTR,
    XML_CHECK_NOT_ATTR_DECL,
    XML_CHECK_NOT_ELEM_DECL,
    XML_CHECK_NOT_ENTITY_DECL,
    XML_CHECK_NOT_NS_DECL,
    XML_CHECK_NO_HREF,
    XML_CHECK_WRONG_PARENT,
    XML_CHECK_NS_SCOPE,
    XML_CHECK_NS_ANCESTOR,
    XML_CHECK_NOT_UTF8,
    XML_CHECK_NO_DICT,
    XML_CHECK_NOT_NCNAME,
    XML_CHECK_OUTSIDE_DICT,
    XML_CHECK_WRONG_NAME,
    XML_CHECK_NAME_NOT_NULL
#if 0
#line 798
#endif
} xmlParserErrors;
#line 810
typedef void (*xmlGenericErrorFunc) (void *ctx,
				 const char *msg,
	 			 ...);
#line 821
typedef void (*xmlStructuredErrorFunc) (void *userData, xmlErrorPtr error);
#line 827
XMLPUBFUN void XMLCALL
    xmlSetGenericErrorFunc	(void *ctx,
				 xmlGenericErrorFunc handler);
XMLPUBFUN void XMLCALL
    initGenericErrorDefaultFunc	(xmlGenericErrorFunc *handler);

XMLPUBFUN void XMLCALL
    xmlSetStructuredErrorFunc	(void *ctx,
				 xmlStructuredErrorFunc handler);
#line 840
XMLPUBFUN void XMLCALL
    xmlParserError		(void *ctx,
				 const char *msg,
				 ...);
XMLPUBFUN void XMLCALL
    xmlParserWarning		(void *ctx,
				 const char *msg,
				 ...);
XMLPUBFUN void XMLCALL
    xmlParserValidityError	(void *ctx,
				 const char *msg,
				 ...);
XMLPUBFUN void XMLCALL
    xmlParserValidityWarning	(void *ctx,
				 const char *msg,
				 ...);
XMLPUBFUN void XMLCALL
    xmlParserPrintFileInfo	(xmlParserInputPtr input);
XMLPUBFUN void XMLCALL
    xmlParserPrintFileContext	(xmlParserInputPtr input);
#line 864
XMLPUBFUN xmlErrorPtr XMLCALL
    xmlGetLastError		(void);
XMLPUBFUN void XMLCALL
    xmlResetLastError		(void);
XMLPUBFUN xmlErrorPtr XMLCALL
    xmlCtxtGetLastError		(void *ctx);
XMLPUBFUN void XMLCALL
    xmlCtxtResetLastError	(void *ctx);
XMLPUBFUN void XMLCALL
    xmlResetError		(xmlErrorPtr err);
XMLPUBFUN int XMLCALL
    xmlCopyError		(xmlErrorPtr from,
    				 xmlErrorPtr to);
#line 881
XMLPUBFUN void XMLCALL
    __xmlRaiseError		(xmlStructuredErrorFunc schannel,
    				 xmlGenericErrorFunc channel,
    				 void *data,
                                 void *ctx,
    				 void *node,
    				 int domain,
				 int code,
				 xmlErrorLevel level,
				 const char *file,
				 int line,
				 const char *str1,
				 const char *str2,
				 const char *str3,
				 int int1,
				 intptr_t col,
				 const char *msg,
				 ...);
XMLPUBFUN void XMLCALL
    __xmlSimpleError		(int domain,
    				 int code,
				 xmlNodePtr node,
				 const char *msg,
				 const char *extra);
#ifdef __cplusplus
}
#endif
#endif
#line 16 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/valid.h"
// #include <libxml/tree.h>   (already above)
// #include <libxml/list.h>   (FCollada 3.05B, pasted in place)
#line 11 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/list.h"
#ifndef __XML_LINK_INCLUDE__
#define __XML_LINK_INCLUDE__

// #include <libxml/xmlversion.h>   (already above)

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _xmlLink xmlLink;
typedef xmlLink *xmlLinkPtr;

typedef struct _xmlList xmlList;
typedef xmlList *xmlListPtr;
#line 32
typedef void (*xmlListDeallocator) (xmlLinkPtr lk);
#line 42
typedef int  (*xmlListDataCompare) (const void *data0, const void *data1);
#line 52
typedef int (*xmlListWalker) (const void *data, const void *user);
#line 55
XMLPUBFUN xmlListPtr XMLCALL
		xmlListCreate		(xmlListDeallocator deallocator,
	                                 xmlListDataCompare compare);
XMLPUBFUN void XMLCALL
		xmlListDelete		(xmlListPtr l);
#line 62
XMLPUBFUN void * XMLCALL
		xmlListSearch		(xmlListPtr l,
					 void *data);
XMLPUBFUN void * XMLCALL
		xmlListReverseSearch	(xmlListPtr l,
					 void *data);
XMLPUBFUN int XMLCALL
		xmlListInsert		(xmlListPtr l,
					 void *data) ;
XMLPUBFUN int XMLCALL
		xmlListAppend		(xmlListPtr l,
					 void *data) ;
XMLPUBFUN int XMLCALL
		xmlListRemoveFirst	(xmlListPtr l,
					 void *data);
XMLPUBFUN int XMLCALL
		xmlListRemoveLast	(xmlListPtr l,
					 void *data);
XMLPUBFUN int XMLCALL
		xmlListRemoveAll	(xmlListPtr l,
					 void *data);
XMLPUBFUN void XMLCALL
		xmlListClear		(xmlListPtr l);
XMLPUBFUN int XMLCALL
		xmlListEmpty		(xmlListPtr l);
XMLPUBFUN xmlLinkPtr XMLCALL
		xmlListFront		(xmlListPtr l);
XMLPUBFUN xmlLinkPtr XMLCALL
		xmlListEnd		(xmlListPtr l);
XMLPUBFUN int XMLCALL
		xmlListSize		(xmlListPtr l);

XMLPUBFUN void XMLCALL
		xmlListPopFront		(xmlListPtr l);
XMLPUBFUN void XMLCALL
		xmlListPopBack		(xmlListPtr l);
XMLPUBFUN int XMLCALL
		xmlListPushFront	(xmlListPtr l,
					 void *data);
XMLPUBFUN int XMLCALL
		xmlListPushBack		(xmlListPtr l,
					 void *data);
#line 106
XMLPUBFUN void XMLCALL
		xmlListReverse		(xmlListPtr l);
XMLPUBFUN void XMLCALL
		xmlListSort		(xmlListPtr l);
XMLPUBFUN void XMLCALL
		xmlListWalk		(xmlListPtr l,
					 xmlListWalker walker,
					 const void *user);
XMLPUBFUN void XMLCALL
		xmlListReverseWalk	(xmlListPtr l,
					 xmlListWalker walker,
					 const void *user);
XMLPUBFUN void XMLCALL
		xmlListMerge		(xmlListPtr l1,
					 xmlListPtr l2);
XMLPUBFUN xmlListPtr XMLCALL
		xmlListDup		(const xmlListPtr old);
XMLPUBFUN int XMLCALL
		xmlListCopy		(xmlListPtr cur,
					 const xmlListPtr old);

XMLPUBFUN void * XMLCALL
		xmlLinkGetData          (xmlLinkPtr lk);
#line 133
#ifdef __cplusplus
}
#endif

#endif
#line 18 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/valid.h"
// #include <libxml/xmlautomata.h>   (FCollada 3.05B, pasted in place)
#line 10 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/xmlautomata.h"
#ifndef __XML_AUTOMATA_H__
#define __XML_AUTOMATA_H__

// #include <libxml/xmlversion.h>   (already above)
// #include <libxml/tree.h>   (already above)

#ifdef LIBXML_REGEXP_ENABLED
#ifdef LIBXML_AUTOMATA_ENABLED
#line 20
#ifdef __cplusplus
#line 22
#endif
#line 131
#ifdef __cplusplus
#line 133
#endif

#endif
#endif

#endif
#line 19 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/valid.h"
// #include <libxml/xmlregexp.h>   (already above)

#ifdef __cplusplus
extern "C" {
#endif
#line 28
typedef struct _xmlValidState xmlValidState;
typedef xmlValidState *xmlValidStatePtr;
#line 42
typedef void (*xmlValidityErrorFunc) (void *ctx,
			     const char *msg,
			     ...);
#line 57
typedef void (*xmlValidityWarningFunc) (void *ctx,
			       const char *msg,
			       ...);
#line 66
#define XML_CTXT_FINISH_DTD_0 0xabcd1234
#line 72
#define XML_CTXT_FINISH_DTD_1 0xabcd1235
#line 78
typedef struct _xmlValidCtxt xmlValidCtxt;
typedef xmlValidCtxt *xmlValidCtxtPtr;
struct _xmlValidCtxt {
    void *userData;
    xmlValidityErrorFunc error;
    xmlValidityWarningFunc warning;
#line 86
    xmlNodePtr         node;
    int                nodeNr;
    int                nodeMax;
    xmlNodePtr        *nodeTab;

    unsigned int     finishDtd;
    xmlDocPtr              doc;
    int                  valid;
#line 96
    xmlValidState     *vstate;
    int                vstateNr;
    int                vstateMax;
    xmlValidState     *vstateTab;

#ifdef LIBXML_REGEXP_ENABLED
#line 104
#else
    void                     *am;
    void                  *state;
#endif
};
#line 115
typedef struct _xmlHashTable xmlNotationTable;
typedef xmlNotationTable *xmlNotationTablePtr;
#line 123
typedef struct _xmlHashTable xmlElementTable;
typedef xmlElementTable *xmlElementTablePtr;
#line 131
typedef struct _xmlHashTable xmlAttributeTable;
typedef xmlAttributeTable *xmlAttributeTablePtr;
#line 139
typedef struct _xmlHashTable xmlIDTable;
typedef xmlIDTable *xmlIDTablePtr;
#line 147
typedef struct _xmlHashTable xmlRefTable;
typedef xmlRefTable *xmlRefTablePtr;
#line 151
XMLPUBFUN xmlNotationPtr XMLCALL
		xmlAddNotationDecl	(xmlValidCtxtPtr ctxt,
					 xmlDtdPtr dtd,
					 const xmlChar *name,
					 const xmlChar *PublicID,
					 const xmlChar *SystemID);
#ifdef LIBXML_TREE_ENABLED
XMLPUBFUN xmlNotationTablePtr XMLCALL
		xmlCopyNotationTable	(xmlNotationTablePtr table);
#endif
XMLPUBFUN void XMLCALL
		xmlFreeNotationTable	(xmlNotationTablePtr table);
#ifdef LIBXML_OUTPUT_ENABLED
XMLPUBFUN void XMLCALL
		xmlDumpNotationDecl	(xmlBufferPtr buf,
					 xmlNotationPtr nota);
XMLPUBFUN void XMLCALL
		xmlDumpNotationTable	(xmlBufferPtr buf,
					 xmlNotationTablePtr table);
#endif
#line 174
XMLPUBFUN xmlElementContentPtr XMLCALL
		xmlNewElementContent	(const xmlChar *name,
					 xmlElementContentType type);
XMLPUBFUN xmlElementContentPtr XMLCALL
		xmlCopyElementContent	(xmlElementContentPtr content);
XMLPUBFUN void XMLCALL
		xmlFreeElementContent	(xmlElementContentPtr cur);

XMLPUBFUN xmlElementContentPtr XMLCALL
		xmlNewDocElementContent	(xmlDocPtr doc,
					 const xmlChar *name,
					 xmlElementContentType type);
XMLPUBFUN xmlElementContentPtr XMLCALL
		xmlCopyDocElementContent(xmlDocPtr doc,
					 xmlElementContentPtr content);
XMLPUBFUN void XMLCALL
		xmlFreeDocElementContent(xmlDocPtr doc,
					 xmlElementContentPtr cur);
XMLPUBFUN void XMLCALL
		xmlSnprintfElementContent(char *buf,
					 size_t size,
					 xmlElementContentPtr content,
					 int glob);
#ifdef LIBXML_OUTPUT_ENABLED

XMLPUBFUN void XMLCALL
		xmlSprintfElementContent(char *buf,
					 xmlElementContentPtr content,
					 int glob);
#endif
#line 207
XMLPUBFUN xmlElementPtr XMLCALL
		xmlAddElementDecl	(xmlValidCtxtPtr ctxt,
					 xmlDtdPtr dtd,
					 const xmlChar *name,
					 xmlElementTypeVal type,
					 xmlElementContentPtr content);
#ifdef LIBXML_TREE_ENABLED
XMLPUBFUN xmlElementTablePtr XMLCALL
		xmlCopyElementTable	(xmlElementTablePtr table);
#endif
XMLPUBFUN void XMLCALL
		xmlFreeElementTable	(xmlElementTablePtr table);
#ifdef LIBXML_OUTPUT_ENABLED
XMLPUBFUN void XMLCALL
		xmlDumpElementTable	(xmlBufferPtr buf,
					 xmlElementTablePtr table);
XMLPUBFUN void XMLCALL
		xmlDumpElementDecl	(xmlBufferPtr buf,
					 xmlElementPtr elem);
#endif
#line 229
XMLPUBFUN xmlEnumerationPtr XMLCALL
		xmlCreateEnumeration	(const xmlChar *name);
XMLPUBFUN void XMLCALL
		xmlFreeEnumeration	(xmlEnumerationPtr cur);
#ifdef LIBXML_TREE_ENABLED
XMLPUBFUN xmlEnumerationPtr XMLCALL
		xmlCopyEnumeration	(xmlEnumerationPtr cur);
#endif
#line 239
XMLPUBFUN xmlAttributePtr XMLCALL
		xmlAddAttributeDecl	(xmlValidCtxtPtr ctxt,
					 xmlDtdPtr dtd,
					 const xmlChar *elem,
					 const xmlChar *name,
					 const xmlChar *ns,
					 xmlAttributeType type,
					 xmlAttributeDefault def,
					 const xmlChar *defaultValue,
					 xmlEnumerationPtr tree);
#ifdef LIBXML_TREE_ENABLED
XMLPUBFUN xmlAttributeTablePtr XMLCALL
		xmlCopyAttributeTable  (xmlAttributeTablePtr table);
#endif
XMLPUBFUN void XMLCALL
		xmlFreeAttributeTable  (xmlAttributeTablePtr table);
#ifdef LIBXML_OUTPUT_ENABLED
XMLPUBFUN void XMLCALL
		xmlDumpAttributeTable  (xmlBufferPtr buf,
					xmlAttributeTablePtr table);
XMLPUBFUN void XMLCALL
		xmlDumpAttributeDecl   (xmlBufferPtr buf,
					xmlAttributePtr attr);
#endif
#line 265
XMLPUBFUN xmlIDPtr XMLCALL
		xmlAddID	       (xmlValidCtxtPtr ctxt,
					xmlDocPtr doc,
					const xmlChar *value,
					xmlAttrPtr attr);
XMLPUBFUN void XMLCALL
		xmlFreeIDTable	       (xmlIDTablePtr table);
XMLPUBFUN xmlAttrPtr XMLCALL
		xmlGetID	       (xmlDocPtr doc,
					const xmlChar *ID);
XMLPUBFUN int XMLCALL
		xmlIsID		       (xmlDocPtr doc,
					xmlNodePtr elem,
					xmlAttrPtr attr);
XMLPUBFUN int XMLCALL
		xmlRemoveID	       (xmlDocPtr doc,
					xmlAttrPtr attr);
#line 284
XMLPUBFUN xmlRefPtr XMLCALL
		xmlAddRef	       (xmlValidCtxtPtr ctxt,
					xmlDocPtr doc,
					const xmlChar *value,
					xmlAttrPtr attr);
XMLPUBFUN void XMLCALL
		xmlFreeRefTable	       (xmlRefTablePtr table);
XMLPUBFUN int XMLCALL
		xmlIsRef	       (xmlDocPtr doc,
					xmlNodePtr elem,
					xmlAttrPtr attr);
XMLPUBFUN int XMLCALL
		xmlRemoveRef	       (xmlDocPtr doc,
					xmlAttrPtr attr);
XMLPUBFUN xmlListPtr XMLCALL
		xmlGetRefs	       (xmlDocPtr doc,
					const xmlChar *ID);
#line 305
#ifdef LIBXML_VALID_ENABLED

#line 375
#endif

#if defined(LIBXML_VALID_ENABLED) || defined(LIBXML_SCHEMAS_ENABLED)
#line 382
#endif

XMLPUBFUN int XMLCALL
		xmlIsMixedElement	(xmlDocPtr doc,
					 const xmlChar *name);
XMLPUBFUN xmlAttributePtr XMLCALL
		xmlGetDtdAttrDesc	(xmlDtdPtr dtd,
					 const xmlChar *elem,
					 const xmlChar *name);
XMLPUBFUN xmlAttributePtr XMLCALL
		xmlGetDtdQAttrDesc	(xmlDtdPtr dtd,
					 const xmlChar *elem,
					 const xmlChar *name,
					 const xmlChar *prefix);
XMLPUBFUN xmlNotationPtr XMLCALL
		xmlGetDtdNotationDesc	(xmlDtdPtr dtd,
					 const xmlChar *name);
XMLPUBFUN xmlElementPtr XMLCALL
		xmlGetDtdQElementDesc	(xmlDtdPtr dtd,
					 const xmlChar *name,
					 const xmlChar *prefix);
XMLPUBFUN xmlElementPtr XMLCALL
		xmlGetDtdElementDesc	(xmlDtdPtr dtd,
					 const xmlChar *name);

#ifdef LIBXML_VALID_ENABLED

#line 429
#ifdef LIBXML_REGEXP_ENABLED
#line 451
#endif
#endif
#ifdef __cplusplus
}
#endif
#endif
#line 20 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/parser.h"
// #include <libxml/entities.h>   (FCollada 3.05B, pasted in place)
#line 11 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/entities.h"
#ifndef __XML_ENTITIES_H__
#define __XML_ENTITIES_H__

// #include <libxml/xmlversion.h>   (already above)
// #include <libxml/tree.h>   (already above)

#ifdef __cplusplus
extern "C" {
#endif
#line 24
typedef enum {
    XML_INTERNAL_GENERAL_ENTITY = 1,
    XML_EXTERNAL_GENERAL_PARSED_ENTITY = 2,
    XML_EXTERNAL_GENERAL_UNPARSED_ENTITY = 3,
    XML_INTERNAL_PARAMETER_ENTITY = 4,
    XML_EXTERNAL_PARAMETER_ENTITY = 5,
    XML_INTERNAL_PREDEFINED_ENTITY = 6
} xmlEntityType;
#line 38
struct _xmlEntity {
    void           *_private;
    xmlElementType          type;
    const xmlChar          *name;
    struct _xmlNode    *children;
    struct _xmlNode        *last;
    struct _xmlDtd       *parent;
    struct _xmlNode        *next;
    struct _xmlNode        *prev;
    struct _xmlDoc          *doc;

    xmlChar                *orig;
    xmlChar             *content;
    intptr_t              length;
    xmlEntityType          etype;
    const xmlChar    *ExternalID;
    const xmlChar      *SystemID;

    struct _xmlEntity     *nexte;
    const xmlChar           *URI;
    int                    owner;
};
#line 66
typedef struct _xmlHashTable xmlEntitiesTable;
typedef xmlEntitiesTable *xmlEntitiesTablePtr;
#line 73
#ifdef LIBXML_LEGACY_ENABLED
#line 76
#endif
XMLPUBFUN xmlEntityPtr XMLCALL
			xmlAddDocEntity		(xmlDocPtr doc,
						 const xmlChar *name,
						 int type,
						 const xmlChar *ExternalID,
						 const xmlChar *SystemID,
						 const xmlChar *content);
XMLPUBFUN xmlEntityPtr XMLCALL
			xmlAddDtdEntity		(xmlDocPtr doc,
						 const xmlChar *name,
						 int type,
						 const xmlChar *ExternalID,
						 const xmlChar *SystemID,
						 const xmlChar *content);
XMLPUBFUN xmlEntityPtr XMLCALL
			xmlGetPredefinedEntity	(const xmlChar *name);
XMLPUBFUN xmlEntityPtr XMLCALL
			xmlGetDocEntity		(xmlDocPtr doc,
						 const xmlChar *name);
XMLPUBFUN xmlEntityPtr XMLCALL
			xmlGetDtdEntity		(xmlDocPtr doc,
						 const xmlChar *name);
XMLPUBFUN xmlEntityPtr XMLCALL
			xmlGetParameterEntity	(xmlDocPtr doc,
						 const xmlChar *name);
#ifdef LIBXML_LEGACY_ENABLED
#line 106
#endif
XMLPUBFUN xmlChar * XMLCALL
			xmlEncodeEntitiesReentrant(xmlDocPtr doc,
						 const xmlChar *input);
XMLPUBFUN xmlChar * XMLCALL
			xmlEncodeSpecialChars	(xmlDocPtr doc,
						 const xmlChar *input);
XMLPUBFUN xmlEntitiesTablePtr XMLCALL
			xmlCreateEntitiesTable	(void);
#ifdef LIBXML_TREE_ENABLED
XMLPUBFUN xmlEntitiesTablePtr XMLCALL
			xmlCopyEntitiesTable	(xmlEntitiesTablePtr table);
#endif
XMLPUBFUN void XMLCALL
			xmlFreeEntitiesTable	(xmlEntitiesTablePtr table);
#ifdef LIBXML_OUTPUT_ENABLED
XMLPUBFUN void XMLCALL
			xmlDumpEntitiesTable	(xmlBufferPtr buf,
						 xmlEntitiesTablePtr table);
XMLPUBFUN void XMLCALL
			xmlDumpEntityDecl	(xmlBufferPtr buf,
						 xmlEntityPtr ent);
#endif
#ifdef LIBXML_LEGACY_ENABLED
#line 132
#endif
#line 135
#ifdef __cplusplus
}
#endif

# endif
#line 21 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/parser.h"
// #include <libxml/xmlerror.h>   (already above)
// #include <libxml/xmlstring.h>   (already above)

#ifdef __cplusplus
extern "C" {
#endif
#line 33
#define XML_DEFAULT_VERSION	"1.0"
#line 52
typedef void (* xmlParserInputDeallocate)(xmlChar *str);

struct _xmlParserInput {

    xmlParserInputBufferPtr buf;

    const char *filename;
    const char *directory;
    const xmlChar *base;
    const xmlChar *cur;
    const xmlChar *end;
    intptr_t length;
    int line;
    intptr_t col;
#line 71
    size_t consumed;
    xmlParserInputDeallocate free;
    const xmlChar *encoding;
    const xmlChar *version;
    int standalone;
    int id;
};
#line 86
typedef struct _xmlParserNodeInfo xmlParserNodeInfo;
typedef xmlParserNodeInfo *xmlParserNodeInfoPtr;

struct _xmlParserNodeInfo {
  const struct _xmlNode* node;

  size_t begin_pos;
  unsigned long begin_line;
  size_t end_pos;
  unsigned long end_line;
};

typedef struct _xmlParserNodeInfoSeq xmlParserNodeInfoSeq;
typedef xmlParserNodeInfoSeq *xmlParserNodeInfoSeqPtr;
struct _xmlParserNodeInfoSeq {
  unsigned long maximum;
  unsigned long length;
  xmlParserNodeInfo* buffer;
};
#line 112
typedef enum {
    XML_PARSER_EOF = -1,
    XML_PARSER_START = 0,
    XML_PARSER_MISC,
    XML_PARSER_PI,
    XML_PARSER_DTD,
    XML_PARSER_PROLOG,
    XML_PARSER_COMMENT,
    XML_PARSER_START_TAG,
    XML_PARSER_CONTENT,
    XML_PARSER_CDATA_SECTION,
    XML_PARSER_END_TAG,
    XML_PARSER_ENTITY_DECL,
    XML_PARSER_ENTITY_VALUE,
    XML_PARSER_ATTRIBUTE_VALUE,
    XML_PARSER_SYSTEM_LITERAL,
    XML_PARSER_EPILOG,
    XML_PARSER_IGNORE,
    XML_PARSER_PUBLIC_LITERAL
} xmlParserInputState;
#line 139
#define XML_DETECT_IDS		2
#line 148
#define XML_COMPLETE_ATTRS	4
#line 156
#define XML_SKIP_IDS		8
#line 163
typedef enum {
    XML_PARSE_UNKNOWN = 0,
    XML_PARSE_DOM = 1,
    XML_PARSE_SAX = 2,
    XML_PARSE_PUSH_DOM = 3,
    XML_PARSE_PUSH_SAX = 4,
    XML_PARSE_READER = 5
} xmlParserMode;
#line 184
struct _xmlParserCtxt {
    struct _xmlSAXHandler *sax;
    void            *userData;
    xmlDocPtr           myDoc;
    int            wellFormed;
    int       replaceEntities;
    const xmlChar    *version;
    const xmlChar   *encoding;
    int            standalone;
    int                  html;
#line 196
    xmlParserInputPtr  input;
    int                inputNr;
    int                inputMax;
    xmlParserInputPtr *inputTab;
#line 202
    xmlNodePtr         node;
    int                nodeNr;
    int                nodeMax;
    xmlNodePtr        *nodeTab;

    int record_info;
    xmlParserNodeInfoSeq node_seq;

    int errNo;

    int     hasExternalSubset;
    int             hasPErefs;
    int              external;

    int                 valid;
    int              validate;
    xmlValidCtxt        vctxt;

    xmlParserInputState instate;
    int                 token;

    char           *directory;
#line 226
    const xmlChar     *name;
    int                nameNr;
    int                nameMax;
    const xmlChar *   *nameTab;

    intptr_t           nbChars;
    intptr_t           checkIndex;
    int             keepBlanks;
    int             disableSAX;
    int               inSubset;
    const xmlChar *    intSubName;
    xmlChar *          extSubURI;
    xmlChar *          extSubSystem;
#line 241
    int *              space;
    int                spaceNr;
    int                spaceMax;
    int *              spaceTab;

    int                depth;
    xmlParserInputPtr  entity;
    int                charset;

    intptr_t           nodelen;
    intptr_t           nodemem;
    int                pedantic;
    void              *_private;

    int                loadsubset;
    int                linenumbers;
    void              *catalogs;
    int                recovery;
    int                progressive;
    xmlDictPtr         dict;
    const xmlChar *   *atts;
    intptr_t           maxatts;
    int                docdict;
#line 268
    const xmlChar *str_xml;
    const xmlChar *str_xmlns;
    const xmlChar *str_xml_ns;
#line 275
    int                sax2;
    int                nsNr;
    int                nsMax;
    const xmlChar *   *nsTab;
    intptr_t          *attallocs;
    void *            *pushTab;
    xmlHashTablePtr    attsDefault;
    xmlHashTablePtr    attsSpecial;
    int                nsWellFormed;
    int                options;
#line 289
    int               dictNames;
    int               freeElemsNr;
    xmlNodePtr        freeElems;
    int               freeAttrsNr;
    xmlAttrPtr        freeAttrs;
#line 298
    xmlError          lastError;
    xmlParserMode     parseMode;
};
#line 307
struct _xmlSAXLocator {
    const xmlChar *(*getPublicId)(void *ctx);
    const xmlChar *(*getSystemId)(void *ctx);
    intptr_t (*getLineNumber)(void *ctx);
    intptr_t (*getColumnNumber)(void *ctx);
};
#line 336
typedef xmlParserInputPtr (*resolveEntitySAXFunc) (void *ctx,
				const xmlChar *publicId,
				const xmlChar *systemId);
#line 348
typedef void (*internalSubsetSAXFunc) (void *ctx,
				const xmlChar *name,
				const xmlChar *ExternalID,
				const xmlChar *SystemID);
#line 361
typedef void (*externalSubsetSAXFunc) (void *ctx,
				const xmlChar *name,
				const xmlChar *ExternalID,
				const xmlChar *SystemID);
#line 374
typedef xmlEntityPtr (*getEntitySAXFunc) (void *ctx,
				const xmlChar *name);
#line 385
typedef xmlEntityPtr (*getParameterEntitySAXFunc) (void *ctx,
				const xmlChar *name);
#line 398
typedef void (*entityDeclSAXFunc) (void *ctx,
				const xmlChar *name,
				int type,
				const xmlChar *publicId,
				const xmlChar *systemId,
				xmlChar *content);
#line 413
typedef void (*notationDeclSAXFunc)(void *ctx,
				const xmlChar *name,
				const xmlChar *publicId,
				const xmlChar *systemId);
#line 429
typedef void (*attributeDeclSAXFunc)(void *ctx,
				const xmlChar *elem,
				const xmlChar *fullname,
				int type,
				int def,
				const xmlChar *defaultValue,
				xmlEnumerationPtr tree);
#line 445
typedef void (*elementDeclSAXFunc)(void *ctx,
				const xmlChar *name,
				int type,
				xmlElementContentPtr content);
#line 459
typedef void (*unparsedEntityDeclSAXFunc)(void *ctx,
				const xmlChar *name,
				const xmlChar *publicId,
				const xmlChar *systemId,
				const xmlChar *notationName);
#line 472
typedef void (*setDocumentLocatorSAXFunc) (void *ctx,
				xmlSAXLocatorPtr loc);
#line 480
typedef void (*startDocumentSAXFunc) (void *ctx);
#line 487
typedef void (*endDocumentSAXFunc) (void *ctx);
#line 496
typedef void (*startElementSAXFunc) (void *ctx,
				const xmlChar *name,
				const xmlChar **atts);
#line 506
typedef void (*endElementSAXFunc) (void *ctx,
				const xmlChar *name);
#line 519
typedef void (*attributeSAXFunc) (void *ctx,
				const xmlChar *name,
				const xmlChar *value);
#line 529
typedef void (*referenceSAXFunc) (void *ctx,
				const xmlChar *name);
#line 539
typedef void (*charactersSAXFunc) (void *ctx,
				const xmlChar *ch,
				intptr_t len);
#line 551
typedef void (*ignorableWhitespaceSAXFunc) (void *ctx,
				const xmlChar *ch,
				intptr_t len);
#line 562
typedef void (*processingInstructionSAXFunc) (void *ctx,
				const xmlChar *target,
				const xmlChar *data);
#line 572
typedef void (*commentSAXFunc) (void *ctx,
				const xmlChar *value);
#line 582
typedef void (*cdataBlockSAXFunc) (
	            void *ctx,
				const xmlChar *value,
				intptr_t len);
#line 594
typedef void (*warningSAXFunc) (void *ctx,
				const char *msg, ...);
#line 604
typedef void (*errorSAXFunc) (void *ctx,
				const char *msg, ...);
#line 616
typedef void (*fatalErrorSAXFunc) (void *ctx,
				const char *msg, ...);
#line 626
typedef int (*isStandaloneSAXFunc) (void *ctx);
#line 635
typedef int (*hasInternalSubsetSAXFunc) (void *ctx);
#line 645
typedef int (*hasExternalSubsetSAXFunc) (void *ctx);
#line 657
#define XML_SAX2_MAGIC 0xDEEDBEAF
#line 678
typedef void (*startElementNsSAX2Func) (void *ctx,
					const xmlChar *localname,
					const xmlChar *prefix,
					const xmlChar *URI,
					int nb_namespaces,
					const xmlChar **namespaces,
					intptr_t nb_attributes,
					intptr_t nb_defaulted,
					const xmlChar **attributes);
#line 699
typedef void (*endElementNsSAX2Func)   (void *ctx,
					const xmlChar *localname,
					const xmlChar *prefix,
					const xmlChar *URI);
#line 705
struct _xmlSAXHandler {
    internalSubsetSAXFunc internalSubset;
    isStandaloneSAXFunc isStandalone;
    hasInternalSubsetSAXFunc hasInternalSubset;
    hasExternalSubsetSAXFunc hasExternalSubset;
    resolveEntitySAXFunc resolveEntity;
    getEntitySAXFunc getEntity;
    entityDeclSAXFunc entityDecl;
    notationDeclSAXFunc notationDecl;
    attributeDeclSAXFunc attributeDecl;
    elementDeclSAXFunc elementDecl;
    unparsedEntityDeclSAXFunc unparsedEntityDecl;
    setDocumentLocatorSAXFunc setDocumentLocator;
    startDocumentSAXFunc startDocument;
    endDocumentSAXFunc endDocument;
    startElementSAXFunc startElement;
    endElementSAXFunc endElement;
    referenceSAXFunc reference;
    charactersSAXFunc characters;
    ignorableWhitespaceSAXFunc ignorableWhitespace;
    processingInstructionSAXFunc processingInstruction;
    commentSAXFunc comment;
    warningSAXFunc warning;
    errorSAXFunc error;
    fatalErrorSAXFunc fatalError;
    getParameterEntitySAXFunc getParameterEntity;
    cdataBlockSAXFunc cdataBlock;
    externalSubsetSAXFunc externalSubset;
    unsigned int initialized;

    void *_private;
    startElementNsSAX2Func startElementNs;
    endElementNsSAX2Func endElementNs;
    xmlStructuredErrorFunc serror;
};
#line 744
typedef struct _xmlSAXHandlerV1 xmlSAXHandlerV1;
typedef xmlSAXHandlerV1 *xmlSAXHandlerV1Ptr;
struct _xmlSAXHandlerV1 {
    internalSubsetSAXFunc internalSubset;
    isStandaloneSAXFunc isStandalone;
    hasInternalSubsetSAXFunc hasInternalSubset;
    hasExternalSubsetSAXFunc hasExternalSubset;
    resolveEntitySAXFunc resolveEntity;
    getEntitySAXFunc getEntity;
    entityDeclSAXFunc entityDecl;
    notationDeclSAXFunc notationDecl;
    attributeDeclSAXFunc attributeDecl;
    elementDeclSAXFunc elementDecl;
    unparsedEntityDeclSAXFunc unparsedEntityDecl;
    setDocumentLocatorSAXFunc setDocumentLocator;
    startDocumentSAXFunc startDocument;
    endDocumentSAXFunc endDocument;
    startElementSAXFunc startElement;
    endElementSAXFunc endElement;
    referenceSAXFunc reference;
    charactersSAXFunc characters;
    ignorableWhitespaceSAXFunc ignorableWhitespace;
    processingInstructionSAXFunc processingInstruction;
    commentSAXFunc comment;
    warningSAXFunc warning;
    errorSAXFunc error;
    fatalErrorSAXFunc fatalError;
    getParameterEntitySAXFunc getParameterEntity;
    cdataBlockSAXFunc cdataBlock;
    externalSubsetSAXFunc externalSubset;
    unsigned int initialized;
};
#line 788
typedef xmlParserInputPtr (*xmlExternalEntityLoader) (const char *URL,
					 const char *ID,
					 xmlParserCtxtPtr context);

#ifdef __cplusplus
}
#endif

// #include <libxml/encoding.h>   (FCollada 3.05B, pasted in place)
#line 22 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/encoding.h"
#ifndef __XML_CHAR_ENCODING_H__
#define __XML_CHAR_ENCODING_H__

// #include <libxml/xmlversion.h>   (already above)

#ifdef LIBXML_ICONV_ENABLED
#line 29
#endif
#ifdef __cplusplus
extern "C" {
#endif
#line 55
typedef enum {
    XML_CHAR_ENCODING_ERROR=   -1,
    XML_CHAR_ENCODING_NONE=	0,
    XML_CHAR_ENCODING_UTF8=	1,
    XML_CHAR_ENCODING_UTF16LE=	2,
    XML_CHAR_ENCODING_UTF16BE=	3,
    XML_CHAR_ENCODING_UCS4LE=	4,
    XML_CHAR_ENCODING_UCS4BE=	5,
    XML_CHAR_ENCODING_EBCDIC=	6,
    XML_CHAR_ENCODING_UCS4_2143=7,
    XML_CHAR_ENCODING_UCS4_3412=8,
    XML_CHAR_ENCODING_UCS2=	9,
    XML_CHAR_ENCODING_8859_1=	10,
    XML_CHAR_ENCODING_8859_2=	11,
    XML_CHAR_ENCODING_8859_3=	12,
    XML_CHAR_ENCODING_8859_4=	13,
    XML_CHAR_ENCODING_8859_5=	14,
    XML_CHAR_ENCODING_8859_6=	15,
    XML_CHAR_ENCODING_8859_7=	16,
    XML_CHAR_ENCODING_8859_8=	17,
    XML_CHAR_ENCODING_8859_9=	18,
    XML_CHAR_ENCODING_2022_JP=  19,
    XML_CHAR_ENCODING_SHIFT_JIS=20,
    XML_CHAR_ENCODING_EUC_JP=   21,
    XML_CHAR_ENCODING_ASCII=    22
} xmlCharEncoding;
#line 98
typedef intptr_t (* xmlCharEncodingInputFunc)(unsigned char *out, intptr_t* outlen,
                                         const unsigned char *in, intptr_t* inlen);
#line 120
typedef intptr_t (* xmlCharEncodingOutputFunc)(unsigned char *out, intptr_t* outlen,
                                          const unsigned char *in, intptr_t* inlen);
#line 129
typedef struct _xmlCharEncodingHandler xmlCharEncodingHandler;
typedef xmlCharEncodingHandler *xmlCharEncodingHandlerPtr;
struct _xmlCharEncodingHandler {
    char                       *name;
    xmlCharEncodingInputFunc   input;
    xmlCharEncodingOutputFunc  output;
#ifdef LIBXML_ICONV_ENABLED
#line 138
#endif
};

#ifdef __cplusplus
}
#endif
// #include <libxml/tree.h>   (already above)
#ifdef __cplusplus
extern "C" {
#endif
#line 152
XMLPUBFUN void XMLCALL
	xmlInitCharEncodingHandlers	(void);
XMLPUBFUN void XMLCALL
	xmlCleanupCharEncodingHandlers	(void);
XMLPUBFUN void XMLCALL
	xmlRegisterCharEncodingHandler	(xmlCharEncodingHandlerPtr handler);
XMLPUBFUN xmlCharEncodingHandlerPtr XMLCALL
	xmlGetCharEncodingHandler	(xmlCharEncoding enc);
XMLPUBFUN xmlCharEncodingHandlerPtr XMLCALL
	xmlFindCharEncodingHandler	(const char *name);
XMLPUBFUN xmlCharEncodingHandlerPtr XMLCALL
	xmlNewCharEncodingHandler	(const char *name,
                          		 xmlCharEncodingInputFunc input,
                          		 xmlCharEncodingOutputFunc output);
#line 170
XMLPUBFUN int XMLCALL
	xmlAddEncodingAlias		(const char *name,
					 const char *alias);
XMLPUBFUN int XMLCALL
	xmlDelEncodingAlias		(const char *alias);
XMLPUBFUN const char * XMLCALL
	xmlGetEncodingAlias		(const char *alias);
XMLPUBFUN void XMLCALL
	xmlCleanupEncodingAliases	(void);
XMLPUBFUN xmlCharEncoding XMLCALL
	xmlParseCharEncoding		(const char *name);
XMLPUBFUN const char * XMLCALL
	xmlGetCharEncodingName		(xmlCharEncoding enc);
#line 187
XMLPUBFUN xmlCharEncoding XMLCALL
	xmlDetectCharEncoding		(const unsigned char *in,
					 intptr_t len);

XMLPUBFUN intptr_t XMLCALL
	xmlCharEncOutFunc		(xmlCharEncodingHandler *handler,
					 xmlBufferPtr out,
					 xmlBufferPtr in);

XMLPUBFUN intptr_t XMLCALL
	xmlCharEncInFunc		(xmlCharEncodingHandler *handler,
					 xmlBufferPtr out,
					 xmlBufferPtr in);
XMLPUBFUN intptr_t XMLCALL
	xmlCharEncFirstLine		(xmlCharEncodingHandler *handler,
					 xmlBufferPtr out,
					 xmlBufferPtr in);
XMLPUBFUN int XMLCALL
	xmlCharEncCloseFunc		(xmlCharEncodingHandler *handler);
#line 210
#ifdef LIBXML_OUTPUT_ENABLED
XMLPUBFUN intptr_t XMLCALL
	UTF8Toisolat1			(unsigned char *out,
					 intptr_t* outlen,
					 const unsigned char *in,
					 intptr_t* inlen);
#endif
XMLPUBFUN intptr_t XMLCALL
	isolat1ToUTF8			(unsigned char *out,
					 intptr_t* outlen,
					 const unsigned char *in,
					 intptr_t* inlen);
#ifdef __cplusplus
}
#endif

#endif
#line 797 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/parser.h"
// #include <libxml/xmlIO.h>   (FCollada 3.05B, pasted in place)
#line 10 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/xmlIO.h"
#ifndef __XML_IO_H__
#define __XML_IO_H__

#include <stdio.h>
// #include <libxml/xmlversion.h>   (already above)

#ifdef __cplusplus
extern "C" {
#endif
#line 34
typedef int (*xmlInputMatchCallback) (char const *filename);
#line 43
typedef void * (*xmlInputOpenCallback) (char const *filename);
#line 54
typedef intptr_t (*xmlInputReadCallback) (void * context, char * buffer, size_t len);
#line 63
typedef int (*xmlInputCloseCallback) (void * context);

#ifdef LIBXML_OUTPUT_ENABLED
#line 80
typedef int (*xmlOutputMatchCallback) (char const *filename);
#line 89
typedef void * (*xmlOutputOpenCallback) (char const *filename);
#line 100
typedef intptr_t (*xmlOutputWriteCallback) (void * context, const char * buffer,
                                       size_t len);
#line 110
typedef int (*xmlOutputCloseCallback) (void * context);
#endif

#ifdef __cplusplus
}
#endif

// #include <libxml/globals.h>   (already above)
// #include <libxml/tree.h>   (already above)
// #include <libxml/parser.h>   (already above)
// #include <libxml/encoding.h>   (already above)

#ifdef __cplusplus
extern "C" {
#endif
struct _xmlParserInputBuffer {
    void*                  context;
    xmlInputReadCallback   readcallback;
    xmlInputCloseCallback  closecallback;

    xmlCharEncodingHandlerPtr encoder;

    xmlBufferPtr buffer;
    xmlBufferPtr raw;
    int	compressed;
    int error;
    size_t rawconsumed;
};
#line 140
#ifdef LIBXML_OUTPUT_ENABLED
struct _xmlOutputBuffer {
    void*                   context;
    xmlOutputWriteCallback  writecallback;
    xmlOutputCloseCallback  closecallback;

    xmlCharEncodingHandlerPtr encoder;

    xmlBufferPtr buffer;
    xmlBufferPtr conv;
    intptr_t written;
    int error;
};
#endif
#line 158
XMLPUBFUN void XMLCALL
	xmlCleanupInputCallbacks		(void);

XMLPUBFUN int XMLCALL
	xmlPopInputCallbacks			(void);

XMLPUBFUN void XMLCALL
	xmlRegisterDefaultInputCallbacks	(void);
XMLPUBFUN xmlParserInputBufferPtr XMLCALL
	xmlAllocParserInputBuffer		(xmlCharEncoding enc);

XMLPUBFUN xmlParserInputBufferPtr XMLCALL
	xmlParserInputBufferCreateFilename	(const char *URI,
                                                 xmlCharEncoding enc);
XMLPUBFUN xmlParserInputBufferPtr XMLCALL
	xmlParserInputBufferCreateFile		(FILE *file,
                                                 xmlCharEncoding enc);
XMLPUBFUN xmlParserInputBufferPtr XMLCALL
	xmlParserInputBufferCreateFd		(int fd,
	                                         xmlCharEncoding enc);
XMLPUBFUN xmlParserInputBufferPtr XMLCALL
	xmlParserInputBufferCreateMem		(const char *mem, intptr_t size,
	                                         xmlCharEncoding enc);
XMLPUBFUN xmlParserInputBufferPtr XMLCALL
	xmlParserInputBufferCreateStatic	(const char *mem, intptr_t size,
	                                         xmlCharEncoding enc);
XMLPUBFUN xmlParserInputBufferPtr XMLCALL
	xmlParserInputBufferCreateIO		(xmlInputReadCallback   ioread,
						 xmlInputCloseCallback  ioclose,
						 void *ioctx,
	                                         xmlCharEncoding enc);
XMLPUBFUN intptr_t XMLCALL
	xmlParserInputBufferRead		(xmlParserInputBufferPtr in,
						 intptr_t len);
XMLPUBFUN intptr_t XMLCALL
	xmlParserInputBufferGrow		(xmlParserInputBufferPtr in,
						 intptr_t len);
XMLPUBFUN intptr_t XMLCALL
	xmlParserInputBufferPush		(xmlParserInputBufferPtr in,
						 intptr_t len,
						 const char *buf);
XMLPUBFUN void XMLCALL
	xmlFreeParserInputBuffer		(xmlParserInputBufferPtr in);
XMLPUBFUN char * XMLCALL
	xmlParserGetDirectory			(const char *filename);

XMLPUBFUN int XMLCALL
	xmlRegisterInputCallbacks		(xmlInputMatchCallback matchFunc,
						 xmlInputOpenCallback openFunc,
						 xmlInputReadCallback readFunc,
						 xmlInputCloseCallback closeFunc);

xmlParserInputBufferPtr
	__xmlParserInputBufferCreateFilename(const char *URI,
										xmlCharEncoding enc);

#ifdef LIBXML_OUTPUT_ENABLED
#line 218
XMLPUBFUN void XMLCALL
	xmlCleanupOutputCallbacks		(void);
XMLPUBFUN void XMLCALL
	xmlRegisterDefaultOutputCallbacks(void);
XMLPUBFUN xmlOutputBufferPtr XMLCALL
	xmlAllocOutputBuffer		(xmlCharEncodingHandlerPtr encoder);

XMLPUBFUN xmlOutputBufferPtr XMLCALL
	xmlOutputBufferCreateFilename	(const char *URI,
					 xmlCharEncodingHandlerPtr encoder,
					 int compression);

XMLPUBFUN xmlOutputBufferPtr XMLCALL
	xmlOutputBufferCreateFile	(FILE *file,
					 xmlCharEncodingHandlerPtr encoder);

XMLPUBFUN xmlOutputBufferPtr XMLCALL
	xmlOutputBufferCreateFd		(int fd,
					 xmlCharEncodingHandlerPtr encoder);

XMLPUBFUN xmlOutputBufferPtr XMLCALL
	xmlOutputBufferCreateIO		(xmlOutputWriteCallback   iowrite,
					 xmlOutputCloseCallback  ioclose,
					 void *ioctx,
					 xmlCharEncodingHandlerPtr encoder);

XMLPUBFUN intptr_t XMLCALL
	xmlOutputBufferWrite		(xmlOutputBufferPtr out,
					 intptr_t len,
					 const char *buf);
XMLPUBFUN intptr_t XMLCALL
	xmlOutputBufferWriteString	(xmlOutputBufferPtr out,
					 const char *str);
XMLPUBFUN intptr_t XMLCALL
	xmlOutputBufferWriteEscape	(xmlOutputBufferPtr out,
					 const xmlChar *str,
					 xmlCharEncodingOutputFunc escaping);

XMLPUBFUN intptr_t XMLCALL
	xmlOutputBufferFlush		(xmlOutputBufferPtr out);
XMLPUBFUN intptr_t XMLCALL
	xmlOutputBufferClose		(xmlOutputBufferPtr out);

XMLPUBFUN int XMLCALL
	xmlRegisterOutputCallbacks	(xmlOutputMatchCallback matchFunc,
					 xmlOutputOpenCallback openFunc,
					 xmlOutputWriteCallback writeFunc,
					 xmlOutputCloseCallback closeFunc);

xmlOutputBufferPtr
	__xmlOutputBufferCreateFilename(const char *URI,
                              xmlCharEncodingHandlerPtr encoder,
                              int compression);

#ifdef LIBXML_HTTP_ENABLED

#line 276
#endif

#endif

XMLPUBFUN xmlParserInputPtr XMLCALL
	xmlCheckHTTPInput		(xmlParserCtxtPtr ctxt,
					 xmlParserInputPtr ret);
#line 287
XMLPUBFUN xmlParserInputPtr XMLCALL
	xmlNoNetExternalEntityLoader	(const char *URL,
					 const char *ID,
					 xmlParserCtxtPtr ctxt);
#line 296
XMLPUBFUN xmlChar * XMLCALL
	xmlNormalizeWindowsPath		(const xmlChar *path);

XMLPUBFUN int XMLCALL
	xmlCheckFilename		(const char *path);
#line 304
XMLPUBFUN int XMLCALL
	xmlFileMatch 			(const char *filename);
XMLPUBFUN void * XMLCALL
	xmlFileOpen 			(const char *filename);
XMLPUBFUN intptr_t XMLCALL
	xmlFileRead 			(void * context,
					 char * buffer,
					 size_t len);
XMLPUBFUN int XMLCALL
	xmlFileClose 			(void * context);
#line 318
#ifdef LIBXML_HTTP_ENABLED
#line 323
#ifdef LIBXML_OUTPUT_ENABLED
#line 327
#endif
#line 334
#endif
#line 339
#ifdef LIBXML_FTP_ENABLED
#line 350
#endif

#ifdef __cplusplus
}
#endif

#endif
#line 798 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/parser.h"
// #include <libxml/globals.h>   (already above)

#ifdef __cplusplus
extern "C" {
#endif
#line 808
XMLPUBFUN void XMLCALL
		xmlInitParser		(void);
XMLPUBFUN void XMLCALL
		xmlCleanupParser	(void);
#line 816
XMLPUBFUN intptr_t XMLCALL
		xmlParserInputRead	(xmlParserInputPtr in,
					 intptr_t len);
XMLPUBFUN intptr_t XMLCALL
		xmlParserInputGrow	(xmlParserInputPtr in,
					 intptr_t len);
#line 826
#ifdef LIBXML_SAX1_ENABLED
XMLPUBFUN xmlDocPtr XMLCALL
		xmlParseDoc		(const xmlChar *cur);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlParseFile		(const char *filename);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlParseMemory		(const char *buffer,
					 intptr_t size);
#endif
XMLPUBFUN int XMLCALL
		xmlSubstituteEntitiesDefault(int val);
XMLPUBFUN int XMLCALL
		xmlKeepBlanksDefault	(int val);
#ifdef LIBXML_PUSH_ENABLED
XMLPUBFUN void XMLCALL
		xmlStopParser		(xmlParserCtxtPtr ctxt);
#endif
XMLPUBFUN int XMLCALL
		xmlPedanticParserDefault(int val);
XMLPUBFUN int XMLCALL
		xmlLineNumbersDefault	(int val);

#ifdef LIBXML_SAX1_ENABLED
#line 852
XMLPUBFUN xmlDocPtr XMLCALL
		xmlRecoverDoc		(xmlChar *cur);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlRecoverMemory	(const char *buffer,
					 int size);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlRecoverFile		(const char *filename);
#endif
#line 864
XMLPUBFUN int XMLCALL
		xmlParseDocument	(xmlParserCtxtPtr ctxt);
XMLPUBFUN int XMLCALL
		xmlParseExtParsedEnt	(xmlParserCtxtPtr ctxt);
#ifdef LIBXML_SAX1_ENABLED
XMLPUBFUN int XMLCALL
		xmlSAXUserParseFile	(xmlSAXHandlerPtr sax,
					 void *user_data,
					 const char *filename);
XMLPUBFUN int XMLCALL
		xmlSAXUserParseMemory	(xmlSAXHandlerPtr sax,
					 void *user_data,
					 const char *buffer,
					 int size);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlSAXParseDoc		(xmlSAXHandlerPtr sax,
					 const xmlChar *cur,
					 int recovery);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlSAXParseMemory	(xmlSAXHandlerPtr sax,
					 const char *buffer,
                     intptr_t size,
					 int recovery);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlSAXParseMemoryWithData (xmlSAXHandlerPtr sax,
					 const char *buffer,
                     intptr_t size,
					 int recovery,
					 void *data);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlSAXParseFile		(xmlSAXHandlerPtr sax,
					 const char *filename,
					 int recovery);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlSAXParseFileWithData	(xmlSAXHandlerPtr sax,
					 const char *filename,
					 int recovery,
					 void *data);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlSAXParseEntity	(xmlSAXHandlerPtr sax,
					 const char *filename);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlParseEntity		(const char *filename);
#endif

#ifdef LIBXML_VALID_ENABLED
#line 921
#endif
#ifdef LIBXML_SAX1_ENABLED
XMLPUBFUN int XMLCALL
		xmlParseBalancedChunkMemory(xmlDocPtr doc,
					 xmlSAXHandlerPtr sax,
					 void *user_data,
					 int depth,
					 const xmlChar *string,
					 xmlNodePtr *lst);
#endif
XMLPUBFUN xmlParserErrors XMLCALL
		xmlParseInNodeContext	(xmlNodePtr node,
					 const char *data,
					 int datalen,
					 int options,
					 xmlNodePtr *lst);
#ifdef LIBXML_SAX1_ENABLED
XMLPUBFUN int XMLCALL
		xmlParseBalancedChunkMemoryRecover(xmlDocPtr doc,
                     xmlSAXHandlerPtr sax,
                     void *user_data,
                     int depth,
                     const xmlChar *string,
                     xmlNodePtr *lst,
                     int recover);
XMLPUBFUN int XMLCALL
		xmlParseExternalEntity	(xmlDocPtr doc,
					 xmlSAXHandlerPtr sax,
					 void *user_data,
					 int depth,
					 const xmlChar *URL,
					 const xmlChar *ID,
					 xmlNodePtr *lst);
#endif
XMLPUBFUN int XMLCALL
		xmlParseCtxtExternalEntity(xmlParserCtxtPtr ctx,
					 const xmlChar *URL,
					 const xmlChar *ID,
					 xmlNodePtr *lst);
#line 964
XMLPUBFUN xmlParserCtxtPtr XMLCALL
		xmlNewParserCtxt	(void);
XMLPUBFUN int XMLCALL
		xmlInitParserCtxt	(xmlParserCtxtPtr ctxt);
XMLPUBFUN void XMLCALL
		xmlClearParserCtxt	(xmlParserCtxtPtr ctxt);
XMLPUBFUN void XMLCALL
		xmlFreeParserCtxt	(xmlParserCtxtPtr ctxt);
#ifdef LIBXML_SAX1_ENABLED
XMLPUBFUN void XMLCALL
		xmlSetupParserForBuffer	(xmlParserCtxtPtr ctxt,
					 const xmlChar* buffer,
					 const char *filename);
#endif
XMLPUBFUN xmlParserCtxtPtr XMLCALL
		xmlCreateDocParserCtxt	(const xmlChar *cur);

#ifdef LIBXML_LEGACY_ENABLED
#line 996
#endif

#ifdef LIBXML_PUSH_ENABLED
#line 1002
XMLPUBFUN xmlParserCtxtPtr XMLCALL
		xmlCreatePushParserCtxt(xmlSAXHandlerPtr sax,
					 void *user_data,
					 const char *chunk,
					 intptr_t size,
					 const char *filename);
XMLPUBFUN int XMLCALL
		xmlParseChunk		(xmlParserCtxtPtr ctxt,
					 const char *chunk,
					 intptr_t size,
					 int terminate);
#endif
#line 1019
XMLPUBFUN xmlParserCtxtPtr XMLCALL
		xmlCreateIOParserCtxt	(xmlSAXHandlerPtr sax,
					 void *user_data,
					 xmlInputReadCallback   ioread,
					 xmlInputCloseCallback  ioclose,
					 void *ioctx,
					 xmlCharEncoding enc);

XMLPUBFUN xmlParserInputPtr XMLCALL
		xmlNewIOInputStream	(xmlParserCtxtPtr ctxt,
					 xmlParserInputBufferPtr input,
					 xmlCharEncoding enc);
#line 1035
XMLPUBFUN const xmlParserNodeInfo* XMLCALL
		xmlParserFindNodeInfo	(const xmlParserCtxtPtr ctxt,
				         const xmlNodePtr node);
XMLPUBFUN void XMLCALL
		xmlInitNodeInfoSeq	(xmlParserNodeInfoSeqPtr seq);
XMLPUBFUN void XMLCALL
		xmlClearNodeInfoSeq	(xmlParserNodeInfoSeqPtr seq);
XMLPUBFUN unsigned long XMLCALL
		xmlParserFindNodeInfoIndex(const xmlParserNodeInfoSeqPtr seq,
                                         const xmlNodePtr node);
XMLPUBFUN void XMLCALL
		xmlParserAddNodeInfo	(xmlParserCtxtPtr ctxt,
					 const xmlParserNodeInfoPtr info);
#line 1053
XMLPUBFUN void XMLCALL
		xmlSetExternalEntityLoader(xmlExternalEntityLoader f);
XMLPUBFUN xmlExternalEntityLoader XMLCALL
		xmlGetExternalEntityLoader(void);
XMLPUBFUN xmlParserInputPtr XMLCALL
		xmlLoadExternalEntity	(const char *URL,
					 const char *ID,
					 xmlParserCtxtPtr ctxt);
#line 1065
XMLPUBFUN intptr_t XMLCALL
		xmlByteConsumed		(xmlParserCtxtPtr ctxt);
#line 1077
typedef enum {
    XML_PARSE_RECOVER	= 1<<0,
    XML_PARSE_NOENT	= 1<<1,
    XML_PARSE_DTDLOAD	= 1<<2,
    XML_PARSE_DTDATTR	= 1<<3,
    XML_PARSE_DTDVALID	= 1<<4,
    XML_PARSE_NOERROR	= 1<<5,
    XML_PARSE_NOWARNING	= 1<<6,
    XML_PARSE_PEDANTIC	= 1<<7,
    XML_PARSE_NOBLANKS	= 1<<8,
    XML_PARSE_SAX1	= 1<<9,
    XML_PARSE_XINCLUDE	= 1<<10,
    XML_PARSE_NONET	= 1<<11,
    XML_PARSE_NODICT	= 1<<12,
    XML_PARSE_NSCLEAN	= 1<<13,
    XML_PARSE_NOCDATA	= 1<<14,
    XML_PARSE_NOXINCNODE= 1<<15
} xmlParserOption;

XMLPUBFUN void XMLCALL
		xmlCtxtReset		(xmlParserCtxtPtr ctxt);
XMLPUBFUN int XMLCALL
		xmlCtxtResetPush	(xmlParserCtxtPtr ctxt,
					 const char *chunk,
					 int size,
					 const char *filename,
					 const char *encoding);
XMLPUBFUN int XMLCALL
		xmlCtxtUseOptions	(xmlParserCtxtPtr ctxt,
					 int options);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlReadDoc		(const xmlChar *cur,
					 const char *URL,
					 const char *encoding,
					 int options);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlReadFile		(const char *URL,
					 const char *encoding,
					 int options);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlReadMemory		(const char *buffer,
					 int size,
					 const char *URL,
					 const char *encoding,
					 int options);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlReadFd		(int fd,
					 const char *URL,
					 const char *encoding,
					 int options);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlReadIO		(xmlInputReadCallback ioread,
					 xmlInputCloseCallback ioclose,
					 void *ioctx,
					 const char *URL,
					 const char *encoding,
					 int options);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlCtxtReadDoc		(xmlParserCtxtPtr ctxt,
					 const xmlChar *cur,
					 const char *URL,
					 const char *encoding,
					 int options);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlCtxtReadFile		(xmlParserCtxtPtr ctxt,
					 const char *filename,
					 const char *encoding,
					 int options);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlCtxtReadMemory		(xmlParserCtxtPtr ctxt,
					 const char *buffer,
					 int size,
					 const char *URL,
					 const char *encoding,
					 int options);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlCtxtReadFd		(xmlParserCtxtPtr ctxt,
					 int fd,
					 const char *URL,
					 const char *encoding,
					 int options);
XMLPUBFUN xmlDocPtr XMLCALL
		xmlCtxtReadIO		(xmlParserCtxtPtr ctxt,
					 xmlInputReadCallback ioread,
					 xmlInputCloseCallback ioclose,
					 void *ioctx,
					 const char *URL,
					 const char *encoding,
					 int options);

#ifdef __cplusplus
}
#endif
#endif
#line 19 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/globals.h"
// #include <libxml/xmlerror.h>   (already above)
// #include <libxml/SAX.h>   (FCollada 3.05B, pasted in place)
#line 12 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/SAX.h"
#ifndef __XML_SAX_H__
#define __XML_SAX_H__

#include <stdio.h>
#include <stdlib.h>
// #include <libxml/xmlversion.h>   (already above)
// #include <libxml/parser.h>   (already above)
// #include <libxml/xlink.h>   (FCollada 3.05B, pasted in place)
#line 10 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/xlink.h"
#ifndef __XML_XLINK_H__
#define __XML_XLINK_H__

// #include <libxml/xmlversion.h>   (already above)
// #include <libxml/tree.h>   (already above)

#ifdef LIBXML_XPTR_ENABLED

#ifdef __cplusplus
#line 20
#endif
#line 183
#ifdef __cplusplus
#line 185
#endif

#endif

#endif
#line 21 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/SAX.h"
#ifdef LIBXML_LEGACY_ENABLED

#ifdef __cplusplus
#line 25
#endif
#line 153
#ifdef LIBXML_SAX1_ENABLED
#line 157
#ifdef LIBXML_HTML_ENABLED
#line 160
#endif
#ifdef LIBXML_DOCB_ENABLED
#line 164
#endif
#endif

#ifdef __cplusplus
#line 169
#endif

#endif

#endif
#line 21 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/globals.h"
// #include <libxml/SAX2.h>   (FCollada 3.05B, pasted in place)
#line 12 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/SAX2.h"
#ifndef __XML_SAX2_H__
#define __XML_SAX2_H__

#include <stdio.h>
#include <stdlib.h>
// #include <libxml/xmlversion.h>   (already above)
// #include <libxml/parser.h>   (already above)
// #include <libxml/xlink.h>   (already above)

#ifdef __cplusplus
extern "C" {
#endif
XMLPUBFUN const xmlChar * XMLCALL
		xmlSAX2GetPublicId		(void *ctx);
XMLPUBFUN const xmlChar * XMLCALL
		xmlSAX2GetSystemId		(void *ctx);
XMLPUBFUN void XMLCALL
		xmlSAX2SetDocumentLocator	(void *ctx,
						 xmlSAXLocatorPtr loc);

XMLPUBFUN intptr_t XMLCALL
		xmlSAX2GetLineNumber		(void *ctx);
XMLPUBFUN intptr_t XMLCALL
		xmlSAX2GetColumnNumber		(void *ctx);

XMLPUBFUN int XMLCALL
		xmlSAX2IsStandalone		(void *ctx);
XMLPUBFUN int XMLCALL
		xmlSAX2HasInternalSubset	(void *ctx);
XMLPUBFUN int XMLCALL
		xmlSAX2HasExternalSubset	(void *ctx);

XMLPUBFUN void XMLCALL
		xmlSAX2InternalSubset		(void *ctx,
						 const xmlChar *name,
						 const xmlChar *ExternalID,
						 const xmlChar *SystemID);
XMLPUBFUN void XMLCALL
		xmlSAX2ExternalSubset		(void *ctx,
						 const xmlChar *name,
						 const xmlChar *ExternalID,
						 const xmlChar *SystemID);
XMLPUBFUN xmlEntityPtr XMLCALL
		xmlSAX2GetEntity		(void *ctx,
						 const xmlChar *name);
XMLPUBFUN xmlEntityPtr XMLCALL
		xmlSAX2GetParameterEntity	(void *ctx,
						 const xmlChar *name);
XMLPUBFUN xmlParserInputPtr XMLCALL
		xmlSAX2ResolveEntity		(void *ctx,
						 const xmlChar *publicId,
						 const xmlChar *systemId);

XMLPUBFUN void XMLCALL
		xmlSAX2EntityDecl		(void *ctx,
						 const xmlChar *name,
						 int type,
						 const xmlChar *publicId,
						 const xmlChar *systemId,
						 xmlChar *content);
XMLPUBFUN void XMLCALL
		xmlSAX2AttributeDecl		(void *ctx,
						 const xmlChar *elem,
						 const xmlChar *fullname,
						 int type,
						 int def,
						 const xmlChar *defaultValue,
						 xmlEnumerationPtr tree);
XMLPUBFUN void XMLCALL
		xmlSAX2ElementDecl		(void *ctx,
						 const xmlChar *name,
						 int type,
						 xmlElementContentPtr content);
XMLPUBFUN void XMLCALL
		xmlSAX2NotationDecl		(void *ctx,
						 const xmlChar *name,
						 const xmlChar *publicId,
						 const xmlChar *systemId);
XMLPUBFUN void XMLCALL
		xmlSAX2UnparsedEntityDecl	(void *ctx,
						 const xmlChar *name,
						 const xmlChar *publicId,
						 const xmlChar *systemId,
						 const xmlChar *notationName);

XMLPUBFUN void XMLCALL
		xmlSAX2StartDocument		(void *ctx);
XMLPUBFUN void XMLCALL
		xmlSAX2EndDocument		(void *ctx);
#if defined(LIBXML_SAX1_ENABLED) || defined(LIBXML_HTML_ENABLED)
XMLPUBFUN void XMLCALL
		xmlSAX2StartElement		(void *ctx,
						 const xmlChar *fullname,
						 const xmlChar **atts);
XMLPUBFUN void XMLCALL
		xmlSAX2EndElement		(void *ctx,
						 const xmlChar *name);
#endif
XMLPUBFUN void XMLCALL
		xmlSAX2StartElementNs		(void *ctx,
						 const xmlChar *localname,
						 const xmlChar *prefix,
						 const xmlChar *URI,
						 int nb_namespaces,
						 const xmlChar **namespaces,
						 intptr_t nb_attributes,
						 intptr_t nb_defaulted,
						 const xmlChar **attributes);
XMLPUBFUN void XMLCALL
		xmlSAX2EndElementNs		(void *ctx,
						 const xmlChar *localname,
						 const xmlChar *prefix,
						 const xmlChar *URI);
XMLPUBFUN void XMLCALL
		xmlSAX2Reference		(void *ctx,
						 const xmlChar *name);
XMLPUBFUN void XMLCALL
		xmlSAX2Characters		(void *ctx,
						 const xmlChar *ch,
						 intptr_t len);
XMLPUBFUN void XMLCALL
		xmlSAX2IgnorableWhitespace	(void *ctx,
						 const xmlChar *ch,
						 intptr_t len);
XMLPUBFUN void XMLCALL
		xmlSAX2ProcessingInstruction	(void *ctx,
						 const xmlChar *target,
						 const xmlChar *data);
XMLPUBFUN void XMLCALL
		xmlSAX2Comment			(void *ctx,
						 const xmlChar *value);
XMLPUBFUN void XMLCALL
		xmlSAX2CDataBlock		(void *ctx,
						 const xmlChar *value,
						 intptr_t len);

#ifdef LIBXML_SAX1_ENABLED
XMLPUBFUN int XMLCALL
		xmlSAXDefaultVersion		(int version);
#endif

XMLPUBFUN int XMLCALL
		xmlSAXVersion			(xmlSAXHandler *hdlr,
						 int version);
XMLPUBFUN void XMLCALL
		xmlSAX2InitDefaultSAXHandler    (xmlSAXHandler *hdlr,
						 int warning);
#ifdef LIBXML_HTML_ENABLED
#line 164
#endif
#ifdef LIBXML_DOCB_ENABLED
#line 170
#endif
XMLPUBFUN void XMLCALL
		xmlDefaultSAXHandlerInit	(void);
#ifdef __cplusplus
}
#endif
#endif
#line 22 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/globals.h"
// #include <libxml/xmlmemory.h>   (already above)

#ifdef __cplusplus
extern "C" {
#endif

XMLPUBFUN void XMLCALL xmlInitGlobals(void);
XMLPUBFUN void XMLCALL xmlCleanupGlobals(void);

typedef xmlParserInputBufferPtr (*xmlParserInputBufferCreateFilenameFunc) (const char *URI, xmlCharEncoding enc);
typedef xmlOutputBufferPtr (*xmlOutputBufferCreateFilenameFunc) (const char *URI, xmlCharEncodingHandlerPtr encoder, int compression);
XMLPUBFUN xmlParserInputBufferCreateFilenameFunc
XMLCALL xmlParserInputBufferCreateFilenameDefault (xmlParserInputBufferCreateFilenameFunc func);
XMLPUBFUN xmlOutputBufferCreateFilenameFunc
XMLCALL xmlOutputBufferCreateFilenameDefault (xmlOutputBufferCreateFilenameFunc func);
#line 43
#undef	docbDefaultSAXHandler
#undef	htmlDefaultSAXHandler
#undef	oldXMLWDcompatibility
#undef	xmlBufferAllocScheme
#undef	xmlDefaultBufferSize
#undef	xmlDefaultSAXHandler
#undef	xmlDefaultSAXLocator
#undef	xmlDoValidityCheckingDefaultValue
#undef	xmlFree
#undef	xmlGenericError
#undef	xmlStructuredError
#undef	xmlGenericErrorContext
#undef	xmlGetWarningsDefaultValue
#undef	xmlIndentTreeOutput
#undef  xmlTreeIndentString
#undef	xmlKeepBlanksDefaultValue
#undef	xmlLineNumbersDefaultValue
#undef	xmlLoadExtDtdDefaultValue
#undef	xmlMalloc
#undef	xmlMallocAtomic
#undef	xmlMemStrdup
#undef	xmlParserDebugEntities
#undef	xmlParserVersion
#undef	xmlPedanticParserDefaultValue
#undef	xmlRealloc
#undef	xmlSaveNoEmptyTags
#undef	xmlSubstituteEntitiesDefaultValue
#undef  xmlRegisterNodeDefaultValue
#undef  xmlDeregisterNodeDefaultValue
#undef  xmlLastError
#undef  xmlParserInputBufferCreateFilenameValue
#undef  xmlOutputBufferCreateFilenameValue

typedef void (*xmlRegisterNodeFunc) (xmlNodePtr node);
typedef void (*xmlDeregisterNodeFunc) (xmlNodePtr node);

typedef struct _xmlGlobalState xmlGlobalState;
typedef xmlGlobalState *xmlGlobalStatePtr;
struct _xmlGlobalState
{
	const char *xmlParserVersion;

	xmlSAXLocator xmlDefaultSAXLocator;
	xmlSAXHandlerV1 xmlDefaultSAXHandler;
	xmlSAXHandlerV1 docbDefaultSAXHandler;
	xmlSAXHandlerV1 htmlDefaultSAXHandler;

	xmlFreeFunc xmlFree;
	xmlMallocFunc xmlMalloc;
	xmlStrdupFunc xmlMemStrdup;
	xmlReallocFunc xmlRealloc;

	xmlGenericErrorFunc xmlGenericError;
	xmlStructuredErrorFunc xmlStructuredError;
	void *xmlGenericErrorContext;

	int oldXMLWDcompatibility;

	xmlBufferAllocationScheme xmlBufferAllocScheme;
	int xmlDefaultBufferSize;

	int xmlSubstituteEntitiesDefaultValue;
	int xmlDoValidityCheckingDefaultValue;
	int xmlGetWarningsDefaultValue;
	int xmlKeepBlanksDefaultValue;
	int xmlLineNumbersDefaultValue;
	int xmlLoadExtDtdDefaultValue;
	int xmlParserDebugEntities;
	int xmlPedanticParserDefaultValue;

	int xmlSaveNoEmptyTags;
	int xmlIndentTreeOutput;
	const char *xmlTreeIndentString;

  	xmlRegisterNodeFunc xmlRegisterNodeDefaultValue;
  	xmlDeregisterNodeFunc xmlDeregisterNodeDefaultValue;

	xmlMallocFunc xmlMallocAtomic;
	xmlError xmlLastError;

	xmlParserInputBufferCreateFilenameFunc xmlParserInputBufferCreateFilenameValue;
	xmlOutputBufferCreateFilenameFunc xmlOutputBufferCreateFilenameValue;
};

#ifdef __cplusplus
}
#endif
// #include <libxml/threads.h>   (already above)
#ifdef __cplusplus
extern "C" {
#endif

XMLPUBFUN void XMLCALL	xmlInitializeGlobalState(xmlGlobalStatePtr gs);

XMLPUBFUN void XMLCALL xmlThrDefSetGenericErrorFunc(void *ctx, xmlGenericErrorFunc handler);

XMLPUBFUN void XMLCALL xmlThrDefSetStructuredErrorFunc(void *ctx, xmlStructuredErrorFunc handler);

XMLPUBFUN xmlRegisterNodeFunc XMLCALL xmlRegisterNodeDefault(xmlRegisterNodeFunc func);
XMLPUBFUN xmlRegisterNodeFunc XMLCALL xmlThrDefRegisterNodeDefault(xmlRegisterNodeFunc func);
XMLPUBFUN xmlDeregisterNodeFunc XMLCALL xmlDeregisterNodeDefault(xmlDeregisterNodeFunc func);
XMLPUBFUN xmlDeregisterNodeFunc XMLCALL xmlThrDefDeregisterNodeDefault(xmlDeregisterNodeFunc func);

XMLPUBFUN xmlOutputBufferCreateFilenameFunc XMLCALL
	xmlThrDefOutputBufferCreateFilenameDefault(xmlOutputBufferCreateFilenameFunc func);
XMLPUBFUN xmlParserInputBufferCreateFilenameFunc XMLCALL
	xmlThrDefParserInputBufferCreateFilenameDefault(xmlParserInputBufferCreateFilenameFunc func);
#line 162
#ifdef LIBXML_THREAD_ALLOC_ENABLED
#ifdef LIBXML_THREAD_ENABLED
#line 165
#define xmlMalloc \
#line 167
#else
#line 169
#endif

#ifdef LIBXML_THREAD_ENABLED
#line 173
#define xmlMallocAtomic \
#line 175
#else
#line 177
#endif

#ifdef LIBXML_THREAD_ENABLED
#line 181
#define xmlRealloc \
#line 183
#else
#line 185
#endif

#ifdef LIBXML_THREAD_ENABLED
#line 189
#define xmlFree \
#line 191
#else
#line 193
#endif

#ifdef LIBXML_THREAD_ENABLED
#line 197
#define xmlMemStrdup \
#line 199
#else
#line 201
#endif

#else
XMLPUBVAR xmlMallocFunc xmlMalloc;
XMLPUBVAR xmlMallocFunc xmlMallocAtomic;
XMLPUBVAR xmlReallocFunc xmlRealloc;
XMLPUBVAR xmlFreeFunc xmlFree;
XMLPUBVAR xmlStrdupFunc xmlMemStrdup;
#endif

#ifdef LIBXML_DOCB_ENABLED
#line 213
#ifdef LIBXML_THREAD_ENABLED
#define docbDefaultSAXHandler \
#line 216
#else
#line 218
#endif
#endif

#ifdef LIBXML_HTML_ENABLED
#line 223
#ifdef LIBXML_THREAD_ENABLED
#define htmlDefaultSAXHandler \
#line 226
#else
#line 228
#endif
#endif

XMLPUBFUN xmlError * XMLCALL __xmlLastError(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlLastError \
#line 235
#else
XMLPUBVAR xmlError xmlLastError;
#endif
#line 246
XMLPUBFUN int * XMLCALL __oldXMLWDcompatibility(void);
#ifdef LIBXML_THREAD_ENABLED
#define oldXMLWDcompatibility \
#line 250
#else
XMLPUBVAR int oldXMLWDcompatibility;
#endif

XMLPUBFUN xmlBufferAllocationScheme * XMLCALL __xmlBufferAllocScheme(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlBufferAllocScheme \
#line 258
#else
XMLPUBVAR xmlBufferAllocationScheme xmlBufferAllocScheme;
#endif
XMLPUBFUN xmlBufferAllocationScheme XMLCALL xmlThrDefBufferAllocScheme(xmlBufferAllocationScheme v);

XMLPUBFUN int * XMLCALL __xmlDefaultBufferSize(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlDefaultBufferSize \
#line 267
#else
XMLPUBVAR int xmlDefaultBufferSize;
#endif
XMLPUBFUN int XMLCALL xmlThrDefDefaultBufferSize(int v);

XMLPUBFUN xmlSAXHandlerV1 * XMLCALL __xmlDefaultSAXHandler(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlDefaultSAXHandler \
#line 276
#else
XMLPUBVAR xmlSAXHandlerV1 xmlDefaultSAXHandler;
#endif

XMLPUBFUN xmlSAXLocator * XMLCALL __xmlDefaultSAXLocator(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlDefaultSAXLocator \
#line 284
#else
XMLPUBVAR xmlSAXLocator xmlDefaultSAXLocator;
#endif

XMLPUBFUN int * XMLCALL __xmlDoValidityCheckingDefaultValue(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlDoValidityCheckingDefaultValue \
#line 292
#else
XMLPUBVAR int xmlDoValidityCheckingDefaultValue;
#endif
XMLPUBFUN int XMLCALL xmlThrDefDoValidityCheckingDefaultValue(int v);

XMLPUBFUN xmlGenericErrorFunc * XMLCALL __xmlGenericError(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlGenericError \
#line 301
#else
XMLPUBVAR xmlGenericErrorFunc xmlGenericError;
#endif

XMLPUBFUN xmlStructuredErrorFunc * XMLCALL __xmlStructuredError(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlStructuredError \
#line 309
#else
XMLPUBVAR xmlStructuredErrorFunc xmlStructuredError;
#endif

XMLPUBFUN void * * XMLCALL __xmlGenericErrorContext(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlGenericErrorContext \
#line 317
#else
XMLPUBVAR void * xmlGenericErrorContext;
#endif

XMLPUBFUN int * XMLCALL __xmlGetWarningsDefaultValue(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlGetWarningsDefaultValue \
#line 325
#else
XMLPUBVAR int xmlGetWarningsDefaultValue;
#endif
XMLPUBFUN int XMLCALL xmlThrDefGetWarningsDefaultValue(int v);

XMLPUBFUN int * XMLCALL __xmlIndentTreeOutput(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlIndentTreeOutput \
#line 334
#else
XMLPUBVAR int xmlIndentTreeOutput;
#endif
XMLPUBFUN int XMLCALL xmlThrDefIndentTreeOutput(int v);

XMLPUBFUN const char * * XMLCALL __xmlTreeIndentString(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlTreeIndentString \
#line 343
#else
XMLPUBVAR const char * xmlTreeIndentString;
#endif
XMLPUBFUN const char * XMLCALL xmlThrDefTreeIndentString(const char * v);

XMLPUBFUN int * XMLCALL __xmlKeepBlanksDefaultValue(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlKeepBlanksDefaultValue \
#line 352
#else
XMLPUBVAR int xmlKeepBlanksDefaultValue;
#endif
XMLPUBFUN int XMLCALL xmlThrDefKeepBlanksDefaultValue(int v);

XMLPUBFUN int * XMLCALL __xmlLineNumbersDefaultValue(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlLineNumbersDefaultValue \
#line 361
#else
XMLPUBVAR int xmlLineNumbersDefaultValue;
#endif
XMLPUBFUN int XMLCALL xmlThrDefLineNumbersDefaultValue(int v);

XMLPUBFUN int * XMLCALL __xmlLoadExtDtdDefaultValue(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlLoadExtDtdDefaultValue \
#line 370
#else
XMLPUBVAR int xmlLoadExtDtdDefaultValue;
#endif
XMLPUBFUN int XMLCALL xmlThrDefLoadExtDtdDefaultValue(int v);

XMLPUBFUN int * XMLCALL __xmlParserDebugEntities(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlParserDebugEntities \
#line 379
#else
XMLPUBVAR int xmlParserDebugEntities;
#endif
XMLPUBFUN int XMLCALL xmlThrDefParserDebugEntities(int v);

XMLPUBFUN const char * * XMLCALL __xmlParserVersion(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlParserVersion \
#line 388
#else
XMLPUBVAR const char * xmlParserVersion;
#endif

XMLPUBFUN int * XMLCALL __xmlPedanticParserDefaultValue(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlPedanticParserDefaultValue \
#line 396
#else
XMLPUBVAR int xmlPedanticParserDefaultValue;
#endif
XMLPUBFUN int XMLCALL xmlThrDefPedanticParserDefaultValue(int v);

XMLPUBFUN int * XMLCALL __xmlSaveNoEmptyTags(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlSaveNoEmptyTags \
#line 405
#else
XMLPUBVAR int xmlSaveNoEmptyTags;
#endif
XMLPUBFUN int XMLCALL xmlThrDefSaveNoEmptyTags(int v);

XMLPUBFUN int * XMLCALL __xmlSubstituteEntitiesDefaultValue(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlSubstituteEntitiesDefaultValue \
#line 414
#else
XMLPUBVAR int xmlSubstituteEntitiesDefaultValue;
#endif
XMLPUBFUN int XMLCALL xmlThrDefSubstituteEntitiesDefaultValue(int v);

XMLPUBFUN xmlRegisterNodeFunc * XMLCALL __xmlRegisterNodeDefaultValue(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlRegisterNodeDefaultValue \
#line 423
#else
XMLPUBVAR xmlRegisterNodeFunc xmlRegisterNodeDefaultValue;
#endif

XMLPUBFUN xmlDeregisterNodeFunc * XMLCALL __xmlDeregisterNodeDefaultValue(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlDeregisterNodeDefaultValue \
#line 431
#else
XMLPUBVAR xmlDeregisterNodeFunc xmlDeregisterNodeDefaultValue;
#endif

XMLPUBFUN xmlParserInputBufferCreateFilenameFunc * XMLCALL __xmlParserInputBufferCreateFilenameValue(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlParserInputBufferCreateFilenameValue \
#line 439
#else
XMLPUBVAR xmlParserInputBufferCreateFilenameFunc xmlParserInputBufferCreateFilenameValue;
#endif

XMLPUBFUN xmlOutputBufferCreateFilenameFunc * XMLCALL __xmlOutputBufferCreateFilenameValue(void);
#ifdef LIBXML_THREAD_ENABLED
#define xmlOutputBufferCreateFilenameValue \
#line 447
#else
XMLPUBVAR xmlOutputBufferCreateFilenameFunc xmlOutputBufferCreateFilenameValue;
#endif

#ifdef __cplusplus
}
#endif

#endif
#line 36 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/threads.h"
#ifdef __cplusplus
extern "C" {
#endif

XMLPUBFUN xmlMutexPtr XMLCALL
			xmlNewMutex	(void);
XMLPUBFUN void XMLCALL
			xmlMutexLock	(xmlMutexPtr tok);
XMLPUBFUN void XMLCALL
			xmlMutexUnlock	(xmlMutexPtr tok);
XMLPUBFUN void XMLCALL
			xmlFreeMutex	(xmlMutexPtr tok);

XMLPUBFUN xmlRMutexPtr XMLCALL
			xmlNewRMutex	(void);
XMLPUBFUN void XMLCALL
			xmlRMutexLock	(xmlRMutexPtr tok);
XMLPUBFUN void XMLCALL
			xmlRMutexUnlock	(xmlRMutexPtr tok);
XMLPUBFUN void XMLCALL
			xmlFreeRMutex	(xmlRMutexPtr tok);
#line 61
XMLPUBFUN void XMLCALL
			xmlInitThreads	(void);
XMLPUBFUN void XMLCALL
			xmlLockLibrary	(void);
XMLPUBFUN void XMLCALL
			xmlUnlockLibrary(void);
XMLPUBFUN int XMLCALL
			xmlGetThreadId	(void);
XMLPUBFUN int XMLCALL
			xmlIsMainThread	(void);
XMLPUBFUN void XMLCALL
			xmlCleanupThreads(void);
XMLPUBFUN xmlGlobalStatePtr XMLCALL
			xmlGetGlobalState(void);

#ifdef __cplusplus
}
#endif
#line 81
#endif
#line 218 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/xmlmemory.h"
// #include <libxml/globals.h>   (already above)
#endif
#endif

#endif
#line 1122 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\LibXML\\include\\libxml/tree.h"
#endif

#endif
#line 92 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
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
#line 50 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCollada.h"
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
#line 15 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\StdAfx.h"
// #include "FAXColladaParser.h"   (FCollada 3.05B, pasted in place)
#line 15 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\FAXColladaParser.h"
#ifndef _FU_DAE_PARSER_
#define _FU_DAE_PARSER_

#ifdef HAS_LIBXML

#ifndef _DAE_SYNTAX_H_
// #include "FUtils/FUDaeSyntax.h"   (FCollada 3.05B, pasted in place)
#line 15 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FUtils/FUDaeSyntax.h"
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
#line 22 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\FAXColladaParser.h"
#endif
#ifndef _FU_URI_H_
// #include "FUtils/FUUri.h"   (FCollada 3.05B, pasted in place)
#line 15 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FUtils/FUUri.h"
#ifndef _FU_URI_H_
#define _FU_URI_H_
#line 33
class FCOLLADA_EXPORT FUUri
{
public:
	enum Scheme
	{
		NONE,
		FILE,
		FTP,
		HTTP,
		HTTPS
	};

private:

	Scheme scheme;

	fstring schemeDelimiter;

	fstring username;

	fstring password;

	fstring hostname;

	uint32 port;

	fstring path;

	fstring query;

	fstring fragment;

	static bool IsAlpha(fchar fc);
	static bool IsDigit(fchar fc);
	static bool IsAlphaNumeric(fchar fc);
	static bool IsMark(fchar fc);
	static bool IsHex(fchar fc);
	static bool IsReserved(fchar fc);
#line 76
	void ExtractPathStack(const fstring& name, FStringList& list, bool includeFilename = false) const;
public:

	FUUri();
#line 84
	FUUri(const fstring& uri, bool escape = false);
#line 95
	FUUri(Scheme scheme, const fstring& username, const fstring& passwd, const fstring& host, uint32 port, const fstring& path = FC(""), const fstring& query = FC(""), const fstring& fragment = FC(""));
#line 102
	FUUri(Scheme scheme, const fstring& host, const fstring& path = FC(""), const fstring& fragment = FC(""));
#line 107
	FUUri(const fstring& path, const fstring& fragment);
#line 111
	inline Scheme GetScheme() const { return scheme; }
#line 115
	inline const fstring& GetSchemeDelimiter() const { return schemeDelimiter; }
#line 119
	fstring GetUserInformations() const;
#line 123
	inline const fstring& GetHostname() const { return hostname; }
#line 127
	inline uint32 GetPort() const { return port; }
#line 131
	inline void SetPort(uint32 _port) { port = _port; }
#line 135
	inline const fstring& GetPath() const { return path; }
#line 139
	inline const fstring& GetQuery() const { return query; }
#line 143
	inline void SetQuery(const fstring& _query) { query = _query; }
#line 147
	inline const fstring& GetFragment() const { return fragment; }
#line 151
	inline void SetFragment(const fstring& _fragment) { fragment = _fragment; }
#line 155
	fstring GetAuthority() const;
#line 159
	fstring GetAbsolutePath() const;
#line 164
	fstring GetAbsoluteUri(bool fragment = true) const;
#line 168
	fstring GetRelativeUri(const FUUri& uri) const;
#line 173
	fstring MakeRelative(const fstring& path) const;
#line 178
	fstring MakeAbsolute(const fstring& relativePath) const;
#line 182
	void MakeAbsolute(FUUri& uri) const;
#line 187
	FUUri Resolve(const fstring& relativePath) const;
#line 191
	bool IsFile() const;
#line 196
	static fstring Escape(const fstring& path);
};

typedef fm::vector<FUUri> FUUriList;

#endif
#line 25 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\FAXColladaParser.h"
#endif
#ifndef _FU_XML_PARSER_H_
// #include "FUtils/FUXmlParser.h"   (FCollada 3.05B, pasted in place)
#line 15 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FUtils/FUXmlParser.h"
#ifndef _FU_XML_PARSER_H_
#define _FU_XML_PARSER_H_

#ifdef HAS_LIBXML

typedef fm::pvector<struct _xmlNode> xmlNodeList;

namespace FUXmlParser
{

	FCOLLADA_EXPORT fm::string XmlToString(const char* s);
#ifdef UNICODE
	FCOLLADA_EXPORT fstring XmlToString(const fchar* s);
#endif
#line 31
	FCOLLADA_EXPORT xmlNode* FindChildByType(xmlNode* parent, const char* type);
	FCOLLADA_EXPORT xmlNode* FindChildByName(xmlNode* parent, const char* name);
	FCOLLADA_EXPORT void FindChildrenByType(xmlNode* parent, const char* type, xmlNodeList& nodes);
	FCOLLADA_EXPORT xmlNode* FindChildByProperty(xmlNode* parent, const char* prop, const char* val);
	FCOLLADA_EXPORT xmlNode* FindNodeInListByProperty(xmlNodeList list, const char* property, const char* prop);
#line 38
	FCOLLADA_EXPORT bool HasNodeProperty(xmlNode* node, const char* property);
	FCOLLADA_EXPORT fm::string ReadNodeProperty(xmlNode* node, const char* property);
	FCOLLADA_EXPORT FUCrc32::crc32 ReadNodePropertyCRC(xmlNode* node, const char* property);
	FCOLLADA_EXPORT const char* ReadNodeContentDirect(xmlNode* node);
	FCOLLADA_EXPORT fm::string ReadNodeContentFull(xmlNode* node);
};

inline bool IsEquivalent(const xmlChar* sz1, const char* sz2) { return IsEquivalent((const char*) sz1, sz2); }

#endif

#endif
#line 28 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\FAXColladaParser.h"
#endif

typedef fm::pair<xmlNode*, uint32> FAXNodeIdPair;
typedef fm::vector<FAXNodeIdPair> FAXNodeIdPairList;
namespace FUDaeParser
{
	using namespace FUXmlParser;
#line 37
	xmlNode* FindChildById(xmlNode* parent, const fm::string& id);
	xmlNode* FindChildByRef(xmlNode* parent, const char* ref);
	xmlNode* FindHierarchyChildById(xmlNode* hierarchyRoot, const char* id);
	xmlNode* FindHierarchyChildBySid(xmlNode* hierarchyRoot, const char* sid);
	xmlNode* FindTechnique(xmlNode* parent, const char* profile);
	xmlNode* FindTechniqueAccessor(xmlNode* parent);
	void FindParameters(xmlNode* parent, StringList& parameterNames, xmlNodeList& parameterNodes);
#line 46
	uint32 ReadSource(xmlNode* sourceNode, FloatList& array);
	void ReadSource(xmlNode* sourceNode, Int32List& array);
	void ReadSource(xmlNode* sourceNode, StringList& array);
	void ReadSource(xmlNode* sourceNode, FMVector3List& array);
	void ReadSource(xmlNode* sourceNode, FMMatrix44List& array);
	void ReadSourceInterleaved(xmlNode* sourceNode, fm::pvector<FloatList>& arrays);
	uint32 ReadSourceInterleaved(xmlNode* sourceNode, fm::pvector<FMVector2List>& arrays);
	uint32 ReadSourceInterleaved(xmlNode* sourceNode, fm::pvector<FMVector3List>& arrays);
	void ReadSourceInterpolation(xmlNode* sourceNode, UInt32List& array);
#line 57
	void ReadNodeTargetProperty(xmlNode* targetingNode, fm::string& pointer, fm::string& qualifier);
	void CalculateNodeTargetPointer(xmlNode* targetedNode, fm::string& pointer);
#line 61
	inline fm::string ReadNodeId(xmlNode* node) { return ReadNodeProperty(node, DAE_ID_ATTRIBUTE); }
	inline fm::string ReadNodeSid(xmlNode* node) { return ReadNodeProperty(node, DAE_SID_ATTRIBUTE); }
	inline fm::string ReadNodeSemantic(xmlNode* node) { return ReadNodeProperty(node, DAE_SEMANTIC_ATTRIBUTE); }
	inline fm::string ReadNodeName(xmlNode* node) { return ReadNodeProperty(node, DAE_NAME_ATTRIBUTE); }
	inline fm::string ReadNodeSource(xmlNode* node) { return ReadNodeProperty(node, DAE_SOURCE_ATTRIBUTE); }
	inline fm::string ReadNodeStage(xmlNode* node) { return ReadNodeProperty(node, DAE_STAGE_ATTRIBUTE); }
	FUUri ReadNodeUrl(xmlNode* node, const char* attribute=DAE_URL_ATTRIBUTE);
	uint32 ReadNodeCount(xmlNode* node);
	uint32 ReadNodeStride(xmlNode* node);
#line 72
	void ReadChildrenIds(xmlNode* node, FAXNodeIdPairList& pairs);
#line 75
	const char* SkipPound(const fm::string& id);
};

#endif

#endif
#line 16 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\StdAfx.h"
// #include "FAXColladaWriter.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\FAXColladaWriter.h"
#ifndef _FU_DAE_WRITER_H_
#define _FU_DAE_WRITER_H_

#ifdef HAS_LIBXML

#ifndef _FU_DAE_ENUM_H_
// #include "FUtils/FUDaeEnum.h"   (FCollada 3.05B, pasted in place)
#line 15 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FUtils/FUDaeEnum.h"
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
#line 21 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\FAXColladaWriter.h"
#endif
#ifndef _DAE_SYNTAX_H_
#line 24
#endif
#ifndef _FU_URI_H_
#line 27
#endif
#ifndef _FU_XML_WRITER_H_
// #include "FUtils/FUXmlWriter.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FUtils/FUXmlWriter.h"
#ifndef _FU_XML_WRITER_H_
#define _FU_XML_WRITER_H_

#ifdef HAS_LIBXML
#line 27
namespace FUXmlWriter
{
#line 32
	FCOLLADA_EXPORT xmlNode* CreateNode(const char* name);
#line 38
	FCOLLADA_EXPORT void AddChild(xmlNode* parent, xmlNode* child);
#line 43
	FCOLLADA_EXPORT void RenameNode(xmlNode* node, const char* newName);
#line 50
	FCOLLADA_EXPORT xmlNode* AddChild(xmlNode* parent, const char* name);
#line 59
	FCOLLADA_EXPORT xmlNode* AddChild(xmlNode* parent, const char* name, const char* content);
#ifdef UNICODE
	FCOLLADA_EXPORT xmlNode* AddChild(xmlNode* parent, const char* name, const fstring& content);
#endif
	inline xmlNode* AddChild(xmlNode* parent, const char* name, const fm::string& content) { return AddChild(parent, name, content.c_str()); }
	inline xmlNode* AddChild(xmlNode* parent, const char* name, FUSStringBuilder& content) { return AddChild(parent, name, content.ToCharPtr()); }
#line 70
	FCOLLADA_EXPORT void AddContentUnprocessed(xmlNode* node, const char* content);
	inline void AddContentUnprocessed(xmlNode* node, const fm::string& content) { return AddContentUnprocessed(node, content.c_str()); }
	inline void AddContentUnprocessed(xmlNode* node, FUSStringBuilder& content) { return AddContentUnprocessed(node, content.ToCharPtr()); }
#line 81
	template <typename T> inline xmlNode* AddChild(xmlNode* parent, const char* name, const T& value) { xmlNode* child = AddChild(parent, name); FUSStringBuilder builder; builder.set(value); AddContentUnprocessed(child, builder.ToCharPtr()); return child; }
#line 88
	 FCOLLADA_EXPORT void AddSibling(xmlNode* sibling, xmlNode* dangling);
#line 96
	 FCOLLADA_EXPORT xmlNode* AddSibling(xmlNode* sibling, const char* name);
#line 103
	 FCOLLADA_EXPORT xmlNode* InsertChild(xmlNode* parent, xmlNode* sibling, const char* name);
#line 112
	FCOLLADA_EXPORT xmlNode* AddChildOnce(xmlNode* parent, const char* name, const char* content=NULL);
	inline xmlNode* AddChildOnce(xmlNode* parent, const char* name, const fm::string& content) { return AddChildOnce(parent, name, content.c_str()); }
	inline xmlNode* AddChildOnce(xmlNode* parent, const char* name, FUSStringBuilder& content) { return AddChildOnce(parent, name, content.ToCharPtr()); }
#line 123
	template <typename T> inline xmlNode* AddChildOnce(xmlNode* parent, const char* name, const T& value) { xmlNode* child = AddChildOnce(parent, name); FUSStringBuilder builder(value); AddContentUnprocessed(child, builder.ToCharPtr()); return child; }
#line 130
	FCOLLADA_EXPORT void AddContent(xmlNode* node, const char* content);
#ifdef UNICODE
	FCOLLADA_EXPORT void AddContent(xmlNode* node, const fstring& content);
#endif
	inline void AddContent(xmlNode* node, const fm::string& content) { AddContent(node, content.c_str()); }
	inline void AddContent(xmlNode* node, FUSStringBuilder& content) { AddContent(node, content.ToCharPtr()); }
#line 140
	 FCOLLADA_EXPORT void ConvertFilename(fstring& str);
#line 146
	template <typename T> inline void AddContent(xmlNode* node, const T& value) { FUSStringBuilder builder(value); return AddContentUnprocessed(node, builder.ToCharPtr()); }
#line 153
	FCOLLADA_EXPORT void AddAttribute(xmlNode* node, const char* attributeName, const char* attributeValue);
#ifdef UNICODE
	FCOLLADA_EXPORT void AddAttribute(xmlNode* node, const char* attributeName, const fstring& attributeValue);
#endif
	inline void AddAttribute(xmlNode* node, const char* attributeName, FUSStringBuilder& attributeValue) { AddAttribute(node, attributeName, attributeValue.ToCharPtr()); }
	inline void AddAttribute(xmlNode* node, const char* attributeName, const fm::string& attributeValue) { AddAttribute(node, attributeName, attributeValue.c_str()); }
#line 165
	template <typename T> inline void AddAttribute(xmlNode* node, const char* attributeName, const T& attributeValue) { FUSStringBuilder builder; builder.set(attributeValue); AddAttribute(node, attributeName, builder.ToCharPtr()); }
#line 170
	FCOLLADA_EXPORT void RemoveAttribute(xmlNode* node, const char* attributeName);
#line 177
	FCOLLADA_EXPORT void AddChildSorted(xmlNode* parent, xmlNode* child);
#line 186
	FCOLLADA_EXPORT xmlNode* AddChildSorted(xmlNode* parent, const char* name, const char* content=NULL);
#line 192
	FCOLLADA_EXPORT void ReParentNode(xmlNode* node, xmlNode* newParent);
};

#endif

#endif
#line 30 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\FAXColladaWriter.h"
#endif
#line 40
namespace FUDaeWriter
{
	using namespace FUXmlWriter;
#line 50
	xmlNode* AddExtraTechniqueChild(xmlNode* parent, const char* profile);
#line 57
	xmlNode* AddTechniqueChild(xmlNode* parent, const char* profile);
#line 66
	xmlNode* AddParameter(xmlNode* parent, const char* name, const char* type);
#line 84
	xmlNode* AddInput(xmlNode* parent, const char* sourceId, const char* semantic, int32 offset=-1, int32 set=-1);
	inline xmlNode* AddInput(xmlNode* parent, const fm::string& sourceId, const char* semantic, int32 offset=-1, int32 set=-1) { return AddInput(parent, sourceId.c_str(), semantic, offset, set); }
#line 97
	xmlNode* AddArray(xmlNode* parent, const char* id, const char* arrayType, const char* content, size_t count);
#line 106
	xmlNode* AddArray(xmlNode* parent, const char* id, const FMMatrix44List& values);
#line 115
	xmlNode* AddArray(xmlNode* parent, const char* id, const FMVector3List& values);
#line 124
	xmlNode* AddArray(xmlNode* parent, const char* id, const FMVector2List& values);
#line 133
	xmlNode* AddArray(xmlNode* parent, const char* id, const FloatList& values);
#line 145
	xmlNode* AddArray(xmlNode* parent, const char* id, const StringList& values, const char* arrayType=DAE_NAME_ARRAY_ELEMENT);
#line 157
	xmlNode* AddAccessor(xmlNode* parent, const char* arrayId, size_t count, size_t stride=1, const char** parameters=NULL, const char* type=NULL);
	inline xmlNode* AddAccessor(xmlNode* parent, const fm::string& arrayId, size_t count, size_t stride=1, const char** parameters=NULL, const char* type=NULL) { return AddAccessor(parent, arrayId.c_str(), count, stride, parameters, type); }
#line 169
	xmlNode* AddSourceFloat(xmlNode* parent, const char* id, const FloatList& values, size_t stride=1, const char** parameters=NULL);
	inline xmlNode* AddSourceFloat(xmlNode* parent, const fm::string& id, const FloatList& values, size_t stride=1, const char** parameters=NULL) { return AddSourceFloat(parent, id.c_str(), values, stride, parameters); }
#line 179
	xmlNode* AddSourceFloat(xmlNode* parent, const char* id, const FloatList& values, const char* parameter=NULL);
	inline xmlNode* AddSourceFloat(xmlNode* parent, const fm::string& id, const FloatList& values, const char* parameter=NULL) { return AddSourceFloat(parent, id.c_str(), values, parameter); }
#line 188
	xmlNode* AddSourceFloat(xmlNode* parent, const char* id, const FMVector3List& values);
	inline xmlNode* AddSourceFloat(xmlNode* parent, const fm::string& id, const FMVector3List& values) { return AddSourceFloat(parent, id.c_str(), values); }
#line 197
	xmlNode* AddSourceFloat(xmlNode* parent, const char* id, const FMVector2List& values);
	inline xmlNode* AddSourceFloat(xmlNode* parent, const fm::string& id, const FMVector2List& values) { return AddSourceFloat(parent, id.c_str(), values); }
#line 206
	xmlNode* AddSourceTangent(xmlNode* parent, const char* id, const FMVector2List& values);
	inline xmlNode* AddSourceTangent(xmlNode* parent, const fm::string& id, const FMVector2List& values) { return AddSourceTangent(parent, id.c_str(), values); }
#line 215
	xmlNode* AddSourceMatrix(xmlNode* parent, const char* id, const FMMatrix44List& values);
	inline xmlNode* AddSourceMatrix(xmlNode* parent, const fm::string& id, const FMMatrix44List& values) { return AddSourceMatrix(parent, id.c_str(), values); }
#line 224
	xmlNode* AddSourceColor(xmlNode* parent, const char* id, const FMVector3List& values);
	inline xmlNode* AddSourceColor(xmlNode* parent, const fm::string& id, const FMVector3List& values) { return AddSourceColor(parent, id.c_str(), values); }
#line 233
	xmlNode* AddSourceTexcoord(xmlNode* parent, const char* id, const FMVector3List& values);
	inline xmlNode* AddSourceTexcoord(xmlNode* parent, const fm::string& id, const FMVector3List& values) { return AddSourceTexcoord(parent, id.c_str(), values); }
#line 242
	xmlNode* AddSourcePosition(xmlNode* parent, const char* id, const FMVector2List& values);
	inline xmlNode* AddSourcePosition(xmlNode* parent, const fm::string& id, const FMVector2List& values) { return AddSourcePosition(parent, id.c_str(), values); }
#line 251
	xmlNode* AddSourcePosition(xmlNode* parent, const char* id, const FMVector3List& values);
	inline xmlNode* AddSourcePosition(xmlNode* parent, const fm::string& id, const FMVector3List& values) { return AddSourcePosition(parent, id.c_str(), values); }
#line 260
	xmlNode* AddSourcePosition(xmlNode* parent, const char* id, const FMVector4List& values);
	inline xmlNode* AddSourcePosition(xmlNode* parent, const fm::string& id, const FMVector4List& values) { return AddSourcePosition(parent, id.c_str(), values); }
#line 271
	xmlNode* AddSourceString(xmlNode* parent, const char* id, const StringList& values, const char* parameter=NULL);
	inline xmlNode* AddSourceString(xmlNode* parent, const fm::string& id, const StringList& values, const char* parameter=NULL) { return AddSourceString(parent, id.c_str(), values, parameter); }
#line 280
	xmlNode* AddSourceIDRef(xmlNode* parent, const char* id, const StringList& values, const char* parameter=NULL);
	inline xmlNode* AddSourceIDRef(xmlNode* parent, const fm::string& id, const StringList& values, const char* parameter=NULL) { return AddSourceIDRef(parent, id.c_str(), values, parameter); }
#line 290
	xmlNode* AddSourceInterpolation(xmlNode* parent, const char* id, const FUDaeInterpolationList& interpolations);
	inline xmlNode* AddSourceInterpolation(xmlNode* parent, const fm::string& id, const FUDaeInterpolationList& values) { return AddSourceInterpolation(parent, id.c_str(), values); }
#line 300
	 fm::string AddNodeSid(xmlNode* node, const char* wantedSid);
#line 307
	 void AddNodeSid(xmlNode* node, fm::string& subId);
#ifdef UNICODE
	 void AddNodeSid(xmlNode* node, fstring& subId);
#endif
};

#endif

#endif
#line 18 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\StdAfx.h"
// #include "FUtils/FUXmlDocument.h"   (FCollada 3.05B, pasted in place)
#line 9 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FUtils/FUXmlDocument.h"
#ifndef _XML_DOCUMENT_H_
#define _XML_DOCUMENT_H_

class FUFileManager;
struct _xmlDoc;
typedef struct _xmlDoc xmlDoc;

#ifdef HAS_LIBXML
#line 20
class FCOLLADA_EXPORT FUXmlDocument
{
private:
	bool isParsing;
	fstring filename;
	xmlDoc* xmlDocument;

public:
#line 33
	FUXmlDocument(FUFileManager* manager, const fchar* filename, bool isParsing);
#line 39
	FUXmlDocument(const char* data, size_t length = (size_t) ~0);
#line 43
	~FUXmlDocument();
#line 48
	xmlNode* CreateRootNode(const char* name);
#line 51
	void ReleaseXmlData();
#line 56
	xmlNode* GetRootNode();
#line 61
	bool Write(const char* encoding = "utf-8");
};

#endif

#endif
#line 19 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\StdAfx.h"
// #include "FUtils/FUFileManager.h"   (FCollada 3.05B, pasted in place)
#line 15 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FUtils/FUFileManager.h"
#ifndef _FU_FILE_MANAGER_H_
#define _FU_FILE_MANAGER_H_

#ifndef _FU_URI_H_
#line 20
#endif

#ifndef _FM_ARRAY_H_
#line 24
#endif

class FUFile;
#line 31
typedef IFunctor1<const FUUri&, fstring> SchemeLoadCallback;
#line 36
typedef IFunctor1<const FUUri&, bool> SchemeExistsCallback;
#line 43
typedef IFunctor2<const fstring&, fstring&, bool>	SchemePreProcessCallback;
#line 47
typedef IFunctor2<const fstring&, size_t, void> SchemeOnCompleteCallback;
#line 52
typedef IFunctor3<const FUUri&, SchemeOnCompleteCallback*, size_t, void> SchemeRequestFileCallback;
#line 58
struct FCOLLADA_EXPORT SchemeCallbacks
{
	SchemeLoadCallback* load;
	SchemeExistsCallback* exists;
	fm::vector<SchemePreProcessCallback*> openers;
	SchemeRequestFileCallback* request;
#line 66
	SchemeCallbacks();

	SchemeCallbacks(const SchemeCallbacks& copy);

	~SchemeCallbacks();
};
#line 75
FCOLLADA_EXPORT SchemeCallbacks* NewSchemeCallbacks();
#line 80
class FCOLLADA_EXPORT FUFileManager
{
private:
	typedef fm::map<FUUri::Scheme, SchemeCallbacks*> SchemeCallbackMap;

	FUUriList pathStack;
	bool forceAbsolute;

	SchemeCallbackMap schemeCallbackMap;
public:
#line 93
	FUFileManager();
#line 96
	~FUFileManager();
#line 101
	inline const FUUri& GetCurrentUri() const { return pathStack.back(); }
#line 107
	void PushRootPath(const fstring& path);
#line 113
	void PushRootFile(const fstring& filename);
#line 116
	void PopRootPath();
	void PopRootFile();
#line 125
	FUFile* OpenFile(const fstring& filename, bool write=false, SchemeOnCompleteCallback* onComplete=NULL, size_t userData = 0);
#line 132
	static bool MakeDirectory(const fstring& directory);
#line 137
	bool FileExists(const fstring& filename);
#line 142
	static fstring StripFileFromPath(const fstring& filename);
#line 147
	static fstring GetFileExtension(const fstring& filename);
#line 152
	static fstring ExtractNetworkHostname(fstring& filename);
#line 157
	void SetForceAbsoluteFlag(bool _forceAbsolute) { forceAbsolute = _forceAbsolute; }
#line 162
	fstring CleanUri(const FUUri& uri);
#line 166
	static fstring GetApplicationFolderName();
#line 170
	static fstring GetModuleFolderName();
#line 177
	static void GetFolderFromPath(const fstring& folder, fstring& path);
#line 185
	void SetSchemeCallbacks(FUUri::Scheme scheme, SchemeCallbacks* callbacks);
#line 190
	void RemoveSchemeCallbacks(FUUri::Scheme scheme);
#line 193
	void RemoveAllSchemeCallbacks();
#line 197
	void CloneSchemeCallbacks(const FUFileManager* srcFileManager);
};

#endif
#line 20 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\StdAfx.h"
// #include "FUtils/FUUniqueStringMap.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FUtils/FUUniqueStringMap.h"
#ifndef _FU_UNIQUE_ID_MAP_H_
#define _FU_UNIQUE_ID_MAP_H_
#line 24
template <class CH>
class FCOLLADA_EXPORT FUUniqueStringMapT
{
private:
	typedef fm::map<uint32, uint32> NumberMap;
	typedef fm::map<fm::stringT<CH>, NumberMap> StringMap;

	StringMap values;

public:
#line 38
	void insert(fm::stringT<CH>& wantedStr);
	void insert(const fm::stringT<CH>& wantedStr) { fm::stringT<CH> a = wantedStr; insert(a); }
#line 43
	bool contains(const fm::stringT<CH>& str) const;
#line 47
	void erase(const fm::stringT<CH>& str);
};

typedef FUUniqueStringMapT<char> FUSUniqueStringMap;
typedef FUUniqueStringMapT<fchar> FUUniqueStringMap;

#endif
#line 22 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\StdAfx.h"
using namespace FUDaeParser;
using namespace FUDaeWriter;

// #include "FAXStructures.h"   (FCollada 3.05B, pasted in place)
#line 9 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\FAXStructures.h"
#ifndef _FAXSTRUCTURES_H_
#define _FAXSTRUCTURES_H_

class FCDObject;
class FCDENode;
class FCDEType;
class FCDEntity;
class FCDTargetedEntity;
class FCDTransform;
class FCDSceneNode;
class FCDEntityInstance;
class FCDEmitterInstance;
class FCDControllerInstance;
class FCDGeometryInstance;
class FCDSkinController;
class FCDAnimated;
class FCDAnimatedCustom;
class FCDAnimation;
class FCDAnimationChannel;
class FCDAnimationCurve;
class FCDAnimationMultiCurve;
class FCDPhysicsRigidBodyParameters;
class FCDPhysicsModel;
class FCDEffectParameter;
class FCDEffectParameterSurface;
class FCDEffectParameterSampler;
class FCDEffectStandard;
class FCDEffectProfileFX;
class FCDEffectTechnique;
class FCDTexture;
class FCDMaterial;
class FCDController;
class FCDSkinController;
class FCDMorphController;
class FCDGeometrySource;
class FCDGeometryPolygons;
class FCDGeometryMesh;
class FCDNURBSSpline;
class FCDSpline;
class FCDEmitterObject;
class FCDMeshPosition;
class FCDEmitterParticle;
class FCDParticleModifier;
class FCDPositionObject;
class FCDOrientationObject;
class FCDBasicRotationModifier;
class FCDColourTintModifier;
class FCDParticleAgeSizeModifier;
class FCDRandomAccelModifier;
class FCDRandomOffsetModifier;
class FCDRotationModifier;
class FCDTranslationModifier;
class FCDVelocityAlignModifier;
class FCDWorldAgeSizeModifier;
class FCDForceDrag;
class FCDForceDragDamping;
class FCDEmitter;
class FCDExternalReferenceManager;

typedef bool(* XMLLoadFunc)(FCDObject*, xmlNode* node);
typedef fm::map<const FUObjectType*, XMLLoadFunc> XMLLoadFuncMap;

typedef xmlNode* (* XMLWriteFunc)(FCDObject*, xmlNode* node);
typedef fm::map<const FUObjectType*, XMLWriteFunc> XMLWriteFuncMap;
#line 81
struct FCDTargetedEntityData
{
	fm::string targetId;
};
typedef fm::map<FCDTargetedEntity*, FCDTargetedEntityData> FCDTargetedEntityDataMap;
#line 90
struct FCDEmitterInstanceData
{
	StringList forceInstUris;
};
typedef fm::map<FCDEmitterInstance*, FCDEmitterInstanceData> FCDEmitterInstanceDataMap;
#line 99
struct FCDAnimatedData
{
	fm::string pointer;
#line 108
};
typedef fm::map<FCDAnimated*, FCDAnimatedData> FCDAnimatedDataMap;
#line 114
struct FAXAnimationChannelDefaultValue
{
	FCDAnimationCurve* curve;
	float defaultValue;
#line 120
	FAXAnimationChannelDefaultValue() : curve(NULL), defaultValue(0.0f) {}

	FAXAnimationChannelDefaultValue(FCDAnimationCurve* c, float f) { curve = c; defaultValue = f; }
};
typedef fm::vector<FAXAnimationChannelDefaultValue> FAXAnimationChannelDefaultValueList;

struct FCDAnimationChannelData
{

	fm::string targetPointer;
	fm::string targetQualifier;
#line 133
	fm::string driverPointer;
	int32 driverQualifier;
#line 137
	FAXAnimationChannelDefaultValueList defaultValues;
	FCDAnimated* animatedValue;

	FCDAnimationChannelData()
	{
		driverQualifier = -1;
	}
};
typedef fm::map<FCDAnimationChannel*, FCDAnimationChannelData> FCDAnimationChannelDataMap;
#line 150
struct FCDAnimationCurveData
{
	int32 targetElement;
	fm::string targetQualifier;

	FCDAnimationCurveData()
	{
		targetElement = -1;
	}
};
typedef fm::map<FCDAnimationCurve*, FCDAnimationCurveData> FCDAnimationCurveDataMap;
#line 165
struct FCDAnimationData
{
	FAXNodeIdPairList childNodes;
};
typedef fm::map<FCDAnimation*, FCDAnimationData> FCDAnimationDataMap;
#line 174
typedef fm::map<xmlNode*, FUUri> ModelInstanceNameNodeMap;
struct FCDPhysicsModelData
{
	ModelInstanceNameNodeMap modelInstancesMap;
};
typedef fm::map<FCDPhysicsModel*, FCDPhysicsModelData> FCDPhysicsModelDataMap;
#line 184
struct FCDEffectParameterSamplerData
{
	fm::string surfaceSid;
};
typedef fm::map<FCDEffectParameterSampler*, FCDEffectParameterSamplerData> FCDEffectParameterSamplerDataMap;
#line 193
struct FCDTextureData
{
	fm::string samplerSid;
};
typedef fm::map<FCDTexture*, FCDTextureData> FCDTextureDataMap;
#line 202
struct FCDSkinControllerData
{
	bool jointAreSids;
};
typedef fm::map<FCDSkinController*, FCDSkinControllerData> FCDSkinControllerDataMap;
#line 211
struct FCDMorphControllerData
{
	fm::string targetId;
};
typedef fm::map<FCDMorphController*, FCDMorphControllerData> FCDMorphControllerDataMap;
#line 220
struct FCDGeometrySourceData
{
	xmlNode* sourceNode;
};
typedef fm::map<FCDGeometrySource*, FCDGeometrySourceData> FCDGeometrySourceDataMap;
#line 227
typedef fm::pvector<FCDAnimationChannel> FCDAnimationChannelList;

#endif
#line 234
struct FCDocumentLinkData
{
	FCDEmitterInstanceDataMap emitterInstanceDataMap;
	FCDTargetedEntityDataMap targetedEntityDataMap;
	FCDAnimationChannelDataMap animationChannelData;
	FCDAnimatedDataMap animatedData;
	FCDAnimationCurveDataMap animationCurveData;
	FCDAnimationDataMap animationData;
	FCDPhysicsModelDataMap physicsModelDataMap;
	FCDEffectParameterSamplerDataMap effectParameterSamplerDataMap;
	FCDTextureDataMap textureDataMap;
	FCDSkinControllerDataMap skinControllerDataMap;
	FCDMorphControllerDataMap morphControllerDataMap;
	FCDGeometrySourceDataMap geometrySourceDataMap;
};

typedef fm::map<const FCDocument*, FCDocumentLinkData> DocumentLinkDataMap;
#line 27 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\StdAfx.h"
#endif
#line 10 ".\\FAXAnimationImport.cpp"
// #include "FArchiveXML.h"   (FCollada 3.05B, pasted in place)
#line 9 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\FArchiveXML.h"
#ifndef _FCPARCHIVECOLLADA_H_
#define _FCPARCHIVECOLLADA_H_

class FCDParameterAnimatable;

#ifndef _FAXSTRUCTURES_H_
#line 16
#endif
#ifndef _FCOLLADA_PLUGIN_H_
// #include "FColladaPlugin.h"   (FCollada 3.05B, pasted in place)
#line 15 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FColladaPlugin.h"
#ifndef _FCOLLADA_PLUGIN_H_
#define _FCOLLADA_PLUGIN_H_

#ifndef _FU_PLUGIN_H_
// #include "FUtils/FUPlugin.h"   (FCollada 3.05B, pasted in place)
#line 9 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUPlugin.h"
#ifndef _FU_PLUGIN_H_
#define _FU_PLUGIN_H_

#ifndef _FU_TRACKER_H_
#line 14
#endif
#line 21
class FCOLLADA_EXPORT FUPlugin : public FUTrackable
{
private:
	DeclareObjectType(FUTrackable);

protected:
#line 31
	virtual ~FUPlugin() {}

public:
#line 36
	virtual const char* GetPluginName() const = 0;
#line 42
	virtual uint32 GetPluginVersion() const = 0;
};

#endif
#line 20 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FColladaPlugin.h"
#endif

class FUPluginManager;
class FCDObject;
class FCDENode;
class FCDETechnique;
#line 36
class FCOLLADA_EXPORT FCPExtraTechnique : public FUPlugin
{
private:
	DeclareObjectType(FUPlugin);

public:
#line 44
	virtual const char* GetProfileName() = 0;
#line 56
	virtual FUTrackable* ReadFromArchive(FCDETechnique* techniqueNode, FUObject* parent) = 0;
#line 63
	virtual void WriteToArchive(FCDETechnique* techniqueNode, const FUTrackable* handle) const = 0;

protected:
#line 68
	virtual ~FCPExtraTechnique() {}
};
#line 80
class FCOLLADA_EXPORT FCPArchive: public FUPlugin
{
private:
	DeclareObjectType(FUPlugin);

public:
#line 88
	virtual bool IsImportSupported() = 0;
#line 92
	virtual bool IsExportSupported() = 0;
#line 96
	virtual bool IsPartialExportSupported() = 0;
#line 101
	virtual bool IsExtensionSupported(const char* ext) = 0;
#line 105
	virtual int GetSupportedExtensionsCount() = 0;
#line 112
	virtual const char* GetSupportedExtensionAt(int index) = 0;
#line 117
	virtual bool AddExtraExtension(const char* ){ return false; }
#line 123
	virtual bool RemoveExtraExtension(const char* ){ return false; }
#line 129
	virtual bool ImportFile(const fchar* filePath, FCDocument* document) = 0;
#line 139
	virtual bool ImportFileFromMemory(const fchar* filePath, FCDocument* document, const void* contents, size_t length) = 0;
#line 145
	virtual bool ExportFile(FCDocument* document, const fchar* filePath) = 0;
#line 153
	virtual bool StartExport(const fchar* absoluteFilePath) = 0;
#line 160
	virtual bool ExportObject(FCDObject* object) = 0;
#line 167
	virtual bool EndExport(fm::vector<uint8>& outData) = 0;
#line 175
	virtual bool EndExport(const fchar* filePath) = 0;
#line 181
	virtual bool ImportObject(FCDObject* object, const fm::vector<uint8>& data) = 0;

protected:
#line 186
	virtual ~FCPArchive() {}
};
#line 192
class FCOLLADA_EXPORT FColladaPluginManager : public FUObject
{
private:
	DeclareObjectType(FColladaPluginManager);

	typedef FUObjectContainer<FCPExtraTechnique> FCPExtraList;
	typedef FUObjectContainer<FCPArchive> FCPArchiveList;

	FCPExtraList extraTechniquePlugins;
	FCPArchiveList archivePlugins;

	FUPluginManager* loader;

public:

	FColladaPluginManager();
#line 211
	size_t GetArchivePluginsCount() { return archivePlugins.size(); }
#line 216
	FCPArchive* GetArchivePlugin(size_t index){ FUAssert(index < archivePlugins.size(), return NULL); return archivePlugins[index]; }
#line 222
	bool RegisterPlugin(FUPlugin* plugin);
	DEPRECATED(3.05A, RegisterPlugin) inline bool AddPlugin(FCPExtraTechnique* plugin) { return RegisterPlugin(plugin); }
	DEPRECATED(3.05A, RegisterPlugin) inline bool AddArchivePlugin(FCPArchive* plugin) { return RegisterPlugin(plugin); }
#line 230
	bool LoadDocumentFromFile(FCDocument* document, const fchar* filename);
	DEPRECATED(3.05A, LoadDocumentFromFile) inline bool LoadDocument(FCDocument* document, const fchar* filename) { return LoadDocumentFromFile(document, filename); }
#line 238
	bool LoadDocumentFromMemory(const fchar* filename, FCDocument* document, void* data, size_t length);
#line 244
	bool SaveDocumentToFile(FCDocument* document, const fchar* filename);
	DEPRECATED(3.05A, SaveDocumentToFile) inline bool SaveDocument(FCDocument* document, const fchar* filename) { return SaveDocumentToFile(document, filename); }

private:
#line 250
	virtual ~FColladaPluginManager();
#line 253
	FCPArchive* FindArchivePlugin(const fchar* filename);
#line 256
	typedef fm::pvector<FCDETechnique> FCDETechniqueList;
	void PostImportDocument(FCDocument* document);
	void PreExportDocument(FCDocument* document, FCDETechniqueList& techniques);
	void PostExportDocument(FCDocument* document, FCDETechniqueList& techniques);
#line 262
	typedef fm::map<uint32, FCPExtraTechnique*> FCPExtraMap;
	void CreateExtraTechniquePluginMap(FCPExtraMap& map);
};

#endif
#line 19 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\FArchiveXML.h"
#endif
#ifndef _FC_DOCUMENT_H_
// #include "FCDocument/FCDocument.h"   (FCollada 3.05B, pasted in place)
#line 20 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDocument.h"
#ifndef _FC_DOCUMENT_H_
#define _FC_DOCUMENT_H_

#ifndef __FCD_OBJECT_H_
// #include "FCDocument/FCDObject.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDObject.h"
#ifndef __FCD_OBJECT_H_
#define __FCD_OBJECT_H_

#ifndef _FU_PARAMETERIZABLE_H_
// #include "FUtils/FUParameterizable.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FUtils/FUParameterizable.h"
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
#line 19 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDObject.h"
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
#line 25 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDocument.h"
#endif
#ifndef _FU_PARAMETER_H_
// #include "FUtils/FUParameter.h"   (FCollada 3.05B, pasted in place)
#line 9 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FUtils/FUParameter.h"
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
#line 28 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDocument.h"
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
#line 22 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\FArchiveXML.h"
#endif
#ifndef _FCD_MATERIAL_STANDARD_H_
// #include "FCDocument/FCDEffectStandard.h"   (FCollada 3.05B, pasted in place)
#line 20 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDEffectStandard.h"
#ifndef _FCD_MATERIAL_STANDARD_H_
#define _FCD_MATERIAL_STANDARD_H_

#ifndef _FU_DAE_ENUM_H_
#line 25
#endif
#ifndef _FCD_EFFECT_PROFILE_H_
// #include "FCDocument/FCDEffectProfile.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDEffectProfile.h"
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
#line 28 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDEffectStandard.h"
#endif
#ifndef _FCD_EFFECT_PARAMETER_H_
// #include "FCDocument/FCDEffectParameter.h"   (FCollada 3.05B, pasted in place)
#line 15 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDEffectParameter.h"
#ifndef _FCD_EFFECT_PARAMETER_H_
#define _FCD_EFFECT_PARAMETER_H_

#ifndef __FCD_OBJECT_H_
#line 20
#endif
#ifndef _FCD_PARAMETER_ANIMATABLE_H_
// #include "FCDocument/FCDParameterAnimatable.h"   (FCollada 3.05B, pasted in place)
#line 9 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDParameterAnimatable.h"
#ifndef _FCD_PARAMETER_ANIMATABLE_H_
#define _FCD_PARAMETER_ANIMATABLE_H_
#line 17
#ifndef _FU_PARAMETER_H_
#line 19
#endif
#ifndef _FM_ANGLEAXIS_H_
// #include <FMath/FMAngleAxis.h>   (FCollada 3.05B, pasted in place)
#line 14 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FMath/FMAngleAxis.h"
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
#line 22 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDParameterAnimatable.h"
#endif
#ifndef _FM_LOOKAT_H_
// #include <FMath/FMLookAt.h>   (FCollada 3.05B, pasted in place)
#line 14 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FMath/FMLookAt.h"
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
#line 25 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDParameterAnimatable.h"
#endif
#ifndef _FM_SKEW_H_
// #include <FMath/FMSkew.h>   (FCollada 3.05B, pasted in place)
#line 14 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FMath/FMSkew.h"
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
#line 28 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDParameterAnimatable.h"
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
#line 23 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDEffectParameter.h"
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
#line 31 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDEffectStandard.h"
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
#line 25 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\FArchiveXML.h"
#endif
#ifndef _FCD_ENTITY_H_
// #include "FCDocument/FCDEntity.h"   (FCollada 3.05B, pasted in place)
#line 20 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDEntity.h"
#ifndef _FCD_ENTITY_H_
#define _FCD_ENTITY_H_

#ifndef __FCD_OBJECT_WITH_ID_H_
// #include "FCDocument/FCDObjectWithId.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDObjectWithId.h"
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
#line 25 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDEntity.h"
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
#line 28 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcolladaplugins\\farchivexml\\FArchiveXML.h"
#endif

typedef fm::pvector<FCDEffectParameter> FCDEffectParameterList;

#define FCP_ARCHIVECOLLADA_NAME "XML Archive Plug-in"

#define NUM_EXTENSIONS 2

class FArchiveXML : public FCPArchive
{
private:
	DeclareObjectType(FCPArchive);
#line 44
	static XMLLoadFuncMap xmlLoadFuncs;
#line 49
	static XMLWriteFuncMap xmlWriteFuncs;
#line 54
	static DocumentLinkDataMap documentLinkDataMap;
	static int loadedDocumentCount;
#line 62
	StringList extraExtensions;

public:
	FArchiveXML();
	virtual ~FArchiveXML();
#line 71
	virtual bool IsImportSupported(){ return true; }
	virtual bool IsExportSupported(){ return true; }
	virtual bool IsPartialExportSupported(){ return true; }

	virtual bool IsExtensionSupported(const char* ext);
	virtual int GetSupportedExtensionsCount(){ return NUM_EXTENSIONS + (int)extraExtensions.size(); }
	virtual const char* GetSupportedExtensionAt(int index);

	virtual bool AddExtraExtension(const char* ext);
	virtual bool RemoveExtraExtension(const char* ext);

	virtual bool ImportFile(const fchar* filePath, FCDocument* fcdocument);
	virtual bool ImportFileFromMemory(const fchar* filePath, FCDocument* fcdocument, const void* contents, size_t length);

	virtual bool ExportFile(FCDocument* fcdocument, const fchar* filePath);

	virtual bool StartExport(const fchar* absoluteFilePath);
	virtual bool ExportObject(FCDObject* object);
	virtual bool EndExport(fm::vector<uint8>& outData);
	virtual bool EndExport(const fchar* filePath);

	virtual bool ImportObject(FCDObject* object, const fm::vector<uint8>& data);
#line 96
	virtual const char* GetPluginName() const { return FCP_ARCHIVECOLLADA_NAME; }
	virtual uint32 GetPluginVersion() const { return 1; }

public:
#line 104
	static void Initialize();
#line 109
	static void ClearIntermediateData();
#line 117
	bool Import(FCDocument* theDocument, xmlNode* colladaNode);
#line 125
	bool ExportDocument(FCDocument* theDocument, xmlNode* colladaNode);
#line 134
	static bool LoadSwitch(FCDObject* object, const FUObjectType* objectType, xmlNode* node);
#line 143
	static xmlNode* WriteSwitch(FCDObject* object, const FUObjectType* objectType, xmlNode* parentNode);
#line 153
	static xmlNode* WriteParentSwitch(FCDObject* object, const FUObjectType* objectType, xmlNode* parentNode);
#line 162
	static bool LoadObject(FCDObject* object, xmlNode* node);

	static bool LoadExtra(FCDObject* object, xmlNode* node);
	static bool LoadExtraNode(FCDObject* object, xmlNode* node);
	static bool LoadExtraTechnique(FCDObject* object, xmlNode* node);
	static bool LoadExtraType(FCDObject* object, xmlNode* node);
	static bool LoadAsset(FCDObject* object, xmlNode* node);
	static bool LoadAssetContributor(FCDObject* object, xmlNode* node);
	static bool LoadEntityReference(FCDObject* object, xmlNode* node);
	static bool LoadExternalReferenceManager(FCDObject* object, xmlNode* node);
	static bool LoadPlaceHolder(FCDObject* object, xmlNode* node);

	static void FindAnimationChannelsArrayIndices(FCDocument* fcdocument, xmlNode* targetArray, Int32List& animatedIndices);
	static void RegisterLoadedDocument(FCDocument* document);
#line 180
	static bool LoadEntity(FCDObject* object, xmlNode* node);
	static bool LoadTargetedEntity(FCDObject* object, xmlNode* node);
	static bool LoadSceneNode(FCDObject* object, xmlNode* node);
	static bool LoadTransform(FCDObject* object, xmlNode* node);
	static bool LoadTransformLookAt(FCDObject* object, xmlNode* node);
	static bool LoadTransformMatrix(FCDObject* object, xmlNode* node);
	static bool LoadTransformRotation(FCDObject* object, xmlNode* node);
	static bool LoadTransformScale(FCDObject* object, xmlNode* node);
	static bool LoadTransformSkew(FCDObject* object, xmlNode* node);
	static bool LoadTransformTranslation(FCDObject* object, xmlNode* node);

	static bool LoadFromExtraSceneNode(FCDSceneNode* sceneNode);
	static uint32 GetTransformType(xmlNode* node);
#line 197
	static bool LoadController(FCDObject* object, xmlNode* node);
	static bool LoadSkinController(FCDObject* object, xmlNode* node);
	static bool LoadMorphController(FCDObject* object, xmlNode* node);
	static FCDSkinController* FindSkinController(FCDControllerInstance* controllerInstance, FCDEntity* entity);
#line 205
	static bool LoadEntityInstance(FCDObject* object, xmlNode* node);
	static bool LoadEmitterInstance(FCDObject* object, xmlNode* node);
	static bool LoadGeometryInstance(FCDObject* object, xmlNode* node);
	static bool LoadControllerInstance(FCDObject* object, xmlNode* node);
	static bool LoadMaterialInstance(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsForceFieldInstance(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsModelInstance(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsRigidBodyInstance(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsRigidConstraintInstance(FCDObject* object, xmlNode* node);

	static bool LinkControllerInstance(FCDControllerInstance* controllerInstance);
	static bool LinkEmitterInstance(FCDEmitterInstance* emitterInstance);

	static bool ImportEmittedInstanceList(FCDEmitterInstance* emitterInstance, xmlNode* node);
	static uint32 GetEntityInstanceType(xmlNode* node);
#line 224
	static bool LoadMaterial(FCDObject* object, xmlNode* node);
	static bool LoadEffectCode(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameter(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameterBool(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameterFloat(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameterFloat2(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameterFloat3(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameterInt(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameterMatrix(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameterSampler(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameterString(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameterSurface(FCDObject* object, xmlNode* node);
	static bool LoadEffectParameterVector(FCDObject* object, xmlNode* node);
	static bool LoadEffectPass(FCDObject* object, xmlNode* node);
	static bool LoadEffectPassShader(FCDObject* object, xmlNode* node);
	static bool LoadEffectPassState(FCDObject* object, xmlNode* node);
	static bool LoadEffectProfile(FCDObject* object, xmlNode* node);
	static bool LoadEffectProfileFX(FCDObject* object, xmlNode* node);
	static bool LoadEffectStandard(FCDObject* object, xmlNode* node);
	static bool LoadEffectTechnique(FCDObject* object, xmlNode* node);
	static bool LoadEffect(FCDObject* object, xmlNode* node);
	static bool LoadTexture(FCDObject* object, xmlNode* node);
	static bool LoadImage(FCDObject* object, xmlNode* node);

	static bool ParseColorTextureParameter(FCDEffectStandard* effectStandard, xmlNode* parameterNode, FCDEffectParameterColor4* value, uint32 bucketIndex);
	static bool ParseFloatTextureParameter(FCDEffectStandard* effectStandard, xmlNode* parameterNode, FCDEffectParameterFloat* value, uint32 bucketIndex);
	static bool ParseSimpleTextureParameter(FCDEffectStandard* effectStandard, xmlNode* parameterNode, uint32 bucketIndex);
	static uint32 GetEffectParameterType(xmlNode* parameterNode);
#line 256
	static bool LoadAnimated(FCDObject* object, xmlNode* node);
	static bool LoadAnimationChannel(FCDObject* object, xmlNode* node);
	static bool LoadAnimationCurve(FCDObject* object, xmlNode* node);
	static bool LoadAnimationMultiCurve(FCDObject* object, xmlNode* node);
	static bool LoadAnimation(FCDObject* object, xmlNode* node);
	static bool LoadAnimationClip(FCDObject* object, xmlNode* node);
#line 267
	static bool LoadCamera(FCDObject* object, xmlNode* node);
#line 272
	static bool LoadLight(FCDObject* object, xmlNode* node);
#line 277
	static bool LoadGeometrySource(FCDObject* object, xmlNode* node);
	static bool LoadGeometryMesh(FCDObject* object, xmlNode* node);
	static bool LoadGeometryNURBSSurface(FCDObject* object, xmlNode* node);
	static bool LoadGeometry(FCDObject* object, xmlNode* node);
	static bool LoadGeometryPolygons(FCDObject* object, xmlNode* node);
	static bool LoadGeometrySpline(FCDObject* object, xmlNode* node);
	static bool LoadSpline(FCDObject* object, xmlNode* node);
	static bool LoadBezierSpline(FCDObject* object, xmlNode* node);
	static bool LoadLinearSpline(FCDObject* object, xmlNode* node);
	static bool LoadNURBSSpline(FCDObject* object, xmlNode* node);

	static void SetTypeFCDGeometrySource(FCDGeometrySource* geometrySource, FUDaeGeometryInput::Semantic type);
#line 293
	static bool LoadPhysicsRigidBodyParameters(FCDPhysicsRigidBodyParameters* parameters, xmlNode* techniqueNode, FCDPhysicsRigidBodyParameters* defaultParameters = NULL);
	static bool AttachModelInstancesFCDPhysicsModel(FCDPhysicsModel* physicsModel);

	static bool LoadPhysicsShape(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsAnalyticalGeometry(FCDObject* object, xmlNode* node);
	static bool LoadPASBox(FCDObject* object, xmlNode* node);
	static bool LoadPASCapsule(FCDObject* object, xmlNode* node);
	static bool LoadPASTaperedCapsule(FCDObject* object, xmlNode* node);
	static bool LoadPASCylinder(FCDObject* object, xmlNode* node);
	static bool LoadPASTaperedCylinder(FCDObject* object, xmlNode* node);
	static bool LoadPASPlane(FCDObject* object, xmlNode* node);
	static bool LoadPASSphere(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsMaterial(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsModel(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsRigidBody(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsRigidConstraint(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsScene(FCDObject* object, xmlNode* node);
#line 314
	static bool LoadEmitter(FCDObject* object, xmlNode* node);
#line 319
	static bool LoadForceField(FCDObject* object, xmlNode* node);
#line 324
	template <class T> static bool LoadLibrary(FCDObject* object, xmlNode* node);
	static bool LoadAnimationLibrary(FCDObject* object, xmlNode* node);
	static bool LoadAnimationClipLibrary(FCDObject* object, xmlNode* node);
	static bool LoadCameraLibrary(FCDObject* object, xmlNode* node);
	static bool LoadControllerLibrary(FCDObject* object, xmlNode* node);
	static bool LoadEffectLibrary(FCDObject* object, xmlNode* node);
	static bool LoadEmitterLibrary(FCDObject* object, xmlNode* node);
	static bool LoadForceFieldLibrary(FCDObject* object, xmlNode* node);
	static bool LoadGeometryLibrary(FCDObject* object, xmlNode* node);
	static bool LoadImageLibrary(FCDObject* object, xmlNode* node);
	static bool LoadLightLibrary(FCDObject* object, xmlNode* node);
	static bool LoadMaterialLibrary(FCDObject* object, xmlNode* node);
	static bool LoadVisualSceneNodeLibrary(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsModelLibrary(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsMaterialLibrary(FCDObject* object, xmlNode* node);
	static bool LoadPhysicsSceneLibrary(FCDObject* object, xmlNode* node);
#line 344
	static bool LoadExtraNodeChildren(FCDENode* fcdenode, xmlNode* customNode);
#line 349
	static bool ProcessChannels(FCDAnimated* animated, FCDAnimationChannelList& channels);
	static void LoadAnimatable(FCDParameterAnimatable* animatable, xmlNode* node);
	static void LoadAnimatable(FCDocument* document, FCDParameterListAnimatable* animatable, xmlNode* node);

	static xmlNode* FindChildByIdFCDAnimation(FCDAnimation* animation, const fm::string& _id);

	static void FindAnimationChannels(FCDocument* fcdocument, const fm::string& pointer, FCDAnimationChannelList& channels);
	static void FindAnimationChannels(FCDAnimation* animation, const fm::string& pointer, FCDAnimationChannelList& targetChannels);

	static FCDAnimatedCustom* CreateFCDAnimatedCustom(FCDObject* document, xmlNode* node);
#line 364
	static bool LinkDriver(FCDocument* fcdoument, FCDAnimated* animated, const fm::string& animatedTargetPointer);
	static bool LinkDriver(FCDAnimation* animation, FCDAnimated* animated, const fm::string& animatedTargetPointer);
	static bool LinkDriver(FCDAnimationChannel* animationChannel, FCDAnimated* animated, const fm::string& animatedTargetPointer);
	static bool LinkAnimated(FCDAnimated* animated, xmlNode* node);
	static bool LinkAnimatedCustom(FCDAnimatedCustom* animatedCustom, xmlNode* node);
	static bool LinkAnimation(FCDAnimation* animation);

	static bool LinkTargetedEntity(FCDTargetedEntity* targetedEntity);
	static bool LinkSceneNode(FCDSceneNode* sceneNode);

	static void LinkMaterial(FCDMaterial* material);
	static void LinkEffect(FCDEffect* effect);
	static void LinkEffectParameterSurface(FCDEffectParameterSurface* effectParameterSurface);
	static void LinkEffectParameterSampler(FCDEffectParameterSampler* effectParameterSampler, FCDEffectParameterList& parameters);
	static void LinkEffectProfile(FCDEffectProfile* effectProfile);
	static void LinkEffectProfileFX(FCDEffectProfileFX* effectProfileFX);
	static void LinkEffectStandard(FCDEffectStandard* effectStandard);
	static void LinkEffectTechnique(FCDEffectTechnique* effectTechnique);
	static void LinkTexture(FCDTexture* texture, FCDEffectParameterList& effectParameters);

	static bool LinkController(FCDController* controller);
	static bool LinkSkinController(FCDSkinController* skinController);
	static bool LinkMorphController(FCDMorphController* morphController);

	static bool LinkGeometryMesh(FCDGeometryMesh* geometryMesh);
#line 398
	static xmlNode* WriteObject(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteExtraNode(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteExtra(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteExtraTechnique(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteExtraType(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteAsset(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteAssetContributor(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEntityReference(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteExternalReferenceManager(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePlaceHolder(FCDObject* object, xmlNode* parentNode);

	static void WriteChildrenFCDENode(FCDENode* eNode, xmlNode* customNode);
	static void WriteTechniquesFCDEType(FCDEType* eType, xmlNode* parentNode);
	static void WriteTechniquesFCDExtra(FCDExtra* extra, xmlNode* parentNode);

	static xmlNode* LetWriteObject(FCDObject* object, void* entityNode)
	{
		if (!object->GetTransientFlag())
			return FArchiveXML::WriteSwitch(object, &object->GetObjectType(), (xmlNode*) entityNode);
		return NULL;
	}
#line 423
	static xmlNode* WriteEntity(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteTargetedEntity(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteSceneNode(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteTransform(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteTransformLookAt(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteTransformMatrix(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteTransformRotation(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteTransformScale(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteTransformSkew(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteTransformTranslation(FCDObject* object, xmlNode* parentNode);

	static xmlNode* WriteToEntityXMLFCDEntity(FCDEntity* entity, xmlNode* parentNode, const char* nodeName, bool writeId = true);
	static void WriteEntityExtra(FCDEntity* entity, xmlNode* entityNode);
	static void WriteEntityInstanceExtra(FCDEntityInstance* entityInstance, xmlNode* instanceNode);
	static void WriteTargetedEntityExtra(FCDTargetedEntity* targetedEntity, xmlNode* entityNode);
	static void WriteVisualScene(FCDSceneNode* sceneNode, xmlNode* parentNode);
	static void WriteTransformBase(FCDTransform* transform, xmlNode* transformNode, const char* wantedSid);
#line 444
	static xmlNode* WriteController(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteSkinController(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteMorphController(FCDObject* object, xmlNode* parentNode);
#line 452
	static xmlNode* WriteEntityInstance(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEmitterInstance(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteSpriteInstance(FCDEntityInstance* object, xmlNode* parentNode);
	static xmlNode* WriteGeometryInstance(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteControllerInstance(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteMaterialInstance(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsForceFieldInstance(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsModelInstance(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsRigidBodyInstance(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsRigidConstraintInstance(FCDObject* object, xmlNode* parentNode);
#line 466
	static xmlNode* WriteMaterial(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectCode(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameter(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameterBool(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameterFloat(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameterFloat2(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameterFloat3(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameterInt(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameterMatrix(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameterSampler(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameterString(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameterSurface(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectParameterVector(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectPass(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectPassShader(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectPassState(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectProfile(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectProfileFX(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectStandard(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffectTechnique(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteEffect(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteTexture(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteImage(FCDObject* object, xmlNode* parentNode);

	static xmlNode* WriteColorTextureParameter(FCDEffectStandard* effectStandard, xmlNode* parentNode, const char* parameterNodeName, const FCDEffectParameterColor4* value, uint32 bucketIndex);
	static xmlNode* WriteFloatTextureParameter(FCDEffectStandard* effectStandard, xmlNode* parentNode, const char* parameterNodeName, const FCDEffectParameterFloat* value, uint32 bucketIndex);
	static xmlNode* WriteTextureParameter(FCDEffectStandard* effectStandard, xmlNode* parentNode, uint32 bucketIndex);
#line 497
	static xmlNode* WriteAnimated(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteAnimationChannel(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteAnimationCurve(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteAnimationMultiCurve(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteAnimation(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteAnimationClip(FCDObject* object, xmlNode* parentNode);

	static bool WriteAnimatedValue(const FCDParameterAnimatable* value, xmlNode* valueNode, const char* wantedSid, int32 arrayElement = -1);
	static void WriteAnimatedValue(const FCDAnimated* _animated, xmlNode* valueNode, const char* wantedSid);

	static void WriteSourceFCDAnimationCurve(FCDAnimationCurve* animationCurve, xmlNode* parentNode, const fm::string& baseId);
	static xmlNode* WriteSamplerFCDAnimationCurve(FCDAnimationCurve* animationCurve, xmlNode* parentNode, const fm::string& baseId);
	static xmlNode* WriteChannelFCDAnimationCurve(FCDAnimationCurve* animationCurve, xmlNode* parentNode, const fm::string& baseId, const char* targetPointer);
	static void WriteSourceFCDAnimationMultiCurve(FCDAnimationMultiCurve* animationMultiCurve, xmlNode* parentNode, const char** qualifiers, const fm::string& baseId);
	static xmlNode* WriteSamplerFCDAnimationMultiCurve(FCDAnimationMultiCurve* animationMultiCurve, xmlNode* parentNode, const fm::string& baseId);
	static xmlNode* WriteChannelFCDAnimationMultiCurve(FCDAnimationMultiCurve* animationMultiCurve, xmlNode* parentNode, const fm::string& baseId, const fm::string& pointer);
#line 517
	static xmlNode* WriteCamera(FCDObject* object, xmlNode* parentNode);
#line 522
	static xmlNode* WriteLight(FCDObject* object, xmlNode* parentNode);
#line 527
	static xmlNode* WriteGeometry(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteGeometrySource(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteGeometryMesh(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteGeometryPolygons(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteGeometrySpline(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WriteNURBSSpline(FCDNURBSSpline* nURBSSpline, xmlNode* parentNode, const fm::string& parentId, const fm::string& splineId);
	static xmlNode* WriteSpline(FCDSpline* spline, xmlNode* parentNode, const fm::string& parentId, const fm::string& splineId);
#line 539
	static xmlNode* WritePhysicsShape(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsAnalyticalGeometry(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePASBox(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePASCapsule(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePASTaperedCapsule(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePASCylinder(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePASTaperedCylinder(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePASPlane(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePASSphere(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsMaterial(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsModel(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsRigidBody(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsRigidConstraint(FCDObject* object, xmlNode* parentNode);
	static xmlNode* WritePhysicsScene(FCDObject* object, xmlNode* parentNode);

	static void WritePhysicsRigidBodyParameters(FCDPhysicsRigidBodyParameters* physicsRigidBodyParameters, xmlNode* techniqueNode);
	template <class TYPE, int QUAL>
	static xmlNode* AddPhysicsParameter(xmlNode* parentNode, const char* name, FCDParameterAnimatableT<TYPE,QUAL>& value);
#line 562
	static xmlNode* WriteEmitter(FCDObject* object, xmlNode* parentNode);
#line 567
	static xmlNode* WriteForceField(FCDObject* object, xmlNode* parentNode);
#line 572
	template <class T>
	static xmlNode* WriteLibrary(FCDLibrary<T>* library, xmlNode* node);
};

#endif
#line 11 ".\\FAXAnimationImport.cpp"
// #include "FCDocument/FCDocument.h"   (already above)
// #include "FCDocument/FCDLibrary.h"   (FCollada 3.05B, pasted in place)
#line 21 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDLibrary.h"
#ifndef _FCD_LIBRARY_
#define _FCD_LIBRARY_

#ifndef __FCD_OBJECT_H_
#line 26
#endif
#ifndef _FU_PARAMETER_H_
#line 29
#endif

class FCDocument;
class FCDAsset;
class FCDEntity;
class FCDExtra;
#line 49
template <class T>
class FCOLLADA_EXPORT FCDLibrary : public FCDObject
{
private:
	DeclareObjectType(FCDObject);
#line 58
	DeclareParameterContainer(T, entities, FC("Entities"));
#line 61
	DeclareParameterRef(FCDExtra, extra, FC("Extra Tree"));
#line 64
	DeclareParameterRef(FCDAsset, asset, FC("Asset Tag"));

public:
#line 70
	FCDLibrary(FCDocument* document);
#line 73
	virtual ~FCDLibrary();
#line 77
	T* AddEntity();
#line 84
	void AddEntity(T* entity);
#line 90
	T* FindDaeId(const fm::string& daeId) { return const_cast<T*>(const_cast<const FCDLibrary*>(this)->FindDaeId(daeId)); }
	const T* FindDaeId(const fm::string& daeId) const;
#line 95
	inline bool IsEmpty() const { return entities.empty(); }
#line 99
	inline size_t GetEntityCount() const { return entities.size(); }
#line 105
	inline T* GetEntity(size_t index) { FUAssert(index < GetEntityCount(), return NULL); return entities.at(index); }
	inline const T* GetEntity(size_t index) const { FUAssert(index < GetEntityCount(), return NULL); return entities.at(index); }
#line 113
	FCDAsset* GetAsset(bool create = true);
	inline const FCDAsset* GetAsset() const { return asset; }
#line 118
	inline FCDExtra* GetExtra() { return extra; }
	inline const FCDExtra* GetExtra() const { return extra; }
};

#ifdef __APPLE__
#line 124
#endif

#endif
#line 13 ".\\FAXAnimationImport.cpp"
// #include "FCDocument/FCDAnimated.h"   (FCollada 3.05B, pasted in place)
#line 20 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDAnimated.h"
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
#line 14 ".\\FAXAnimationImport.cpp"
// #include "FCDocument/FCDAnimation.h"   (FCollada 3.05B, pasted in place)
#line 20 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDAnimation.h"
#ifndef _FCD_ANIMATION_H_
#define _FCD_ANIMATION_H_

#ifndef _FCD_ENTITY_H_
#line 25
#endif

class FCDocument;
class FCDAnimated;
class FCDAnimation;
class FCDAnimationChannel;
class FCDAnimationCurve;

typedef fm::pvector<FCDAnimationChannel> FCDAnimationChannelList;
typedef fm::pvector<FCDAnimationCurve> FCDAnimationCurveList;
#line 48
class FCOLLADA_EXPORT FCDAnimation : public FCDEntity
{
private:
	DeclareObjectType(FCDEntity);
#line 54
	FCDAnimation* parent;
	DeclareParameterContainer(FCDAnimation, children, FC("Children"));
#line 58
	DeclareParameterContainer(FCDAnimationChannel, channels, FC("Channels"));

public:
#line 67
	FCDAnimation(FCDocument* document, FCDAnimation* parent = NULL);
#line 70
	virtual ~FCDAnimation();
#line 75
	virtual Type GetType() const { return ANIMATION; }
#line 81
	inline FCDAnimation* GetParent() { return parent; }
	inline const FCDAnimation* GetParent() const { return parent; }
#line 90
	virtual FCDEntity* Clone(FCDEntity* clone = NULL, bool cloneChildren = false) const;
#line 98
	virtual FCDEntity* FindDaeId(const fm::string& daeId) { return const_cast<FCDEntity*>(const_cast<const FCDAnimation*>(this)->FindDaeId(daeId)); }
	virtual const FCDEntity* FindDaeId(const fm::string& daeId) const;
#line 104
	inline size_t GetChildrenCount() const { return children.size(); }
#line 111
	inline FCDAnimation* GetChild(size_t index) { FUAssert(index < children.size(), return NULL); return children.at(index); }
	inline const FCDAnimation* GetChild(size_t index) const { FUAssert(index < children.size(), return NULL); return children.at(index); }
#line 116
	FCDAnimation* AddChild();
#line 121
	inline void GetHierarchicalAssets(FCDAssetList& assets) { GetHierarchicalAssets(*(FCDAssetConstList*) &assets); }
	virtual void GetHierarchicalAssets(FCDAssetConstList& assets) const;
#line 128
	void FindAnimationChannels(const fm::string& pointer, FCDAnimationChannelList& targetChannels);
#line 132
	size_t GetChannelCount() const { return channels.size(); }
#line 138
	FCDAnimationChannel* GetChannel(size_t index) { FUAssert(index < GetChannelCount(), return NULL); return channels.at(index); }
	const FCDAnimationChannel* GetChannel(size_t index) const { FUAssert(index < GetChannelCount(), return NULL); return channels.at(index); }
#line 144
	DEPRECATED(3.05A, GetChannelCount and GetChannel(index))
    void GetChannels() const {}
#line 149
	FCDAnimationChannel* AddChannel();
#line 154
	void GetCurves(FCDAnimationCurveList& curves);
};

#endif
#line 15 ".\\FAXAnimationImport.cpp"
// #include "FCDocument/FCDAnimationClip.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDAnimationClip.h"
#ifndef _FCD_ANIMATION_CLIP_H_
#define _FCD_ANIMATION_CLIP_H_

class FCDocument;
class FCDAnimation;
class FCDAnimationCurve;

class FCDEntityInstance;

typedef FUTrackedList<FCDAnimationCurve> FCDAnimationCurveTrackList;

#ifndef _FCD_ENTITY_H_
#line 27
#endif

#ifndef _FCD_ENTITY_INSTANCE_H_
// #include "FCDocument/FCDEntityInstance.h"   (FCollada 3.05B, pasted in place)
#line 20 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDEntityInstance.h"
#ifndef _FCD_ENTITY_INSTANCE_H_
#define _FCD_ENTITY_INSTANCE_H_

#ifndef _FCD_ENTITY_H_
#line 25
#endif

class FCDocument;
class FCDENode;
class FCDSceneNode;
class FCDEntityInstanceFactory;
class FCDEntityReference;
class FCDEntityInstance;
class FUUri;

template <class T> class FUUniqueStringMapT;
typedef FUUniqueStringMapT<char> FUSUniqueStringMap;
#line 49
class FCOLLADA_EXPORT FCDEntityInstance : public FCDObject, FUTracker
{
public:
#line 54
	enum Type
	{
		SIMPLE,

		GEOMETRY,
		CONTROLLER,
		MATERIAL,
		PHYSICS_MODEL,
		PHYSICS_RIGID_BODY,
		PHYSICS_RIGID_CONSTRAINT,
		PHYSICS_FORCE_FIELD,
		TYPE_COUNT
	};

private:
	DeclareObjectType(FCDObject);
	friend class FCDEntityInstanceFactory;

	FCDSceneNode* parent;
	FCDEntity::Type entityType;
	DeclareParameterPtr(FCDEntityReference, entityReference, FC("Entity Reference"));
#line 77
	fstring name;
	DeclareParameter(fm::string, FUParameterQualifiers::SIMPLE, wantedSubId, FC("Instance Sub-id"));
#line 81
	DeclareParameterRef(FCDExtra, extra, FC("Extra Tree"));

protected:
#line 91
	FCDEntityInstance(FCDocument* document, FCDSceneNode* parent, FCDEntity::Type type);

public:

	virtual ~FCDEntityInstance();
#line 101
	virtual Type GetType() const { return SIMPLE; }
#line 106
	inline FCDEntity::Type GetEntityType() const { return entityType; }
#line 111
	FCDEntity* GetEntity();
#line 117
	inline const FCDEntity* GetEntity() const { return ((FCDEntityInstance*)(this))->GetEntity(); }
#line 122
	const FUUri GetEntityUri() const;
#line 126
	void SetEntityUri(const FUUri& uri);
#line 131
	void SetEntity(FCDEntity* entity);
#line 134
	inline FCDEntityReference* GetEntityReference() { return entityReference; }
	inline const FCDEntityReference* GetEntityReference() const { return entityReference; }
#line 141
	inline const fstring& GetName() const { return name; }
#line 147
	void SetName(const fstring& name);
#line 153
	inline const fm::string& GetWantedSubId() const { return wantedSubId; }
#line 158
	inline void SetWantedSubId(const fm::string& _wantedSubId) { wantedSubId = _wantedSubId; }
#line 165
	FCDExtra* GetExtra();
	inline const FCDExtra* GetExtra() const { return const_cast<FCDEntityInstance*>(this)->GetExtra(); }
#line 170
	bool IsExternalReference() const;
#line 175
	inline FCDSceneNode* GetParent() { return parent; }
	inline const FCDSceneNode* GetParent() const { return parent; }
#line 182
	bool HasForParent(FCDSceneNode* node) const;
#line 187
	virtual void CleanSubId(FUSUniqueStringMap* parentStringMap = NULL);
#line 192
	virtual FCDEntityInstance* Clone(FCDEntityInstance* clone = NULL) const;

protected:
#line 203
	virtual void OnObjectReleased(FUTrackable* object);
};
#line 211
class FCOLLADA_EXPORT FCDEntityInstanceFactory
{
private:
	FCDEntityInstanceFactory() {}

public:
#line 223
	static FCDEntityInstance* CreateInstance(FCDocument* document, FCDSceneNode* parent, FCDEntity::Type type);
#line 231
	static FCDEntityInstance* CreateInstance(FCDocument* document, FCDSceneNode* parent, FCDEntity *entity);
};
#line 235
#endif
#line 31 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDAnimationClip.h"
#endif
#line 42
class FCOLLADA_EXPORT FCDAnimationClip : public FCDEntity
{
private:
	DeclareObjectType(FCDEntity);
	FCDAnimationCurveTrackList curves;

	DeclareParameter(float, FUParameterQualifiers::SIMPLE, start, FC("Start Time"));
	DeclareParameter(float, FUParameterQualifiers::SIMPLE, end, FC("End Time"));
	DeclareParameterContainer(FCDEntityInstance, animations, FC("Animation Instances"));
	StringList names;

public:
#line 56
	FCDAnimationClip(FCDocument* document);
#line 59
	virtual ~FCDAnimationClip();
#line 67
	virtual FCDEntity* Clone(FCDEntity* clone = NULL, bool cloneChildren = false) const;
#line 72
	virtual Type GetType() const { return ANIMATION_CLIP; }
#line 76
	FCDAnimationCurveTrackList& GetClipCurves() { return curves; }
	const FCDAnimationCurveTrackList& GetClipCurves() const { return curves; }
#line 81
	void AddClipCurve(FCDAnimationCurve* curve);
#line 87
	float GetStart() const { return start; }
#line 91
	void SetStart(float _start) { start = _start; SetDirtyFlag(); }
#line 97
	float GetEnd() const { return end; }
#line 101
	void SetEnd(float _end) { end = _end; SetDirtyFlag(); }
#line 105
	inline size_t GetAnimationCount() const { return animations.size(); }
#line 110
	inline FCDAnimation* GetAnimation(size_t index) const { FUAssert(GetAnimationCount() > index, return NULL); return (FCDAnimation*) animations[index]->GetEntity(); };
#line 115
	inline void SetAnimationName(const fm::string& name, size_t index) { if (names.size() <= index) names.resize(index + 1); names[index] = name; }
#line 120
	inline fm::string GetAnimationName(size_t index) const { return names[index]; }
#line 124
	FCDEntityInstance* AddInstanceAnimation();
#line 129
	FCDEntityInstance* AddInstanceAnimation(FCDAnimation* animation);
};

#endif
#line 16 ".\\FAXAnimationImport.cpp"
// #include "FCDocument/FCDAnimationKey.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDAnimationKey.h"
#ifndef _FCD_ANIMATION_KEY_H_
#define _FCD_ANIMATION_KEY_H_
#line 26
class FCDAnimationKey
{
public:
#line 31
	float input;
#line 34
	float output;
#line 38
	uint32 interpolation;
};
#line 48
class FCDAnimationKeyBezier : public FCDAnimationKey
{
public:
	FMVector2 inTangent;
	FMVector2 outTangent;
};
#line 62
class FCDAnimationKeyTCB : public FCDAnimationKey
{
public:
	float tension;
	float continuity;
	float bias;

	float easeIn;
	float easeOut;
};
#line 78
class FCDAnimationMKey
{
private:
	uint32 dimension;

public:
#line 88
	FCDAnimationMKey(uint32 dimension);
#line 91
	virtual ~FCDAnimationMKey();
#line 95
	uint32 GetDimension() const { return dimension; };
#line 99
	float input;
#line 103
	uint32 interpolation;
#line 106
	float* output;
};
#line 113
class FCDAnimationMKeyBezier : public FCDAnimationMKey
{
public:
#line 119
	FCDAnimationMKeyBezier(uint32 dimension);
#line 122
	virtual ~FCDAnimationMKeyBezier();

	FMVector2* inTangent;
	FMVector2* outTangent;
};
#line 132
class FCDAnimationMKeyTCB : public FCDAnimationMKey
{
public:
#line 138
	FCDAnimationMKeyTCB(uint32 dimension);
#line 141
	virtual ~FCDAnimationMKeyTCB();

	float* tension;
	float* continuity;
	float* bias;

	float* easeIn;
	float* easeOut;
};

#endif
#line 17 ".\\FAXAnimationImport.cpp"
// #include "FCDocument/FCDAnimationChannel.h"   (FCollada 3.05B, pasted in place)
#line 20 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDAnimationChannel.h"
#ifndef _FCD_ANIMATION_CHANNEL_H_
#define _FCD_ANIMATION_CHANNEL_H_

#ifndef __FCD_OBJECT_H_
#line 25
#endif
#ifndef _FU_PARAMETER_H_
#line 28
#endif

class FCDAnimated;
class FCDAnimation;
class FCDAnimationCurve;

typedef fm::pvector<FCDAnimationCurve> FCDAnimationCurveList;
#line 44
class FCOLLADA_EXPORT FCDAnimationChannel : public FCDObject
{
private:
	DeclareObjectType(FCDObject);
	FCDAnimation* parent;

	DeclareParameterContainer(FCDAnimationCurve, curves, FC("Animation Curves"));

public:
#line 57
	FCDAnimationChannel(FCDocument* document, FCDAnimation* parent);
#line 60
	virtual ~FCDAnimationChannel();
#line 67
	FCDAnimationChannel* Clone(FCDAnimationChannel* clone = NULL) const;
#line 71
	FCDAnimation* GetParent() { return parent; }
	const FCDAnimation* GetParent() const { return parent; }
#line 77
	DEPRECATED(3.05A, GetCurveCount and GetCurve(index))
    void GetCurves() const {}
#line 82
	size_t GetCurveCount() const { return curves.size(); }
#line 88
	FCDAnimationCurve* GetCurve(size_t index) { FUAssert(index < GetCurveCount(), return NULL); return curves.at(index); }
	const FCDAnimationCurve* GetCurve(size_t index) const { FUAssert(index < GetCurveCount(), return NULL); return curves.at(index); }
#line 93
	FCDAnimationCurve* AddCurve();
};

#endif
#line 18 ".\\FAXAnimationImport.cpp"
// #include "FCDocument/FCDAnimationCurve.h"   (FCollada 3.05B, pasted in place)
#line 14 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDAnimationCurve.h"
#ifndef _FCD_ANIMATION_CURVE_H_
#define _FCD_ANIMATION_CURVE_H_

#ifndef _FU_DAE_ENUM_H_
#line 19
#endif
#ifndef __FCD_OBJECT_H_
#line 22
#endif

class FCDAnimated;
class FCDAnimationClip;
class FCDAnimationChannel;
class FCDAnimationKey;
class FCDConversionFunctor;

typedef float (*FCDConversionFunction)(float v);

typedef fm::pvector<FCDAnimationClip> FCDAnimationClipList;
typedef fm::pvector<FCDAnimationKey> FCDAnimationKeyList;
#line 46
class FCOLLADA_EXPORT FCDAnimationCurve : public FCDObject
{
private:
	DeclareObjectType(FCDObject);
#line 52
	FCDAnimationChannel* parent;
#line 55
	int32 targetElement;
	fm::string targetQualifier;
#line 59
	FCDAnimationKeyList keys;
	FUDaeInfinity::Infinity preInfinity, postInfinity;
#line 63
	FUTrackedPtr<FCDAnimated> inputDriver;
	int32 inputDriverIndex;
#line 67
	FCDAnimationClipList clips;
	FloatList clipOffsets;
	FCDAnimationClip* currentClip;
	float currentOffset;
	static bool is2DEvaluation;

public:
	DeclareFlag(AnimChanged, 0);
	DeclareFlagCount(1);

public:
#line 84
	FCDAnimationCurve(FCDocument* document, FCDAnimationChannel* parent);
#line 87
	virtual ~FCDAnimationCurve();
#line 91
	inline FCDAnimationChannel* GetParent() { return parent; }
	inline const FCDAnimationChannel* GetParent() const { return parent; }
#line 96
	inline FCDAnimationKey** GetKeys() { return keys.begin(); }
	inline const FCDAnimationKey** GetKeys() const { return keys.begin(); }
#line 101
	inline size_t GetKeyCount() const { return keys.size(); }
#line 107
	void SetKeyCount(size_t count, FUDaeInterpolation::Interpolation interpolation);
#line 112
	inline FCDAnimationKey* GetKey(size_t index) { FUAssert(index < keys.size(), return NULL); return keys.at(index); }
	inline const FCDAnimationKey* GetKey(size_t index) const { FUAssert(index < keys.size(), return NULL); return keys.at(index); }
#line 118
	FCDAnimationKey* AddKey(FUDaeInterpolation::Interpolation interpolation);
#line 124
	FCDAnimationKey* AddKey(FUDaeInterpolation::Interpolation interpolation, float input) { size_t blah; return AddKey(interpolation, input, blah); }
#line 131
	FCDAnimationKey* AddKey(FUDaeInterpolation::Interpolation interpolation, float input, size_t& index);
#line 136
	bool DeleteKey(FCDAnimationKey* key);
#line 142
	inline FUDaeInfinity::Infinity GetPreInfinity() const { return preInfinity; }
#line 148
	inline void SetPreInfinity(FUDaeInfinity::Infinity infinity) { preInfinity = infinity; SetDirtyFlag(); }
#line 154
	inline FUDaeInfinity::Infinity GetPostInfinity() const { return postInfinity; }
#line 160
	inline void SetPostInfinity(FUDaeInfinity::Infinity infinity) { postInfinity = infinity; SetDirtyFlag(); }
#line 164
	bool HasDriver() const;
#line 170
	void GetDriver(FCDAnimated*& driver, int32& index);
	void GetDriver(const FCDAnimated*& driver, int32& index) const;
	FCDAnimated* GetDriverPtr(){ return inputDriver; }
#line 177
	int32 GetDriverIndex(){ return inputDriverIndex; }
#line 183
	void SetDriver(FCDAnimated* driver, int32 index);
#line 187
	inline size_t GetClipCount() const { return clips.size(); }
#line 191
	inline FCDAnimationClip** GetClips() { return clips.begin(); }
	inline const FCDAnimationClip** GetClips() const { return clips.begin(); }
#line 197
	inline FCDAnimationClip* GetClip(size_t index) { FUAssert(index < clips.size(), return NULL); return clips[index]; }
	inline const FCDAnimationClip* GetClip(size_t index) const { FUAssert(index < clips.size(), return NULL); return clips[index]; }
#line 202
	void AddClip(FCDAnimationClip* clip);
#line 207
	void SetCurrentAnimationClip(FCDAnimationClip* clip);
#line 214
	inline const float GetClipOffset(size_t index) const { return clipOffsets.at(index); }
#line 224
	FCDAnimationCurve* Clone(FCDAnimationCurve* clone = NULL, bool includeClips = true) const;
#line 229
	void ConvertValues(FCDConversionFunction valueConversion, FCDConversionFunction tangentConversion);
	void ConvertValues(FCDConversionFunctor* valueConversion, FCDConversionFunctor* tangentConversion);
#line 235
	void ConvertInputs(FCDConversionFunction timeConversion, FCDConversionFunction tangentWeightConversion);
	void ConvertInputs(FCDConversionFunctor* timeConversion, FCDConversionFunctor* tangentWeightConversion);
#line 241
	float Evaluate(float input) const;
#line 245
	void RegisterAnimationClip(FCDAnimationClip* clip);
#line 251
	inline int32 GetTargetElement() const { return targetElement; }
#line 257
	inline const fm::string& GetTargetQualifier() const { return targetQualifier; }
#line 262
	inline void SetTargetElement(int32 e) { targetElement = e; SetDirtyFlag(); }
#line 267
	inline void SetTargetQualifier(const fm::string& q) { targetQualifier = q; SetDirtyFlag(); }
#line 272
	void SetClipOffset(float offset, const FCDAnimationClip* clip);
#line 280
	static void Set2DCurveEvaluation(bool flag) { is2DEvaluation = flag; }
#line 284
	static bool Is2DCurveEvaluation() {return is2DEvaluation; }
};
#line 288
class FCDConversionFunctor
{
public:
	FCDConversionFunctor() {}
	virtual ~FCDConversionFunctor() {}
	virtual float operator() (float v) = 0;
};
#line 297
class FCDConversionScaleFunctor : public FCDConversionFunctor
{
private:
	float scaleFactor;

public:
	FCDConversionScaleFunctor(float factor) { scaleFactor = factor; }
	void SetScaleFactor(float factor) { scaleFactor = factor; }
	virtual ~FCDConversionScaleFunctor() {}
	virtual float operator() (float v) { return v * scaleFactor; }
	virtual FMVector3 operator() (const FMVector3& v) { return v * scaleFactor; }
	virtual FMVector4 operator() (const FMVector4& v) { return v * scaleFactor; }
};
#line 312
class FCDConversionOffsetFunctor : public FCDConversionFunctor
{
private:
	float offset;

public:
	FCDConversionOffsetFunctor(float _offset) { offset = _offset; }
	virtual ~FCDConversionOffsetFunctor() {}
	virtual float operator() (float v) { return v + offset; }
};

#endif
#line 19 ".\\FAXAnimationImport.cpp"
// #include "FCDocument/FCDAnimationMultiCurve.h"   (FCollada 3.05B, pasted in place)
#line 20 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDAnimationMultiCurve.h"
#ifndef _FCD_ANIMATION_MULTI_CURVE_H_
#define _FCD_ANIMATION_MULTI_CURVE_H_

#ifndef __FCD_OBJECT_H_
#line 25
#endif
#ifndef _FU_DAE_ENUM_H_
#line 28
#endif

class FCDocument;
class FCDAnimationMKey;

typedef fm::pvector<FCDAnimationMKey> FCDAnimationMKeyList;
#line 47
class FCOLLADA_EXPORT FCDAnimationMultiCurve : public FCDObject
{
private:
	DeclareObjectType(FCDObject);
#line 53
	uint32 dimension;
#line 56
	int32 targetElement;
#line 59
	FCDAnimationMKeyList keys;
	FUDaeInfinity::Infinity preInfinity, postInfinity;
#line 63
	static bool is2DEvaluation;

public:
#line 71
	FCDAnimationMultiCurve(FCDocument* document, uint32 dimension);
#line 74
	virtual ~FCDAnimationMultiCurve();
#line 78
	inline uint32 GetDimension() const { return dimension; }
#line 82
	inline FCDAnimationMKey** GetKeys() { return keys.begin(); }
	inline const FCDAnimationMKey** GetKeys() const { return keys.begin(); }
#line 87
	inline size_t GetKeyCount() const { return keys.size(); }
#line 93
	void SetKeyCount(size_t count, FUDaeInterpolation::Interpolation interpolation);
#line 98
	inline FCDAnimationMKey* GetKey(size_t index) { FUAssert(index < keys.size(), return NULL); return keys.at(index); }
	inline const FCDAnimationMKey* GetKey(size_t index) const { FUAssert(index < keys.size(), return NULL); return keys.at(index); }
#line 104
	FCDAnimationMKey* AddKey(FUDaeInterpolation::Interpolation interpolation);
#line 110
	inline FUDaeInfinity::Infinity GetPreInfinity() const { return preInfinity; }
#line 116
	inline void SetPreInfinity(FUDaeInfinity::Infinity infinity) { preInfinity = infinity; SetDirtyFlag(); }
#line 122
	inline FUDaeInfinity::Infinity GetPostInfinity() const { return postInfinity; }
#line 128
	inline void SetPostInfinity(FUDaeInfinity::Infinity infinity) { postInfinity = infinity; SetDirtyFlag(); }
#line 133
	void Evaluate(float input, float* output) const;
#line 139
	inline int32 GetTargetElement() const { return targetElement; }
#line 144
	inline void SetTargetElement(int32 e) { targetElement = e; SetDirtyFlag(); }
	inline int32 GetTargetElement() { return targetElement; }
#line 156
	inline void Set2DCurveEvaluation(bool flag) { is2DEvaluation = flag; }
#line 160
	inline bool Is2DCurveEvaluation() {return is2DEvaluation; }
};

#endif
#line 20 ".\\FAXAnimationImport.cpp"

#define DONT_DEFINE_THIS

#ifdef DONT_DEFINE_THIS
// #include <FCDocument/FCDExtra.h>   (FCollada 3.05B, pasted in place)
#line 15 "e:\\V1\\UnrealEngine3\\Development\\External\\FCollada-3.05B\\FCollada\\FCDocument/FCDExtra.h"
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
// @baa 0x018bc1e0
#line 25 ".\\FAXAnimationImport.cpp"
#endif

bool FArchiveXML::LoadAnimationChannel(FCDObject* object, xmlNode* channelNode)
{
	FCDAnimationChannel* animationChannel = (FCDAnimationChannel*)object;
	FCDAnimationChannelData& data = FArchiveXML::documentLinkDataMap[animationChannel->GetDocument()].animationChannelData[animationChannel];

	bool status = true;

	// Read the channel-specific ID
	fm::string daeId = ReadNodeId(channelNode);
	fm::string samplerId = ReadNodeSource(channelNode);
	ReadNodeTargetProperty(channelNode, data.targetPointer, data.targetQualifier);

#ifdef DONT_DEFINE_THIS
	FCDAnimation* anim = animationChannel->GetParent();
	FCDExtra* extra = anim->GetExtra();
	extra->SetTransientFlag(); // Dont save this, its wasted whatever it is.
	FCDEType* type = extra->AddType("AnimTargets");
	FCDETechnique* teq = type->AddTechnique("TEMP");
	teq->AddChildNode("pointer")->SetContent(TO_FSTRING(data.targetPointer));
	teq->AddChildNode("pointer")->SetContent(TO_FSTRING(data.targetQualifier));
#endif



	xmlNode* samplerNode = FArchiveXML::FindChildByIdFCDAnimation(animationChannel->GetParent(), samplerId);
	if (samplerNode == NULL || !IsEquivalent(samplerNode->name, DAE_SAMPLER_ELEMENT))
	{
		FUError::Error(FUError::ERROR_LEVEL, FUError::ERROR_MISSING_ELEMENT, channelNode->line);
		return false;
	}

	// Find and process the sources
	xmlNode* inputSource = NULL, * outputSource = NULL, * inTangentSource = NULL, * outTangentSource = NULL, * tcbSource = NULL, * easeSource = NULL, * interpolationSource = NULL;
	xmlNodeList samplerInputNodes;
	fm::string inputDriver;
	FindChildrenByType(samplerNode, DAE_INPUT_ELEMENT, samplerInputNodes);
	for (size_t i = 0; i < samplerInputNodes.size(); ++i) // Don't use iterator here because we are possibly appending source nodes in the loop
	{
		xmlNode* inputNode = samplerInputNodes[i];
		fm::string sourceId = ReadNodeSource(inputNode);
		xmlNode* sourceNode = FArchiveXML::FindChildByIdFCDAnimation(animationChannel->GetParent(), sourceId);
		fm::string sourceSemantic = ReadNodeSemantic(inputNode);

		if (sourceSemantic == DAE_INPUT_ANIMATION_INPUT) inputSource = sourceNode;
		else if (sourceSemantic == DAE_OUTPUT_ANIMATION_INPUT) outputSource = sourceNode;
		else if (sourceSemantic == DAE_INTANGENT_ANIMATION_INPUT) inTangentSource = sourceNode;
		else if (sourceSemantic == DAE_OUTTANGENT_ANIMATION_INPUT) outTangentSource = sourceNode;
		else if (sourceSemantic == DAEFC_TCB_ANIMATION_INPUT) tcbSource = sourceNode;
		else if (sourceSemantic == DAEFC_EASE_INOUT_ANIMATION_INPUT) easeSource = sourceNode;
		else if (sourceSemantic == DAE_INTERPOLATION_ANIMATION_INPUT) interpolationSource = sourceNode;
		else if (sourceSemantic == DAEMAYA_DRIVER_INPUT) inputDriver = sourceId;
	}
	if (inputSource == NULL || outputSource == NULL)
	{
		FUError::Error(FUError::ERROR_LEVEL, FUError::ERROR_MISSING_INPUT, samplerNode->line);
		return false;
	}

	// Calculate the number of curves that in contained by this channel
	xmlNode* outputAccessor = FindTechniqueAccessor(outputSource);
	fm::string accessorStrideString = ReadNodeProperty(outputAccessor, DAE_STRIDE_ATTRIBUTE);
	uint32 curveCount = FUStringConversion::ToUInt32(accessorStrideString);
	if (curveCount == 0) curveCount = 1;

	// Create the animation curves
	for (uint32 i = 0; i < curveCount; ++i)
	{
		animationChannel->AddCurve();
	}

	// Read in the animation curves
	// The input keys and interpolations are shared by all the curves
	FloatList inputs;
    ReadSource(inputSource, inputs);
	size_t keyCount = inputs.size();
	if (keyCount == 0) return true; // Valid although very boring channel.

	UInt32List interpolations; interpolations.reserve(keyCount);
	ReadSourceInterpolation(interpolationSource, interpolations);
	if (interpolations.size() < keyCount)
	{
		// Not enough interpolation types provided, so append BEZIER as many times as needed.
		interpolations.insert(interpolations.end(), keyCount - interpolations.size(), FUDaeInterpolation::FromString(""));
	}

	// Read in the interleaved outputs as floats
	fm::vector<FloatList> tempFloatArrays;
	tempFloatArrays.resize(curveCount);
	fm::pvector<FloatList> outArrays(curveCount);
	for (uint32 i = 0; i < curveCount; ++i) outArrays[i] = &tempFloatArrays[i];
	ReadSourceInterleaved(outputSource, outArrays);
	for (uint32 i = 0; i < curveCount; ++i)
	{
		// Fill in the output array with zeroes, if it was not large enough.
		if (tempFloatArrays[i].size() < keyCount)
		{
			tempFloatArrays[i].insert(tempFloatArrays[i].end(), keyCount - tempFloatArrays[i].size(), 0.0f);
		}

		// Create all the keys, on the curves, according to the interpolation types.
		for (size_t j = 0; j < keyCount; ++j)
		{
			FCDAnimationKey* key = animationChannel->GetCurve(i)->AddKey((FUDaeInterpolation::Interpolation) interpolations[j]);
			key->input = inputs[j];
			key->output = tempFloatArrays[i][j];

			// Set the default values for Bezier/TCB interpolations.
			if (key->interpolation == FUDaeInterpolation::BEZIER)
			{
				FCDAnimationKeyBezier* bkey = (FCDAnimationKeyBezier*) key;
				float previousInput = (j == 0) ? inputs[j] - 1.0f : inputs[j-1];
				float nextInput = (j == keyCount - 1) ? inputs[j] + 1.0f : inputs[j+1];
				bkey->inTangent.x = (previousInput + 2.0f * bkey->input) / 3.0f;
				bkey->outTangent.x = (nextInput + 2.0f * bkey->input) / 3.0f;
				bkey->inTangent.y = bkey->outTangent.y = bkey->output;
			}
			else if (key->interpolation == FUDaeInterpolation::TCB)
			{
				FCDAnimationKeyTCB* tkey = (FCDAnimationKeyTCB*) key;
				tkey->tension = tkey->continuity = tkey->bias = 0.5f;
				tkey->easeIn = tkey->easeOut = 0.0f;
			}
		}
	}
	tempFloatArrays.clear();

	// Read in the interleaved in_tangent source.
	if (inTangentSource != NULL)
	{
		fm::vector<FMVector2List> tempVector2Arrays;
		tempVector2Arrays.resize(curveCount);
		fm::pvector<FMVector2List> arrays(curveCount);
		for (uint32 i = 0; i < curveCount; ++i) arrays[i] = &tempVector2Arrays[i];

		uint32 stride = ReadSourceInterleaved(inTangentSource, arrays);
		if (stride == curveCount)
		{
			// Backward compatibility with 1D tangents.
			// Remove the relativity from the 1D tangents and calculate the second-dimension.
			for (uint32 i = 0; i < curveCount; ++i)
			{
				FMVector2List& inTangents = tempVector2Arrays[i];
				FCDAnimationKey** keys = animationChannel->GetCurve(i)->GetKeys();
				size_t end = min(inTangents.size(), keyCount);
				for (size_t j = 0; j < end; ++j)
				{
					if (keys[j]->interpolation == FUDaeInterpolation::BEZIER)
					{
						FCDAnimationKeyBezier* bkey = (FCDAnimationKeyBezier*) keys[j];
						bkey->inTangent.y = bkey->output - inTangents[j].x;
					}
				}
			}
		}
		else if (stride == curveCount * 2)
		{
			// This is the typical, 2D tangent case.
			for (uint32 i = 0; i < curveCount; ++i)
			{
				FMVector2List& inTangents = tempVector2Arrays[i];
				FCDAnimationKey** keys = animationChannel->GetCurve(i)->GetKeys();
				size_t end = min(inTangents.size(), keyCount);
				for (size_t j = 0; j < end; ++j)
				{
					if (keys[j]->interpolation == FUDaeInterpolation::BEZIER)
					{
						FCDAnimationKeyBezier* bkey = (FCDAnimationKeyBezier*) keys[j];
						bkey->inTangent = inTangents[j];
					}
				}
			}
		}
	}

	// Read in the interleaved out_tangent source.
	if (outTangentSource != NULL)
	{
		fm::vector<FMVector2List> tempVector2Arrays;
		tempVector2Arrays.resize(curveCount);
		fm::pvector<FMVector2List> arrays(curveCount);
		for (uint32 i = 0; i < curveCount; ++i) arrays[i] = &tempVector2Arrays[i];

		uint32 stride = ReadSourceInterleaved(outTangentSource, arrays);
		if (stride == curveCount)
		{
			// Backward compatibility with 1D tangents.
			// Remove the relativity from the 1D tangents and calculate the second-dimension.
			for (uint32 i = 0; i < curveCount; ++i)
			{
				FMVector2List& outTangents = tempVector2Arrays[i];
				FCDAnimationKey** keys = animationChannel->GetCurve(i)->GetKeys();
				size_t end = min(outTangents.size(), keyCount);
				for (size_t j = 0; j < end; ++j)
				{
					if (keys[j]->interpolation == FUDaeInterpolation::BEZIER)
					{
						FCDAnimationKeyBezier* bkey = (FCDAnimationKeyBezier*) keys[j];
						bkey->outTangent.y = bkey->output + outTangents[j].x;
					}
				}
			}
		}
		else if (stride == curveCount * 2)
		{
			// This is the typical, 2D tangent case.
			for (uint32 i = 0; i < curveCount; ++i)
			{
				FMVector2List& outTangents = tempVector2Arrays[i];
				FCDAnimationKey** keys = animationChannel->GetCurve(i)->GetKeys();
				size_t end = min(outTangents.size(), keyCount);
				for (size_t j = 0; j < end; ++j)
				{
					if (keys[j]->interpolation == FUDaeInterpolation::BEZIER)
					{
						FCDAnimationKeyBezier* bkey = (FCDAnimationKeyBezier*) keys[j];
						bkey->outTangent = outTangents[j];
					}
				}
			}
		}
	}

	if (tcbSource != NULL)
	{
		//Process TCB parameters
		fm::vector<FMVector3List> tempVector3Arrays;
		tempVector3Arrays.resize(curveCount);
		fm::pvector<FMVector3List> arrays(curveCount);
		for (uint32 i = 0; i < curveCount; ++i) arrays[i] = &tempVector3Arrays[i];

		ReadSourceInterleaved(tcbSource, arrays);

		for (uint32 i = 0; i < curveCount; ++i)
		{
			FMVector3List& tcbs = tempVector3Arrays[i];
			FCDAnimationKey** keys = animationChannel->GetCurve(i)->GetKeys();
			size_t end = min(tcbs.size(), keyCount);
			for (size_t j = 0; j < end; ++j)
			{
				if (keys[j]->interpolation == FUDaeInterpolation::TCB)
				{
					FCDAnimationKeyTCB* tkey = (FCDAnimationKeyTCB*) keys[j];
					tkey->tension = tcbs[j].x;
					tkey->continuity = tcbs[j].y;
					tkey->bias = tcbs[j].z;
				}
			}
		}
	}

	if (easeSource != NULL)
	{
		//Process Ease-in and ease-out data
		fm::vector<FMVector2List> tempVector2Arrays;
		tempVector2Arrays.resize(curveCount);
		fm::pvector<FMVector2List> arrays(curveCount);
		for (uint32 i = 0; i < curveCount; ++i) arrays[i] = &tempVector2Arrays[i];

		ReadSourceInterleaved(easeSource, arrays);

		for (uint32 i = 0; i < curveCount; ++i)
		{
			FMVector2List& eases = tempVector2Arrays[i];
			FCDAnimationKey** keys = animationChannel->GetCurve(i)->GetKeys();
			size_t end = min(eases.size(), keyCount);
			for (size_t j = 0; j < end; ++j)
			{
				if (keys[j]->interpolation == FUDaeInterpolation::TCB)
				{
					FCDAnimationKeyTCB* tkey = (FCDAnimationKeyTCB*) keys[j];
					tkey->easeIn = eases[j].x;
					tkey->easeOut = eases[j].y;
				}
			}
		}
	}

	// Read in the pre/post-infinity type
	xmlNodeList mayaParameterNodes; StringList mayaParameterNames;
	xmlNode* mayaTechnique = FindTechnique(inputSource, DAEMAYA_MAYA_PROFILE);
	FindParameters(mayaTechnique, mayaParameterNames, mayaParameterNodes);
	size_t parameterCount = mayaParameterNodes.size();
	for (size_t i = 0; i < parameterCount; ++i)
	{
		xmlNode* parameterNode = mayaParameterNodes[i];
		const fm::string& paramName = mayaParameterNames[i];
		const char* content = ReadNodeContentDirect(parameterNode);

		if (paramName == DAEMAYA_PREINFINITY_PARAMETER)
		{
			size_t curveCount = animationChannel->GetCurveCount();
			for (size_t c = 0; c < curveCount; ++c)
			{
				animationChannel->GetCurve(c)->SetPreInfinity(FUDaeInfinity::FromString(content));
			}
		}
		else if (paramName == DAEMAYA_POSTINFINITY_PARAMETER)
		{
			size_t curveCount = animationChannel->GetCurveCount();
			for (size_t c = 0; c < curveCount; ++c)
			{
				animationChannel->GetCurve(c)->SetPostInfinity(FUDaeInfinity::FromString(content));
			}
		}
		else
		{
			// Look for driven-key input target
			if (paramName == DAE_INPUT_ELEMENT)
			{
				fm::string semantic = ReadNodeSemantic(parameterNode);
				if (semantic == DAEMAYA_DRIVER_INPUT)
				{
					inputDriver = ReadNodeSource(parameterNode);
				}
			}
		}
	}

	if (!inputDriver.empty())
	{
		const char* driverTarget = FUDaeParser::SkipPound(inputDriver);
		if (driverTarget != NULL)
		{
			fm::string driverQualifierValue;
			FUStringConversion::SplitTarget(driverTarget, data.driverPointer, driverQualifierValue);
			data.driverQualifier = FUStringConversion::ParseQualifier(driverQualifierValue);
			if (data.driverQualifier < 0) data.driverQualifier = 0;
		}
	}
	animationChannel->SetDirtyFlag();

	return status;
}


xmlNode* FArchiveXML::FindChildByIdFCDAnimation(FCDAnimation* animation, const fm::string& _id)
{
	FCDAnimationDataMap::iterator animationIt = FArchiveXML::documentLinkDataMap[animation->GetDocument()].animationData.find(animation);
	FUAssert(animationIt != FArchiveXML::documentLinkDataMap[animation->GetDocument()].animationData.end(),);
	FCDAnimationData& data = animationIt->second;

	FUCrc32::crc32 id = FUCrc32::CRC32(_id.c_str() + ((_id[0] == '#') ? 1 : 0));
	for (FAXNodeIdPair* it = data.childNodes.begin(); it != data.childNodes.end(); ++it)
	{
		if (it->second == id) return it->first;
	}

	return (animation->GetParent() != NULL) ? FArchiveXML::FindChildByIdFCDAnimation(animation->GetParent(), _id) : NULL;
}

bool FArchiveXML::LoadAnimationCurve(FCDObject* UNUSED(object), xmlNode* UNUSED(node))
{
	//
	// FCDAnimationCurve doesn't correspond to any COLLADA element. It's used internally to
	// encapsulate the animation data.
	//
	FUBreak;
	return false;
}

bool FArchiveXML::LoadAnimationMultiCurve(FCDObject* UNUSED(object), xmlNode* UNUSED(node))
{
	//
	// FCDAnimationMultiCurve doesn't correspond to any COLLADA element. It's used internally to
	// encapsulate multiple animation data.
	//
	FUBreak;
	return false;
}

bool FArchiveXML::LoadAnimation(FCDObject* object, xmlNode* node)
{
	FCDAnimation* animation = (FCDAnimation*)object;
	FCDAnimationData& data = FArchiveXML::documentLinkDataMap[animation->GetDocument()].animationData[animation];

	bool status = FArchiveXML::LoadEntity(animation, node);
	if (!status) return status;
	if (!IsEquivalent(node->name, DAE_ANIMATION_ELEMENT))
	{
		return FUError::Error(FUError::WARNING_LEVEL, FUError::WARNING_INVALID_ANIM_LIB, node->line);
	}

	// Optimization: Grab all the IDs of the child nodes, in CRC format.
	ReadChildrenIds(node, data.childNodes);

	// Parse all the inner <channel> elements
	xmlNodeList channelNodes;
	FindChildrenByType(node, DAE_CHANNEL_ELEMENT, channelNodes);
	for (xmlNodeList::iterator itC = channelNodes.begin(); itC != channelNodes.end(); ++itC)
	{
		// Parse each <channel> element individually
		// They each handle reading the <sampler> and <source> elements
		FCDAnimationChannel* channel = animation->AddChannel();
		status &= (FArchiveXML::LoadAnimationChannel(channel, *itC));
		if (!status) SAFE_RELEASE(channel);
	}

	// Parse all the hierarchical <animation> elements
	xmlNodeList animationNodes;
	FindChildrenByType(node, DAE_ANIMATION_ELEMENT, animationNodes);
	for (xmlNodeList::iterator itA = animationNodes.begin(); itA != animationNodes.end(); ++itA)
	{
		FArchiveXML::LoadAnimation(animation->AddChild(), *itA);
	}
	return status;
}

bool FArchiveXML::LoadAnimationClip(FCDObject* object, xmlNode* clipNode)
{
	FCDAnimationClip* animationClip = (FCDAnimationClip*)object;

	bool status = FArchiveXML::LoadEntity(animationClip, clipNode);
	if (!status) return status;
	if (!IsEquivalent(clipNode->name, DAE_ANIMCLIP_ELEMENT))
	{
		FUError::Error(FUError::WARNING_LEVEL, FUError::WARNING_UNKNOWN_ANIM_LIB_ELEMENT, clipNode->line);
		return status;
	}

	// Read in and verify the clip's time/input bounds
	animationClip->SetStart(FUStringConversion::ToFloat(ReadNodeProperty(clipNode, DAE_START_ATTRIBUTE)));
	animationClip->SetEnd(FUStringConversion::ToFloat(ReadNodeProperty(clipNode, DAE_END_ATTRIBUTE)));
	if (animationClip->GetEnd() - animationClip->GetStart() < FLT_TOLERANCE)
	{
		FUError::Error(FUError::WARNING_LEVEL, FUError::WARNING_INVALID_SE_PAIR, clipNode->line);
	}

	// Read in the <input> elements and segment the corresponding animation curves
	xmlNodeList inputNodes;
	FindChildrenByType(clipNode, DAE_INSTANCE_ANIMATION_ELEMENT, inputNodes);
	for (xmlNodeList::iterator itI = inputNodes.begin(); itI != inputNodes.end(); ++itI)
	{
		FCDEntityInstance* animationInstance = animationClip->AddInstanceAnimation();
		if (!LoadSwitch(animationInstance, &animationInstance->GetObjectType(), *itI))
		{
			SAFE_DELETE(animationInstance);
			continue;
		}

		fm::string name = ReadNodeProperty(*itI, DAE_NAME_ATTRIBUTE);
		animationClip->SetAnimationName(name, animationClip->GetAnimationCount() - 1);
	}

	// Check for an empty clip
	if (animationClip->GetClipCurves().empty())
	{
		FUError::Error(FUError::WARNING_LEVEL, FUError::WARNING_EMPTY_ANIM_CLIP, clipNode->line);
	}

	animationClip->SetDirtyFlag();
	return status;
}

void FArchiveXML::LoadAnimatable(FCDParameterAnimatable* animatable, xmlNode* node)
{
	if (animatable == NULL || node == NULL) return;
	FCDAnimated* animated = animatable->GetAnimated();
	if (!FArchiveXML::LinkAnimated(animated, node)) SAFE_RELEASE(animated);
}

void FArchiveXML::LoadAnimatable(FCDocument* document, FCDParameterListAnimatable* animatable, xmlNode* node)
{
	if (animatable == NULL || node == NULL) return;

	// Look for an animation on this list object
	Int32List animatedIndices;
	FArchiveXML::FindAnimationChannelsArrayIndices(document, node, animatedIndices);
	for (Int32List::iterator it = animatedIndices.begin(); it != animatedIndices.end(); ++it)
	{
		// Check for repeated animated indices
		if (it > animatedIndices.find(*it)) continue;

		FCDAnimated* animated = animatable->GetAnimated(*it);
		if (!FArchiveXML::LinkAnimated(animated, node)) SAFE_RELEASE(animated);
	}
}

bool FArchiveXML::ProcessChannels(FCDAnimated* animated, FCDAnimationChannelList& channels)
{
	bool linked = false;

	StringList& qualifiers = animated->GetQualifiers();
	for (FCDAnimationChannelList::iterator it = channels.begin(); it != channels.end(); ++it)
	{
		FCDAnimationChannel* channel = *it;
		size_t curveCount = channel->GetCurveCount();
		if (curveCount == 0) continue;

		// Retrieve the channel's qualifier and check for a requested matrix element
		FCDAnimationChannelDataMap::iterator itChannelData = FArchiveXML::documentLinkDataMap[channel->GetDocument()].animationChannelData.find(channel);
		FUAssert(itChannelData != FArchiveXML::documentLinkDataMap[channel->GetDocument()].animationChannelData.end(),);
		FCDAnimationChannelData& channelData = itChannelData->second;

		const fm::string& qualifier = channelData.targetQualifier;
		if (!qualifier.empty())
		{
			// Qualifed curves can only target a single element?
			FUAssert(curveCount == 1,);
			int32 element = -1;
			// If the animated is part of a list (ie, morph target weight, not a transform etc)
			if (animated->GetArrayElement() != -1)
			{
				// By definition, if an animated has an array element, it can only
				// animate a single value.
				element = FUStringConversion::ParseQualifier(qualifier);
				if (animated->GetArrayElement() != element) continue;
				else
				{
					linked = animated->AddCurve(0, channel->GetCurve(0));
				}
			}
			else
			{
				// Attempt to match the qualifier with this animated qualifiers
				size_t index;
				for (index = 0; index < qualifiers.size(); ++index)
				{
					if (qualifiers[index] == qualifier) break;
				}


				// Check for bracket notation eg -(X)- instead
				if (index == qualifiers.size()) index = FUStringConversion::ParseQualifier(qualifier);
				if (index < qualifiers.size())
				{
					linked = animated->AddCurve(index, channel->GetCurve(0));
				}
				else
				{
					// Attempt to match with some of the standard qualifiers instead.
					size_t checkCount = min((size_t) 4u, qualifiers.size());
					for (index = 0; index < checkCount; ++index)
					{
						if (IsEquivalent(qualifier, FCDAnimatedStandardQualifiers::XYZW[index])) break;
						else if (IsEquivalent(qualifier, FCDAnimatedStandardQualifiers::RGBA[index])) break;
					}
					if (index < checkCount)
					{
						linked = animated->AddCurve(index, channel->GetCurve(0));
						WARNING_OUT("Invalid qualfiier for animation channel target: %s - %s. Using non-standard match.", channelData.targetPointer.c_str(), qualifier.c_str());
					}
					else
					{
						const char* temp1 = channelData.targetPointer.c_str();
						const char* temp2 = qualifier.c_str();
						ERROR_OUT("Invalid qualifier for animation channel target: %s - %s", temp1, temp2);
					}
				}
				//else return status.Fail(FS("Invalid qualifier for animation channel target: ") + TO_FSTRING(pointer));

			}
		}
		else
		{
			// An empty qualifier implies that the channel should provide ALL the curves
			size_t nCurves = min(curveCount, qualifiers.size());
			for (size_t i = 0; i < nCurves; ++i)
			{
				animated->AddCurve(i, channel->GetCurve(i));
				linked = true;
			}
		}
	}

	if (linked)
	{
		// Now that the curves are imported: set their target information
		for (size_t i = 0; i < animated->GetCurves().size(); ++i)
		{
			for (size_t j = 0; j < animated->GetCurves()[i].size(); ++j)
			{
				FCDAnimationCurveData& curveData = FArchiveXML::documentLinkDataMap[animated->GetCurves()[i][j]->GetDocument()].animationCurveData[animated->GetCurves()[i][j]];

				curveData.targetElement = animated->GetArrayElement();
				curveData.targetQualifier = qualifiers[i];
			}
		}
	}

	animated->SetDirtyFlag();
	return linked;
}

void FArchiveXML::FindAnimationChannels(FCDocument* fcdocument, const fm::string& pointer, FCDAnimationChannelList& channels)
{
	if (pointer.empty()) return;

	size_t animationCount = (uint32) fcdocument->GetAnimationLibrary()->GetEntityCount();
	for (size_t i = 0; i < animationCount; ++i)
	{
		FCDAnimation* animation = fcdocument->GetAnimationLibrary()->GetEntity(i);
		FArchiveXML::FindAnimationChannels(animation, pointer, channels);
	}
}

void FArchiveXML::FindAnimationChannels(FCDAnimation* animation, const fm::string& pointer, FCDAnimationChannelList& targetChannels)
{
	// Look for channels locally
	for (size_t i = 0; i < animation->GetChannelCount(); ++i)
	{
		FCDAnimationChannelDataMap::iterator itChannelData = FArchiveXML::documentLinkDataMap[animation->GetChannel(i)->GetDocument()].animationChannelData.find(animation->GetChannel(i));
		FUAssert(itChannelData != FArchiveXML::documentLinkDataMap[animation->GetChannel(i)->GetDocument()].animationChannelData.end(),);
		FCDAnimationChannelData& channelData = itChannelData->second;

		if (channelData.targetPointer == pointer)
		{
			targetChannels.push_back(animation->GetChannel(i));
		}
	}

	// Look for channel(s) within the child animations
	for (size_t i = 0; i < animation->GetChildrenCount(); ++i)
	{
		FArchiveXML::FindAnimationChannels(animation->GetChild(i), pointer, targetChannels);
	}
}
