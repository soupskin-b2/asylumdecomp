// FUFunctorTest.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// FCollada 3.05B (Feeling Software; MIT license), FUtils/FUFunctorTest.cpp: the FUFunctor test suite.
// The game links the FCollada library with its self tests enabled. FCollada has no kit headers, so the
// library headers this file includes are pasted in place of their #include lines, unchanged (the #line
// directives keep __FILE__ and __LINE__ as they were in the original build).
// Left out, because this file does not use them: FMath/FMColor.h, FUtils/FUTracker.h, FUtils/FUCrc32.h. (Which headers
// are present matters: this compiler picks the operand order of some commutative operations, here the
// heapBuffer + sized of fm::vector::end(), from the state earlier declarations left behind, and
// the real translation unit also held <windows.h> and libxml, which cannot be reproduced here.)

#define WIN32
#define UNICODE
#include "ue3/Win32.h" // stands in for <windows.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
extern "C" __declspec(dllimport) char* __cdecl _getcwd(char* buffer, int maxlen); // <direct.h>
typedef struct _xmlNode xmlNode; // stands in for <libxml/tree.h>
#line 1 ".\\FUtils\\FUFunctorTest.cpp"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

// #include "StdAfx.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\futils\\StdAfx.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

#ifndef _STD_AFX_H_
#define _STD_AFX_H_

// #include "FUtils/FUtils.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
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

/**
	@file FUtils.h
	Includes the common utilities classes and macros.
*/

/** @defgroup FUtils Utility Classes. */

// [January 2007] PLUG_CRT and the CRT memory debugger is not used directly, anymore, at Feeling Software.
// Instead, we rely on the Visual Leak Detector: http://www.codeproject.com/tools/visualleakdetector.asp

#ifndef _F_UTILS_H_
#define _F_UTILS_H_

// CRT
#ifdef _WIN32
#ifndef _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_DEPRECATE 1 // MSVS 2005 support.
#endif // _CRT_SECURE_NO_DEPRECATE
#pragma warning(disable:4702)
#endif // _WIN32

#define NOMINMAX /**< Rid us of the default versions of MINMAX. */
#ifdef max
#undef max
#endif // max
#ifdef min
#undef min
#endif // min

#ifndef FCOLLADA_NOMINMAX
/** Retrieves the largest of two values. */
template<class T>
inline T& max(T& x, T& y) { return (x > y) ? x : y; }
template<class T>
inline const T& max(const T& x, const T& y) { return (x > y) ? x : y; } /**< See above. */

/** Retrieves the smallest of two values. */
template <class T>
inline T& min(T& x, T& y) { return (x < y) ? x : y; }
template <class T>
inline const T& min(const T& x,const T& y) { return (x < y) ? x : y; } /**< See above. */
#endif // FCOLLADA_NOMINMAX

#ifdef _WIN32
#pragma warning(default:4702)
#endif

// Conversion macros
#define UNUSED(a) /**< Removes a piece of code during the pre-process. This macro is useful for these pesky unused variable warnings. */
#ifdef _DEBUG
#define UNUSED_NDEBUG(a) a
#else
#define UNUSED_NDEBUG(a) /**< Removes a piece of debug code during the pre-process. This macro is useful for these pesky unused variable warnings. */
#endif // _DEBUG

// Pre-include the platform-specific macros and definitions
#ifndef _FU_PLATFORMS_H_
// #include "FUtils/Platforms.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/Platforms.h"
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

#ifndef _FU_PLATFORMS_H_
#define _FU_PLATFORMS_H_

#ifdef FCOLLADA_DLL
#ifdef WIN32
// Disable the "private member not available for export" warning,
// because I don't feel like writing interfaces
#pragma warning(disable:4251)
#ifdef FCOLLADA_INTERNAL
#define FCOLLADA_EXPORT __declspec(dllexport)
#define FCOLLADA_LOCAL
#else
#define FCOLLADA_EXPORT __declspec(dllimport)
#define FCOLLADA_LOCAL
#endif // FCOLLADA_INTERNAL
#elif defined(__APPLE__) || defined(LINUX)
#define FCOLLADA_EXPORT __attribute__((visibility("default")))
#define FCOLLADA_LOCAL __attribute__((visibility("hidden")))
#endif
#else // FCOLLADA_DLL
#define FCOLLADA_EXPORT
#define FCOLLADA_LOCAL
#endif // FCOLLADA_DLL

#ifdef __PPU__
#define UNICODE
#endif // __PPU__

// Ensure that both UNICODE and _UNICODE are set.
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
#endif // _INC_MATH

#ifdef WIN32

#pragma warning(disable:4702)
#ifndef _WIN32_WINNT		// Allow use of features specific to Windows XP or later.
#define _WIN32_WINNT 0x0501	// Change this to the appropriate value to target other versions of Windows.
#endif

// #include <windows.h>
#include <stdio.h>
#include <wchar.h>
#else
#ifdef __APPLE__
#include <ctype.h>
#include <wctype.h>
// #include <unistd.h>
#include <string.h>
#include <wchar.h>
// #include <stdint.h>
#else // __APPLE__
#if defined(LINUX) || defined(__PPU__)
#include <ctype.h>
#include <wctype.h>
// #include <unistd.h>
#include <string.h>
#include <wchar.h>
#include <stdarg.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>
// #include <stdint.h>
#else // OTHER...
#error "Unsupported platform."
#endif // LINUX || __PPU__
#endif // __APPLE__

#endif // WIN32

// Cross-platform type definitions
#ifdef WIN32

typedef signed char int8;
typedef short int16;
typedef long int32;
typedef __int64 int64;
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;
typedef unsigned __int64 uint64;

#else // For LINUX and __APPLE__

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
// #include <climits>
#endif // _CLIMITS_

#endif // PLATFORMS

// Important functions that some OSes have missing!
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

#endif // __APPLE__ and LINUX

// Cross-platform needed functions
#ifdef WIN32

#define vsnprintf _vsnprintf
#define snprintf _snprintf
#define vsnwprintf _vsnwprintf
#if _MSC_VER >= 1400 //vc8.0 use new secure
	#define snwprintf _snwprintf_s
#else
	#define snwprintf _snwprintf
#endif // _MSC_VER

#define strlower _strlwr

#else // WIN32

#define vsnwprintf vswprintf
#define snwprintf swprintf

#endif // WIN32

// For Doxygen purposes, we stopped using the "using namespace std;" statement and use shortcuts instead.

// fstring and character definition
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
		#define fstricmp wcscmp		// [claforte] TODO: Implement __PPU__ version of wcsicmp
	#elif defined(WIN32)
		#define fstricmp _wcsicmp
	#else
		#define fstricmp wcsicmp
	#endif // !__PPU__

	#ifdef WIN32
		#define fstrlower _wcslwr
	#else
		#define fstrlower wcslwr
	#endif // WIN32

	#ifdef WIN32
		#define fchdir _tchdir
	#else // WIN32
		#define fchdir(a) chdir(FUStringConversion::ToString(a).c_str())
	#endif // !WIN32

#else // UNICODE

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

#endif // UNICODE

#ifndef WIN32
#define MAX_PATH 1024
#endif // !WIN32

#ifdef WIN32
//#pragma warning(disable:4324) // Don't bother me about forcing the padding of aligned structure.
/** Alignment macro for classes and structures.
	Only supported in MSVS 2005 for now.
	@param byteCount The number of bytes to align to.*/
//#define ALIGN_STRUCT(byteCount) __declspec(align(byteCount))
#define ALIGN_STRUCT(byteCount)
#else // !WIN32
#define ALIGN_STRUCT(byteCount)
#endif // WIN32

#if defined(WIN32) && _MSC_VER >= 1400
#define DEPRECATED(versionNumber, alternative) __declspec(deprecated("[" #versionNumber "] This function is now deprecated. Please use '" #alternative "' instead."))
#else
/** Deprecated macro for functions.
	Only supported in MSVS 2005 for now.
	@param versionNumber The version of FCollada that officially deprecated this function.
	@param alternative The function or class to use instead. */
#define DEPRECATED(versionNumber, alternative)
#endif // WIN32 && MSVS2005

#endif // _FU_PLATFORMS_H_
#line 73 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
#endif // _FU_PLATFORMS_H_
#ifndef _FU_ASSERT_H_
// #include "FUtils/FUAssert.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUAssert.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FUAssert.h
	This file contains a simple debugging assertion mechanism.
*/

#ifndef _FU_ASSERT_H_
#define _FU_ASSERT_H_

#ifndef _FU_FUNCTOR_H_
// #include "FUtils/FUFunctor.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUFunctor.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/
/*
	This file was taken off the Protect project on 26-09-2005
*/

#ifndef _FU_FUNCTOR_H_
#define _FU_FUNCTOR_H_

/**
	A functor with no arguments.
	@ingroup FUtils
*/
template<class ReturnType>
class IFunctor0
{
public:
	/** Destructor. */
	virtual ~IFunctor0() {}

	/** Calls the functor.
		@return Implementation-dependant. */
	virtual ReturnType operator()() const = 0;

	/** Checks whether this functor points towards the given member function.
		@param object The object which holds the member function.
		@param function The member function.
		@return Whether this functor points towards the given member function. */
	virtual bool Compare(void* object, void* function) const = 0;

	/** Returns a copy of this functor */
	virtual IFunctor0<ReturnType>* Copy() const = 0;
};

/**
	A functor with no arguments.
	@ingroup FUtils
*/
template<class Class, class ReturnType>
class FUFunctor0 : public IFunctor0<ReturnType>
{
private:
	Class* m_pObject;
	ReturnType (Class::*m_pFunction) ();

public:
	/** Constructor.
		@param object An object.
		@param function A member function of this object. */
	FUFunctor0(Class* object, ReturnType (Class::*function) ()) { m_pObject = object; m_pFunction = function; }

	/** Destructor. */
	virtual ~FUFunctor0() {}

	/** Calls the functor.
		@return Implementation-dependant. */
	virtual ReturnType operator()() const
	{ return ((*m_pObject).*m_pFunction)(); }

	/** Checks whether this functor points towards the given member function.
		@param object The object which holds the member function.
		@param function The member function.
		@return Whether this functor points towards the given member function. */
	virtual bool Compare(void* object, void* function) const
	{ return object == m_pObject && (size_t)function == *(size_t*)&m_pFunction; }

	/** Returns a copy of this functor */
	virtual IFunctor0<ReturnType>* Copy() const
	{ return new FUFunctor0<Class, ReturnType>(m_pObject, m_pFunction); }
};

/** Shortcut for new FUFunctor0<>.
	@param o An object.
	@param function A member function. */
template <class ClassName, class ReturnType>
inline FUFunctor0<ClassName, ReturnType>* NewFUFunctor0(ClassName* o, ReturnType (ClassName::*function) ())
{
	return new FUFunctor0<ClassName, ReturnType>(o, function);
}

/**
	A pseudo-functor with no arguments, specialized for static functions.
	@ingroup FUtils
*/
template<class ReturnType>
class FUStaticFunctor0 : public IFunctor0<ReturnType>
{
private:
	ReturnType (*m_pFunction) ();

public:
	/** Constructor.
		@param function A static function. */
	FUStaticFunctor0(ReturnType (*function) ()) { m_pFunction = function; }

	/** Destructor. */
	virtual ~FUStaticFunctor0() {}

	/** Calls the functor.
		@return Implementation-dependant. */
	virtual ReturnType operator()() const
	{ return (*m_pFunction)(); }

	/** Checks whether this pseudo-functor points towards the given function.
		@param UNUSED Unused.
		@param function The static function.
		@return Whether this pseudo-functor points towards the given function. */
	virtual bool Compare(void* UNUSED(object), void* function) const
	{ return (size_t)function == *(size_t*)(size_t)&m_pFunction; }

	/** Returns a copy of this functor */
	virtual IFunctor0<ReturnType>* Copy() const
	{ return new FUStaticFunctor0<ReturnType>(m_pFunction); }
};

/**
	A functor with one argument.
	@ingroup FUtils
*/
template<class Arg1, class ReturnType>
class IFunctor1
{
public:
	/** Destructor. */
	virtual ~IFunctor1() {}

	/** Calls the functor.
		@param argument1 A first argument.
		@return Implementation-dependant. */
	virtual ReturnType operator()(Arg1 argument1) const = 0;

	/** Checks whether this functor points towards the given member function.
		@param object The object which holds the member function.
		@param function The member function.
		@return Whether this functor points towards the given member function. */
	virtual bool Compare(void* object, void* function) const = 0;

	/** Returns a copy of this functor */
	virtual IFunctor1<Arg1, ReturnType>* Copy() const = 0;
};

/**
	A functor with one arguments.
	@ingroup FUtils
*/
template<class Class, class Arg1, class ReturnType>
class FUFunctor1 : public IFunctor1<Arg1, ReturnType>
{
private:
	Class* m_pObject;
	ReturnType (Class::*m_pFunction) (Arg1);

public:
	/** Constructor.
		@param object An object.
		@param function A member function of this object. */
	FUFunctor1(Class* object, ReturnType (Class::*function) (Arg1)) { m_pObject = object; m_pFunction = function; }

	/** Destructor. */
	virtual ~FUFunctor1() {}

	/** Calls the functor.
		@param argument1 A first argument.
		@return Implementation-dependant. */
	virtual ReturnType operator()(Arg1 argument1) const
	{ return ((*m_pObject).*m_pFunction)(argument1); }

	/** Checks whether this functor points towards the given member function.
		@param object The object which holds the member function.
		@param function The member function.
		@return Whether this functor points towards the given member function. */
	virtual bool Compare(void* object, void* function) const
	{ return object == m_pObject && (size_t)function == *(size_t*)(size_t)&m_pFunction; }

	/** Returns a copy of this functor */
	virtual IFunctor1<Arg1, ReturnType>* Copy() const
	{ return new FUFunctor1<Class, Arg1, ReturnType>(m_pObject, m_pFunction); }
};

/** Shortcut for new FUFunctor1<>.
	@param o An object.
	@param function A member function. */
template <class ClassName, class Argument1, class ReturnType>
inline FUFunctor1<ClassName, Argument1, ReturnType>* NewFUFunctor1(ClassName* o, ReturnType (ClassName::*function) (Argument1))
{
	return new FUFunctor1<ClassName, Argument1, ReturnType>(o, function);
}

/**
	A pseudo-functor with one arguments, specialized for static functions.
	@ingroup FUtils
*/
template<class Arg1, class ReturnType>
class FUStaticFunctor1 : public IFunctor1<Arg1, ReturnType>
{
private:
	ReturnType (*m_pFunction) (Arg1);

public:
	/** Constructor.
		@param function A static function. */
	FUStaticFunctor1(ReturnType (*function) (Arg1)) { m_pFunction = function; }

	/** Destructor. */
	virtual ~FUStaticFunctor1() {}

	/** Calls the functor.
		@param argument1 A first argument.
		@return Implementation-dependant. */
	virtual ReturnType operator()(Arg1 argument1) const
	{ return (*m_pFunction)(argument1); }

	/** Checks whether this pseudo-functor points towards the given function.
		@param UNUSED Unused.
		@param function The static function.
		@return Whether this pseudo-functor points towards the given function. */
	virtual bool Compare(void* UNUSED(object), void* function) const
	{ return (size_t)function == *(size_t*)(size_t)&m_pFunction; }

	/** Returns a copy of this functor */
	virtual IFunctor1<Arg1, ReturnType>* Copy() const
	{ return new FUStaticFunctor1<Arg1, ReturnType>(m_pFunction); }
};

/**
	A functor with two arguments.
	@ingroup FUtils
*/
template<class Arg1, class Arg2, class ReturnType>
class IFunctor2
{
public:
	/** Destructor. */
	virtual ~IFunctor2() {}

	/** Calls the functor.
		@param argument1 A first argument.
		@param argument2 A second argument.
		@return Implementation-dependant. */
	virtual ReturnType operator()(Arg1 argument1, Arg2 argument2) const = 0;

	/** Checks whether this functor points towards the given member function.
		@param object The object which holds the member function.
		@param function The member function.
		@return Whether this functor points towards the given member function. */
	virtual bool Compare(void* object, void* function) const = 0;

	/** Returns a copy of this functor */
	virtual IFunctor2<Arg1, Arg2, ReturnType>* Copy() const = 0;
};

/**
	A functor with two arguments.
	@ingroup FUtils
*/
template<class Class, class Arg1, class Arg2, class ReturnType>
class FUFunctor2 : public IFunctor2<Arg1, Arg2, ReturnType>
{
private:
	Class* m_pObject;
	ReturnType (Class::*m_pFunction) (Arg1, Arg2);

public:
	/** Constructor.
		@param object An object.
		@param function A member function of this object. */
	FUFunctor2(Class* object, ReturnType (Class::*function) (Arg1, Arg2)) { m_pObject = object; m_pFunction = function; }

	/** Destructor. */
	virtual ~FUFunctor2() {}

	/** Calls the functor.
		@param argument1 A first argument.
		@param argument2 A second argument.
		@return Implementation-dependant. */
	virtual ReturnType operator()(Arg1 argument1, Arg2 argument2) const
	{ return ((*m_pObject).*m_pFunction)(argument1, argument2); }

	/** Checks whether this functor points towards the given member function.
		@param object The object which holds the member function.
		@param function The member function.
		@return Whether this functor points towards the given member function. */
	virtual bool Compare(void* object, void* function) const
	{ return object == m_pObject && (size_t)function == *(size_t*)(size_t)&m_pFunction; }

	/** Returns a copy of this functor */
	virtual IFunctor2<Arg1, Arg2, ReturnType>* Copy() const
	{ return new FUFunctor2<Class, Arg1, Arg2, ReturnType>(m_pObject, m_pFunction); }
};

/** Shortcut for new FUFunctor2<>.
	@param o An object.
	@param function A member function. */
template <class ClassName, class Argument1, class Argument2, class ReturnType>
inline FUFunctor2<ClassName, Argument1, Argument2, ReturnType>* NewFUFunctor2(ClassName* o, ReturnType (ClassName::*function) (Argument1, Argument2))
{
	return new FUFunctor2<ClassName, Argument1, Argument2, ReturnType>(o, function);
}

/**
	A pseudo-functor with two arguments, specialized for static functions.
	@ingroup FUtils
*/
template<class Arg1, class Arg2, class ReturnType>
class FUStaticFunctor2 : public IFunctor2<Arg1, Arg2, ReturnType>
{
private:
	ReturnType (*m_pFunction) (Arg1, Arg2);

public:
	/** Constructor.
		@param function A static function. */
	FUStaticFunctor2(ReturnType (*function) (Arg1, Arg2)) { m_pFunction = function; }

	/** Destructor. */
	virtual ~FUStaticFunctor2() {}

	/** Calls the functor.
		@param argument1 A first argument.
		@param argument2 A second argument.
		@return Implementation-dependant. */
	virtual ReturnType operator()(Arg1 argument1, Arg2 argument2) const
	{ return (*m_pFunction)(argument1, argument2); }

	/** Checks whether this pseudo-functor points towards the given function.
		@param UNUSED Unused.
		@param function The static function.
		@return Whether this pseudo-functor points towards the given function. */
	virtual bool Compare(void* UNUSED(object), void* function) const
	{ return (size_t)function == *(size_t*)(size_t)&m_pFunction; }

	/** Returns a copy of this functor */
	virtual IFunctor2<Arg1, Arg2, ReturnType>* Copy() const
	{ return new FUStaticFunctor2<Arg1, Arg2, ReturnType>(m_pFunction); }
};

/**
	A functor with three arguments.
	@ingroup FUtils
*/
template<class Arg1, class Arg2, class Arg3, class ReturnType>
class IFunctor3
{
public:
	/** Destructor. */
	virtual ~IFunctor3() {}

	/** Calls the functor.
		@param argument1 A first argument.
		@param argument2 A second argument.
		@param argument3 A third argument.
		@return Implementation-dependant. */
	virtual ReturnType operator()(Arg1 argument1, Arg2 argument2, Arg3 argument3) const = 0;

	/** Checks whether this functor points towards the given member function.
		@param object The object which holds the member function.
		@param function The member function.
		@return Whether this functor points towards the given member function. */
	virtual bool Compare(void* object, void* function) const = 0;

	/** Returns a copy of this functor */
	virtual IFunctor3<Arg1, Arg2, Arg3, ReturnType>* Copy() const = 0;
};

/**
	A functor with three arguments.
	@ingroup FUtils
*/
template<class Class, class Arg1, class Arg2, class Arg3, class ReturnType>
class FUFunctor3 : public IFunctor3<Arg1, Arg2, Arg3, ReturnType>
{
private:
	Class* m_pObject;
	ReturnType (Class::*m_pFunction) (Arg1, Arg2, Arg3);

public:
	/** Constructor.
		@param object An object.
		@param function A member function of this object. */
	FUFunctor3(Class* object, ReturnType (Class::*function) (Arg1, Arg2, Arg3)) { m_pObject = object; m_pFunction = function; }

	/** Destructor. */
	virtual ~FUFunctor3() {}

	/** Calls the functor.
		@param argument1 A first argument.
		@param argument2 A second argument.
		@param argument3 A third argument.
		@return Implementation-dependant. */
	virtual ReturnType operator()(Arg1 argument1, Arg2 argument2, Arg3 argument3) const
	{ return ((*m_pObject).*m_pFunction)(argument1, argument2, argument3); }

	/** Checks whether this functor points towards the given member function.
		@param object The object which holds the member function.
		@param function The member function.
		@return Whether this functor points towards the given member function. */
	virtual bool Compare(void* object, void* function) const
	{ return object == m_pObject && (size_t)function == *(size_t*)(size_t)&m_pFunction; }

	/** Returns a copy of this functor */
	virtual IFunctor3<Arg1, Arg2, Arg3, ReturnType>* Copy() const
	{ return new FUFunctor3<Class, Arg1, Arg2, Arg3, ReturnType>(m_pObject, m_pFunction); };
};

/** Shortcut for new FUFunctor2<>.
	@param o An object.
	@param function A member function. */
template <class ClassName, class Argument1, class Argument2, class Argument3, class ReturnType>
inline FUFunctor3<ClassName, Argument1, Argument2, Argument3, ReturnType>* NewFUFunctor3(ClassName* o, ReturnType (ClassName::*function) (Argument1, Argument2, Argument3))
{
	return new FUFunctor3<ClassName, Argument1, Argument2, Argument3, ReturnType>(o, function);
}

/**
	A pseudo-functor with three arguments, specialized for static functions.
	@ingroup FUtils
*/
template<class Arg1, class Arg2, class Arg3, class ReturnType>
class FUStaticFunctor3 : public IFunctor3<Arg1, Arg2, Arg3, ReturnType>
{
private:
	ReturnType (*m_pFunction) (Arg1, Arg2, Arg3);

public:
	/** Constructor.
		@param function A static function. */
	FUStaticFunctor3(ReturnType (*function) (Arg1, Arg2, Arg3)) { m_pFunction = function; }

	/** Destructor. */
	virtual ~FUStaticFunctor3() {}

	/** Calls the functor.
		@param argument1 A first argument.
		@param argument2 A second argument.
		@param argument3 A third argument.
		@return Implementation-dependant. */
	virtual ReturnType operator()(Arg1 argument1, Arg2 argument2, Arg3 argument3) const
	{ return (*m_pFunction)(argument1, argument2, argument3); }

	/** Checks whether this pseudo-functor points towards the given function.
		@param UNUSED Unused.
		@param function The static function.
		@return Whether this pseudo-functor points towards the given function. */
	virtual bool Compare(void* UNUSED(object), void* function) const
	{ return (size_t)function == *(size_t*)(size_t)&m_pFunction; }

	/** Returns a copy of this functor */
	virtual IFunctor3<Arg1, Arg2, Arg3, ReturnType>* Copy() const
	{ return new FUStaticFunctor3<Arg1, Arg2, Arg3, ReturnType>(m_pFunction); };
};

#endif //_FU_FUNCTOR_H_
#line 19 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUAssert.h"
#endif // _FU_FUNCTOR_H_

namespace FUAssertion
{
    /** A functor that deals with assertions that fail. */
	typedef FUStaticFunctor1<const char*, bool> FUAssertCallback;

	/** Set a functor to be called back on assertion fail.  If no callback
		is set, the default value is to break with a message box
		@param assertionCallback Ptr to the callback to send messages to. */
	FCOLLADA_EXPORT void SetAssertionFailedCallback(FUAssertCallback* assertionCallback);

	/** [INTERNAL] Event-handler for failed assertions.
        Do not use directly. We recommend you use FUBreak, FUFail or FUAssert. */
	FCOLLADA_EXPORT bool OnAssertionFailed(const char* filename, uint32 line);
};

#ifdef _DEBUG

#ifndef __FILE__
// This is unfortunately what we get on non-WIN
#define __FILE__	"NOT_SET"
#define __LINE__	0
#endif

/** Breaks into the debugger.
	In debug builds, this intentionally crashes the application. */
#define FUBreak \
	static bool ignoreAssert = false; \
	if (!ignoreAssert) { ignoreAssert = FUAssertion::OnAssertionFailed(__FILE__, __LINE__); }
#else

/** Breaks into the debugger.
	In release builds, this is an empty function. */
#define FUBreak  { FUAssertion::OnAssertionFailed(__FILE__, __LINE__); }

#endif // _DEBUG

/** Forces the debugger to break, or take the fall-back.
	@param command The fall_back command to execute. */
#define FUFail(command) { FUBreak; command; }

/** Asserts that a condition is met.
	Use this macro, instead of 'if' statements
	when you are asserting for a programmer's error.
	@param condition The condition to assert.
	@param fall_back The command to execute if the condition is not met. */
#define FUAssert(condition, fall_back) { if (!(condition)) { FUBreak; fall_back; } }

#endif // _FU_ASSERT_H_
#line 76 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
#endif // _FU_ASSERT_H_

// FMath
#define HAS_VECTORTYPES /**< Used by FCollada, implies that we are including all the common dynamically-sized arrays. */
#ifndef _F_MATH_H_
// #include "FMath/FMath.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FMath.h
	The file containing functions and constants for math.

	@defgroup FMath Mathematics Classes.
*/

#ifndef _F_MATH_H_
#define _F_MATH_H_

#ifndef _INC_MATH
#include <math.h>
#endif // _INC_MATH

#ifndef _FM_FLOAT_H_
// #include "FMath/FMFloat.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMFloat.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FMFloat.h
	The file containing functions and constants for floating point values.
 */

#ifndef _FM_FLOAT_H_
#define _FM_FLOAT_H_

#if !defined(_INC_FLOAT) && (defined (WIN32) || defined (LINUX) || defined(__APPLE__))
#include <float.h>
#endif // _INC_FLOAT, WIN32 and LINUX

/** The default tolerance for double-sized floating-point comparison functions. */
#define DBL_TOLERANCE 0.0001
/** The default tolerance for single-sized floating-point comparison functions. */
#define FLT_TOLERANCE 0.0001f

/** Returns whether two floating-point values are equivalent within a given tolerance.
	@param f1 A first floating-point value.
	@param f2 A second floating-point value. */
inline bool IsEquivalent(float f1, float f2) { return f1 - f2 < FLT_TOLERANCE && f2 - f1 < FLT_TOLERANCE; }

/** Returns whether two floating-point values are equivalent within a given tolerance.
	@param f1 A first floating-point value.
	@param f2 A second floating-point value.
	@param tolerance The tolerance in which to accept the two floating-point values as equivalent. */
inline bool IsEquivalent(float f1, float f2, float tolerance) { return f1 - f2 < tolerance && f2 - f1 < tolerance; }

/** Returns whether two double-sized floating-point values are equivalent.
	@param f1 A first double-sized floating-point value.
	@param f2 A second double-sized floating-point value. */
inline bool IsEquivalent(double f1, double f2) { return f1 - f2 < DBL_TOLERANCE && f2 - f1 < DBL_TOLERANCE; }

/** Returns whether two double-sized floating-point values are equivalent within a given tolerance.
	@param f1 A first double-sized floating-point value.
	@param f2 A second double-sized floating-point value.
	@param tolerance The tolerance in which to accept the two double-sized floating-point values as equivalent. */
inline bool IsEquivalent(double f1, double f2, double tolerance) { return f1 - f2 < tolerance && f2 - f1 < tolerance; }

#ifndef FLT_MAX
/** The maximum value that can be expressed using a 32-bit floating point value.
	This macro is pre-defined in the Windows API but is missing on MacOSX and other platforms. */
#define FLT_MAX __FLT_MAX__
#endif

#endif // _FM_FLOAT_H_
#line 25 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
#endif // _FM_FLOAT_H_


/** Retrieves whether two values are equivalent.
	This template simply calls the operator== on the two values.
	@param v1 A first value.
	@param v2 A second value.
	@return Whether the two values are equivalent. */
template <class T>
bool IsEquivalent(const T& v1, const T& v2) { return v1 == v2; }

// Includes the improved vector class.
#ifndef _FM_ARRAY_H_
// #include "FMath/FMArray.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FMArray.h
	The file contains the vector class, which improves on the standard C++ vector class.
 */

#ifndef _FM_ARRAY_H_
#define _FM_ARRAY_H_

#ifndef _FM_ALLOCATOR_H_
// #include "FMath/FMAllocator.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMAllocator.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FMAllocator.h
	The file contains the simple_allocator class and some export memory management functions.
 */

#ifndef _FM_ALLOCATOR_H_
#define _FM_ALLOCATOR_H_

#include <new.h>

#ifdef new
#define _OLD_NEW new
#undef new
#endif // new

namespace fm
{
	/** An allocation function type.
		@param size The size, in bytes, to allocate.
		@return The allocated buffer or NULL if not enough memory is available.*/
	typedef void* (*AllocateFunc)(size_t size);

	/** A deallocation function type.
		@param buffer The memory buffer to deallocate.*/
	typedef void (*FreeFunc)(void* buffer);

	/** Sets the FCollada memory allocation / deallocation functions.
		@param a The Allocation function. Defaults to malloc.
		@param f The Deallocation function. Defaults to free.*/
	FCOLLADA_EXPORT void SetAllocationFunctions(AllocateFunc a, FreeFunc f);

	/** Allocates a requested amount of memory.
		@param byteCount The amount of memory to allocate, in bytes.
		@return A pointer to the memory address. This pointer will be NULL if there is not
			enough memory to allocate. */
	FCOLLADA_EXPORT void* Allocate(size_t byteCount);

	/** Releases a memory buffer.
		@param buffer The memory buffer to release. */
	FCOLLADA_EXPORT void Release(void* buffer);

	/** Construct the object at a given pointer.
		@param o A pointer to the object. */
	template <class Type1>
	inline void Construct(Type1* o)
	{
		::new (o) Type1;
	}

	/** Construct the object at a given pointer.
		@param o A pointer to the object.
		@param value The value to copy. */
	template <class Type1, class Type2>
	inline void Construct(Type1* o, const Type2& value)
	{
		::new (o) Type1(value);
	}
};

#ifdef _OLD_NEW
#define new _OLD_NEW
#undef _OLD_NEW
#endif // _OLD_NEW

#endif // _FM_ALLOCATOR_H_
#line 19 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h"
#endif // _FM_ALLOCATOR_H_
#ifndef _FM_SORT_H_
// #include "FMath/FMSort.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMSort.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FMSort.h
	The file contains the fm::comparator and fm::pcomparator classes.
 */

#ifndef _FM_SORT_H_
#define _FM_SORT_H_

namespace fm
{
	/** A utility function to swap data.*/
	template <class T>
	inline void swap(T& a, T& b)
	{
		T temp = a;
		a = b;
		b = temp;
	}

	/** A utility to sort arrays.*/
	template <class T>
	class comparator
	{
	public:
		/** Destructor. */
		virtual ~comparator() {}

		/** Compares two elements in ascending order, using operator<.
			Override this function to define your custom comparator.
			@param a The first element.
			@param b The second element.
			@return True if a is smaller than b, false otherwise.*/
		virtual bool compare(const T& a, const T& b)
		{
			return (a < b);
		}

		/** Sorts the given array using the quick sort algorithm.
			@param data The data array to sort.
			@param count The number of elements in the array.*/
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

	/** A utility to sort an array in descending order, using operator<.*/
	template <class T>
	class icomparator : public comparator<T>
	{
	public:
		/** Destructor. */
		virtual ~icomparator() {}

		/** Compares two elements in descending order, using operator<.
			Override this function to define your custom comparator.
			@param a The first element.
			@param b The second element.
			@return True if a is greater than b, false otherwise.*/
		virtual bool compare(const T& a, const T& b)
		{
			return (b < a);
		}
	};

	/** A utility to sort arrays of pointer elements.*/
	template <class T>
	class pcomparator : public comparator<const void*>
	{
	public:
		typedef const void* valueType;

		/** Destructor. */
		virtual ~pcomparator() {}

		/** Compares two pointers.
			Override this function to define your own pcomparator.
			@param a Element a.
			@param b Element b.
			@return True if a is smaller than b, false otherwise.*/
		virtual bool compare(const T* a, const T* b)
		{
			return (a < b);
		}

		/** [INTERNAL] Override from comparator<T>::compare().
			Do not override this function.
			@param a (void*) representation of an element.
			@param b (void*) representation of another element.
			@return The comparison casting a and b to (T*).*/
		virtual bool compare(const valueType& a, const valueType& b)
		{
			return compare((const T*)a, (const T*)b);
		}
	};
}

#endif // _FM_SORT_H_
#line 22 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArray.h"
#endif // _FM_SORT_H_

#ifdef WIN32
#pragma warning(disable:4127)
#endif //WIN32

/** Namespace that contains the overwritten STL classes. */
namespace fm
{
	/**
		A dynamically-sized array.
		Intentionally has an interface similar to the standard C++ vector class.
		It's implement should be very similar yet more lightweight.

		We have also added useful extra functionality, such as a constructor that takes
		in a constant-sized array, comparison with a constant-sized array, erase and find
		functions that take in a value, etc.

		@ingroup FMath
	*/
	template <class T, bool PRIMITIVE=false>
	class vector
	{
	protected:
		size_t reserved; /**< The capacity of the vector. */
		size_t sized; /**< The number of values contained in the vector. */
		T* heapBuffer; /**< The heap buffer that contains the values. */

	public:
		/** The basic list iterator. */
		typedef T* iterator;

		/** The non-modifiable list iterator. */
		typedef const T* const_iterator;

	public:
		/** Default constructor. */
		vector() : reserved(0), sized(0), heapBuffer(NULL) {}

		/** Constructor. Builds a dynamically-sized array of the wanted size.
			@param size The wanted size of the array. */
		vector(size_t size) : reserved(0), sized(0), heapBuffer(NULL)
		{
			resize(size);
		}

		/** Constructor. Builds a dynamically-sized array of the wanted size.
			@param size The wanted size of the array
			@param defaultValue The default value to use for all the entries of the array. */
		vector(size_t size, const T& defaultValue) : reserved(0), sized(0), heapBuffer(NULL)
		{
			resize(size, defaultValue);
		}

		/** Copy constructor.
			@param copy The dynamically-sized array to copy the values from. */
		vector(const fm::vector<T,PRIMITIVE>& copy) : reserved(0), sized(0), heapBuffer(NULL)
		{
			insert(heapBuffer, copy.begin(), copy.size());
		}

		/** Constructor. Builds a dynamically-sized array from a constant-sized array.
			@param values A constant-sized array of floating-point values.
			@param count The size of the constant-sized array. */
		vector(const T* values, size_t count) : reserved(0), sized(0), heapBuffer(NULL)
		{
			insert(heapBuffer, values, count);
		}

		/** Destructor. */
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

		/** Retrieves a pointer to our internal buffer.
			Be very careful when using this.
			@return A pointer to our internal buffer. */
		inline T** GetDataPtr() { return &heapBuffer; }
		inline const T** GetDataPtr() const { return (const T**) &heapBuffer; } /**< See above. */

		/** Retrieves an iterator for a given element.
			@param value The value, contained within the list, to search for.
			@return An iterator to this element. The end() iterator
				is returned if the value is not found. */
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
		} /**< See above. */

		/** Sorts this vector using the default comparisons operator. */
		inline void sort()
		{
			comparator<T> comp;
			comp.sort(heapBuffer, sized);
		}

		/** Sorts this vector using the given fm::comparator.
			@param comparator The comparator used to sort the vector.*/
		inline void sort(comparator<T>& comp)
		{
			comp.sort(heapBuffer, sized);
		}

		/** Removes the value at the given position within the list.
			@param it The list position for the value to remove. */
		iterator erase(iterator it)
		{
			FUAssert(it >= begin() && it < end(), return it);
			if (!PRIMITIVE) (*it).~T();
			if (end() - it - 1 > 0) memmove(it, it+1, (end() - it - 1) * sizeof(T));
			--sized;
			return it;
		}

		/** Removes a range of values from the list. The range is determined as every value
			between and including the first value, up to the last value, but not including the
			last value.
			@param first An iterator pointing to the first list value to remove.
			@param last An iterator past the last list value to remove. */
		void erase(iterator first, iterator last)
		{
			FUAssert(first >= begin() && first < end(), return);
			FUAssert(last > begin() && last <= end(), return);
			if (!PRIMITIVE) for (iterator it = first; it != last; ++it) (*it).~T();
			if (end() - last > 0) memmove(first, last, (end() - last) * sizeof(T));
			sized -= last - first;
		}

		/** Removes a range of values from the list.
			@param first The index of the first value to remove.
			@param last The index just passed the last value to remove. */
		inline void erase(size_t first, size_t last) { erase(begin() + first, begin() + last); }

		/** Removes a value contained within the list, once.
			@param value The value, contained within the list, to erase from it.
			@return Whether the value was found and erased from the list. */
		inline bool erase(const T& value) { iterator it = find(value); if (it != end()) { erase(it); return true; } return false; }

		/** Removes an indexed value contained within the list.
			@param index The index of the value to erase. */
		inline void erase(size_t index) { erase(begin() + index); }

		/** Retrieves whether the list contains a given value.
			@param value A value that could be contained in the list.
			@return Whether the list contains this value. */
		inline bool contains(const T& value) const { const_iterator it = find(value); return it != end(); }

		/** Replaces all cases of one value into another value.
			@param start The iterator at which to start replacing values.
			@param end The iterator at which to end replacing values.
			@param oldValue The value to replace.
			@param newValue The value which replaces the old value. */
		template <class V2, class V3>
		inline void replace(const V2& oldValue, const V3& newValue)
		{
			for (iterator start = begin(), stop = end(); start != stop; ++start)
			{
				if (*start == (T) oldValue) *start = newValue;
			}
		}

		/** Replaces the instances of one value into another value
			within a given segment of the list.
			@param start The iterator at which to start replacing values.
			@param end The iterator at which to end replacing values.
			@param oldValue The value to replace.
			@param newValue The value which replaces the old value. */
		template <class V2, class V3>
		inline void replace(iterator start, iterator end, const V2& oldValue, const V3& newValue)
		{
			while (start != end)
			{
				if (*start == (T) oldValue) *start = newValue;
				++start;
			}
		}

		/** Retrieves the number of values contained in the list.
			@return The number of values contained in the list. */
		inline size_t size() const { return sized; }

		/** Retrieves whether there are any elements in the list. */
		inline bool empty() const { return sized == 0; }

		/** Sets the number of values contained in the list.
			@param count The new number of values contained in the list. */
		void resize(size_t count)
		{
			reserve(count);

			if (!PRIMITIVE)
			{
				T* it = end();
				for (; sized < count; ++sized)
				{
					// For non-primitive types, make sure we call the constructors of all the values.
					fm::Construct(it++);
				}
			}
			else
			{
				sized = reserved;
			}
		}

		/** Sets the number of values contained in the list.
			@param count The new number of values contained in the list.
			@param value The value to assign to the new entries in the list. */
		void resize(size_t count, const T& value)
		{
			reserve(count);
			T* it = end();

			for (; sized < count; ++sized)
			{
				// For non-primitive types, make sure we call the constructors of all the values.
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

		/** Removes all the element in the list. */
		inline void clear() { reserve(0); }

		/** Pre-allocate the list to a certain number of values.
			You can use reserve zero values in order to clear the memory
			used by this list. This function is useful when optimizing.
			@param count The new number of values pre-allocated in the list. */
		void reserve(size_t count)
		{
			// Basic check for stupidly large allocations;
			// basically all this is for is to catch (size_t)-1 calls
			// in debug mode. Ensure release will optimize out this call!
			FUAssert(count < INT_MAX, ;);
			if (reserved != count)
			{
				// For non-primitives, make sure we destroy all the values individually.
				if (PRIMITIVE)
				{
					if (sized > count) sized = count;
				}
				else
				{
					while (sized > count) pop_back();
				}

				// If we are reserving data, re-allocate a new buffer.
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

				// Free the old buffer.
				if (heapBuffer != NULL)
				{
					fm::Release(heapBuffer);
				}
				heapBuffer = newValues;
				reserved = count;
			}
		}

		/** Retrieves the maximum size the array can grow to without allocating memory
			size is always less than or equal to capacity
			@return The number of values the array currently has memory allocated for */
		inline size_t capacity() { return reserved; }
		inline size_t capacity() const { return reserved; } /**< See above. */

		/** Retrieves the iterator for the first value in the list.
			@return The iterator for the first value in the list. */
		inline iterator begin() { return heapBuffer; }
		inline const_iterator begin() const { return heapBuffer; } /**< See above. */

		/** Retrieves the iterator just past the last value in the list.
			@return The iterator for just past the last value in the list. */
		inline iterator end() { return heapBuffer + sized; }
		inline const_iterator end() const { return heapBuffer + sized; } /**< See above. */

		/** Inserts a new item at a given position within the list.
			@param it An iterator pointing to where to insert the item.
			@param item The item to insert.
			@return An iterator pointing to the inserted item within the list. */
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

		/** Inserts a new item at a given position within the list.
			@param index Where to insert the given value.
			@param item The item to insert. */
		inline void insert(size_t index, const T& item) { insert(begin() + index, item); }

		/** Inserts a new item at the end of the list.
			@param item The item to insert. */
		inline void push_back(const T& item) { insert(end(), item); }

		/** Inserts a new item at the front of the list.
			This operation is very expansive and not recommended
			for real-time operations.
			@param item The item to insert. */
		inline void push_front(const T& item) { insert(begin(), item); }

		/** Removes the last item from a list. */
		void pop_back()
		{
			FUAssert(sized > 0, return);
			if (!PRIMITIVE) (*(heapBuffer + sized - 1)).~T();
			--sized;
		}

		/** Removes the first item from a list.
			This operation is very expansive and not recommended
			for real-time operations. */
		inline void pop_front()
		{
			erase(begin());
		}

		/** Inserts multiple items at a given position within the list.
			@param it An iterator pointing to where to insert the items.
			@param first An iterator pointing to the first item to insert.
			@param last An iterator past the last item to insert. */
		template <typename _IT> inline void insert(iterator it, _IT first, _IT last)
		{
			size_t count = last - first;
			insert(it, first, count);
		}

		/** Inserts one item, multiple times at a given position within the list.
			@param it An iterator pointing to where to insert the item.
			@param count The number of times to insert the item.
			@param item The item to insert. */
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

		/** Inserts one value, multiple times, to this list.
			@param index Where to insert the value.
			@param count The number of times to insert this value.
			@param value The value to insert. */
		inline void insert(size_t index, size_t count, const T& value) { insert(begin() + index, count, value); }

		/** Inserts multiple items at a given position within the list,
			from a static list.
			@param it An iterator pointing to where to insert the items.
			@param first A pointer to the first item to insert.
			@param count The number of element within the static list
				that must be inserted within the list. */
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

		/** Inserts multiple values to this list.
			@param index Where to insert the values.
			@param values A static list of values.
			@param count The number of values to insert. */
		inline void insert(size_t index, const T* values, size_t count) { insert(begin() + index, values, count); }

		/** Retrieves the first element of the pointer array.
			@return The first element in the pointer array. */
		T& front() { FUAssert(sized > 0,); return (*heapBuffer); }
		const T& front() const { FUAssert(sized > 0,); return (*heapBuffer); } /**< See above. */

		/** Retrieves the last element of the pointer array.
			@return The last element in the pointer array. */
		T& back() { FUAssert(sized > 0,); return *(heapBuffer + sized - 1); }
		const T& back() const { FUAssert(sized > 0,); return *(heapBuffer + sized - 1); } /**< See above. */

		/** Retrieves an indexed object in the pointer array.
			@param index An index.
			@return The given object. */
		T& at(size_t index) { FUAssert(index < sized,); return heapBuffer[index]; }
		const T& at(size_t index) const { FUAssert(index < sized,); return heapBuffer[index]; } /**< See above. */
		template <class INTEGER> inline T& operator[](INTEGER index) { FUAssert((size_t) index < sized,); return heapBuffer[index]; } /**< See above. */
		template <class INTEGER> inline const T& operator[](INTEGER index) const { FUAssert((size_t) index < sized,); return heapBuffer[index]; } /**< See above. */

		/** Retrieves whether two lists are equivalent.
			@param other A second list.
			@return Whether the two lists are equivalent. */
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

		/** Copy operator. Copies the contents of one vector to another.
			@param rhs The vector to copy (RHS of operation).
			@return A reference to this (LHS of operation). */
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

/** Returns whether a dynamically-sized array is equivalent to a constant-sized array.
	@param dl A dynamically-sized array.
	@param cl A constant-sized array.
	@param count The size of the constant-sized array.
	@return Whether the two arrays are equivalent. */
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

/** Returns whether two constant-sized arrays are equivalent.
	@param al A first constant-sized array.
	@param acount The number of elements in the first array.
	@param bl A second constant-sized array.
	@param bcount The number of elements in the second array.
	@return Whether the two arrays are equivalent. */
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
#endif //WIN32
#endif // _FM_ARRAY_H_
#line 39 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
#endif // _FM_ARRAY_H_
#ifndef _FM_ARRAY_POINTER_H_
// #include "FMath/FMArrayPointer.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMArrayPointer.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FMArrayPointer.h
	The file contains the pvector class, which implemented the FCollada
	specialized vector class for faster and smaller builds.
 */

#ifndef _FM_ARRAY_POINTER_H_
#define _FM_ARRAY_POINTER_H_

#ifndef _FM_ARRAY_H_
// #include "FMath/FMArray.h"   (already above)
#endif // _FM_ARRAY_H_

// Already documented in FMArray.h.
namespace fm
{
	/**
		A dynamically-sized array of pointers.
		Built on top of the FCollada specialized vector class, this class improves on the compilation time
		and the library size by re-using the <void*> template only once for all pointer vectors.

		@ingroup FMath
	*/
	template <class T>
	class pvector : public fm::vector<const void*, true>
	{
	private:
		/** Use this pointer to get typed information in the debugger.
			The few bytes that we loose are nothing compared to the annoyance of trying to debug in these. */
		T*** first;

	public:
		typedef typename fm::vector<const void*, true> Parent; /**< Defines the parent class to the pointer array. */
		typedef T* item; /**< Defines the item pointer type contained by the pointer array. */
		typedef const T* const_item; /**< Defines the constant-version of the item pointer type contained by the pointer array. */
		typedef item* iterator; /**< Defines the item pointer iterator for the pointer array. */
		typedef const_item* const_iterator; /**< Defines the constant-version of the item pointer iterator for the pointer array. */

		/** Default constructor. */
		pvector() : Parent()
		{
			first = (T***) (size_t) &heapBuffer;
		}

		/** Constructor. Builds a dynamically-sized pointer array of the desired size.
			@param size The desired size of the array. */
		pvector(size_t size) : Parent(size, NULL)
		{
			first = (T***) (size_t) &heapBuffer;
		}

		/** Constructor. Builds a dynamically-sized pointer array of the desired size.
			@param size The desired size of the pointer array
			@param defaultValue The default value to use for all the pointers of the array. */
		pvector(size_t size, const T& defaultValue) : Parent(size, defaultValue)
		{
			first = (T***) &heapBuffer;
		}

		/** Copy constructor.
			@param copy The dynamically-sized pointer array to copy the values from. */
		pvector(const pvector<T>& copy) : Parent(copy)
		{
			first = (T***) (size_t) &heapBuffer;
		}

		/** Constructor. Builds a dynamically-sized pointer array from a constant-sized array.
			@param values A constant-sized array of floating-point values.
			@param count The size of the constant-sized array. */
		pvector(const T** values, size_t count) : Parent()
		{
			first = (T***) (size_t) &heapBuffer;
			resize(count);
			memcpy(&front(), values, count * sizeof(void*));
		}

		/** Destructor. */
		~pvector()
		{
#ifdef _DEBUG
			Parent::clear();
			Parent::push_back((void*) (size_t) 0xFFFFFFFF);
			first = (T***) (size_t) 0xDEADDEAD;
#endif // _DEBUG
		}

		/** Retrieves the first element of the pointer array.
			@return The first element in the pointer array. */
		inline T*& front() { return (T*&) Parent::front(); }
		inline const T*& front() const { return (const T*&) Parent::front(); } /**< See above. */

		/** Retrieves the last element of the pointer array.
			@return The last element in the pointer array. */
		inline T*& back() { return (T*&) Parent::back(); }
		inline const T*& back() const { return (const T*&) Parent::back(); } /**< See above. */

		/** Retrieves an indexed object in the pointer array.
			@param index An index.
			@return The given object. */
		inline T*& at(size_t index) { return (T*&) Parent::at(index); }
		inline const T*& at(size_t index) const { return (const T*&) Parent::at(index); } /**< See above. */
		template <class INTEGER> inline T*& operator[](INTEGER index) { return (T*&) Parent::at(index); } /**< See above. */
		template <class INTEGER> inline const T*& operator[](INTEGER index) const { return (const T*&) Parent::at(index); } /**< See above. */

		/** Retrieves an iterator for the first element in the pointer array.
			@return an iterator for the first element in the pointer array. */
		inline iterator begin() { return (!empty()) ? &front() : NULL; }
		inline const_iterator begin() const { return (!empty()) ? &front() : NULL; } /**< See above. */

		/** Retrieves an iterator for the element after the last element in the pointer array.
			@return an iterator for the element after the last element in the pointer array. */
		inline iterator end() { return (!empty()) ? (&back()) + 1 : NULL; }
		inline const_iterator end() const { return (!empty()) ? (&back()) + 1 : NULL; } /**< See above. */

		/** Retrieves an iterator for a given element in the pointer array.
			@param item An item of the pointer array.
			@return An iterator for the given item. If the item is not
				found in the pointer array, the end() iterator is returned. */
		inline iterator find(const T* item) { Parent::iterator f = Parent::find(item); return begin() + (f - Parent::begin()); }
		inline const_iterator find(const T* item) const { Parent::const_iterator f = Parent::find(item); return begin() + (f - Parent::begin()); } /**< See above. */

		/** Inserts an object in the container's containment pointer array.
			@param _iterator The iterator after which to insert the object.
			@param object An object to insert.
			@return The iterator to the inserted object. */
		inline iterator insert(iterator _iterator, T* object)
		{
			iterator originalStart = begin();
			Parent::iterator newIt = Parent::insert(Parent::begin() + (_iterator - originalStart), object);
			return begin() + (newIt - Parent::begin());
		}

		/** Adds a given number of NULL pointers at a given position in the pointer array.
			@param _iterator The iterator after which to insert the object.
			@param count The number of NULL pointers to add. */
		inline void insert(iterator _iterator, size_t count)
		{
			Parent::iterator it = Parent::begin() + (_iterator - begin());
			Parent::insert(it, count, NULL);
		}

		/** Inserts a list of pointers in the pointer array.
			@param _where The iterator after which to insert the pointers.
			@param _startIterator The iterator for the first pointer to insert.
			@param _endIterator The iterator for the last pointer.
				This pointer will not be inserted. */
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

		/** Removes the value at the given position within the pointer array.
			@param _it The position for the pointer to remove. */
		inline iterator erase(iterator _it)
		{
			Parent::iterator it = Parent::begin() + (_it - begin());
			it = Parent::erase(it);
			return begin() + (it - Parent::begin());
		}

		/** Removes a given pointer from the pointer array.
			@param value The pointer to remove from the pointer array.
			@return Whether the given pointer existed within the pointer array. */
		inline bool erase(const T* value)
		{
			Parent::iterator it = Parent::find(value);
			if (it != Parent::end()) { Parent::erase(it); return true; }
			return false;
		}

		/** Removes the value at the given position within the pointer array.
			@param first The start position for the pointers to remove.
			@param last The end position for the pointers to remove. */
		inline void erase(iterator first, iterator last)
		{
			Parent::erase(Parent::begin() + (first - begin()), Parent::begin() + (last - begin()));
		}

		/** Removes an indexed value contained within the list.
			@param index The index of the value to erase. */
		inline void erase(size_t index) { Parent::erase(Parent::begin() + index); }

		/** Releases a value contained within a list.
			Use this function only if there is no duplicate pointers within the list.
			@param value The value, contained within the list, to release.
			@return Whether the value was found and released. */
		inline bool release(const T* value)
		{
			Parent::iterator it = Parent::find(value);
			if (it != Parent::end()) { Parent::erase(it); delete value; return true; }
			return false;
		}

		/** Copy constructor.
			Overwrites the current data of the pointer array with the data of the given pointer array.
			@param other The pointer array to copy.
			@return The copied pointer array. */
		pvector<T>& operator= (const pvector<T>& other) { clear(); insert(end(), other.begin(), other.end()); return *this; }

		/** Resizes the pointer array to the given amount.
			It is intentional that the default value is NULL.
			@param count The desired size for the pointer array. */
		inline void resize(size_t count) { Parent::resize(count, NULL); }
	};
};

#endif // _FM_ARRAY_POINTER_H_
#line 42 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
#endif // _FM_ARRAY_POINTER_H_
#ifndef _FM_TREE_H_
// #include "FMath/FMTree.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMTree.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FMTree.h
	The file contains the tree class, which improves on the standard C++ tree class.
 */

#ifndef _FM_TREE_H_
#define _FM_TREE_H_

#ifndef _FM_ALLOCATOR_H_
// #include "FMath/FMAllocator.h"   (already above)
#endif // _FM_ALLOCATOR_H_

namespace fm
{
	/**
		A simple pair template.
		@ingroup FMath
	*/
	template <class _Kty, class _Ty>
	class pair
	{
	public:
		_Kty first; /**< The first element of the pair. */
		_Ty second; /**< The second element of the pair. */

		/** Constructor. */
		pair() : first(), second() {}

		/** Constructor.
			@param f A first element to copy.
			@param s A second element to copy. */
		pair(const _Kty& f, const _Ty& s) : first(f), second(s) {}

		/** Copy constructor.
			@param p A pair to clone. */
		pair(const pair& p) : first(p.first), second(p.second) {}

		/** Returns whether the two pairs are equal.
			@param p A second pair of the same type.
			@return Whether the two pairs are equal. */
		inline bool operator==(const pair& p) const { return p.first == first && p.second == second; }

		/** Returns whether the two pairs are not equal.
			@param p A second pair of the same type.
			@return Whether the two pairs are not equal. */
		inline bool operator!=(const pair& p) const { return p.first != first || p.second != second; }
	};

	/**
		An auto-balancing tree.
		Intentionally has an interface similar to the standard C++ tree class.
		It's implement should be very similar yet more lightweight.

		@ingroup FMath
	*/
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

				// detach right
				node* oldRight = right;

				// detach right's left and attach to the parent's right.
				node* right_left = right->left;
				right = right_left;
				if (right_left != NULL) right_left->parent = this;

				// attach the right to the double parent.
				oldRight->left = this;

				// attach the parent on the right's left.
				oldRight->parent = parent;
				parent = oldRight;
				(*parentLink) = oldRight;

				// adjust the weights
				weight = weight - 1 - (oldRight->weight > 0 ? oldRight->weight : 0);
				oldRight->weight = oldRight->weight - (0 > -weight ? 0 : -weight) - 1;
			}

			void rotateRight()
			{
				node** parentLink = (parent->left == this) ? &parent->left : &parent->right;

				// detach left
				node* oldLeft = left;

				// detach left's right and attach to the parent's left.
				node* left_right = left->right;
				left = left_right;
				if (left_right != NULL) left_right->parent = this;

				// attach the parent on the left's right.
				oldLeft->right = this;

				// attach the left to the double parent.
				oldLeft->parent = parent;
				parent = oldLeft;
				(*parentLink) = oldLeft;

				// adjust the weights
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
#endif // TREE_DEBUG
		};

	public:
		class const_iterator;

		/**
			A tree element iterator.
			Similar to the basic STL iterator.
		*/
		class iterator
		{
		private:
			friend class tree;
			friend class const_iterator;
			node* currentNode;

		public:
			/** Empty constructor. */
			iterator() {}
			/** Constructor. @param n The tree node at which to start the iteration. */
			iterator(node* n) : currentNode(n) {}
			/** Copy operator. @param copy The tree iterator to copy. */
			iterator& operator=(const iterator& copy) { currentNode = copy.currentNode; return *this; }

			/** Retrieves whether this iterator points to the same node as the given iterator.
				@param other A second iterator.
				@return Whether the two iterators are pointing to the same node. */
			inline bool operator==(const iterator& other) const { return other.currentNode == currentNode; }
			inline bool operator==(const const_iterator& other) const; /**< See above. */

			/** Retrieves whether this iterator points to a different node that a given iterator.
				@param other A second iterator.
				@return Whether the two iterators are pointing at different nodes. */
			inline bool operator!=(const iterator& other) const { return other.currentNode != currentNode; }
			inline bool operator!=(const const_iterator& other) const;/**< See above. */

			/** Advances the iterator to the next ordered tree node.
				@return This iterator. */
			iterator& operator++()
			{
				// Go one right or one up.
				if (currentNode->right == NULL)
				{
					node* oldNode;
					do
					{
						oldNode = currentNode;

						// Go one up.
						// We control the root node, which is the only with parent == NULL.
						// if you crash here, you don't check for iterator == end() correctly.
						currentNode = currentNode->parent;
					}
					while (currentNode->right == oldNode && currentNode->parent != NULL);
				}
				else
				{
					// Go one right.
					currentNode = currentNode->right;

					// Go all the way left.
					while (currentNode->left != NULL) currentNode = currentNode->left;
				}
				return (*this);
			}

			/** Backtrack the iterator to the next ordered tree node.
				@return This iterator. */
			iterator& operator--()
			{
				// Go one left or one up.
				if (currentNode->left == NULL)
				{
					node* oldNode;
					do
					{
						oldNode = currentNode;

						// Go one up.
						// We control the root node, which is the only with parent == NULL.
						// if you crash here, you don't check for iterator == begin() correctly.
						currentNode = currentNode->parent;
					}
					while (currentNode->left == oldNode && currentNode->parent != NULL);
				}
				else
				{
					// Go one left.
					currentNode = currentNode->left;

					// Go all the way right.
					while (currentNode->right != NULL) currentNode = currentNode->right;
				}
				return (*this);
			}

			/** Retrieves the current tree node.
				@return The current tree node. */
			inline pair& operator*() { return currentNode->data; }
			inline pair* operator->() { return &currentNode->data; }  /**< See above. */
		};

		/**
			A tree constant-element iterator.
			Similar to the basic STL const_iterator.
		*/
		class const_iterator
		{
		private:
			friend class tree;
			friend class iterator;
			const node* currentNode;

		public:
			/** Empty constructor. */
			const_iterator() {}
			/** Copy constructor.
				@param copy The iterator to clone. */
			const_iterator(const iterator& copy) : currentNode(copy.currentNode) {}
			/** Constructor. @param n The tree node at which to start the iteration. */
			const_iterator(const node* n) : currentNode(n) {}
			/** Copy operator. @param copy The tree iterator to copy. */
			const_iterator& operator=(const iterator& copy) { currentNode = copy.currentNode; return *this; }
			const_iterator& operator=(const const_iterator& copy) { currentNode = copy.currentNode; return *this; } /**< See above. */

			/** Retrieves whether this iterator points to the same node as the given iterator.
				@param other A second iterator.
				@return Whether the two iterators are pointing to the same node. */
			inline bool operator==(const iterator& other) const { return other.currentNode == currentNode; }
			inline bool operator==(const const_iterator& other) const { return other.currentNode == currentNode; } /**< See above. */

			/** Retrieves whether this iterator points to a different node that a given iterator.
				@param other A second iterator.
				@return Whether the two iterators are pointing at different nodes. */
			inline bool operator!=(const iterator& other) const { return other.currentNode != currentNode; }
			inline bool operator!=(const const_iterator& other) const { return other.currentNode != currentNode; } /**< See above. */

			/** Advances the iterator to the next ordered tree node.
				@return This iterator. */
			const_iterator& operator++()
			{
				// Go one right or one up.
				if (currentNode->right == NULL)
				{
					const node* oldNode;
					do
					{
						oldNode = currentNode;

						// Go one up.
						// We control the root node, which is the only with parent == NULL.
						// if you crash here, you don't check for iterator == end() correctly.
						currentNode = currentNode->parent;
					}
					while (currentNode->right == oldNode && currentNode->parent != NULL);
				}
				else
				{
					// Go one right.
					currentNode = currentNode->right;

					// Go all the way left.
					while (currentNode->left != NULL) currentNode = currentNode->left;
				}
				return (*this);
			}

			/** Backtrack the iterator to the next ordered tree node.
				@return This iterator. */
			const_iterator& operator--()
			{
				// Go one left or one up.
				if (currentNode->left == NULL)
				{
					const node* oldNode;
					do
					{
						oldNode = currentNode;

						// Go one up.
						// We control the root node, which is the only with parent == NULL.
						// if you crash here, you don't check for iterator == end() correctly.
						currentNode = currentNode->parent;
					}
					while (currentNode->left == oldNode && currentNode->parent != NULL);
				}
				else
				{
					// Go one left.
					currentNode = currentNode->left;

					// Go all the way right.
					while (currentNode->right != NULL) currentNode = currentNode->right;
				}
				return (*this);
			}

			/** Retrieves the current tree node.
				@return The current tree node. */
			inline const pair& operator*() { return currentNode->data; }
			inline const pair* operator->() { return &currentNode->data; } /**< See above. */
		};

	private:
		node* root;
		size_t sized;

	public:
		/** Constructor. */
		tree() : root(NULL), sized(0)
		{
			root = (node*) fm::Allocate(sizeof(node));
			fm::Construct(root);
		}

		/** Destructor. */
		~tree()
		{
			clear();
			root->data.first.~KEY();
			root->data.second.~DATA();
			fm::Release(root);
			root = NULL;
		}

		/** Retrieves the first ordered element within the tree.
			@return An iterator that points to the first tree element. */
		inline iterator begin() { iterator it(root); return (root->right == NULL) ? it : ++it; }
		inline const_iterator begin() const { const_iterator it(root); return (root->right == NULL) ? it : ++it; } /**< See above. */

		/** Retrieves an iterator that points just passed the last
			ordered element within the tree.
			@return An iterator just passed the last element in the tree. */
		inline iterator end() { return iterator(root); }
		inline const_iterator end() const { return const_iterator(root); } /**< See above. */

		/** Retrieves the last ordered element within the tree.
			@return An iterator that points to the last tree element. */
		inline iterator last() { node* n = root; while (n->right != NULL) n = n->right; return iterator(n); }
		inline const_iterator last() const { const node* n = root; while (n->right != NULL) n = n->right; return const_iterator(n); } /**< See above. */

		/** Retrieves an existing data element using its key.
			@param key The key.
			@return An iterator that points to the existing data element.
				This iterator may be past the end of the tree, in the case
				where the key does not exists within the tree: do check the
				iterator against end(). */
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
		inline const_iterator find(const KEY& key) const { return const_iterator(const_cast<tree<KEY, DATA>* >(this)->find(key)); } /**< See above. */

		/** Inserts a new data element with its key.
			If the key already exists within the tree, the
			old data element will be overwritten using the new data element.
			@param key The new key.
			@param data The new data element.
			@return An iterator that points to the tree element. */
		iterator insert(const KEY& key, const DATA& data)
		{
			// First step: look for an already existing entry.
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

			// Insert the new node.
			node* n = ((*insertAt) = (node*) fm::Allocate(sizeof(node)));
			fm::Construct(*insertAt); // could be get rid of this one? it would work for all pointer and primitive types..
			n->parent = parent;
			n->data.first = key;
			n->data.second = data;
			++sized;

			// Balance the tree.
			parent->weight += (*insertAt == parent->right) ? 1 : -1;
			node* it = parent;
			while (it != root)
			{
				// Check whether we need to balance this level.
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
				else if (it->weight == 0) break; // no height change.

				// go up one level.
				it->parent->weight += (it == it->parent->right) ? 1 : -1;
				it = it->parent;
			}

#ifdef TREE_DEBUG
			root->right->is_correct();
#endif // TREE_DEBUG

			return iterator(n);
		}

		/** Retrieves a data element using its key.
			@param k The key.
			@return The data element for this key. In the non-constant
				version of this function, a new element is created for
				the key if it does not already belong to the tree. */
		inline DATA& operator[](const KEY& k) { iterator it = find(k); if (it != end()) return it->second; else { DATA d; return insert(k, d)->second; } }
		inline const DATA& operator[](const KEY& k) const { return find(k)->second; } /**< See above. */

		/** Removes a data element from the tree.
			@param key The key of the data element to erase. */
		inline void erase(const KEY& key) { iterator it = find(key); erase(it); }

		/** Removes a data element from the tree.
			@param it An iterator that points to the tree element to erase. */
		inline void erase(const iterator& it)
		{
			node* n = it.currentNode;
			if (n != root)
			{
				node* release;
				if (n->left == NULL && n->right == NULL) release = n;
				else
				{
					// choose whether to reduce on the left or right.
					if (n->weight <= 0 && n->left != NULL)
					{
						// take out the left's rightmost node.
						release = n->left;
						while (release->right != NULL) release = release->right;
						n->data = release->data;

						// push up any left node on the rightmost node.
						if (release->left != NULL)
						{
							release->data = release->left->data;
							release = release->left;
						}
					}
					else
					{
						// take out the right's leftmost node.
						release = n->right;
						while (release->left != NULL) release = release->left;
						n->data = release->data;

						// push up any right node on the leftmost node.
						if (release->right != NULL)
						{
							release->data = release->right->data;
							release = release->right;
						}
					}
				}

				// Release the selected node and re-adjust its parent's weight.
				node* rebalance = release->parent;
				if (rebalance->left == release) { rebalance->left = NULL; ++rebalance->weight; }
				else { rebalance->right = NULL; --rebalance->weight; }
				release->data.first.~KEY();
				release->data.second.~DATA();
				fm::Release(release);
				--sized;

				// Rebalance the tree.
				node* it = rebalance;
				while (it != root)
				{
					// Check whether we need to balance this level.
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

					// go up one level.
					it->parent->weight -= (it == it->parent->right) ? 1 : -1;
					it = it->parent;
				}
			}

#ifdef TREE_DEBUG
			if (root->right != NULL) root->right->is_correct();
#endif // TREE_DEBUG
		}

		/** Retrieves whether the tree contains any data nodes.
			@return Whether the tree contains any data nodes. */
		inline bool empty() const { return sized == 0; }

		/** Retrieves the number of data nodes contained in the tree.
			@return The number of data nodes contained in the tree. */
		inline size_t size() const { return sized; }

		/** Removes all the data nodes from the tree.
			This effectively prunes at the tree root. */
		void clear()
		{
			// Need to delete all the nodes.
			if (root->right != NULL)
			{
				node* n = root->right;
				while (n != root)
				{
					if (n->left != NULL) n = n->left;
					else if (n->right != NULL) n = n->right;
					else
					{
						// destroy this node.
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

		/** Copy constructor. Clones another tree into this one.
			This is a bad function: it costs too much performance, avoid at all costs!
			@param copy The tree to clone.
			@return This tree, cloned. */
		inline tree<KEY,DATA>& operator= (const tree<KEY,DATA>& copy)
		{
			clear();

			// Function based on the iterator..
			// Go one right or one up.
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

							// Go one up.
							// We control the root node, which is the only with parent == NULL.
							// if you crash here, you don't check for iterator == end() correctly.
							currentNode = currentNode->parent;
							cloneNode = cloneNode->parent;
						}
						while (currentNode->right == oldNode && currentNode->parent != NULL);
					}
					else
					{
						// Create and go one right.
						currentNode = currentNode->right;

						cloneNode->right = (node*) fm::Allocate(sizeof(node));
						fm::Construct(cloneNode->right);
						cloneNode->right->parent = cloneNode;
						cloneNode->right->data = currentNode->data;
						cloneNode->right->weight = currentNode->weight;
						++sized;

						cloneNode = cloneNode->right;

						// Create and go one all the way left.
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

	/** A STL set. */
	template <class _Kty>
	class set : public fm::tree<_Kty, _Kty> {};

	/** A STL map. */
	template <class _Kty, class _Ty>
	class map : public fm::tree<_Kty, _Ty> {};
};

#endif // _FM_TREE_H_
#line 45 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
#endif // _FM_TREE_H_

/** A dynamically-sized array of double-sized floating-point values. */
typedef fm::vector<double, true> DoubleList;

/** A dynamically-sized array of floating-point values. */
typedef fm::vector<float, true> FloatList;

/** A dynamically-sized array of integer values. */
typedef fm::vector<int, true> IntList;


#ifndef _FM_INTEGER_H_
// #include "FMath/FMInteger.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMInteger.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FMInteger.h
	The file containing functions and constants for integer values.
 */

#ifndef _FM_INTEGER_H_
#define _FM_INTEGER_H_

/** A dynamically-sized array of 32-bit signed integer values. */
typedef fm::vector<int32, true> Int32List;
/** A dynamically-sized array of 32-bit unsigned integer values. */
typedef fm::vector<uint32, true> UInt32List;
/** A dynamically-sized array of 16-bit unsigned integer values. */
typedef fm::vector<uint16, true> UInt16List;
/** A dynamically-sized array of 8-bit unsigned integer values. */
typedef fm::vector<uint8, true> UInt8List;
/** A dynamically-sized array of 8-bit signed integer values. */
typedef fm::vector<int8, true> Int8List;
/** A dynamically-sized array of boolean values. */
typedef fm::vector<bool, true> BooleanList;

/** Returns whether two signed or unsigned integers are equivalent.
	For integers, this function simply wraps around the operator==.
	@param i1 A first integer.
	@param i2 A second integer.
	@return Whether the two integers are equivalent. */
inline bool IsEquivalent(int8 i1, int8 i2) { return i1 == i2; }
inline bool IsEquivalent(uint8 i1, uint8 i2) { return i1 == i2; } /**< See above. */
inline bool IsEquivalent(int16 i1, int16 i2) { return i1 == i2; } /**< See above. */
inline bool IsEquivalent(uint16 i1, uint16 i2) { return i1 == i2; } /**< See above. */
inline bool IsEquivalent(int32 i1, int32 i2) { return i1 == i2; } /**< See above. */
inline bool IsEquivalent(uint32 i1, uint32 i2) { return i1 == i2; } /**< See above. */
inline bool IsEquivalent(int64 i1, int64 i2) { return i1 == i2; } /**< See above. */
inline bool IsEquivalent(uint64 i1, uint64 i2) { return i1 == i2; } /**< See above. */

/** Returns whether two Booleans are equivalent.
	@param b1 A first Boolean.
	@param b2 A second Boolean.
	@return Whether the two Booleans are equivalent. */
inline bool IsEquivalent(bool b1, bool b2) { return b1 == b2; }

#endif // _FM_INTEGER_H_
#line 59 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
#endif // _FM_INTEGER_H_

/**
	A namespace for common math functions.
	@ingroup FMath
*/
namespace FMath
{
    /** Mathematical value of pi to 50 decimals. */
	const double Pi = 3.14159265358979323846264338327950288419716939937510;
	const float Pif = 3.14159265358979323846264338327950288419716939937510f; /**< See above. */

    /** Numerical values for the different axis of the standard axis system.
        You can use these enumerated types with the FMatrix44::GetAxis function. */
	enum AXIS
	{
		X = 0, /**< The X-axis. */
		Y, /**< The Y-axis. */
		Z, /**< The Z-axis. */
        W, /**< The W-axis. */

		TRANS = W/**< The 3D translation value. */
	};

	/** Convert radians to degrees.
		@param val The value in radians.
		@return The value in degrees. */
	inline double RadToDeg(double val) { return (val * 180.0/Pi); }

	/** Convert radians to degrees.
		@param val The value in radians.
		@return The value in degrees. */
	inline float RadToDeg(float val) { return (val * 180.0f/Pif); }

	/** Convert degrees to radians.
		@param val The value in degrees.
		@return The value in radians. */
	inline double DegToRad(double val) { return (val * Pi/180.0); }

	/** Convert degrees to radians.
		@param val The value in degrees.
		@return The value in radians. */
	inline float DegToRad(float val) { return (val * (float)Pi/180.0f); }

	/** Determines if given float is encoding for not a number (NAN).
		@param f The float to check.
		@return 0 if it is a number, something else if is NAN. */
#ifdef WIN32
	inline int IsNotANumber(float f) { return _isnan(f); }
#elif __PPU__
	inline int IsNotANumber(float f) { return !isfinite(f); }
#else // Linux and Mac
	inline int IsNotANumber(float f) { return !finite(f); }
#endif

	/**	Retrieves the sign of a number.
		@param val The number to check.
		@return 1 if positive, -1 if negative. */
	template <class T>
	inline T Sign(const T& val) { return (val >= T(0)) ? T(1) : T(-1); }

	/** Clamps the specified object within a range specified by two other objects
		of the same class.
		Clamping refers to setting a value within a given range. If the value is
		lower than the minimum of the range, it is set to the minimum; same for
		the maximum.
		@param val The object to clamp.
		@param mx The highest object of the range.
		@param mn The lowest object of the range.
		@return The clamped value. */
	template <class T, class T2, class T3>
	inline T Clamp(T val, T2 mn, T3 mx) { return (T) ((val > (T) mx) ? (T) mx : (val < (T) mn) ? (T) mn : val); }

	/** Wraps the specified object within a range specified by two other objects
		of the same class.
		Wrapping refers to looping around maximum and minimum values until we're
		within that range. e.g. Provided that mn = 0.0f, mx = 1.0f and val = 1.01f,
		then the Wrap result will be 0.01f.
		@param val The value to wrap.
		@param mn The minimum value.
		@param mx The maximum value (no sanity checks are made).
		@return The wrapped value.*/
	template <class T, class T2, class T3>
	inline T Wrap(T val, T2 mn, T3 mx) { T d = (T)(mx - mn); while (val > (T)mx) val -= d; while (val < (T)mn) val += d; return val; }

	/** Template specializations of the Wrap method. Optimizing for known primitives.
		Feel free to add more supported primitives when needed.*/
	template <>
	inline float Wrap(float val, float mn, float mx) {
		if (val > mx) return (mn + fmodf(val - mx, mx - mn));
		else if (val < mn) return (mx - fmodf(mn - val, mx - mn));
		return val; }
	/** See above.*/
	template <>
	inline double Wrap(double val, double mn, double mx) {
		if (val > mx) return (mn + fmod(val - mx, mx - mn));
		else if (val < mn) return (mx - fmod(mn - val, mx - mn));
		return val; }
	/** See above.*/
	template <>
	inline int Wrap(int val, int mn, int mx) {
		if (val > mx) return mn + ((val - mx) % (mx - mn));
		else if (val < mn) return mx - ((mn - val) % (mx - mn));
		return val; }
	/** See above.*/
	template <>
	inline uint32 Wrap(uint32 val, uint32 mn, uint32 mx) {
		if (val > mx) return mn + ((val - mx) % (mx - mn));
		else if (val < mn) return mx - ((mn - val) % (mx - mn));
		return val; }
};

// Include commonly used mathematical classes
// #include "FMath/FMVector2.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMVector2.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FMVector2.h
	The file containing the class and global functions for 2 dimensional
	vectors.
*/

#ifndef _FM_VECTOR2_H_
#define _FM_VECTOR2_H_

/**
	A 2 dimensional vector.
	Not used within FCollada.

	@ingroup FMath
*/
class FCOLLADA_EXPORT FMVector2
{
public:
	union
	{
		float u;	/**< The first coordinate. */
		float x;	/**< The first coordinate. */
	};
	union
	{
		float v;	/**< The second coordinate. */
		float y;	/**< The second coordinate. */
	};

public:
	/** Creates an empty FMVector2. */
	#ifndef _DEBUG
	FMVector2() {}
	#else
	FMVector2() { u = 123456789.0f; v = 123456789.0f; }
	#endif

	/** Creates the vector with the coordinates given.
		@param _u The first coordinate.
		@param _v The second coordinate. */
	FMVector2(float _u, float _v) { u = _u; v = _v; }

	/**	Retrieves the squared length of the vector.
		@return The squared length of this vector. */
	inline float LengthSquared() const { return x * x + y * y; }

	/**	Retrieves the length of the vector.
		@return The length of this vector. */
	inline float Length() const { return sqrtf(x * x + y * y); }

	/** Normalizes this vector. */
	inline void NormalizeIt() { float l = Length(); if (l > 0.0f) { x /= l; y /= l; } else { x = 0; y = 1; }}

	/** Get a normalized vector with the same direction as this vector.
		@return A vector with length 1 and same direction as this vector. */
	inline FMVector2 Normalize() const { float l = Length(); return (l > 0.0f) ? FMVector2(x / l, y / l) : FMVector2::XAxis; }

	/** Get this vector as an array of \c floats.
		@return The \c float array. */
	inline operator float*() { return &u; }

	/** Adds two vector.
		Adds to this vector's coordinates the individual components of the
		given vector and returns this vector.
		@param a The vector to add with this one.
		@return This vector. */
	inline FMVector2& operator +=(const FMVector2& a) { u += a.u; v += a.v; return *this; }

	/** Multiplies this vector by a scaler.
		Multiplies each of this vector's coordinates with the scaler and
		returns this vector.
		@param a The scalar to multiply with.
		@return This vector. */
	inline FMVector2& operator *=(float a) { u *= a; v *= a; return *this; }

	/** Assign this vector to the given float array.
		Assigns each coordinate of this vector to the elements in the \c
		float array. The first element to the first coordinate and the second to
		the second. It returns this vector.
		@param f The \c float array to assign with.
		@return This vector. */
	inline FMVector2& operator =(const float* f) { u = *f; v = *(f + 1); return *this; }

public:
	static const FMVector2 Zero; /**< The zero vector. */
	static const FMVector2 Origin; /**< The zero vector. */
	static const FMVector2 XAxis; /**< The 2D X axis. */
	static const FMVector2 YAxis; /**< The 2D Y axis. */
};

/** Vector addition with two vectors.
	@param a The first vector.
	@param b The second vector.
	@return The FMVector2 representation of the resulting vector. */
inline FMVector2 operator + (const FMVector2& a, const FMVector2& b) { return FMVector2(a.u + b.u, a.v + b.v); }

/** Vector subtraction with two vectors.
	@param a The first vector.
	@param b The second vector.
	@return The FMVector2 representation of the resulting vector. */
inline FMVector2 operator -(const FMVector2& a, const FMVector2& b) { return FMVector2(a.u - b.u, a.v - b.v); }

/** Dot product of two vectors.
	@param a The first vector.
	@param b The second vector.
	@return The result of the dot product.
 */
inline float operator *(const FMVector2& a, const FMVector2& b) { return a.u * b.u + a.v * b.v; }

/** Scalar multiplication with a vector.
	@param a The vector.
	@param b The scalar.
	@return The FMVector2 representing the resulting the vector. */
inline FMVector2 operator *(const FMVector2& a, float b) { return FMVector2(a.u * b, a.v * b); }

/**	Scalar multiplication with a vector.
	@param a The scalar.
	@param b The vector.
	@return The vector representing the resulting the vector. */
inline FMVector2 operator *(float a, const FMVector2& b) { return FMVector2(a * b.u, a * b.v); }

/** Scalar divison with a vector.
	@param a The vector.
	@param b The scalar.
	@return The vector representing the resulting the vector. */
inline FMVector2 operator /(const FMVector2& a, float b) { return FMVector2(a.x / b, a.y / b); }

/** Retrieves whether two 2D vectors are equivalent.
	@param a A first vector.
	@param b A second vector.
	@return Whether the two given 2D vectors are equivalent. */
inline bool IsEquivalent(const FMVector2& a, const FMVector2& b) { return IsEquivalent(a.x, b.x) && IsEquivalent(a.y, b.y); }
inline bool operator==(const FMVector2& a, const FMVector2& b) { return IsEquivalent(a.x, b.x) && IsEquivalent(a.y, b.y); } /**< See above. */

/** A dynamically-sized array of 2D vectors or points. */
typedef fm::vector<FMVector2> FMVector2List;

#endif // _FM_VECTOR2_H_
#line 173 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
// #include "FMath/FMVector3.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMVector3.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FMVector3.h The file containing the class and global functions for 3 dimensional vectors.
*/

#ifndef _FM_VECTOR3_H_
#define _FM_VECTOR3_H_

class FMVector4;

/**
	A 3 dimensional vector.

	Simple, non-optimized vector class: * is the dot-product, ^ is the
	cross-product.

	@ingroup FMath
*/
class FCOLLADA_EXPORT
ALIGN_STRUCT(16)
FMVector3
{
public:
	float x;	/**< The first coordinate. */
	float y;	/**< The second coordinate. */
	float z;	/**< The third coordinate. */
private:
	float w;	// For alignment purposes.

public:
	/**
	 * Creates an empty FMVector3.
	 */
	#ifndef _DEBUG
	inline FMVector3() {}
	#else
	inline FMVector3() { x = 123456789.0f; y = 123456789.0f; z = 123456789.0f; }
	#endif

	/** Creates the FMVector3 with the coordinates given.
		@param _x The first coordinate.
		@param _y The second coordinate.
		@param _z The third coordinate. */
	inline FMVector3(float _x, float _y, float _z) { x = _x; y = _y; z = _z; }

	/** Copy constuctor.
		@param rhs A second 3D vector. */
	inline FMVector3(const FMVector3& rhs) { x = rhs.x; y = rhs.y; z = rhs.z; }

	/** Constructor.
		Reduces the 4D vector into 3D by removing the 4th dimension.
		@param vect4 A 4D vector. */
	FMVector3(const FMVector4& vect4);

	/** Creates the FMVector3 from a list of floating-point values.
		It takes the first three floating-point starting from and including \a startIndex
		(0 indexing) in the array as the 3 coordinates. The first as the first
		coordinate, the second as the second, and the third as the third.
		@param source The floating-point value array.
		@param startIndex The index of the first element. */
	FMVector3(const float* source, uint32 startIndex = 0);
	FMVector3(const double* source, uint32 startIndex = 0);	/**< See above. */

	/**	Retrieves the squared length of the vector.
		@return The squared length of this vector. */
	inline float LengthSquared() const { return x * x + y * y + z * z; }

	/**	Retrieves the length of the vector.
		@return The length of this vector. */
	inline float Length() const { return sqrtf(x * x + y * y + z * z); }

	/** Normalizes this vector. */
	inline void NormalizeIt() { float l = Length(); if (l > 0.0f) { x /= l; y /= l; z /= l; } else { x = y = 0; z = 1; }}

	/** Get a normalized FMVector3 with the same direction as this vector.
		@return A FMVector3 with length 1 and same direction as this vector. */
	inline FMVector3 Normalize() const { float l = Length(); return (l > 0.0f) ? FMVector3(x / l, y / l, z / l) : FMVector3::XAxis; }

	/** Project this FMVector3 onto another FMVector3.
		@param unto The FMVector3 to project onto. */
	inline void Project(const FMVector3& unto) { (*this) = Projected(unto); }

	/** Get the projection of this FMVector3 onto another FMVector3.
		@param unto The FMVector3 to project onto.
		@return The projected FMVector3. */
	inline FMVector3 Projected(const FMVector3& unto) const;

	/** Get this FMVector3 as an array of \c floats.
		@return The \c float array. */
	inline operator float*() { return &x; }

    /** Get this FMVector3 as an array of \c floats.
		@return The \c float array. */
	inline operator const float*() const { return &x; }

	/** Set the values of this vector
		@param x The new X value
		@param y The new Y value
		@param z The new Z value */
	inline void Set(float x, float y, float z) { this->x = x; this->y = y, this->z = z; }

	/** Assign this FMVector3 to the given float array.
		Assigns each coordinate of this FMVector3 to the elements in the \c
		float array. The first element to the first coordinate, the second to
		the second, and the third to the third. It returns this FMVector3.
		@param v The \c float array to assign with.
		@return This vector. */
	inline FMVector3& operator =(const float* v) { x = *v; y = *(v + 1); z = *(v + 2); return *this; }

	/** Assigns the FMVector3 passed to outselves.
		Copies XYZ from the passed vector
		@param rhs The vector copy off */
	inline FMVector3& operator =(const FMVector3& rhs) { x=rhs.x; y=rhs.y; z=rhs.z; return *this; }

	/** Update each component of this FMVector to the minimum of two FMVector3s.
		Updates each of the three components to be the minimum of the current
		value and that of the corresponding value of the given FMVector3.
		@param min The FMVector to take values from. */
	inline void ComponentMinimum(const FMVector3& min) { if (x < min.x) x = min.x; if (y < min.y) y = min.y; if (z < min.z) z = min.z; }

	/** Retrieves the smallest component of the vector.
		@return The smallest component of the vector. */
	inline float ComponentMinimum() const { return min(fabsf(x), min(fabsf(y), fabsf(z))); }

	/** Update each component of this FMVector to the maximum of two FMVector3s.
		Updates each of the three components to be the maximum of the current
		value and that of the corresponding value of the given FMVector3.
		@param max The FMVector to take values from. */
	inline void ComponentMaximum(const FMVector3& max) { if (x > max.x) x = max.x; if (y > max.y) y = max.y; if (z > max.z) z = max.z; }

	/** Retrieves the largest component of the vector.
		@return The largest component of the vector. */
	inline float ComponentMaximum() const { return max(fabsf(x), max(fabsf(y), fabsf(z))); }

	/** Clamp each component of this FMVector by the corresponding components
		in the specified min and max FMVector3.
		Clamp refers to setting a value within a given range. If the value is
		lower than the minimum of the range, it is set to the minimum; same for
		the maximum.
		@param min The FMVector to take the minimum values from.
		@param max The FMVector to take the maximum values from. */
	inline void ComponentClamp(const FMVector3& min, const FMVector3& max) { ComponentMinimum(min); ComponentMaximum(max); }

	/** Retrieves the average of the three vector components.
		@return The component average. */
	inline float ComponentAverage() const { return (fabsf(x) + fabsf(y) + fabsf(z)) / 3.0f; }

public:
	static const FMVector3 XAxis; /**< The FMVector3 representing the x axis */
	static const FMVector3 YAxis; /**< The FMVector3 representing the y axis */
	static const FMVector3 ZAxis; /**< The FMVector3 representing the z axis */
	static const FMVector3 Origin;/**< The FMVector3 representing the origin */
	static const FMVector3 Zero;  /**< The FMVector3 containing all zeroes: (0,0,0). */
	static const FMVector3 One;	  /**< The FMVector3 containing all ones: (1,1,1). */
};

/** Vector addition with two FMVector3.
	@param a The first vector.
	@param b The second vector.
	@return The FMVector3 representation of the resulting vector. */
inline FMVector3 operator +(const FMVector3& a, const FMVector3& b) { return FMVector3(a.x + b.x, a.y + b.y, a.z + b.z); }

/** Vector subtraction with two FMVector3.
	@param a The first vector.
	@param b The second vector.
	@return The FMVector3 representation of the resulting vector. */
inline FMVector3 operator -(const FMVector3& a, const FMVector3& b) { return FMVector3(a.x - b.x, a.y - b.y, a.z - b.z); }

/** Positive operator of the given FMVector3.
	It applies the positive operator to each of the components of the FMVector3.
	@param a The vector to apply the positive operator to.
	@return The FMVector3 representation of the resulting vector. */
inline FMVector3 operator +(const FMVector3& a) { return FMVector3(+a.x, +a.y, +a.z); }

/** Negates the given FMVector3.
	It negates each of the components of the FMVector3.
	@param a The vector to negate.
	@return The FMVector3 representation of the resulting vector. */
inline FMVector3 operator -(const FMVector3& a) { return FMVector3(-a.x, -a.y, -a.z); }

/** Dot product of two FMVector3.
	@param a The first vector.
	@param b The second vector.
	@return The result of the dot product. */
inline float operator *(const FMVector3& a, const FMVector3& b) { return a.x * b.x + a.y * b.y + a.z * b.z; }

/** Scalar multiplication with a FMVector3.
	@param a The vector.
	@param b The scalar.
	@return The FMVector3 representing the resulting vector. */
inline FMVector3 operator *(const FMVector3& a, float b) { return FMVector3(a.x * b, a.y * b, a.z * b); }

/** Scalar multiplication with a FMVector3.
	@param a The scalar.
	@param b The vector.
	@return The FMVector3 representing the resulting vector. */
inline FMVector3 operator *(float a, const FMVector3& b) { return FMVector3(a * b.x, a * b.y, a * b.z); }

/** Scalar division with a FMVector3.
	@param a The vector.
	@param b The scalar.
	@return The FMVector3 representing the resulting vector. */
inline FMVector3 operator /(const FMVector3& a, float b) { return FMVector3(a.x / b, a.y / b, a.z / b); }

/** Cross product of two FMVector3.
	@param a The first vector.
	@param b The second vector.
	@return The result of the dot product. */
inline FMVector3 operator ^(const FMVector3& a, const FMVector3& b) { return FMVector3(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x); }

/** Assignment of the addition of two FMVector3.
	@param b The first vector, which will also be assigned to the result.
	@param a The second vector.
	@return The first vector, after it has been assigned new values. */
inline FMVector3& operator +=(FMVector3& b, const FMVector3& a) { b.x += a.x; b.y += a.y; b.z += a.z; return b; }

/**	Assignment of the subtraction of two FMVector3.
	@param b The first vector, which will also be assigned to the result.
	@param a The second vector.
	@return The first vector, after it has been assigned new values. */
inline FMVector3& operator -=(FMVector3& b, const FMVector3& a) { b.x -= a.x; b.y -= a.y; b.z -= a.z; return b; }

/** Assignment of the scalar multiplication of a FMVector3.
	@param b The vector, which will also be assigned to the result.
	@param a The scalar.
	@return The vector, after it has been assigned new values. */
inline FMVector3& operator *=(FMVector3& b, float a) { b.x *= a; b.y *= a; b.z *= a; return b; }

/** Assignment of the scalar division of a FMVector3.
	@param b The vector, which will also be assigned to the result.
	@param a The scalar.
	@return The vector, after it has been assigned new values. */
inline FMVector3& operator /=(FMVector3& b, float a) { b.x /= a; b.y /= a; b.z /= a; return b; }

/** Returns whether two 3D vectors or points are equivalent.
	@param p A first vector.
	@param q A second vector.
	@return Whether the vectors are equivalent. */
inline bool IsEquivalent(const FMVector3& p, const FMVector3& q) { return IsEquivalent(p.x, q.x) && IsEquivalent(p.y, q.y) && IsEquivalent(p.z, q.z); }
inline bool operator == (const FMVector3& p, const FMVector3& q) { return IsEquivalent(p, q); } /**< See above. */

// Already documented above.
inline FMVector3 FMVector3::Projected(const FMVector3& unto) const { return ((*this) * unto) / unto.LengthSquared() * unto; }

/** A dynamically-sized array of 3D vectors or points. */
typedef fm::vector<FMVector3> FMVector3List;

#endif // _FM_VECTOR3_H_
#line 174 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
// #include "FMath/FMVector4.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMVector4.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FMVector4.h
	This file contains the class for 4 dimensional vectors.
*/

#ifndef _FM_VECTOR4_H_
#define _FM_VECTOR4_H_

class FMColor;

/**
	A 4 dimensional vector.
	Not used within FCollada.

	@ingroup FMath
*/
class FCOLLADA_EXPORT
ALIGN_STRUCT(16)
FMVector4
{
public:
	float x;	/**< The first coordinate. */
	float y;	/**< The second coordinate. */
	float z;	/**< The third coordinate. */
	float w;	/**< The fourth coordinate. */

	/** Creates an empty 4D vector. */
	#ifndef _DEBUG
	inline FMVector4() {}
	#else
	inline FMVector4() { x = 123456789.0f; y = 123456789.0f; z = 123456789.0f; w = 123456789.0f; }
	#endif

	/** Creates the FMVector4 from a list of \c floats.
		It takes the first 4 \c floats starting from and including \a startIndex
		(0 indexing) in the array as the 4 coordinates. The first as the first
		coordinate, the second as the second, and the third as the third, the fourth as w
		@param source The \c float array.
		@param startIndex The index of the first element. */
	inline FMVector4(const float* source, uint32 startIndex = 0) { source = source + startIndex; x = *source++; y = *source++; z = *source++; w = *source; }

	/** Creates the FMVector4 with the coordinates given.
		The first three coordinates are taken from the FMVector3, where the
		first one is the x value, the second is that y, and the third is the z.
		The forth value is the \c float specified.
		@param v The FMVector3 representing the first three coordinates.
		@param _w The final coordinate. */
	inline FMVector4(const FMVector3& v, float _w) { x = v.x; y = v.y; z = v.z; w = _w; }

	/** Creates the FMVector4 with the coordinates given.
		@param v1 The FMVector2 representing the first two coordinates.
		@param v2 The FMVector2 representing the last two coordinates. */
	inline FMVector4(const FMVector2& v1, const FMVector2& v2) { x = v1.x; y = v1.y; z = v2.x; w = v2.y; }

	/** Creates the FMVector4 with the coordinates given.
		@param _x The first coordinate.
		@param _y The second coordinate.
		@param _z The third coordinate.
		@param _w The forth coordinate. */
	inline FMVector4(float _x, float _y, float _z, float _w) { x = _x; y = _y; z = _z; w = _w; }

	/** Creates the 4D vector from a given color value.
		@param c The color value. */
	FMVector4(const FMColor& c);

	/** Creates the 4D vector from a HSV color value.
		HSV stands for hue, saturation and value and is
		a more humane way to express color values, as opposed to RGB.
		@param hue The color hue. In the range [0,1].
		@param saturation The color saturation. In the range [0,1].
		@param value The color value. In the range [0,1]. */
	static FMVector4 FromHSVColor(float hue, float saturation, float value);

	/** Retrieves the HSV color value for this RGBA color value.
		All the color components are expected to be in the [0,1] range:
		no clamping will be done.
		@return The equivalent HSV color value. All the components will be
			in the [0,1] range. */
	FMVector3 ToHSVColor();

public:
	/** Get this FMVector4 as an array of \c floats.
		@return The \c float array. */
	inline operator float*() { return &x; }

	/** Get this FMVector4 as an array of \c floats.
		@return The \c float array. */
	inline operator const float*() const { return &x; }

	/** Assign this FMVector4 to the given float array.
		Assigns each coordinate of this FMVector4 to the elements in the \c
		float array. The first element to the first coordinate, the second to
		the second, and the third to the third. It returns this FMVector4.
		@param v The \c float array to assign with.
		@return This FMVector4. */
	inline FMVector4& operator =(const float* v) { x = *v; y = *(v + 1); z = *(v + 2); w = *(v+3); return *this; }

	/** Update each component of this FMVector to the minimum of two FMVector4s.
		Updates each of the four components to be the minimum of the current
		value and that of the corresponding value of the given FMVector4.
		@param min The FMVector to take values from. */
	inline void ComponentMinimum(const FMVector4& min) { if (x < min.x) x = min.x; if (y < min.y) y = min.y; if (z < min.z) z = min.z; if (w < min.w) w = min.w; }

	/** Update each component of this FMVector to the maximum of two FMVector4s.
		Updates each of the four components to be the maximum of the current
		value and that of the corresponding value of the given FMVector4.
		@param max The FMVector to take values from. */
	inline void ComponentMaximum(const FMVector4& max) { if (x > max.x) x = max.x; if (y > max.y) y = max.y; if (z > max.z) z = max.z; if (w > max.w) w = max.w;}

public:
	static const FMVector4 Zero;	/**< The 4D vector containing all zeroes. */
	static const FMVector4 One;		/**< The 4D vector containing all ones. */
	static const FMVector4 AlphaOne;
};

/** Scalar multiplication with a FMVector4.
	@param a The vector.
	@param b The scalar.
	@return The FMVector4 representing the resulting vector. */
inline FMVector4 operator *(const FMVector4& a, float b) { return FMVector4(a.x * b, a.y * b, a.z * b, a.w * b); }

/** Scalar multiplication with a FMVector4.
	@param a The scalar.
	@param b The vector.
	@return The FMVector4 representing the resulting vector. */
inline FMVector4 operator *(float a, const FMVector4& b) { return FMVector4(a * b.x, a * b.y, a * b.z, a * b.w); }

/** Vector addition with two FMVector4.
	@param a The first vector.
	@param b The second vector.
	@return The FMVector4 representation of the resulting vector. */
inline FMVector4 operator +(const FMVector4& a, const FMVector4& b) { return FMVector4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w); }

/** Vector substraction with two FMVector4.
	@param a The first vector.
	@param b The second vector.
	@return The FMVector4 representation of the resulting vector. */
inline FMVector4 operator -(const FMVector4& a, const FMVector4& b) { return FMVector4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w); }

/** Assignment of the addition of two FMVector4.
	@param b The first vector, which will also be assigned to the result.
	@param a The second vector.
	@return The first vector, after it has been assigned new values. */
inline FMVector4& operator +=(FMVector4& b, const FMVector4& a) { b.x += a.x; b.y += a.y; b.z += a.z; b.w += a.w; return b; }

/** Assignment of the subtraction of two FMVector4.
	@param b The first vector, which will also be assigned to the result.
	@param a The second vector.
	@return The first vector, after it has been assigned new values. */
inline FMVector4& operator -=(FMVector4& b, const FMVector4& a) { b.x -= a.x; b.y -= a.y; b.z -= a.z; b.w -= a.w; return b; }

/** Assignment of the scalar multiplication of a FMVector4.
	@param b The vector, which will also be assigned to the result.
	@param a The scalar.
	@return The vector, after it has been assigned new values. */
inline FMVector4& operator *=(FMVector4& b, float a) { b.x *= a; b.y *= a; b.z *= a; b.w *= a; return b; }

/** Assignment of the scalar division of a FMVector4.
	@param b The vector, which will also be assigned to the result.
	@param a The scalar.
	@return The vector, after it has been assigned new values. */
inline FMVector4& operator /=(FMVector4& b, float a) { b.x /= a; b.y /= a; b.z /= a; b.w /= a; return b; }

/** Dot product of two FMVector4.
	@param a The first vector.
	@param b The second vector.
	@return The result of the dot product. */
inline float operator *(const FMVector4& a, const FMVector4& b) { return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w; }


/** Returns whether two 4D vectors are equivalent.
	@param p A first vector.
	@param q A second vector.
	@return Whether the vectors are equivalent. */
inline bool IsEquivalent(const FMVector4& p, const FMVector4& q) { return IsEquivalent(p.x, q.x) && IsEquivalent(p.y, q.y) && IsEquivalent(p.z, q.z) && IsEquivalent(p.w, q.w); }
inline bool operator==(const FMVector4& p, const FMVector4& q) { return IsEquivalent(p.x, q.x) && IsEquivalent(p.y, q.y) && IsEquivalent(p.z, q.z) && IsEquivalent(p.w, q.w); } /**< See above. */

/** A dynamically-sized array of 4D vectors or points. */
typedef fm::vector<FMVector4> FMVector4List;

#endif // _FM_VECTOR4_H_
#line 175 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
// #include "FMath/FMColor.h"
// #include "FMath/FMMatrix33.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMMatrix33.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FMMatrix33.h
	The file containing the class and global functions for 3x3 matrices.
*/

#ifndef _FM_MATRIX33_H_
#define _FM_MATRIX33_H_

/**
	A 3x3 matrix: use to represent 2D transformations.
	Not used within FCollada.

	@ingroup FMath
*/
class FCOLLADA_EXPORT FMMatrix33
{
public:
	float m[3][3];	/**< The matrix elements stored in a 2D array. */

	/**
	 * Creates a FMMatrix33 from the \c float array.
	 *
	 * The float array stores the elements in the following order: m[0][0],
	 * m[1][0], m[2][0], m[0][1], m[1][1], m[2][1], m[0][2], m[1][2], m[2][2].
	 *
	 * @param _m The \c float array to create the matrix from.
	 */
	FMMatrix33(float* _m);

	/**
	 * Creates an empty FMMatrix33.
	 *
	 * The default values are non deterministic.
	 */
	#ifndef _DEBUG
	FMMatrix33() {}
	#else
	FMMatrix33() { memset(m, 55, 3 * 3 * sizeof(float)); }
	#endif

	/**
	 * Get this FMMatrix33 as an array of \c floats.
	 *
	 * The array contains the elements in the following order: m[0][0],
	 * m[0][1], m[0][2], m[1][0], m[1][1], m[1][2], m[2][0], m[2][1], m[2][2].
	 *
	 * @return The \c float array.
	 */
	operator float*() { return &m[0][0]; }

	/**
	 * Get this FMMatrix as an array of \c floats.
	 *
	 * The array contains the elements in the following order: m[0][0],
	 * m[0][1], m[0][2], m[1][0], m[1][1], m[1][2], m[2][0], m[2][1], m[2][2].
	 *
	 * @return The \c float array.
	 */
	operator const float*() const { return &m[0][0]; }

	/**
	 * Get a specified row of FMMatrix33 as an array of \c floats.
	 *
	 * @param a The row index, starting at 0, of the row to get.
	 * @return The \c float array of the elements in the specified row.
	 */
	float* operator[](int a) { return m[a]; }

	/**
	 * Assign this FMMatrix33's elements to be the same as that of the given
	 * FMMatrix33.
	 *
	 * @param copy The FMMatrix to copy elements from.
	 * @return This FMMatrix.
	 */
	FMMatrix33& operator=(const FMMatrix33& copy);

	/**
	 * Gets the transposed of this FMMatrix33.
	 *
	 * @return The transposed of this FMMatrix.
	 */
	FMMatrix33 Transposed() const;

	/**
	 * Gets the inversion of this FMMatrix33.
	 *
	 * @return The inversion of this FMMatrix.
	 */
	FMMatrix33 Inverted() const;

public:
	static FMMatrix33 identity;	/**< The identity FMMatrix33. */

	/**
	 * Gets the FMMatrix33 representation of a 2D counter-clockwise rotation
	 * about the z-axis.
	 *
	 * @param angle The angle of rotation in radians.
	 * @return The rotation FMMatrix.
	 */
	static FMMatrix33 RotationMatrix(float angle);

	/**
	 * Gets the FMMatrix33 representation of a 2D translation.
	 *
	 * @param tx The translation in the x direction.
	 * @param ty The translation in the y direction.
	 * @return The translation FMMatrix.
	 */
	static FMMatrix33 TranslationMatrix(float tx, float ty);

	/**
	 * Gets the FMMatrix33 representation of a 2D scale.
	 *
	 * @param sx The scale factor in the x direction.
	 * @param sy The scale factor in the y direction.
	 * @return The scale FMMatrix.
	 */
	static FMMatrix33 ScaleMatrix(float sx, float sy);

	/**
	 * Gets the FMMatrix33 representation of a 2D translation.
	 *
	 * The translation in the x direction is the \a u componenet of the given
	 * FMVector2 and the translation in the y direction is the \a v component.
	 *
	 * @param translation The FMVector2 to get the translation components from.
	 * @return The translation FMMatrix33.
	 */
	static inline FMMatrix33 TranslationMatrix(FMVector2 translation) { return TranslationMatrix(translation.u, translation.v); }

	/**
	 * Gets the FMMatrix33 representation of a 2D scale.
	 *
	 * The scale in the x direction is the \a u componenet of the given
	 * FMVector and the scale in the y direction is the \a v component.
	 *
	 * @param scale The FMVector2 to get the scale components from.
	 * @return The scale FMMatrix33.
	 */
	static inline FMMatrix33 ScaleMatrix(FMVector2 scale) { return ScaleMatrix(scale.u, scale.v); }
};

/**
 * Matrix multiplication with two FMMatrix33.
 *
 * @param m1 The first matrix.
 * @param m2 The second matrix.
 * @return The FMMatrix44 representation of the resulting matrix.
 */
FMMatrix33 FCOLLADA_EXPORT operator*(const FMMatrix33& m1, const FMMatrix33& m2);

#endif // _FM_MATRIX33_H_
#line 177 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"
// #include "FMath/FMMatrix44.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMMatrix44.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FMMatrix44.h
	The file containing the class and global functions for 4x4 matrices.
*/

#ifndef _FM_MATRIX44_H_
#define _FM_MATRIX44_H_

/**
	A 4x4 Row Major matrix: use to represent 3D transformations.

	@ingroup FMath
*/
class FCOLLADA_EXPORT
ALIGN_STRUCT(16)
FMMatrix44
{
public:

	float m[4][4];	/**< The matrix elements stored in a 2D array. */

	/** Creates a FMMatrix44 from the \c float array.
		The float array stores the elements in the following order: m[0][0],
		m[1][0], m[2][0], m[3][0], m[0][1], m[1][1], m[2][1], m[3][1], m[0][2],
		m[1][2], m[2][2], m[3][2], m[0][3], m[1][3], m[2][3], m[3][3].
		@param _m The \c float array to create the matrix from. */
	FMMatrix44(const float* _m);
	FMMatrix44(const double* _m); /**< See above. */

	/** Creates an empty FMMatrix44.
		The default values are left un-initialized.
		To get an identity matrix:
		FMMatrix44 identity(FMMatrix44::Identity); */
	#ifndef _DEBUG
	inline FMMatrix44() {}
	#else
	inline FMMatrix44() { memset(m, 55, 16 * sizeof(float)); }
	#endif

	/** Get this FMMatrix44 as an array of \c floats.
		The array contains the elements in the following order: m[0][0],
		m[0][1], m[0][2], m[0][3], m[1][0], m[1][1], m[1][2], m[1][3], m[2][0],
		m[2][1], m[2][2], m[0][3], m[3][0], m[3][1], m[3][2], m[3][3].
		@return The \c float array. */
	inline operator float*() { return &m[0][0]; }
	inline operator const float*() const { return &m[0][0]; } /**< See above. */

	/** Get a specified row of FMMatrix44 as an array of \c floats.
		@param a The row index, starting at 0, of the row to get.
		@return The \c float array of the elements in the specified row. */
	template <class Integer> float* operator[](Integer a) { return m[a]; }
	template <class Integer> const float* operator[](Integer a) const { return m[a]; } /**< See above. */

	/** Assign this FMMatrix44's elements to be the same as that of the given
		matrix.
		@param copy The FMMatrix to copy elements from.
		@return This FMMatrix. */
	FMMatrix44& operator=(const FMMatrix44& copy);

	/** Sets a FMMatrix44 from the \c float array.
		The float array stores the elements in the following order: m[0][0],
		m[1][0], m[2][0], m[3][0], m[0][1], m[1][1], m[2][1], m[3][1], m[0][2],
		m[1][2], m[2][2], m[3][2], m[0][3], m[1][3], m[2][3], m[3][3].
		@param _m The \c float array to create the matrix from. */
	void Set(const float* _m);
	void Set(const double* _m);	/**< See above. */

	/** Gets the transposed of this FMMatrix44.
		@return The transposed of this FMMatrix. */
	FMMatrix44 Transposed() const;

	/** Gets the inverse of this matrix.
		@return The inverse of this matrix. */
	FMMatrix44 Inverted() const;

	/** Gets the determinant of this matrix.
		@return The determinant of this matrix. */
	float Determinant() const;

	/** Decompose this matrix into its scale, rotation, and translation
		components; it also tells whether it is inverted. To get back the
		original matrix, perform the following multiplication:
		translation * axis-rotation [z*y*x order] * scale - or use
		the Recompose function. If invert is negative,
		then to get back the original matrix, negate scale and perform the
		above multiplication.
		@param scale The FMVector to place the scale components to.
		@param rotation The FMVector to place the rotation components to.
		@param translation The FMVector to place the translation components to.
		@param inverted -1.0 if inverted, 1.0 if not inverted. */
	void Decompose(FMVector3& scale, FMVector3& rotation, FMVector3& translation, float& inverted) const;

	/** Recompose this matrix from its scale, rotation, and translation
		components.; it also tells whether it is inverted. To get back the
		original matrix, perform the following multiplication:
		translation * rotation [x*y*z order] * scale. If invert is negative,
		then to get back the original matrix, negate scale and perform the
		above multiplication.
		@param scale The FMVector to place the scale components to.
		@param rotation The FMVector to place the rotation components to.
		@param translation The FMVector to place the translation components to.
		@param inverted -1.0 if inverted, 1.0 if not inverted. */
	void Recompose(const FMVector3& scale, const FMVector3& rotation, const FMVector3& translation, float inverted = 1.0f);

	/** Transforms the given point by this matrix.
		@param coordinate The point to transform.
		@return The vector representation of the transformed point. */
	FMVector3 TransformCoordinate(const FMVector3& coordinate) const;
	FMVector4 TransformCoordinate(const FMVector4& coordinate) const; /**< See above. */

	/** Transforms the given vector by this FMMatrix44.
		@param v The vector to transform.
		@return The FMVector3 representation of the transformed vector. */
	FMVector3 TransformVector(const FMVector3& v) const;

	/** Gets the translation component of this matrix.
		@return A Reference to the FMVector3 representation of the translation. */
	inline const FMVector3& GetTranslation() const { return GetAxis(FMath::TRANS); }
	inline FMVector3& GetTranslation() { return GetAxis(FMath::TRANS); } /**< See Above */

	/** Sets the translation component of this matrix.
		@param translation The new translation component. */
	inline void SetTranslation(const FMVector3& translation) { GetTranslation() = translation; }

	/** Gets a reference to an axis of this matrix
		@param axis The index of the axis to get (X = 0, Y = 1, Z = 2)
		@return A reference to the axis */
	inline const FMVector3& GetAxis(FMath::AXIS axis) const { return *(FMVector3*)(size_t)(m[axis]); }
	inline FMVector3& GetAxis(FMath::AXIS axis) { return *(FMVector3*)(size_t)(m[axis]); } /**< See above */

public:
	static FMMatrix44 Identity;	/**< The identity matrix. */

	/** Gets the FMMatrix44 representation of a 3D translation.
		The translation in the x, y and z directions correspond to the \a x,
		\a y, and \a z components of the FMVector3.
		@param translation The FMVector3 to get the translation components from.
		@return The translation FMMatrix44.  */
	static FMMatrix44 TranslationMatrix(const FMVector3& translation);

	/** Gets the FMMatrix44 representation of a 3D rotation about a given axis
		by an angle.
		@param axis The axis of rotation.
		@param angle The angle of rotation in radians.
		@return The rotation FMMatrix44. */
	static FMMatrix44 AxisRotationMatrix(const FMVector3& axis, float angle);

	/** Creates an FMMatrix44 rotation matrix of angle degrees around the X axis
		@param angle The rotation angle in radians
		@returns The rotation FMMatrix44 */
	static FMMatrix44 XAxisRotationMatrix(float angle);

	/** Creates an FMMatrix44 rotation matrix of angle degrees around the X axis
		@param angle The rotation angle in radians
		@returns The rotation FMMatrix44 */
	static FMMatrix44 YAxisRotationMatrix(float angle);

	/** Creates an FMMatrix44 rotation matrix of angle degrees around the X axis
		@param angle The rotation angle in radians
		@returns The rotation FMMatrix44 */
	static FMMatrix44 ZAxisRotationMatrix(float angle);

	/** Gets the matrix representation of a 3D euler rotation.
		The angles are considered in the order: x, y, z,
		which represents heading, banking and roll.
		@param rotation The euler rotation angles.
		@return The rotation matrix. */
	static FMMatrix44 EulerRotationMatrix(const FMVector3& rotation);

	/** Gets the FMMatrix44 representation of a 3D axis-bound scale.
		@param scale The scaling components.
		@return The scale transform. */
	static FMMatrix44 ScaleMatrix(const FMVector3& scale);

	/** Gets the FMMatrix44 represention of a look-at transformation.
		@param eye The eye position.
		@param target The target position.
		@param up The up direction.
		@return The look-at transformation matrix. */
	static FMMatrix44 LookAtMatrix(const FMVector3& eye, const FMVector3& target, const FMVector3& up);
};

/** Matrix multiplications.
	Effectively concatenates matrix transformations.
	FCollada does left-multiplication of matrices.
	@param m1 A first matrix.
	@param m2 A second matrix.
	@return The concatenation of the two matrix transformations. */
FMMatrix44 FCOLLADA_EXPORT operator*(const FMMatrix44& m1, const FMMatrix44& m2);

/** Transforms a four-dimensional vector by a given matrix.
	If the 'w' value of the vector is 1.0, this is a coordinate transformation.
	If the 'w' value of the vector is 0.0, this is a vector transformation.
	@param m A matrix.
	@param v A vector.
	@return The FMVector4 representation of the resulting vector. */
FMVector4 FCOLLADA_EXPORT operator*(const FMMatrix44& m, const FMVector4& v);

/** Scalar multiplication with float and FMMatrix44.
	All the components of the matrix get uniformly multiplied by the scalar.
	EDITOR NOTE: Is this functionality even useful? I cannot think of a reason
	this function would be used.
	@param a A scalar.
	@param m A matrix.
	@return The resulting matrix. */
FMMatrix44 FCOLLADA_EXPORT operator*(float a, const FMMatrix44& m);

/** Matrix equality comparison function.
	@param m1 A first matrix.
	@param m2 A second matrix.
	@return Whether the given matrices are equal. */
bool FCOLLADA_EXPORT IsEquivalent(const FMMatrix44& m1, const FMMatrix44& m2);
inline bool operator==(const FMMatrix44& m1, const FMMatrix44& m2) { return IsEquivalent(m1, m2); } /**< See above. */

/** Left-multiplies a given matrix, in-place.
	This function effectively concatenates a transformation into
	a transform matrix.
	@param m1 The in-place multiplied matrix.
	@param m2 A matrix transformation.
	@return The in-place multiplied matrix. */
inline FMMatrix44& operator*=(FMMatrix44& m1, const FMMatrix44& m2) { return m1 = m1 * m2; }

/** A dynamically-sized array of 4x4 matrices. */
typedef fm::vector<FMMatrix44> FMMatrix44List;

#endif // _FM_MATRIX44_H_
#line 178 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FMath/FMath.h"

#endif // _F_MATH_H_
#line 82 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
#endif // _F_MATH_H_

// LibXML
#ifndef NO_LIBXML
#define HAS_LIBXML /**< Used by FCollada, implies that we are including LibXML functions in the library interface. */
#if !defined(FCOLLADA_DLL) || defined(FCOLLADA_INTERNAL)
#define LIBXML_STATIC /**< Used by LibXML, implies that we are statically-linking the LibXML. */
#endif // !FCOLLADA_DLL || !FCOLLADA_INTERNAL
#ifndef __XML_TREE_H__
// #include <libxml/tree.h>
#endif // __XML_TREE_H__
#else // NO_LIBXML
typedef struct _xmlNode xmlNode;
#endif // NO_LIBXML

// SAFE_DELETE Macro set.
#define SAFE_DELETE(ptr) if ((ptr) != NULL) { delete (ptr); (ptr) = NULL; } /**< This macro safely deletes a pointer and sets the given pointer to NULL. */
#define SAFE_DELETE_ARRAY(ptr) if (ptr != NULL) { delete [] ptr; ptr = NULL; } /**< This macro safely deletes an heap array and sets the given pointer to NULL. */
#define SAFE_FREE(ptr) if (ptr != NULL) { free(ptr); ptr = NULL; } /**< This macro safely frees a memory block and sets the given pointer to NULL. */
#define SAFE_RELEASE(ptr) { if ((ptr) != NULL) { (ptr)->Release(); (ptr) = NULL; } } /**< This macro safely releases an interface and sets the given pointer to NULL. */
#define CLEAR_POINTER_VECTOR(a) { size_t l = (a).size(); for (size_t i = 0; i < l; ++i) SAFE_DELETE((a)[i]); (a).clear(); } /**< This macro deletes all the object pointers contained within a vector and clears it. */
#define CLEAR_ARRAY_VECTOR(a) { size_t l = (a).size(); for (size_t i = 0; i < l; ++i) SAFE_DELETE_ARRAY((a)[i]); (a).clear(); } /**< This macro deletes all the object array pointers contained within a vector and clears it. */
#define CLEAR_POINTER_STD_PAIR_CONT(cont, a){ for (cont::iterator it = (a).begin(); it != (a).end(); ++it) SAFE_DELETE((*it).second); (a).clear(); } /**< This macro deletes all the object pointers contained within any std container and clears it. */
#define CLEAR_POINTER_STD_CONT(cont, a){ for (cont::iterator it = (a).begin(); it != (a).end(); ++it) SAFE_DELETE((*it)); (a).clear(); } /**< This macro deletes all the object pointers contained within any std container and clears it. */

// Base RTTI object and object container class
#ifndef _FU_OBJECT_TYPE_H_
// #include "FUtils/FUObjectType.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUObjectType.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/
/*
	We use references to static objects so that the order of initialization shouldn't matter.
*/

/**
	@file FUObjectType.h
	This file contains the FUObjectType class.
*/

#ifndef _FU_OBJECT_TYPE_H_
#define _FU_OBJECT_TYPE_H_

/**
	An object type.

	Used for RTTI-purpose and to easily allow up-classing of objects.
	Every object class should have one object type has a static member
	and available through the virtual FUObject::GetObjectType function.
	All FUObject up-classes should use the DeclareObjectType macro.

	@ingroup FUtils
*/
class FCOLLADA_EXPORT FUObjectType
{
private:
	const FUObjectType* parent;
	const char* typeName;

public:
	/** [INTERNAL] Constructor: do not use directly.
		Only the FUObject class should use this constructor.
		All other class object types should use the constructor below.
		Use neither constructor directly: use the ImplementObjectType macro.
		@param typeName The name of type.
			Used only in debug builds for debugging purposes. */
	FUObjectType(const char* typeName);

	/** [INTERNAL] Constructor: do not use directly.
		Use the ImplementObjectType macro.
		@param parent The parent class object type.
		@param typeName The name of type.
			Used only in debug builds for debugging purposes. */
	FUObjectType(const FUObjectType& parent, const char* typeName);

	/** Retrieves the type of the down-class.
		@return The type of the down-class. The FUObject class
			will return itself as the parent, so be careful when looping down.*/
	const FUObjectType& GetParent() const { return (parent != NULL) ? *parent : *this; }

	/** Retrieves whether this object type includes a given object type.
		This function allows you to verify if this object type is
		of a given object type or some up-class of the given object type.
		You should use this comparison function before up-casting an object.
		@param otherType A second object type.
		@return Whether this object type includes the given object type. */
	bool Includes(const FUObjectType& otherType) const;

	/** Retrieves whether a given object type is equivalent to this object type.
		@param otherType A second object type.
		@return Whether the two object types are equivalent. */
	inline bool operator==(const FUObjectType& otherType) const { return &otherType == this; }

	/** Retrieves whether a given object type is different from this object type.
		@param otherType A second object type.
		@return Whether the two object type are different. */
	inline bool operator!=(const FUObjectType& otherType) const { return &otherType != this; }

	/** Retrieves the object type name.
		@return The object type name. */
	inline const char* GetTypeName() const { return typeName; }
};

/**
	Declares the object type for an object class.
	Use this macro inside the class declarations of up-classes of the FUObject class
	to easily implement RTTI.
	@param _ParentClass The class name for the parent class.
*/
#define DeclareObjectType(_ParentClass) \
private: \
	static class FUObjectType __classType; \
	typedef _ParentClass Parent; \
public: \
	static const FUObjectType& GetClassType() { return __classType; } \
	virtual const FUObjectType& GetObjectType() const { return __classType; } \
	virtual void Release(); \
private:

/**
	Implements the object type for an object class.
	Use this macro inside your code files only to create the objects
	necessary to support RTTI in your up-classes of the FUObject class.
	@param ClassName The name of the class.
*/
#define ImplementObjectType(ClassName) \
	FUObjectType ClassName::__classType(Parent::GetClassType(), #ClassName); \
	void ClassName::Release() { Detach(); delete this; }

/** See above. */
#define ImplementObjectTypeT(ClassName) \
	template <> \
	FUObjectType ClassName::__classType(Parent::GetClassType(), #ClassName); \
	template <> \
	void ClassName::Release() { Detach(); delete this; }

/**
	Implements the object type for an object class, but without the Release() function.
	Use this macro inside your code files only to create the objects
	necessary to support RTTI in your up-classes of the FUObject class.
	You will need to manually implement the Release() function, without declaring it.
	The default implementation of the Release() function is the following:
	Release() { delete this; }.
	@param ClassName The name of the class.
*/
#define ImplementObjectType_NoDefaultRelease(ClassName) \
	FUObjectType ClassName::__classType(Parent::GetClassType(), #ClassName);

#endif // _FU_OBJECT_TYPE_H_
#line 110 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
#endif //_FU_OBJECT_TYPE_H_
#ifndef _FU_OBJECT_H_
// #include "FUtils/FUObject.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUObject.h"
/*
   Copyright (C) 2005-2007 Feeling Software Inc.
   Portions of the code are:
   Copyright (C) 2005-2007 Sony Computer Entertainment America

   MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FUObject.h
	This file contains the FUObject class, the FUObjectOwner interface,
	the FUObjectRef template class and FUObjectContainer template class.
*/

#ifndef _FU_OBJECT_H_
#define _FU_OBJECT_H_

#ifndef _FU_OBJECT_TYPE_H_
// #include "FUtils/FUObjectType.h"   (already above)
#endif // _FU_OBJECT_TYPE_H_

class FUObjectOwner;

/**
	A basic object.
	Each up-class of this basic object class hold an object type
	that acts just like RTTI to provide a safe way to up-cast.
	@ingroup FUtils
*/
class FCOLLADA_EXPORT FUObject
{
private:
	static class FUObjectType* baseObjectType;

	FUObjectOwner* objectOwner;

protected:
	/** [INTERNAL] Necessary, in order for the
		flag macros to work on up-classes. */
	static const uint32 nextAvailableBit = 0;

public:
	/** Constructor.
		Although it is not an abstract class, this class is
		not meant to be used directly.  */
	FUObject();

	/** Destructor. */
	virtual ~FUObject();

	/** Releases this object.
		This function essentially calls the destructor.
		This function is virtual and is always
		overwritten when using the ImplementObjectType macro. */
	virtual void Release();

	/** Retrieves the type of the base object class.
		@return The type of the base object class. */
	static const FUObjectType& GetClassType() { return *baseObjectType; }

	/** Retrieves the type of the object class.
		@return The type of the base object class. */
	virtual const FUObjectType& GetObjectType() const { return *baseObjectType; }

	/** Retrieves whether this object has exactly the given type.
		@param _type A given class type.
		@return Whether this object is exactly of the given type. */
	inline bool IsType(const FUObjectType& _type) const { return GetObjectType() == _type; }

	/** Retrieves whether this object is exactly or inherits the given type.
		@param _type A given class type.
		@return Whether this object is exactly or inherits the given type. */
	inline bool HasType(const FUObjectType& _type) const { return GetObjectType().Includes(_type); }

protected:
	/** Detaches this object from its owner.
		Mainly notifies the owner before the destructor is called. */
	void Detach();

private:
	friend class FUObjectOwner;

	/** Sets the owner for this object.
		@param owner The new owner. */
	inline void SetObjectOwner(FUObjectOwner* owner)
	{
		// Are you attempting to transfer ownership or do multiple-containment?
		// (owner == NULL) is used to avoid the notification when the container
		// knows its about to release this object.
		FUAssert(objectOwner == NULL || owner == NULL, return);
		objectOwner = owner;
	}
};

/**
	An object owner.
	This interface allows containment classes to be notified when a
	contained object is released.
	@ingroup FUtils
*/
class FUObjectOwner
{
protected:
	/** Owns the given object.
		@param object The object to own. */
	inline void AttachObject(FUObject* object) { object->SetObjectOwner(this); }

	/** Detaches the given object.
		Use this function right before releasing the object to avoid calling the
		notification function (OnOwnedObjectReleased).
		@param object The object to detach. */
	inline void DetachObject(FUObject* object)
	{
		// This assert verifies that we are, indeed, the owner.
		FUAssert(object->objectOwner == this, return);
		object->SetObjectOwner(NULL);
	}

public:
	/** Destructor. */
	virtual ~FUObjectOwner() {}

	/** Notification from the object to its owner, when it is released.
		@param object The object being released. */
	virtual void OnOwnedObjectReleased(FUObject* object) = 0;
};

/**
	Macros used to dynamically case a given FUObject pointer to some higher
	class object.
	@ingroup FUtils
*/
template <class HigherClassType>
inline HigherClassType* DynamicCast(FUObject* object) { return object->HasType(HigherClassType::GetClassType()) ? (HigherClassType*) object : NULL; }

/**
	An object reference
	On top of the tracked object pointer, when this reference
	is released: the tracked object is released.

	This template is very complex for a reference.
	You get reduced compilation times when compared to simple containment.

	@ingroup FUtils
*/
template <class ObjectClass = FUObject>
class FUObjectRef : public FUObjectOwner
{
private:
	typedef fm::pvector<ObjectClass> Parent;

	/** The owned object. */
	ObjectClass* ptr;

public:
	/** Copy constructor.
		@param _ptr The object to reference. This pointer can be NULL to indicate
			that no object should be referenced at this time. */
	FUObjectRef(ObjectClass* _ptr = NULL)
	:	ptr(_ptr)
	{
		if (_ptr != NULL) AttachObject((FUObject*) ptr);
	}

	/** Destructor.
		The object referenced will be released. */
	~FUObjectRef()
	{
		if (ptr != NULL)
		{
			DetachObject((FUObject*) ptr);
			((FUObject*) ptr)->Release();
#ifdef _DEBUG

			ptr = NULL;
#endif // _DEBUG

		}
	}

	/** Assigns this reference to own a new object.
		@param _ptr The new object to own.
		@return This reference. */
	FUObjectRef<ObjectClass>& operator=(ObjectClass* _ptr)
	{
		if (ptr != NULL) ((FUObject*) ptr)->Release();
		FUAssert(ptr == NULL, return *this);
		ptr = _ptr;
		if (_ptr != NULL) AttachObject((FUObject*) ptr);
		return *this;
	}

	/** Exchanges the reference from one object to another.
		If this reference already points to an object, it will be released.
		If the other reference points to an object, that object will
		now be owned by this reference and the other reference will point to NULL.
		@param _ptr The other reference.
		@return This reference. */
	FUObjectRef<ObjectClass>& operator=(FUObjectRef<ObjectClass>& _ptr)
	{
		operator=(_ptr.ptr);
		_ptr.ptr = NULL;
		return *this;
	}

	/** Accesses the tracked object.
		@return The tracked object. */
	inline ObjectClass& operator*() { FUAssert(ptr != NULL, return *ptr); return *ptr; }
	inline const ObjectClass& operator*() const { FUAssert(ptr != NULL, return *ptr); return *ptr; } /**< See above. */
	inline ObjectClass* operator->() { return ptr; } /**< See above. */
	inline const ObjectClass* operator->() const { return ptr; } /**< See above. */
	inline operator ObjectClass*() { return ptr; } /**< See above. */
	inline operator const ObjectClass*() const { return ptr; } /**< See above. */

protected:
	/** Callback when an object tracked by this tracker
		is being released.
		@param object A contained object. */
	virtual void OnOwnedObjectReleased(FUObject* object)
	{
		FUAssert((size_t) object == (size_t) ptr, return);
		ptr = NULL;
	}
};


/**
	A contained object list.
	When this list is released, the contained objects are also released.
	Each object should have only one owner.
	@ingroup FUtils
*/
template <typename ObjectClass = FUObject>
class FUObjectContainer : private fm::pvector<ObjectClass>, public FUObjectOwner
{
private:
	typedef fm::pvector<ObjectClass> Parent;
public:
	typedef ObjectClass** iterator;
	typedef const ObjectClass** const_iterator;

public:
	/** Destructor.
		Releases all the objects contained within this container. */
	virtual ~FUObjectContainer() { clear(); }

	/** Clears and releases the object tracked by this object list. */
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

	/** Retrieves the number of elements in the container.
		@return The number of elements in the container. */
	inline size_t size() const { return Parent::size(); }

	/** Retrieves whether there are values in this container.
		@return Whether there are values in the container. */
	inline bool empty() const { return Parent::empty(); }

	/** Retrieves the first element of the container.
		@return The first element in the container. */
	ObjectClass*& front() { return (ObjectClass*&) Parent::front(); }
	const ObjectClass*& front() const { return (const ObjectClass*&) Parent::front(); } /**< See above. */

	/** Retrieves the last element of the container.
		@return The last element in the container. */
	ObjectClass*& back() { return (ObjectClass*&) Parent::back(); }
	const ObjectClass*& back() const { return (const ObjectClass*&) Parent::back(); } /**< See above. */

	/** Retrieves an indexed object in the list.
		@param index An index.
		@return The given object. */
	inline ObjectClass* at(size_t index) { return (ObjectClass*) Parent::at(index); }
	inline const ObjectClass* at(size_t index) const { return (const ObjectClass*) Parent::at(index); } /**< See above. */
	template <class INTEGER> inline ObjectClass* operator[](INTEGER index) { return at(index); } /**< See above. */
	template <class INTEGER> inline const ObjectClass* operator[](INTEGER index) const { return at(index); } /**< See above. */

	/** Retrieves an iterator for the first element in the list.
		@return an iterator for the first element in the list. */
	inline iterator begin() { return (iterator) Parent::begin(); }
	inline const_iterator begin() const { return (const_iterator) Parent::begin(); } /**< See above. */

	/** Retrieves an iterator for the element after the last element in the list.
		@return an iterator for the element after the last element in the list. */
	inline iterator end() { return (iterator) Parent::end(); }
	inline const_iterator end() const { return (const_iterator) Parent::end(); } /**< See above. */

	/** Retrieves an iterator for a given element in the list.
		@param item An item of the list.
		@return An iterator for the given item. If the item is not
			found in the list, the end() iterator is returned. */
	inline iterator find(const ObjectClass* item) { return (iterator) Parent::find(item); }
	inline const_iterator find(const ObjectClass* item) const { return (const_iterator) Parent::find(item); } /**< See above. */

	/** Adds an object to the container's containment list.
		@param object An object to contain. */
	inline void push_back(ObjectClass* object)
	{
		AttachObject((FUObject*) object);
		Parent::push_back(object);
	}

	/** Inserts an object in the container's containment list.
		@param _iterator The iterator after which to insert the object.
		@param object An object to insert.
		@return The iterator to the inserted object. */
	iterator insert(iterator _iterator, ObjectClass* object)
	{
		AttachObject((FUObject*) object);
		return (iterator) Parent::insert(_iterator, object);
	}

	/** Inserts an object in the container's containment list.
		@param index Where to insert the object.
		@param object An object to insert. */
	inline void insert(size_t index, ObjectClass* object) { insert(begin() + index, object); }

	/** Inserts a list of object in the container's containment list.
		@param _where The iterator after which to insert the object.
		@param _startIterator The iterator for the first object to insert.
		@param _endIterator The iterator just passed the last object.
			This object will not be inserted. */
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

	/** Removes the last value of the tracked object list. */
	void pop_back()
	{
		FUAssert(!Parent::empty(), return);
		FUObject* last = (FUObject*) Parent::back();
		Parent::pop_back();
		DetachObject(last);
		last->Release();
	}

	/** Removes the first value of the object container.
		Warning: this function may result in large memory copies,
		since we use an array to contain objects. */
	void pop_front()
	{
		FUAssert(!Parent::empty(), return);
		FUObject* first = (FUObject*) Parent::front();
		Parent::pop_front();
		DetachObject(first);
		first->Release();
	}

	/** Removes the value at the given position within the list.
		@param _it The list position for the value to remove. */
	iterator erase(iterator _it)
	{
		FUAssert(contains(*_it), return _it);
		FUObject* o = (FUObject*) * _it;
		iterator it = (iterator) Parent::erase(_it);
		DetachObject(o);
		o->Release();
		return it;
	}

	/** Removes a range of values from the list.
		@param first The list position of the first value to remove.
		@param last The list position just passed the last value to remove. */
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

	/** Removes a range of values from the list.
		@param first The index of the first value to remove.
		@param last The index just passed the last value to remove. */
	inline void erase(size_t first, size_t last) { erase(begin() + first, begin() + last); }

	/** Removes a value contained within the list, once.
		@param value The value, contained within the list, to erase from it.
		@return Whether the value was found and erased from the list. */
	inline bool erase(const ObjectClass* value)
	{
		iterator it = find(value);
		if (it == Parent::end()) return false;
		erase(it);
		return true;
	}

	/** Detaches the value at the given position from the list.
		The object is not released, so after this call: it has no owner
		and must be released manually.
		@param _it The list position for the value to remove. */
	iterator Detach(iterator _it)
	{
		FUAssert(contains(*_it), return _it);
		FUObject* o = (FUObject*) * _it;
		iterator it = (iterator) Parent::erase(_it);
		DetachObject(o);
		return it;
	}

	/** Detaches a range of values from the list.
		The objects are not released, so after this call: they have no owner
		and must be released manually.
		@param first The list position of the first value to remove.
		@param last The list position just passed the last value to remove. */
	inline void Detach(iterator first, iterator last)
	{
		for (iterator it = first; it != last; ++it)
		{
			FUObject* o = (FUObject*) * it;
			DetachObject(o);
		}
		Parent::erase(first, last);
	}

	/** Detaches a range of values from the list.
		The objects are not released, so after this call: they have no owner
		and must be released manually.
		@param first The index of the first value to remove.
		@param last The index just passed the last value to remove. */
	inline void Detach(size_t first, size_t last) { Detach(begin() + first, begin() + last); }

	/** Detaches a given value from the list.
		The object is not released, so after this call: it has no owner
		and must be released manually.
		@param value The value, contained within the list, to detach from it.
		@return Whether the value was found and detached from the list. */
	inline bool Detach(const ObjectClass* value)
	{
		iterator it = find(value);
		if (it == Parent::end()) return false;
		Detach(it);
		return true;
	}

	/** Removes an indexed value contained within the list.
		@param index The index of the value to erase. */
inline void erase(size_t index) { erase(begin() + index); }

	/** Pre-caches the wanted number of pointers.
		Use this function to avoid many memory re-allocations.
		@param count The wanted number of pre-cached pointers. */
	inline void reserve(size_t count) { Parent::reserve(count); }

	/** Retrieves whether this container owns a given object.
		@param value An object.
		@return Whether the object is owned by this container. */
	inline bool contains(const ObjectClass* value) const { return Parent::contains(value); }

	/** Releases a value contained within a list.
		Use this function only if there is no duplicate pointers within the list.
		@deprecated Use FUObject::Release instead.
		@param value The value, contained within the list, to release.
		@return Whether the value was found and released. */
	DEPRECATED(3.05A, "FUObject::Release()") bool release(const ObjectClass* value)
	{
		ObjectClass** it = find(value);
		if (it != Parent::end()) { ((FUObject*) value)->Release(); return true; }
		return false;
	}

	/** Adds a new empty object to the container.
		@return The new empty object. */
	ObjectClass* Add()
	{
		ObjectClass* object = new ObjectClass();
		push_back(object);
		return object;
	}

	/** Adds a new object to the container.
		@param arg1 An constructor argument.
		@return The new object. */
	template <class A1>
	ObjectClass* Add(const A1& arg1)
	{
		ObjectClass* object = new ObjectClass(arg1);
		push_back(object);
		return object;
	}

	/** Adds a new object to the container.
		@param arg1 A first constructor argument.
		@param arg2 A second constructor argument.
		@return The new object. */
	template <class A1, class A2>
	ObjectClass* Add(const A1& arg1, const A2& arg2)
	{
		ObjectClass* object = new ObjectClass(arg1, arg2);
		push_back(object);
		return object;
	}

	/** Adds a new object to the container.
		@param arg1 A first constructor argument.
		@param arg2 A second constructor argument.
		@param arg3 A third constructor argument.
		@return The new object. */
	template <class A1, class A2, class A3>
	ObjectClass* Add(const A1& arg1, const A2& arg2, const A3& arg3)
	{
		ObjectClass* object = new ObjectClass(arg1, arg2, arg3);
		push_back(object);
		return object;
	}

protected:
	/** Removes an object from the container's owned list.
		@param object A contained object. */
	virtual void OnOwnedObjectReleased(FUObject* object)
	{
		FUAssert(Parent::contains(object), return);
		Parent::erase((ObjectClass*) object);
	}
};

#endif // _FU_OBJECT_H_
#line 113 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
#endif // _FU_OBJECT_H_
#ifndef _FU_TRACKER_H_
// #include "FUtils/FUTracker.h"
#endif // _FU_TRACKER_H_

// More complex utility classes
#ifndef _FU_STRING_H_
// #include "FUtils/FUString.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUString.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FUString.h
	This file includes FUStringBuilder.h and FUStringConversion.h
	and defines important string-related macros and inline functions.
*/

#ifndef _FU_STRING_H_
#define _FU_STRING_H_

#ifndef _FM_ARRAY_H_
// #include "FMath/FMArray.h"   (already above)
#endif // _FM_ARRAY_H_

/** An empty UTF-8 string. This string is returned in many functions when there is an error. */
extern FCOLLADA_EXPORT const char* emptyCharString;
/** An empty Unicode string. This string is returned in many functions when there is an error. */
extern FCOLLADA_EXPORT const fchar* emptyFCharString;

// Already documented elsewhere.
namespace fm
{
	/** A string template.
		Intentionally has an interface similar to STL.
		You should use fm::string for UTF8 strings and
		fstring for UNICODE strings.
		@ingroup FUtils */
	template <class CH>
	class FCOLLADA_EXPORT stringT : public fm::vector<CH, true>
	{
	public:
		typedef fm::vector<CH, true> Parent; /**< The parent class. */

	public:
		/** Constant for infinity length.
			This important constant is used throughout the
			class to indicate infinity or values not found. */
		static const size_t npos = ~(size_t)0;

		/** Default constructor. Defaults to an empty string. */
		stringT() : Parent() {}

		/** Copy constructor.
			@param c The string to clone. */
		stringT(const stringT& c) : Parent(c) {}

		/** Copy constructor.
			@param c A NULL-terminated character buffer to clone. */
		stringT(const CH* c) : Parent()
		{
			append(c);
			if (c == NULL || (*c) == 0) push_back((CH) 0);
		}

		/** Copy constructor.
			@param c A character buffer to clone.
			@param length A partial length to copy.
				Use stringT::npos for copying full NULL-terminated strings. */
		stringT(const CH* c, size_t length) : Parent()
		{
			if (c == NULL || length == 0) return;

			if (length != npos)
			{
				Parent::resize(length + 1);
				memcpy(Parent::begin(), c, sizeof(CH) * length);
				Parent::back() = 0; // NULL-terminate.
			}
			else
			{
				append(c);
				if (c == NULL || (*c) == 0) push_back((CH) 0);
			}
		}

		/** Constructor.
			@param length The number of characters to repeat in the string.
			@param c The character value to repeat within the string. */
		stringT(size_t length, const CH& c) : Parent()
		{
			Parent::reserve(length + 1);
			Parent::insert(Parent::begin(), length, c);
			Parent::push_back((CH) 0);
		}

		/** Retrieves the length of the string.
			This function is NULL-termination aware.
			@return The length of the string. */
		inline size_t length() const { return Parent::size() > 1 ? Parent::size() - 1 : 0; }
		inline size_t size() const { return Parent::size() > 1 ? Parent::size() - 1 : 0; } /**< See above. */

		/** Retrieves the last element of the string.
			This function is NULL-termination aware.
			@return The last element of the string. */
		inline CH& back() { return *(Parent::end() - 2); }
		inline const CH& back() const { return *(Parent::end() - 2); } /**< See above. */

		/** Removes the last character from a string.
			This function is NULL-termination aware. */
		inline void pop_back() { if (Parent::size() > 0) { Parent::pop_back(); Parent::back() = 0; } }

		/** Retrieves whether the string contains useful data.
			This function differs from the parent because it checks for NULL-termination.
			@return Whether the string contains useful data. */
		inline bool empty() const { return Parent::size() <= 1; }

		/** Retrieves a segment of the string.
			@param start The index of the first character to extract.
			@param count The number of characters to extract. When the count
				is 'npos', all the remaining characters are extracted.
			@return The partial string. */
		stringT substr(size_t start, size_t count = npos) const
		{
			if (start >= length()) return stringT();
			if (count == npos || count + start > length()) count = length() - start;
			return stringT(c_str() + start, count);
		}

		/** Appends a string to this string.
			@param str A second string. */
		inline void append(const stringT& str)
		{
			insert(npos, str);
		}

		/** Appends a NULL-terminated character buffer to this string.
			@param str A NULL-terminated character buffer.
			@param count The number of characters to append. If the count
				is 'npos', all available characters are appended. */
		inline void append(const CH* str, size_t count=npos)
		{
			insert(npos, str, count);
		}

		/** Appends one character to this string.
			@param c A character. */
		void append(const CH& c)
		{
			if (c != 0)
			{
				size_t originalSize = length();
				Parent::resize(originalSize + 2);
				*(Parent::end() - 2) = c;
				Parent::back() = 0; // NULL-terminate
			}
		}

		/** Inserts a character buffer in this string.
			@param offset The position at which to insert the character buffer.
			@param str A NULL-terminated character buffer.
			@param count The number of characters to append. If the count
				is 'npos', all available characters are appended. */
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
				Parent::back() = 0; // NULL-terminate
			}
		}

		/** Inserts a string in this string.
			@param offset The position at which to insert the string.
			@param str A second string. */
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

		/** Retrieves the character buffer attached to this string.
			@return The NULL-terminated character buffer for this string. */
		const CH* c_str() const
		{
			static CH empty = 0;
			if (Parent::size() == 0) return &empty;
			return Parent::begin();
		}
		inline operator const CH*() const { return c_str(); } /**< See above. */

		/** Retrieves the position of the first matching character found within the string.
			@param character The character to match.
			@param offset An offset at which to start searching. Defaults to zero.
			@return The position of the first matching character. If 'npos' is returned, the
				character was not matched within the given (sub)string. */
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

		/** Retrieves the position of the first matching string found within the string.
			@param str The string to match. If the string is zero-terminated, the null
				character will not be included in the search.
			@param offset An offset at which to start searching. Defaults to zero.
			@return The position of the first matching string. If 'npos' is returned, the
				string was not matched within the given (sub)string. */
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

		/** Retrieves the position of the first matching character buffer found within the string.
			@param c The character buffer to match.
			@param offset An offset at which to start searching. Defaults to zero.
			@return The position of the first matching character buffer. If 'npos' is returned, the
				character buffer was not matched within the given (sub)string. */
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

		/** Retrieves the position of the last matching character found within the string.
			@param character The character to match.
			@param offset An offset at which to start searching. Defaults to zero.
			@return The position of the last matching character. If 'npos' is returned, the
				character was not matched within the given (sub)string. */
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

		/** Retrieves the position of the last matching string found within the string.
			@param str The string to match. If the string is zero-terminated, the null
				character will not be included in the search.
			@param offset An offset at which to start searching. Defaults to zero.
			@return The position of the last matching string. If 'npos' is returned, the
				string was not matched within the given (sub)string. */
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

		/** Retrieves the position of the last matching character buffer found within the string.
			@param c The character buffer to match.
			@param offset An offset at which to start searching. Defaults to zero.
			@return The position of the last matching character buffer. If 'npos' is returned, the
				character buffer was not matched within the given (sub)string. */
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

		/** Retrieves the position of the first matching character from a list of possible characters.
			@param c A list of possible characters to match.
			@param offset An offset at which to start searching. Defaults to zero.
			@return The position of the first matching character within the list of possible characters.
				If 'npos' is returned, none of the possible characters were found within the (sub)string. */
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

		/** Retrieves the position of the last matching character from a list of possible characters.
			@param c A list of possible characters to match.
			@param offset An offset (from the end of the string) at which to start searching. Defaults to zero.
			@return The position of the last matching character within the list of possible characters.
				If 'npos' is returned, none of the possible characters were found within the (sub)string. */
		size_t find_last_of(const CH* c, size_t offset=0) const
		{
			size_t ret = length() - offset; // UNOPTIMIZE. Didn't feel like this is an important-enough function.
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

		/** Removes a range of characters from a string.
			@param start The start of the range of characters to remove.
				Defaults to zero.
			@param end The end of the range of characters to remove.
				The character at this position will not be removed so
				that if (start==end), no operation is done.
				Defaults to npos, which indicates that all characters from
				the start of the range should be removed. */
		void erase(size_t start=0, size_t end=npos)
		{
			if (start < length() && start < end) // covers size() == 0.
			{
				if (end > length()) end = length();
				Parent::erase(Parent::begin() + start, Parent::begin() + end);
			}
		}

		/** Override the fm::vector resize.  That call
			does not handle the assumption this class makes that
			every string is null terminated.

			The fm::string resize command will automatically create
			a null terminated string of length size
			@param size Length of resulting string */
		void resize(size_t size)
		{
			Parent::resize(size + 1);
			Parent::back() = 0; // NULL-terminate
		}

		/** Override the fm::vector resize.  That call
			does not handle the assumption this class makes that
			every string is null terminated.

			Sets the number of values contained in the list.
			@param count The new number of values contained in the list.
			@param value The value to assign to the new entries in the list. */
		void resize(size_t count, const CH& value)
		{
			Parent::resize(size + 1, value);
			Parent::back() = 0; // NULL-terminate
		}
	};

	/** A string of UTF8 characters. */
	typedef stringT<char> string;

	/** Concatenates two strings.
		@param A A first string.
		@param B A second string.
		@return The concatenation of the two strings. */
	template <class CharT> stringT<CharT> operator+(const stringT<CharT>& A, const stringT<CharT>& B) { stringT<CharT> C = A; C.append(B); return C; }
	template <class CharT> stringT<CharT> operator+(const CharT* A, const stringT<CharT>& B) { stringT<CharT> C = A; C.append(B); return C; } /**< See above. */
	template <class CharT> stringT<CharT> operator+(const stringT<CharT>& A, const CharT* B) { stringT<CharT> C = A; C.append(B); return C; } /**< See above. */
	template <class CharT> stringT<CharT>& operator+=(stringT<CharT>& A, const stringT<CharT>& B) { A.append(B); return A; } /**< See above. */
	template <class CharT> stringT<CharT>& operator+=(stringT<CharT>& A, const CharT* B) { A.append(B); return A; } /**< See above. */

	/** Appends a character to a string.
		@param A A string.
		@param B A character.
		@return The concatenation of the string with the character. */
	template <class CharT> stringT<CharT>& operator+=(stringT<CharT>& A, const CharT& B) { A.append(B); return A; }

	/** Retrieves whether a first string is lesser than a second string.
		This comparison is done solely on the character buffers and not the lengths.
		@param A A first string.
		@param B A second string.
		@return Whether the first string is lesser than the second string. */
	template <class CharT> bool operator<(const stringT<CharT>& A, const stringT<CharT>& B)
	{
		const CharT* a = A.c_str(); const CharT* b = B.c_str();
		while ((*a) != 0 && (*b) != 0 && (*a) == (*b)) { ++a; ++b; }
		return (*a) < (*b);
	}

	/** Retrieves whether a first string is equal to a second string.
		@param A A first string.
		@param B A second string.
		@return Whether the first string is equal to the second string. */
	template <class CharT> bool operator==(const stringT<CharT>& A, const stringT<CharT>& B)
	{
		if (A.length() != B.length()) return false;
		const CharT* a = A.c_str(); const CharT* b = B.c_str();
		while ((*a) != 0 && (*a) == (*b)) { ++a; ++b; }
		return (*a) == (*b);
	}

	/** Retrieves whether a first string differs from a second string.
		@param A A first string.
		@param B A second string.
		@return Whether the first string differs from the second string. */
	template <class CharT> bool operator!=(const stringT<CharT>& A, const stringT<CharT>& B)
	{
		if (A.length() != B.length()) return true;
		const CharT* a = A.c_str(); const CharT* b = B.c_str();
		while ((*a) != 0 && (*a) == (*b)) { ++a; ++b; }
		return (*a) != (*b);
	}

	/** Retrieves whether a first string differs from a second string.
		@param A A first string.
		@param B A second string.
		@return Whether the first string differs from the second string. */
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

/** A string of UNICODE characters. */
typedef fm::stringT<fchar> fstring;

/** A dynamically-sized array of Unicode strings. */
typedef fm::vector<fstring> FStringList;

/** A dynamically-sized array of simple strings. */
typedef fm::vector<fm::string> StringList;

/** Returns whether two 8-bit strings are equivalent. This is a case-sensitive comparison.
	@param sz1 The first 8-bit string to compare.
	@param sz2 The second 8-bit string to compare.
	@return Whether the two 8-bit strings are equivalent. */
inline bool IsEquivalent(const char* sz1, const char* sz2) { return strcmp(sz1, sz2) == 0; }
inline bool IsEquivalent(const fm::string& sz1, const char* sz2) { return strcmp(sz1.c_str(), sz2) == 0; } /**< See above. */
inline bool IsEquivalent(const char* sz1, const fm::string& sz2) { return strcmp(sz1, sz2.c_str()) == 0; } /**< See above. */
inline bool IsEquivalent(const fm::string& sz1, const fm::string& sz2) { return strcmp(sz1.c_str(), sz2.c_str()) == 0; } /**< See above. */

/** Returns whether two 8-bit strings are equivalent. This is a case-insensitive comparison.
	@param sz1 The first 8-bit string to compare.
	@param sz2 The second 8-bit string to compare.
	@return Whether the two 8-bit strings are equivalent. */
inline bool IsEquivalentI(const char* sz1, const char* sz2) { return _stricmp(sz1, sz2) == 0; }
inline bool IsEquivalentI(const fm::string& sz1, const char* sz2) { return _stricmp(sz1.c_str(), sz2) == 0; } /**< See above. */
inline bool IsEquivalentI(const char* sz1, const fm::string& sz2) { return _stricmp(sz1, sz2.c_str()) == 0; } /**< See above. */
inline bool IsEquivalentI(const fm::string& sz1, const fm::string& sz2) { return _stricmp(sz1.c_str(), sz2.c_str()) == 0; } /**< See above. */
#ifdef UNICODE
inline bool IsEquivalentI(const fchar* sz1, const fchar* sz2) { return fstricmp(sz1, sz2) == 0; } /**< See above. */
inline bool IsEquivalentI(const fstring& sz1, const fchar* sz2) { return fstricmp(sz1.c_str(), sz2) == 0; } /**< See above. */
inline bool IsEquivalentI(const fchar* sz1, const fstring& sz2) { return fstricmp(sz1, sz2.c_str()) == 0; } /**< See above. */
inline bool IsEquivalentI(const fstring& sz1, const fstring& sz2) { return fstricmp(sz1.c_str(), sz2.c_str()) == 0; } /**< See above. */
#endif // UNICODE

/** Returns whether two 8-bit strings are equivalent. This is a case-sensitive comparison.
	@param sz1 The first 8-bit string to compare.
	@param sz2 The second 8-bit string to compare.
	@return Whether the two 8-bit strings are equivalent. */
inline bool operator==(const fm::string& sz1, const char* sz2) { return strcmp(sz1.c_str(), sz2) == 0; }

#ifdef UNICODE
/** Returns whether two Unicode strings are equivalent. This is a case-sensitive comparison.
	@param sz1 The first Unicode string to compare.
	@param sz2 The second Unicode string to compare.
	@return Whether the two Unicode strings are equivalent. */
inline bool IsEquivalent(const fchar* sz1, const fchar* sz2)
{
	return (sz1 == sz2) ? true : // ptrs same, are equivalent
		(sz1 == NULL || sz2 == NULL) ? // either ptr null, not equivalent
			false : fstrcmp(sz1, sz2) == 0; // do actual test
}
inline bool IsEquivalent(const fstring& sz1, const fchar* sz2) { return IsEquivalent(sz1.c_str(), sz2); } /**< See above. */
inline bool IsEquivalent(const fchar* sz1, const fstring& sz2) { return IsEquivalent(sz1, sz2.c_str()); } /**< See above. */
inline bool IsEquivalent(const fstring& sz1, const fstring& sz2) { return IsEquivalent(sz1.c_str(), sz2.c_str()); } /**< See above. */

/** Returns whether two Unicode strings are equivalent. This is a case-sensitive comparison.
	@param sz1 The first Unicode string to compare.
	@param sz2 The second Unicode string to compare.
	@return Whether the two Unicode strings are equivalent. */
inline bool operator==(const fstring& sz1, const fchar* sz2) { return IsEquivalent(sz1.c_str(), sz2); }
#endif // UNICODE

// Include the main string modification classes.
// #include "FUtils/FUStringBuilder.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUStringBuilder.h"
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

/**
	@file FUStringBuilder.h
	This file contains the FUStringBuilderT template class,
	its defined template classes and its helper classes.
*/

#ifndef _FCU_STRING_BUILDER_
#define _FCU_STRING_BUILDER_

/**
	A dynamically-sized string object.
	The template has two arguments: the character definition and
	the sprintf() functor class for float to string conversions.

	This class should be used for all the string operations, as it contains a
	dynamically-resized buffer that is not directly tied to its content's length.

	@ingroup FUtils
*/
template <class Char>
class FCOLLADA_EXPORT FUStringBuilderT
{
private:
	Char* buffer;
	size_t reserved;
	size_t size;

public:
	/** The standard string object which correspond to the builder. */
	typedef fm::stringT<Char> String;

	/** Creates a new builder with the content of the given string.
		@param sz A string. Its content will be copied within the builder. */
	FUStringBuilderT(const String& sz);

	/** Creates a new builder with the content of the given character array.
		@param sz A character array. Its content will be copied within the builder.
			It must terminate with an element containing the 'zero' value. */
	FUStringBuilderT(const Char* sz);

	/** Creates a new builder with the given character repeated multiple times over the array.
		@param ch A character to repeat.
		@param count The number of times to repeat the given character. */
	FUStringBuilderT(Char ch, size_t count);

	/** Creates a new builder with an empty buffer.
		@see reserve
		@param reserved The number of character slots to reserve within the empty buffer. */
	FUStringBuilderT(size_t reserved);

	/** Creates a new builder with an empty buffer. */
	FUStringBuilderT();

	/** Deletes the builder. Its buffer will be cleared.
		Any pointers to its data will be dangling. */
	~FUStringBuilderT();

	/** Reserves a given number of character slots.
		If the builder has a buffer with a different number of character slots, a new
		buffer will be allocated. If the builder has contents, it will be copied within
		the new buffer. If there is more content than the new buffer can handle, it will
		be discarded.
		@param length The number of character slots to reserve. */
	void reserve(size_t length);

	/** Retrieves the length of the content within the builder.
		@return The length of the string. */
	inline size_t length() { return size; }

	/** Clears the content of the builder.
		This does not re-allocate a new buffer. */
	void clear();

	/** Retrieves whether the builder is empty.
		A builder is considered empty when it has no content, regardless of
		the size or allocation status of its buffer.
		@return Whether the builder is empty. */
	inline bool empty() const { return size == 0; }

	/** Appends a character to the content of the builder.
		@param c A character. May not be the 'zero' value. */
	void append(Char c);

	/** Appends a string to the content of the builder.
		@param sz A string. */
	void append(const String& sz);

	/** Appends a character array to the content of the builder.
		@param sz A character array. It must terminate with an
			element containing the 'zero' value. */
	void append(const Char* sz);

	/** Appends a character array to the content of the builder.
		@param sz A character array. It should not contain any 'zero'
			characters before 'len'
		@param len The number of characters to read from sz. */
	void append(const Char* sz, size_t len);

	/** Appends the content of a builder to the content of this builder.
		@param b A string builder. */
	void append(const FUStringBuilderT& b);

	/** Appends the integer value, after converting it to a string,
		to the content of the builder.
		@param i An integer value. */
	void append(int32 i);
	void append(uint32 i); /**< See above. */
	void append(uint64 i); /**< See above. */

	/** Appends the integer value, after converting it to a
		fm::string, in hexadecimal, to the content of the builder.
		The size of the integer will determine the number of characters used.
		@param i An unsigned integer value. */
	void appendHex(uint8 i);
	template <class T> inline void appendHex(const T& i) { for (size_t j = 0; j < sizeof(T); ++j) appendHex(*(((uint8*)&i) + j)); } /**< See above. */

#if defined(WIN32)
	inline void append(int i) { append((int32) i); } /**< See above. */
#ifdef _W64
	inline void append(_W64 unsigned int i) { append((uint32) i); } /**< See above. */
#else
	inline void append(unsigned int i) { append((uint32) i); } /**< See above. */
#endif
#else
	inline void append(unsigned long i) { append((uint32) i); } /**< See above. */
	inline void append(long i) { append((int32) i); } /**< See above. */
#endif // platform-switch.

	/** Appends the floating-point value, after converting it to a string,
		to the content of the builder. If the floating-point value is the special token
		that represents infinity, the string "INF" is appended. If it represents
		the negative infinity, the string "-INF" is appended. If it represents the
		impossibility, the string "NaN" is appended.
		@param f A floating-point value. */
	void append(float f);
	void append(double f); /**< See above. */

	/** Appends a vector to the content of the builder.
		@param v A vector. */
	void append(const FMVector2& v);
	void append(const FMVector3& v); /**< See above. */
	void append(const FMVector4& v); /**< See above. */

	/** Appends a value to the content of the builder.
		This is a shortcut for the append function.
		@see append
		@param val A value. This may be numerical, a character, a character array or a string. */
	template<typename TYPE> inline FUStringBuilderT& operator+=(const TYPE& val) { append(val); return *this; }

	/** Appends a character array to the content of the builder.
		A newline character will be appended after the character array.
		@param sz A character array. It must terminate with an
			element containing the 'zero' value. */
	void appendLine(const Char* sz);

	/** Removes a section of the content of the builder.
		Every character that occurs after the given index will be removed,
		resulting in a shrunk string.
		@param start An index within the content of the builder. */
	void remove(int32 start);

	/** Removes a section of the content of the builder.
		The substring defined by the 'start' and 'end' indices will be
		removed. The 'start' character is removed and is replaced by
		the 'end' character.
		@param start The index of the first character of the substring to remove.
		@param end The index of the first character after the removed substring. */
	void remove(int32 start, int32 end);

	/** Removes the last character of the content of the builder. */
	inline void pop_back() { if (size > 0) --size; }

	/** Sets the content of the builder to a given value.
		This clears the builder of all its content and appends the given value.
		@param val A value. This may be numerical, a character, a character array or a string. */
	template<typename TYPE> inline void set(const TYPE& val) { clear(); append(val); }
	template<typename TYPE> inline FUStringBuilderT& operator=(const TYPE& val) { clear(); append(val); return *this; } /**< See above. */

	/** Converts the content of the builder to a standard string.
		@return A string with the content of the builder. */
	String ToString() const;

	/** Converts the content of the builder to a character array.
		@return A character array with the content of the builder.
			This pointer is valid for the lifetime of the buffer of the builder, so
			do not keep it around. This character array should not be modified. */
	const Char* ToCharPtr() const;
	inline operator const Char*() const { return ToCharPtr(); } /**< See above. */

	/** Retrieves the index of the first character within the content of the builder
		that is equivalent to the given character.
		@param c The character to match.
		@return The index of the first equivalent character. -1 is returned if no
			character matches the given character. */
	int32 index(Char c) const;

	/** Retrieves the index of the last character within the content of the builder
		that is equivalent to the given character.
		@param c The character to match.
		@return The index of the last equivalent character. -1 is returned if no
			character matches the given character. */
	int32 rindex(Char c) const;

	/** Retrieves the last character within the content of the builder.
		@return The last character of the builder. */
	Char back() const { FUAssert(size > 0, return (Char) 0); return buffer[size-1]; }

private:
	void enlarge(size_t minimum);
};

typedef FUStringBuilderT<fchar> FUStringBuilder; /**< A Unicode string builder. */
typedef FUStringBuilderT<char> FUSStringBuilder;  /**< A 8-bit string builder. */

#if defined(__APPLE__)
// #include "FUtils/FUStringBuilder.hpp"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUStringBuilder.hpp"
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

#include <limits.h>

#ifdef WIN32
#include <float.h>
#endif

#ifdef WIN32
#define ecvt _ecvt
#endif // WIN32

#ifndef SAFE_DELETE_ARRAY
#define SAFE_DELETE_ARRAY(ptr) if (ptr != NULL) { delete [] ptr; ptr = NULL; }
#endif

template <class Char, class FloatType>
void FloatToString(FloatType f, Char* sz)
{
	Char* buffer = sz + 1;
	static const int digitCount = 6;
	int decimal, sign;

	// ecvt rounds the string for us: http://www.datafocus.com/docs/man3/ecvt.3.asp
	char* end = ecvt(f, digitCount, &decimal, &sign);

	if (sign != 0) (*buffer++) = '-';
	int count = digitCount;
	if (decimal > digitCount)
	{
		// We use the scientific notation: P.MeX
		(*buffer++) = (*end++); // P is one character.
		(*buffer++) = '.';

		// Mantissa (cleaned for zeroes)
		for (--count; count > 0; --count) if (end[count - 1] != '0') break;
		for (int i = 0; i < count; ++i) (*buffer++) = (*end++);
		if (buffer[-1] == '.') --buffer;

		// Exponent
		(*buffer++) = 'e';
		uint32 exponent = decimal - 1; // X
		if (exponent >= 10) (*buffer++) = (Char) ('0' + (exponent / 10));
		(*buffer++) = (Char) ('0' + (exponent % 10));
		(*buffer) = 0;
		return;
	}
	else if (decimal > 0)
	{
		// Simple number: A.B
		for (int i = 0; i < decimal; ++i) (*buffer++) = (*end++);
		if (decimal < digitCount) (*buffer++) = '.';
		count = digitCount - decimal;
	}
	else if (decimal < -digitCount)
	{
		// What case is this?
		decimal = count = 0;
	}
	else if (decimal < 0 || (decimal == 0 && *end != '0'))
	{
		// Tiny number: 0.Me-X
		(*buffer++) = '0'; (*buffer++) = '.';
		for (int i = 0; i < -decimal; ++i) (*buffer++) = '0';
		count = digitCount + decimal;
	}
	for (; count > 0; --count) if (end[count - 1] != '0') break;
	for (int i = 0; i < count; ++i) (*buffer++) = (*end++);
	if (decimal == 0 && count == 0) (*buffer++) = '0';
	if (buffer[-1] == '.') --buffer;
	(*buffer) = 0;
}

template <class Char>
FUStringBuilderT<Char>::FUStringBuilderT(const String& sz)
{
	this->buffer = NULL;
	this->size = 0;
	this->reserved = 0;
	
	reserve(sz.size() + 32);
	append(sz.c_str());
}

template <class Char>
FUStringBuilderT<Char>::FUStringBuilderT(const Char* sz)
{
	this->buffer = NULL;
	this->size = 0;
	this->reserved = 0;

	size_t len = 0;
	for (const Char* p = sz; *p != 0; ++p) ++len;
	reserve(len + 32);
	append(sz);
}

template <class Char>
FUStringBuilderT<Char>::FUStringBuilderT(Char ch, size_t count)
{
	this->buffer = NULL;
	this->size = 0;
	this->reserved = 0;

	reserve(count + 32);
	for (size_t i = 0; i < count; ++i) buffer[size++] = ch;
}

template <class Char>
FUStringBuilderT<Char>::FUStringBuilderT(size_t reservation)
{
	this->buffer = NULL;
	this->size = 0;
	this->reserved = 0;

	reserve(reservation);
}

template <class Char>
FUStringBuilderT<Char>::FUStringBuilderT()
{
	this->buffer = NULL;
	this->size = 0;
	this->reserved = 0;

#ifndef _DEBUG
	reserve(32);
#endif
}

template <class Char>
FUStringBuilderT<Char>::~FUStringBuilderT()
{
	reserve(0);
}

template <class Char>
void FUStringBuilderT<Char>::enlarge(size_t minimum)
{
	reserve(max(reserved + minimum + 32, 2 * reserved + 32));
}

template <class Char>
void FUStringBuilderT<Char>::clear()
{
	size = 0;
}

template <class Char>
void FUStringBuilderT<Char>::reserve(size_t _length)
{
	FUAssert(size <= reserved,);
	if (_length > reserved)
	{
		Char* b = new Char[_length];
		memcpy(b, buffer, size * sizeof(Char));
		SAFE_DELETE_ARRAY(buffer);
		buffer = b;
		reserved = _length;
	}
	else if (_length == 0)
	{
		SAFE_DELETE_ARRAY(buffer);
		size = reserved = 0;
	}
	else if (_length < reserved)
	{
		size_t realSize = min(size, _length);
		Char* b = new Char[_length];
		memcpy(b, buffer, realSize * sizeof(Char));
		SAFE_DELETE_ARRAY(buffer);
		buffer = b;
		reserved = _length;
		size = realSize;
	}
}

template <class Char>
void FUStringBuilderT<Char>::append(Char c)
{
	if (size + 1 >= reserved) enlarge(2);

	buffer[size++] = c;
}

template <class Char>
void FUStringBuilderT<Char>::append(const String& sz) { append(sz.c_str()); }
template <class Char>
void FUStringBuilderT<Char>::append(const Char* sz)
{
	if (sz == NULL) return;

	// This is optimized for SMALL strings.
	for (; *sz != 0; ++sz)
	{
		if (size >= reserved) enlarge(64);
		buffer[size++] = *sz;
	}
}
template <class Char>
void FUStringBuilderT<Char>::append(const Char* sz, size_t len)
{
	if (sz == NULL) return;

	if (size + len >= reserved)
	{
		enlarge(max((size_t)64, size + len + 1));
	}
	memcpy(buffer + size, sz, len);
	size += len;
}


template <class Char>
void FUStringBuilderT<Char>::append(const FUStringBuilderT& b)
{
	if (size + b.size >= reserved) enlarge(64 + size + b.size - reserved);
	memcpy(buffer + size, b.buffer, b.size * sizeof(Char));
	size += b.size;
}

template <class Char>
void FUStringBuilderT<Char>::append(float f)
{
#ifdef WIN32
	// use <float.h> _isnan method to detect the 1.#IND00 NaN.
	if (f != std::numeric_limits<float>::infinity() && f != -std::numeric_limits<float>::infinity() && f != std::numeric_limits<float>::quiet_NaN() && f != std::numeric_limits<float>::signaling_NaN() && !_isnan((double)f))
#else
	if (f != std::numeric_limits<float>::infinity() && f != -std::numeric_limits<float>::infinity() && f != std::numeric_limits<float>::quiet_NaN() && f != std::numeric_limits<float>::signaling_NaN())
#endif
	{
		if (IsEquivalent(f, 0.0f, std::numeric_limits<float>::epsilon())) append((Char)'0');
		else
		{
			Char sz[128];
			FloatToString(f, sz);
			append(sz + 1);
		}
	}
	else if (f == std::numeric_limits<float>::infinity())
	{ append((Char)'I'); append((Char)'N'); append((Char)'F'); }
	else if (f == -std::numeric_limits<float>::infinity())
	{ append((Char)'-'); append((Char)'I'); append((Char)'N'); append((Char)'F'); }
	else
	{ append((Char)'N'); append((Char)'a'); append((Char)'N'); }
}

template <class Char>
void FUStringBuilderT<Char>::append(double f)
{
#ifdef WIN32
	// use <float.h> _isnan method to detect the .#IND00 NaN.
	if (f != std::numeric_limits<float>::infinity() && f != -std::numeric_limits<float>::infinity() && f != std::numeric_limits<float>::quiet_NaN() && f != std::numeric_limits<float>::signaling_NaN() && !_isnan(f))
#else
	if (f != std::numeric_limits<float>::infinity() && f != -std::numeric_limits<float>::infinity() && f != std::numeric_limits<float>::quiet_NaN() && f != std::numeric_limits<float>::signaling_NaN())
#endif
	{
		if (IsEquivalent(f, 0.0, std::numeric_limits<double>::epsilon())) append((Char)'0');
		else
		{
			Char sz[128];
			FloatToString(f, sz);
			append(sz + 1);
		}
	}
	else if (f == std::numeric_limits<double>::infinity())
	{ append((Char)'I'); append((Char)'N'); append((Char)'F'); }
	else if (f == -std::numeric_limits<double>::infinity())
	{ append((Char)'-'); append((Char)'I'); append((Char)'N'); append((Char)'F'); }
	else
	{ append((Char)'N'); append((Char)'a'); append((Char)'N'); }
}

template <class Char>
void FUStringBuilderT<Char>::append(const FMVector2& v)
{
	if (!empty() && (back() != (Char) ' ' || back() != (Char) '\t' || back() != (Char) '\n' || back() != (Char) '\r'))
	{
		append((Char)' ');
	}
	append(v.x); append((Char)' '); append(v.y);
}

template <class Char>
void FUStringBuilderT<Char>::append(const FMVector3& v)
{
	if (!empty() && (back() != (Char) ' ' || back() != (Char) '\t' || back() != (Char) '\n' || back() != (Char) '\r'))
	{
		append((Char)' ');
	}
	append(v.x); append((Char)' '); append(v.y); append((Char)' '); append(v.z); 
}

template <class Char>
void FUStringBuilderT<Char>::append(const FMVector4& v)
{
	if (!empty() && (back() != (Char) ' ' || back() != (Char) '\t' || back() != (Char) '\n' || back() != (Char) '\r'))
	{
		append((Char)' ');
	}
	append(v.x); append((Char)' '); append(v.y); append((Char)' '); append(v.z); append((Char)' '); append(v.w); 
}

template <class Char>
void FUStringBuilderT<Char>::appendLine(const Char* sz)
{
	append(sz);
	append((Char)'\n');
}

template <class Char>
void FUStringBuilderT<Char>::appendHex(uint8 i)
{
	uint8 top = (i & 0xF0) >> 4;
	uint8 bot = i & 0xF;
	if (top <= 0x9) append((Char) ('0' + top));
	else append((Char) ('A' + (top - 0xA)));
	if (bot <= 0x9) append((Char) ('0' + bot));
	else append((Char) ('A' + (bot - 0xA)));
}

template <class Char>
void FUStringBuilderT<Char>::remove(int32 start)
{
	if ((int32)size > start && start >= 0) size = start;
}

template <class Char>
void FUStringBuilderT<Char>::remove(int32 start, int32 end)
{
	int32 diff = end - start;
	if ((int32)size >= end && start >= 0 && diff > 0)
	{
		const Char* stop = buffer + size - diff;
		for (Char* p = buffer + start; p != stop; ++p)
		{
			*p = *(p + diff);
		}
		size -= diff;
	}
}

template <class Char> 
const Char* FUStringBuilderT<Char>::ToCharPtr() const
{
	FUStringBuilderT<Char>* ncThis = const_cast< FUStringBuilderT<Char>* >(this);
	if (size + 1 > reserved) ncThis->enlarge(1);
	ncThis->buffer[size] = 0;
	return buffer;
}

template <class Char>
int32 FUStringBuilderT<Char>::index(Char c) const
{
	if (buffer != NULL && size > 0)
	{
		const Char* end = buffer + size + 1;
		for (const Char* p = buffer; p != end; ++p)
		{
			if (*p == c) return (int32)(p - buffer);
		}
	}
	return -1;
}

template <class Char>
int32 FUStringBuilderT<Char>::rindex(Char c) const
{
	if (buffer != NULL && size > 0)
	{
		for (const Char* p = buffer + size - 1; p != buffer; --p)
		{
			if (*p == c) return (int32)(p - buffer);
		}
	}
	return -1;
}
#line 231 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUStringBuilder.h"
#endif // __APPLE__

#endif // _FCU_STRING_BUILDER_
#line 584 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUString.h"
// #include "FUtils/FUStringConversion.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUStringConversion.h"
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

/**
	@file FUStringConversion.h
	This file contains the FUStringConversion class.
*/

#ifndef _FCU_STRING_CONVERSION_
#define _FCU_STRING_CONVERSION_

#ifndef UINT_MAX
#define UINT_MAX ~(uint32)0
#endif // UINT_MAX

class FUDateTime;

/**
	Common string conversion.

	This static class contains the parsing function for Unicode and 8-bit/UTF-8
	fm::strings into common data types: integers, booleans, floating-point values,
	vectors, matrices, date-time, etc. and dynamically-sized array of these types.

	This class can also convert common data types into an 8-bit or a Unicode string and
	it contains conversion functions to convert string between 8-bit and Unicode.

	All the functions which return string objects are returning static string objects
	in order for DLLs to work correctly with non-local heaps. If you are interested
	in the value of the conversion: save it into a local string object.

	@ingroup FUtils
*/
class FCOLLADA_EXPORT FUStringConversion
{
private: FUStringConversion() {}
public:

	/** Converts a 8-bit string to a Unicode string.
		@param value The 8-bit string.
		@return The converted Unicode string. */
	static fstring ToFString(const char* value);
	inline static fstring ToFString(const fm::string& value) { return ToFString(value.c_str()); } /**< See above. */

	/** Converts an Unicode string to a 8-bit string.
		@param value The Unicode string.
		@return The converted 8-bit string. */
	static fm::string ToString(const fchar* value);
	inline static fm::string ToString(const fstring& value) { return ToString(value.c_str()); } /**< See above. */

	/** Parses a string into a boolean value.
		@param value The string.
		@return The parsed boolean value. */
	template <class CH>
	static FCOLLADA_EXPORT bool ToBoolean(const CH* value);
	template <class CH>
	inline static bool ToBoolean(const fm::stringT<CH>& value) { return ToBoolean(value.c_str()); } /**< See above. */

	/** Parses a string into a floating-point value.
		@param value The string. For the string pointer versions of this function,
			the pointer will point to the last processed characters after the parsing.
		@return The parsed floating-point value. */
	template <class CH>
	static FCOLLADA_EXPORT float ToFloat(const CH** value);
	template <class CH>
	inline static float ToFloat(const CH* value) { return ToFloat(&value); } /**< See above. */
	template <class CH>
	inline static float ToFloat(const fm::stringT<CH>& value) { return ToFloat(value.c_str()); } /**< See above. */

	/** Parses a string into a signed integer.
		@param value The string. For the string pointer versions of this function,
			the pointer will point to the last processed characters after the parsing.
		@return The parsed signed integer. */
	template <class CH>
	static FCOLLADA_EXPORT int32 ToInt32(const CH** value);
	template <class CH>
	inline static int32 ToInt32(const CH* value) { return ToInt32(&value); } /**< See above. */
	template <class CH>
	inline static int32 ToInt32(const fm::stringT<CH>& value) { return ToInt32(value.c_str()); } /**< See above. */

	/** Parses a string into an unsigned integer.
		@param value The string. For the string pointer versions of this function,
			the pointer will point to the last processed characters after the parsing.
		@return The parsed unsigned integer. */
	template <class CH>
	static FCOLLADA_EXPORT uint32 ToUInt32(const CH** value);
	template <class CH>
	inline static uint32 ToUInt32(const CH* value) { return ToUInt32(&value); } /**< See above. */
	template <class CH>
	inline static uint32 ToUInt32(const fm::stringT<CH>& value) { return ToUInt32(value.c_str()); } /**< See above. */

	/** Parses a string into an unsigned integer. The string is assumed to have
		an unsigned integer in hexadecimal format.
		@param value The string. For the string pointer versions of this function,
			the pointer will point to the last processed characters after the parsing.
		@param count The maxmimum number of characters to parse.
			For example, a count of 2 will read in an 8-bit character.
		@return The parsed unsigned integer. */
	template <class CH>
	static FCOLLADA_EXPORT uint32 HexToUInt32(const CH** value, uint32 count=UINT_MAX);
	template <class CH>
	inline static uint32 HexToUInt32(const CH* value, uint32 count=UINT_MAX) { return HexToUInt32(&value, count); } /**< See above. */
	template <class CH>
	inline static uint32 HexToUInt32(const fm::stringT<CH>& value, uint32 count=UINT_MAX) { return HexToUInt32(value.c_str(), count); } /**< See above. */

	/** Parses a string into a vector.
		@param value The string. For the string pointer versions of this function,
			the pointer will point to the last processed characters after the parsing.
		@return The parsed vector. */
	template <class CH>
	static FCOLLADA_EXPORT FMVector2 ToVector2(const CH** value);
	template <class CH>
	inline static FMVector2 ToVector2(const CH* value) { return ToVector2(&value); } /**< See above. */
	template <class CH>
	inline static FMVector2 ToVector2(const fm::stringT<CH>& value) { return ToVector2(value.c_str()); } /**< See above. */
	template <class CH>
	static FCOLLADA_EXPORT FMVector3 ToVector3(const CH** value); /**< See above. */
	template <class CH>
	inline static FMVector3 ToVector3(const CH* value) { return ToVector3(&value); } /**< See above. */
	template <class CH>
	inline static FMVector3 ToVector3(const fm::stringT<CH>& value) { return ToVector3(value.c_str()); } /**< See above. */
	template <class CH>
	static FCOLLADA_EXPORT FMVector4 ToVector4(const CH** value); /**< See above. */
	template <class CH>
	inline static FMVector4 ToVector4(const CH* value) { return ToVector4(&value); } /**< See above. */
	template <class CH>
	inline static FMVector4 ToVector4(const fm::stringT<CH>& value) { return ToVector4(value.c_str()); } /**< See above. */

	/** Parses a string into a 4x4 matrix.
		@param value The string. For the string pointer versions of this function,
			the pointer will point to the last processed characters after the parsing.
		@param mx The matrix to be filled in. */
	template <class CH>
	static FCOLLADA_EXPORT void ToMatrix(const CH** value, FMMatrix44& mx);
	template <class CH>
	inline static void ToMatrix(const CH* value, FMMatrix44& mx) { ToMatrix(&value, mx); } /**< See above. */
	template <class CH>
	inline static void ToMatrix(const fm::stringT<CH>& value, FMMatrix44& mx) { ToMatrix(value.c_str(), mx); } /**< See above. */
	template <class CH>
	inline static FMMatrix44 ToMatrix(const CH* value) { FMMatrix44 mx; ToMatrix(&value, mx); return mx; } /**< See above. */
	template <class CH>
	inline static FMMatrix44 ToMatrix(const fm::stringT<CH>& value) { FMMatrix44 mx; ToMatrix(value.c_str(), mx); return mx; } /**< See above. */

	/** Parses a string into a datetime structure.
		@param value The string.
		@param dateTime The datetime structure to fill in. */
	template <class CH>
	static FCOLLADA_EXPORT void ToDateTime(const CH* value, FUDateTime& dateTime);
	template <class CH>
	inline static void ToDateTime(const fm::stringT<CH>& value, FUDateTime& dateTime) { return ToDateTime(value.c_str(), dateTime); } /**< See above. */

#ifdef HAS_VECTORTYPES

	/** Splits a string into multiple substrings.
		The separator used here are the white-spaces.
		@param value The string.
		@param array A list of strings that will be filled in. */
	static void ToFStringList(const fstring& value, FStringList& array);
	static void ToStringList(const char* value, StringList& array); /**< See above. */
#ifdef UNICODE
	static void ToStringList(const fchar* value, StringList& array); /**< See above. */
#endif // UNICODE
	template <class CH>
	inline static void ToStringList(const fm::stringT<CH>& value, StringList& array) { return ToStringList(value.c_str(), array); } /**< See above. */

	/** Parses a string into a list of boolean values.
		@param value The string.
		@param array The list of boolean values to fill in. */
	template <class CH>
	static FCOLLADA_EXPORT void ToBooleanList(const CH* value, BooleanList& array);
	template <class CH>
	inline static void ToBooleanList(const fm::stringT<CH>& value, BooleanList& array) { return ToBooleanList(value.c_str(), array); } /**< See above. */

	/** Parses a string into a list of floating point values.
		@param value The string.
		@param array The list of floating point values to fill in. */
	template <class CH>
	static FCOLLADA_EXPORT void ToFloatList(const CH* value, FloatList& array);
	template <class CH>
	inline static void ToFloatList(const fm::stringT<CH>& value, FloatList& array) { return ToFloatList(value.c_str(), array); } /**< See above. */

	/** Parses a string into a list of signed integers.
		@param value The string.
		@param array The list of signed integers to fill in. */
	template <class CH>
	static FCOLLADA_EXPORT void ToInt32List(const CH* value, Int32List& array);
	template <class CH>
	inline static void ToInt32List(const fm::stringT<CH>& value, Int32List& array) { return ToInt32List(value.c_str(), array); } /**< See above. */

	/** Parses a string into a list of unsigned integers.
		@param value The string.
		@param array The list of unsigned integers to fill in. */
	template <class CH>
	static FCOLLADA_EXPORT void ToUInt32List(const CH* value, UInt32List& array);
	template <class CH>
	inline static void ToUInt32List(const fm::stringT<CH>& value, UInt32List& array) { return ToUInt32List(value.c_str(), array); } /**< See above. */

	/** Parses a string containing interleaved floating-point values.
		The values will be stored in multiple, independent lists.
		@param value The string containing interleaved floating-point values.
		@param arrays The lists of floating-point values to fill in. */
	template <class CH>
	static FCOLLADA_EXPORT void ToInterleavedFloatList(const CH* value, fm::pvector<FloatList>& arrays);
	template <class CH>
	inline static void ToInterleavedFloatList(const fm::stringT<CH>& value, fm::pvector<FloatList>& arrays) { return ToInterleavedFloatList(value.c_str(), arrays); } /**< See above. */

	/** Parses a string containing interleaved unsigned integers.
		The values will be stored in multiple, independent lists.
		@param value The string containing interleaved unsigned integers.
		@param arrays The lists of unsigned integers to fill in. */
	template <class CH>
	static FCOLLADA_EXPORT void ToInterleavedUInt32List(const CH* value, fm::pvector<UInt32List>& arrays);
	template <class CH>
	inline static void ToInterleavedUInt32List(const fm::stringT<CH>& value, fm::pvector<UInt32List>& arrays) { return ToInterleavedFloatList(value.c_str(), arrays); } /**< See above. */

	/** Parses a string into a list of matrices.
		@param value The string.
		@param array The list of matrices to fill in. */
	template <class CH>
	static FCOLLADA_EXPORT void ToMatrixList(const CH* value, FMMatrix44List& array);
	template <class CH>
	inline static void ToMatrixList(const fm::stringT<CH>& value, FMMatrix44List& array) { return ToMatrixList(value.c_str(), array); } /**< See above. */

	/** Parses a string into a list of 2D vectors.
		@param value The string.
		@param array The list of 2D vectors to fill in.*/
	template <class CH>
	static FCOLLADA_EXPORT void ToVector2List(const CH* value, FMVector2List& array);
	template <class CH>
	inline static void ToVector2List(const fm::stringT<CH>& value, FMVector2List& array) { return ToVector2List(value.c_str(), array); } /**< See above. */

	/** Parses a string into a list of 3D vectors.
		@param value The string.
		@param array The list of 3D vectors to fill in.*/
	template <class CH>
	static FCOLLADA_EXPORT void ToVector3List(const CH* value, FMVector3List& array);
	template <class CH>
	inline static void ToVector3List(const fm::stringT<CH>& value, FMVector3List& array) { return ToVector3List(value.c_str(), array); } /**< See above. */

	/** @deprecated Parses a string into a list of 3D points. Now replaced by ToVector3List.
		@param value The string.
		@param array The list of 3D points to fill in.*/
	template <class CH>
	inline static void ToPointList(const CH* value, FMVector3List& array) { return ToVector3List(value, array); }
	template <class CH>
	inline static void ToPointList(const fm::stringT<CH>& value, FMVector3List& array) { return ToVector3List(value.c_str(), array); } /**< See above. */

	/** Parses a string into a list of 4D vectors.
		@param value The string.
		@param array The list of 4D vectors to fill in.*/
	template <class CH>
	static FCOLLADA_EXPORT void ToVector4List(const CH* value, FMVector4List& array);
	template <class CH>
	inline static void ToVector4List(const fm::stringT<CH>& value, FMVector4List& array) { return ToVector4List(value.c_str(), array); } /**< See above. */

	/** Converts a list of floating-point values into a string.
		@param builder The string builder that will contain the list of values.
			This string builder is not cleared of its contents and a space
			character will be added if it is not empty.
		@param values The list of floating-point values to convert. */
	template <class CH>
	static FCOLLADA_EXPORT void ToString(FUStringBuilderT<CH>& builder, const FloatList& values);

	/** Converts a list of signed integers into a string.
		@param builder The string builder that will contain the list of values.
			This string builder is not cleared of its contents and a space
			character will be added if it is not empty.
		@param values The list of signed integers to convert. */
	template <class CH>
	static FCOLLADA_EXPORT void ToString(FUStringBuilderT<CH>& builder, const Int32List& values);

	/** Converts a list of unsigned integers into a string.
		@param builder The string builder that will contain the list of values.
			This string builder is not cleared of its contents and a space
			character will be added if it is not empty.
		@param values The list of unsigned integers to convert. */
	template <class CH>
	inline FCOLLADA_EXPORT static void ToString(FUStringBuilderT<CH>& builder, const UInt32List& values) { return ToString(builder, values.begin(), values.size()); }

	/** Converts a list of unsigned integers into a string.
		@param builder The string builder that will contain the list of values.
			This string builder is not cleared of its contents and a space
			character will be added if it is not empty.
		@param values The contiguous array of unsigned integers to convert.
		@param count The number of values in the contiguous array. */
	template <class CH>
	static FCOLLADA_EXPORT void ToString(FUStringBuilderT<CH>& builder, const uint32* values, size_t count);

#endif // HAS_VECTORTYPES

	/** Converts a 4D vector into a string.
		@param p The 4D vector to convert.
		@return The string containing the converted vector. */
	static fm::string ToString(const FMVector4& p);
	static fstring ToFString(const FMVector4& p); /**< See above. */

	/** Converts a matrix into a string.
		@param value The matrix to convert.
		@return The string containing the converted matrix. */
	static fm::string ToString(const FMMatrix44& value);
	static fstring ToFString(const FMMatrix44& value); /**< See above. */

	/** Converts a 2D vector into a string.
		@param value The 2D vector to convert.
		@return The string containing the converted vector. */
	static fm::string ToString(const FMVector2& value);
	static fstring ToFString(const FMVector2& value); /**< See above. */

	/** Converts a 3D vector into a string.
		@param value The 3D vector to convert.
		@return The string containing the converted vector. */
	static fm::string ToString(const FMVector3& value);
	static fstring ToFString(const FMVector3& value); /**< See above. */

	/** Converts a datetime structure into a string.
		@param dateTime The datetime structure to convert.
		@return The string containing the converted datetime structure. */
	static fm::string ToString(const FUDateTime& dateTime);
	static fstring ToFString(const FUDateTime& dateTime); /**< See above. */

	/** Converts a primitive value into a string.
		This function is templatized to use the global string builders to
		convert most primitive value types, such as signed integers,
		unsigned integers and single floating-point values, into strings.
		@see FUStringBuilderT
		@param value A primitive value.
		@return The string containing the converted primitive value. */
	template <class T> static fm::string ToString(const T& value) { FUSStringBuilder builder; builder.set(value); return builder.ToString(); }
	template <class T> static fstring ToFString(const T& value) { FUStringBuilder builder; builder.set(value); return builder.ToString(); } /**< See above. */

	/** Converts a matrix into a string.
		@param builder The string builder that will contain the matrix.
			This string builder is not cleared of its contents.
		@param value The matrix to convert. */
	template <class CH>
	static FCOLLADA_EXPORT void ToString(FUStringBuilderT<CH>& builder, const FMMatrix44& value);

	/** Converts a 2D vector into a string.
		@param builder The string builder that will contain the 2D vector.
			This string builder is not cleared of its contents.
		@param value The 2D vector to convert. */
	template <class CH>
	static FCOLLADA_EXPORT void ToString(FUStringBuilderT<CH>& builder, const FMVector2& value);

	/** Converts a 3D vector into a string.
		@param builder The string builder that will contain the 3D vector.
			This string builder is not cleared of its contents.
		@param value The 3D vector to convert. */
	template <class CH>
	static FCOLLADA_EXPORT void ToString(FUStringBuilderT<CH>& builder, const FMVector3& value);

	/** Converts a 4D vector into a string.
		@param builder The string builder that will contain the 4D vector.
			This string builder is not cleared of its contents.
		@param p The 4D vector to convert. */
	template <class CH>
	static FCOLLADA_EXPORT void ToString(FUStringBuilderT<CH>& builder, const FMVector4& p);

	/** Split the target string into its pointer and its qualifier(s)
		Used by the animation system to split to find the animation targets */
	static void SplitTarget(const fm::string& target, fm::string& pointer, fm::string& qualifier);

	/** Parses the input string for a qualifier for the animation system.
		Basically extracts a number from either [XX] or (XX)
		@param string The input string to parse the number from
		@return The qualifier if found, -1 if not. */
	static int32 ParseQualifier(const char* string);
	static inline int32 ParseQualifier(const fm::string& string) { return ParseQualifier(string.c_str()); }

	/** Count the number of values to expect within this string.
		This function assumes that the tokens are separated by white spaces.
		This function is useful to pre-allocate value arrays.
		@param sz The string whose values to count.
		@return The expected number of values. */
	template <class CH>
	static FCOLLADA_EXPORT size_t CountValues(const CH* sz);
};

#ifdef __APPLE__
// #include "FUtils/FUStringConversion.hpp"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUStringConversion.hpp"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America
	
	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

// #include "FUtils/FUDateTime.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUDateTime.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FUDateTime.h
	This file contains the FUDateTime class.
*/

#ifndef _FU_DATETIME_H_
#define _FU_DATETIME_H_

/**
	A common date-time.
	Encapsulates the OS-dependant timing functions. Use the static member function: GetNow()
	to sample the current time. The day and month values are 1-indexed, to be user-friendly.

	@ingroup FUtils
*/
class FCOLLADA_EXPORT FUDateTime
{
private:
	// To be more friendly, 'day' and 'month' are 1-indexed
	uint32 seconds;
	uint32 minutes;
	uint32 hour;
	uint32 day;
	uint32 month;
	uint32 year;

public:
	/** Default constructor. The default date-time is set to 01/01/1900 at 00:00:00. */
	FUDateTime();
	/** Copy constructor. Creates an identical clone of the given date-time structure.
		@param time The date-time structure to copy. */
	FUDateTime(const FUDateTime& time);
	/** Destructor. */
	~FUDateTime();

	/** Retrieves the seconds component of the date-time structure.
		@returns The seconds component. The seconds component is always in the range [0, 60[. */
	inline uint32 GetSeconds() const { return seconds; }
	/** Retrieves the minutes component of the date-time structure.
		@returns The minutes component. The minutes component is always in the range [0, 60[. */
	inline uint32 GetMinutes() const { return minutes; }
	/** Retrieves the hour component of the date-time structure.
		@returns The hour component. The hour component is always in the range [0, 24[. */
	inline uint32 GetHour() const { return hour; }
	/** Retrieves the day component of the date-time structure.
		@returns The day component. The day component is 1-indexed and has an upper range
			that depends on the month component. The valid range for the day component is [1, 31].*/
	inline uint32 GetDay() const { return day; }
	/** Retrieves the month component of the date-time structure.
		@returns The month component. The month component is 1-indexed and is always in the range [1, 12].*/
	inline uint32 GetMonth() const { return month; }
	/** Retrieves the year component of the date-time structure.
		@returns The year component. The year component represents the full year value,
			where a value of 2000 is returned for the year 2000.*/
	inline uint32 GetYear() const { return year; }

	/** Sets the seconds component of the date-time structure.
		@param _seconds The new seconds value. No verification is made
			to verify that the new value is within the valid range. */
	inline void SetSeconds(uint32 _seconds) { seconds = _seconds; }
	/** Sets the minutes component of the date-time structure.
		@param _minutes The new seconds value. No verification is made
			to verify that the new value is within the valid range. */
	inline void SetMinutes(uint32 _minutes) { minutes = _minutes; }
	/** Sets the hour component of the date-time structure.
		@param _hour The new seconds value. No verification is made
			to verify that the new value is within the valid range. */
	inline void SetHour(uint32 _hour) { hour = _hour; }
	/** Sets the day component of the date-time structure.
		@param _day The new seconds value. No verification is made
			to verify that the new value is within the valid range. */
	inline void SetDay(uint32 _day) { day = _day; }
	/** Sets the month component of the date-time structure.
		@param _month The new seconds value. No verification is made
			to verify that the new value is within the valid range. */
	inline void SetMonth(uint32 _month) { month = _month; }
	/** Sets the year component of the date-time structure.
		@param _year The new seconds value. No verification is made
			to verify that the new value is within the valid range. */
	inline void SetYear(uint32 _year) { year = _year; }

	/** Creates a date-time structure to represent the current time.
		Encapsulates the OS-dependant time() function.
		@return The current date-time. */
	static FUDateTime GetNow();
};

#endif // _FU_DATETIME_H_
#line 10 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUStringConversion.hpp"
#include <limits.h>

//
// FUStringConversion template functions
//

// Some string writer macros
#define SPACE builder.append((CH) ' ')
#define VAL(x) builder.append(x)

// Convert a fstring to a boolean value
template<class CH>
FCOLLADA_EXPORT bool FUStringConversion::ToBoolean(const CH* value)
{
	return value != NULL && *value != 0 && *value != '0' && *value != 'f' && *value != 'F';
}

// Convert a fstring to a int32 and advance the character pointer
template <class CH>
FCOLLADA_EXPORT int32 FUStringConversion::ToInt32(const CH** value)
{
	if (!*value) return 0;

	// Skip beginning white spaces
	const CH* s = *value;
	CH c;
	while ((c = *s) != 0 && (c == ' ' || c == '\t' || c == '\r' || c == '\n')) { ++s; }

	int32 val = 0;
	int32 sign = 1;
	if (*s == '-') { ++s; sign = -1; }

	while ((c = *s) != 0)
	{
		if (c >= '0' && c <= '9') val = val * 10 + c - '0';
		else break;
		++s;
	}
	val *= sign;
	while ((c = *s) != '\0' && (c != ' ' && c != '\t' && c != '\n')) s++;
	while ((c = *s) != '\0' && (c == ' ' || c == '\t' || c == '\n')) s++;
	*value = s;
	return val;
}

// Convert a fstring to a float and advance the character pointer
template<class CH>
FCOLLADA_EXPORT float FUStringConversion::ToFloat(const CH** value)
{
	const CH* s = *value;
	if (s == NULL || *s == 0) return 0.0f;

	// Skip beginning white spaces
	CH c;
	while ((c = *s) != 0 && (c == ' ' || c == '\t' || c == '\r' || c == '\n')) { ++s; }

	// Skip all the plausible numerical characters
	double val = 0.0;
	float sign = 1.0;
	if (*s == '-') { ++s; sign = -1.0; }
	float decimals = 0.0;
	int32 exponent = 0;
	bool infinity = false;
	bool nonValidFound = false;
	while ((c = *s) != 0 && !nonValidFound)
	{
		switch (c)
		{
		case '.': decimals = 1; break;
		case '0': val *= 10.0; decimals *= 10.0; break;
		case '1': val = val * 10.0 + 1.0; decimals *= 10.0; break;
		case '2': val = val * 10.0 + 2.0; decimals *= 10.0; break;
		case '3': val = val * 10.0 + 3.0; decimals *= 10.0; break;
		case '4': val = val * 10.0 + 4.0; decimals *= 10.0; break;
		case '5': val = val * 10.0 + 5.0; decimals *= 10.0; break;
		case '6': val = val * 10.0 + 6.0; decimals *= 10.0; break;
		case '7': val = val * 10.0 + 7.0; decimals *= 10.0; break;
		case '8': val = val * 10.0 + 8.0; decimals *= 10.0; break;
		case '9': val = val * 10.0 + 9.0; decimals *= 10.0; break;
		case 'e':
		case 'E': ++s; exponent = ToInt32(&s); s -= 2; nonValidFound = true; break;
		case 'I': infinity = true; // intentional pass-through.
		default: nonValidFound = true; --s; break;
		}
		++s;
	}

	float out = 0.0f;
	if (infinity) // test for infinity
	{
		infinity = false;
		c = *(s++);
		if (c != 'I') infinity = false;
		else
		{
			c = *(s++);
			if (c != 'N') infinity = false;
			else
			{
				c = *(s++);
				if (c != 'F') infinity = false;
				else out = std::numeric_limits<float>::infinity() * ((float) sign);
			}
		}
	}
	if (!infinity)
	{
		// Generate the value
		if (decimals == 0.0) decimals = 1.0;
		out = (float) (val * sign / decimals);
		if (exponent != 0) out *= powf(10.0f, (float) exponent);
	}

	// Find next whitespaces and Skip end whitespaces
	while ((c = *s) != 0 && c != ' ' && c != '\t' && c != '\r' && c != '\n') { ++s; }
	while ((c = *s) != 0 && (c == ' ' || c == '\t' || c == '\r' || c == '\n')) { ++s; }

	*value = s;
	return out;
}

// Convert a fstring to a uint32 and advance the character pointer
template<class CH>
FCOLLADA_EXPORT uint32 FUStringConversion::ToUInt32(const CH** value)
{
	if (value == NULL || *value == NULL || **value == 0) return 0;

	// Skip beginning white spaces
	const CH* s = *value;
	CH c;
	while ((c = *s) != 0 && (c == ' ' || c == '\t' || c == '\r' || c == '\n')) { ++s; }

	uint32 val = 0;
	while ((c = *s) != 0)
	{
		if (c >= '0' && c <= '9') val = val * 10 + c - '0';
		else break;
		++s;
	}

	while ((c = *s) != '\0' && (c != ' ' && c != '\t' && c != '\n')) s++;
	while ((c = *s) != '\0' && (c == ' ' || c == '\t' || c == '\n')) s++;
	*value = s;
	return val;
}

template<class CH>
FCOLLADA_EXPORT uint32 FUStringConversion::HexToUInt32(const CH** value, uint32 count)
{
	if (value == NULL || *value == NULL || **value == 0) return 0;

	const CH* s = *value;
	CH c; 

	// Skip any '0x' prefix.
	if (*s == '0' && (*(s+1) == 'x' || *(s+1) == 'X')) s += 2;

	uint32 val = 0;
	for (uint32 i = 0; i < count && (c = *s) != 0; ++i)
	{
		if (c >= '0' && c <= '9') val = val * 16 + c - '0';
		else if (c >= 'A' && c <= 'F') val = val * 16 + c + 10 - 'A';
		else if (c >= 'a' && c <= 'f') val = val * 16 + c + 10 - 'a';
		else break;
		++s;
	}

	*value = s;
	return val;
}

template<class CH>
FCOLLADA_EXPORT void FUStringConversion::ToMatrix(const CH** s, FMMatrix44& mx)
{
	if (s != NULL && *s != NULL && **s != 0)
	{
		// COLLADA is Column major 
		mx[0][0] = ToFloat(s); mx[1][0] = ToFloat(s); mx[2][0] = ToFloat(s); mx[3][0] = ToFloat(s);
		mx[0][1] = ToFloat(s); mx[1][1] = ToFloat(s); mx[2][1] = ToFloat(s); mx[3][1] = ToFloat(s);
		mx[0][2] = ToFloat(s); mx[1][2] = ToFloat(s); mx[2][2] = ToFloat(s); mx[3][2] = ToFloat(s);
		mx[0][3] = ToFloat(s); mx[1][3] = ToFloat(s); mx[2][3] = ToFloat(s); mx[3][3] = ToFloat(s);
	}
}

template<class CH>
FCOLLADA_EXPORT void FUStringConversion::ToDateTime(const CH* value, FUDateTime& dateTime)
{
	// Manually calculate the length in order to avoid the strlen/fstrlen nightmare.
	size_t length;
	const CH* c = value;
	for (length = 0; *c != 0; ++length) ++c;

	if (length == 20)
	{
		dateTime.SetYear(ToUInt32(value)); value += 5;
		dateTime.SetMonth(ToUInt32(value)); value += 3;
		dateTime.SetDay(ToUInt32(value)); value += 3;
		dateTime.SetHour(ToUInt32(value)); value += 3;
		dateTime.SetMinutes(ToUInt32(value)); value += 3;
		dateTime.SetSeconds(ToUInt32(value));
	}
}

// Convert a fstring to a (X,Y,Z) Point object
template<class CH>
FCOLLADA_EXPORT FMVector2 FUStringConversion::ToVector2(const CH** value)
{
	FMVector2 p;
	if (value != NULL && *value != NULL && **value != 0)
	{
		p.x = ToFloat(value);
		p.y = ToFloat(value);
	}
	return p;
}

template<class CH>
FCOLLADA_EXPORT FMVector3 FUStringConversion::ToVector3(const CH** value)
{
	FMVector3 p;
	if (value != NULL && *value != NULL && **value != 0)
	{
		p.x = ToFloat(value);
		p.y = ToFloat(value);
		p.z = ToFloat(value);
	}
	return p;
}

template<class CH>
FCOLLADA_EXPORT FMVector4 FUStringConversion::ToVector4(const CH** value)
{
	FMVector4 p;
	if (value != NULL && *value != NULL && **value != 0)
	{
		p.x = ToFloat(value);
		p.y = ToFloat(value);
		p.z = ToFloat(value);
		
		// If the fourth component is not provided, default to 1.0f.
		p.w = (*value != NULL && **value != 0) ? ToFloat(value) : 1.0f;
	}
	return p;
}

// Convert a matrix to a string
template <class CH>
FCOLLADA_EXPORT void FUStringConversion::ToString(FUStringBuilderT<CH>& builder, const FMMatrix44& m)
{
	VAL(m[0][0]); SPACE; VAL(m[1][0]); SPACE; VAL(m[2][0]); SPACE; VAL(m[3][0]); SPACE;
	VAL(m[0][1]); SPACE; VAL(m[1][1]); SPACE; VAL(m[2][1]); SPACE; VAL(m[3][1]); SPACE;
	VAL(m[0][2]); SPACE; VAL(m[1][2]); SPACE; VAL(m[2][2]); SPACE; VAL(m[3][2]); SPACE;
	VAL(m[0][3]); SPACE; VAL(m[1][3]); SPACE; VAL(m[2][3]); SPACE; VAL(m[3][3]);
}

template <class CH>
FCOLLADA_EXPORT void FUStringConversion::ToString(FUStringBuilderT<CH>& builder, const FMVector2& p)
{
	VAL(p.u); SPACE; VAL(p.v);
}

template <class CH>
FCOLLADA_EXPORT void FUStringConversion::ToString(FUStringBuilderT<CH>& builder, const FMVector3& p)
{
	VAL(p.x); SPACE; VAL(p.y); SPACE; VAL(p.z);
}

template <class CH>
FCOLLADA_EXPORT void FUStringConversion::ToString(FUStringBuilderT<CH>& builder, const FMVector4& p)
{
	VAL(p.x); SPACE; VAL(p.y); SPACE; VAL(p.z); SPACE; VAL(p.w);
}

template <class CH>
FCOLLADA_EXPORT size_t FUStringConversion::CountValues(const CH* sz)
{
	size_t count = 0;
	if (sz != NULL && *sz > 0)
	{
		while (*sz != 0)
		{
			// Clear all whitespace
			while (*sz != 0 && (*sz == ' ' || *sz == '\t' || *sz == '\r' || *sz == '\n')) ++sz;
			if (*sz == 0) break;

			// New value found.
			++count;
			while (*sz != 0 && *sz != ' ' && *sz != '\t' && *sz != '\r' && *sz != '\n') ++sz;
		}
	}
	return count;
}

#ifdef HAS_VECTORTYPES

template<class CH>
FCOLLADA_EXPORT void FUStringConversion::ToBooleanList(const CH* value, BooleanList& array)
{
	const CH* s = value;
	CH c = *s;
	array.clear();

	// Start by eating all the white spaces.
	while ((c = *s) != 0 && (c == ' ' || c == '\t' || c == '\r' || c == '\n')) { ++s; }

	while (*s != 0)
	{
		// Process this value
		array.push_back(ToBoolean(s));

		// Find next white space
		while ((c = *s) != 0 && c != ' ' && c != '\t' && c != '\r' && c != '\n') { ++s; }

		// Skip all the white spaces.
		while ((c = *s) != 0 && (c == ' ' || c == '\t' || c == '\r' || c == '\n')) { ++s; }
	}
}

// Convert a fstring to a 32-bit integer list
template<class CH>
FCOLLADA_EXPORT void FUStringConversion::ToInt32List(const CH* value, Int32List& array)
{
	size_t length = 0;
	if (value != NULL && *value != 0)
	{ 
		// Read in values within the already allocated space.
		size_t oldLength = array.size();
		for (; length < oldLength && *value != 0; ++length) array[length] = ToInt32(&value);		

		// Count the value-space necessary to parse in the rest of the string.
		size_t count = CountValues(value);
		if (count > 0) array.reserve(oldLength + count);
		while (*value != 0) { array.push_back(ToInt32(&value)); ++length; }
	}
	if (length != array.size()) array.resize(length);
}

// Convert a fstring to a 32-bit unsigned integer list
template<class CH>
FCOLLADA_EXPORT void FUStringConversion::ToUInt32List(const CH* value, UInt32List& array)
{
	size_t length = 0;
	if (value != NULL && *value != 0)
	{ 
		// Read in values within the already allocated space.
		size_t oldLength = array.size();
		for (; length < oldLength && *value != 0; ++length) array[length] = ToUInt32(&value);

		// Count the value-space necessary to parse in the rest of the string.
		size_t count = CountValues(value);
		if (count > 0) array.reserve(oldLength + count);
		while (*value != 0) { array.push_back(ToUInt32(&value)); ++length; }
	}
	if (length != array.size()) array.resize(length);
}

// Convert a fstring to 32-bit floating point list
template<class CH>
FCOLLADA_EXPORT void FUStringConversion::ToFloatList(const CH* value, FloatList& array)
{
	size_t length = 0;
	if (value != NULL && *value != 0)
	{ 
		// Read in values within the already allocated space.
		size_t oldLength = array.size();
		for (; length < oldLength && *value != 0; ++length) array[length] = ToFloat(&value); 

		// Count the value-space necessary to parse in the rest of the string.
		size_t count = CountValues(value);
		if (count > 0) array.reserve(oldLength + count);
		while (*value != 0) { array.push_back(ToFloat(&value)); ++length; }
	}
	if (length != array.size()) array.resize(length);
}

// Convert a fstring to a list of interleaved floating points
template<class CH>
FCOLLADA_EXPORT void FUStringConversion::ToInterleavedFloatList(const CH* value, fm::pvector<FloatList>& arrays)
{
	size_t stride = arrays.size();
	size_t validCount = 0;
	if (value != NULL && *value != 0 && stride > 0)
	{ 
		size_t length = arrays[0]->size();
		for (size_t count = 0; count < length && *value != 0; ++count, ++validCount)
		{
			for (size_t i = 0; i < stride && *value != 0; ++i)
			{
				FloatList* array = arrays[i];
				if (array != NULL) array->at(count) = ToFloat(&value);
				else ToFloat(&value);
			}
		}
		
		if (*value != 0)
		{
			// Count the number of additional values to add to the array.
			size_t additional = (CountValues(value) + stride - 1) / stride;
			for (size_t i = 0; i < stride && *value != 0; ++i)
			{
				FloatList* array = arrays[i];
				if (array != NULL) array->reserve(array->size() + additional);
			}

			// Parse in the extra values.
			while (*value != 0)
			{
				size_t i = 0;
				for (; i < stride && *value != 0; ++i)
				{
					FloatList* array = arrays[i];
					if (array != NULL) array->push_back(ToFloat(&value));
					else ToFloat(&value);
				}
				if (i == stride) ++validCount;
			}
		}
	}

	for (size_t i = 0; i < stride; ++i)
	{
		if (arrays[i] != NULL) arrays[i]->resize(validCount);
	}
}

template <class CH>
FCOLLADA_EXPORT void FUStringConversion::ToInterleavedUInt32List(const CH* value, fm::pvector<UInt32List>& arrays)
{
	size_t stride = arrays.size();
	size_t validCount = 0;
	if (value != NULL && *value != 0 && stride > 0)
	{ 
		size_t length = arrays[0]->size();
		for (size_t count = 0; count < length && *value != 0; ++count, ++validCount)
		{
			for (size_t i = 0; i < stride && *value != 0; ++i)
			{
				UInt32List* array = arrays[i];
				if (array != NULL) array->at(count) = ToUInt32(&value);
				else ToUInt32(&value);
			}
		}
		
		if (*value != 0)
		{
			// Count the number of additional values to add to the array.
			size_t additional = (CountValues(value) + stride - 1) / stride;
			for (size_t i = 0; i < stride && *value != 0; ++i)
			{
				UInt32List* array = arrays[i];
				if (array != NULL) array->reserve(array->size() + additional);
			}

			// Parse in the extra values.
			while (*value != 0)
			{
				size_t i = 0;
				for (; i < stride && *value != 0; ++i)
				{
					UInt32List* array = arrays[i];
					if (array != NULL) array->push_back(ToUInt32(&value));
					else ToUInt32(&value);
				}
				if (i == stride) ++validCount;
			}
		}
	}

	for (size_t i = 0; i < stride; ++i)
	{
		if (arrays[i] != NULL) arrays[i]->resize(validCount);
	}
}

// Convert a string to a list of matrices
template<class CH>
FCOLLADA_EXPORT void FUStringConversion::ToMatrixList(const CH* value, FMMatrix44List& array)
{
	size_t count = 0;
	if (value != NULL && *value != 0)
	{ 
		size_t length = array.size();
		for (; count < length && *value != 0; ++count)
		{
			ToMatrix(&value, array[count]);
		}
		
		while (*value != 0)
		{
			FMMatrix44List::iterator it = array.insert(array.end(), FMMatrix44::Identity);
			ToMatrix(&value, *it);
			++count;
		}
	}
	array.resize(count);
}

template<class CH>
FCOLLADA_EXPORT void FUStringConversion::ToVector2List(const CH* value, FMVector2List& array)
{
	size_t count = 0;
	if (value != NULL && *value != 0)
	{ 
		size_t length = array.size();
		for (; count < length && *value != 0; ++count)
		{
			array[count] = ToVector2(&value);
		}
		
		while (*value != 0) { array.push_back(ToVector2(&value)); ++count; }
	}
	array.resize(count);
}

template<class CH>
FCOLLADA_EXPORT void FUStringConversion::ToVector3List(const CH* value, FMVector3List& array)
{
	size_t count = 0;
	if (value != NULL && *value != 0)
	{ 
		size_t length = array.size();
		for (; count < length && *value != 0; ++count)
		{
			array[count] = ToVector3(&value);
		}
		
		while (*value != 0) { array.push_back(ToVector3(&value)); ++count; }
	}
	array.resize(count);
}

template<class CH>
FCOLLADA_EXPORT void FUStringConversion::ToVector4List(const CH* value, FMVector4List& array)
{
	size_t count = 0;
	if (value != NULL && *value != 0)
	{ 
		size_t length = array.size();
		for (; count < length && *value != 0; ++count)
		{
			array[count] = ToVector4(&value);
		}
		
		while (*value != 0) { array.push_back(ToVector4(&value)); ++count; }
	}
	array.resize(count);
}

template <class CH>
FCOLLADA_EXPORT void FUStringConversion::ToString(FUStringBuilderT<CH>& builder, const FloatList& values)
{
	if (values.empty()) return;
	if (!builder.empty()) SPACE;
	FloatList::const_iterator itV = values.begin();
	builder.append(*itV);
	for (++itV; itV != values.end(); ++itV) { SPACE; VAL(*itV); }
}

template <class CH>
FCOLLADA_EXPORT void FUStringConversion::ToString(FUStringBuilderT<CH>& builder, const Int32List& values)
{
	if (values.empty()) return;
	if (!builder.empty()) SPACE;
	Int32List::const_iterator itV = values.begin();
	builder.append(*itV);
	for (++itV; itV != values.end(); ++itV) { SPACE; VAL(*itV); }
}

template <class CH>
FCOLLADA_EXPORT void FUStringConversion::ToString(FUStringBuilderT<CH>& builder, const uint32* values, size_t count)
{
	if (count > 0)
	{
		if (builder.empty()) { builder.append(*values++); --count; }
		while (((intptr_t) count) > 0) { SPACE; VAL(*values++); --count; }
	}
}

#endif // HAS_VECTORTYPES

#undef SPACE
#undef VAL
#line 392 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUStringConversion.h"
#endif // __APPLE__

#endif // _FCU_STRING_CONVERSION_
#line 585 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUString.h"

/** A Unicode string from a constant 8-bit string. */
#define FS(a) fstring(FC(a))
/** A Unicode string from any convertable value: string, vector-type or simple numeric. */
#define TO_FSTRING(a) FUStringConversion::ToFString(a)
/** An 8-bit string from any convertable value: Unicode string, vector-type or simple numeric. */
#define TO_STRING(a) FUStringConversion::ToString(a)

/** An empty UTF-8 string. This string is returned in many functions when there is an error. */
extern FCOLLADA_EXPORT const fm::string emptyString;
/** An empty Unicode string. This string is returned in many functions when there is an error. */
extern FCOLLADA_EXPORT const fstring emptyFString;

/** Returns whether a string builder and a string are equivalent. This is a case-sensitive comparison.
	@param builder The string builder to compare.
	@param sz The string to compare.
	@return Whether the two strings are equivalent. */
inline bool IsEquivalent(FUSStringBuilder& builder, const char* sz) { return IsEquivalent(builder.ToCharPtr(), sz); }
inline bool IsEquivalent(FUSStringBuilder& builder, const fm::string& sz) { return IsEquivalent(builder.ToCharPtr(), sz.c_str()); } /**< See above. */
#ifdef UNICODE
inline bool IsEquivalent(FUStringBuilder& builder, const fchar* sz) { return IsEquivalent(builder.ToCharPtr(), sz); } /**< See above. */
inline bool IsEquivalent(FUStringBuilder& builder, const fstring& sz) { return IsEquivalent(builder.ToCharPtr(), sz.c_str()); } /**< See above. */
#endif

#endif // _FU_STRING_H_
#line 121 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
#endif // _FU_STRING_H_
#ifndef _FU_CRC32_H_
// #include "FUtils/FUCrc32.h"
#endif // _FU_CRC32_H_
#ifndef _FU_DEBUG_H_
// #include "FUtils/FUDebug.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUDebug.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FUDebug.h
	This file contains macros useful to write debugging output.
*/

#ifndef _FU_DEBUG_H_
#define _FU_DEBUG_H_

/**
	A debugging logging facility.
	Do not use this static class directly. Instead, use the macros listed below.
	This class is based on top of the FUError sinks.

	@see DEBUG_OUT WARNING_OUT ERROR_OUT FUError

	@ingroup FUtils
*/
class FCOLLADA_EXPORT FUDebug
{
private:
	/**	Block access to the constructors and destructors
		as only static functions of the class will be used. */
	FUDebug();
	virtual ~FUDebug();

	/**	Outputs a string to the debug monitor.
		@param level The error level: FUError::DEBUG_LEVEL is recommended.
		@param message The formatted message to output. */
	static void DebugOut(uint8 level, const char* message, ...);
#ifdef UNICODE
	static void DebugOut(uint8 level, const fchar* message, ...); /**< See above. */
#endif // UNICODE

	/**	Outputs a string to the debug monitor.
		@param level The error level: FUError::DEBUG_LEVEL is recommended.
		@param message The formatted message to output.
		@param vars A standard variable argument list. */
	static void DebugOutV(uint8 level, const char* message, va_list& vars);
#ifdef UNICODE
	static void DebugOutV(uint8 level, const fchar* message, va_list& vars); /**< See above. */
#endif // UNICODE

	/**	Outputs a string to the debug monitor.
		@param level The error level: FUError::DEBUG_LEVEL is recommended.
		@param filename The filename of the code to trace.
		@param line The line number of the code trace.
		@param message The formatted message to output.
		@param vars A standard variable argument list. */
	static void DebugOutV(uint8 level, const char* filename, uint32 line, const char* message, va_list& vars);
#ifdef UNICODE
	static void DebugOutV(uint8 level, const char* filename, uint32 line, const fchar* message, va_list& vars); /**< See above. */
#endif // UNICODE

public:
	/**	Outputs a string to the debug monitor.
		@param level The error level: FUError::DEBUG_LEVEL is recommended.
		@param filename The filename of the code to trace.
		@param line The line number of the code trace.
		@param message The formatted message to output. */
	static void DebugOut(uint8 level, uint32 line, const char* filename, const char* message, ...);
#ifdef UNICODE
	static void DebugOut(uint8 level, uint32 line, const char* filename, const fchar* message, ...); /**< See above. */
#endif // UNICODE
};

/** Outputs a string to the debug monitor.
	At least one parameter must always be provided: the string to output, in UTF8.
	Any extra parameters will be used as tokens to a sprintf operation. */
#define DEBUG_OUT(...) FUDebug::DebugOut(FUError::DEBUG_LEVEL, __LINE__, __FILE__, __VA_ARGS__);
/** See above. */
#define WARNING_OUT(...) FUDebug::DebugOut(FUError::WARNING_LEVEL, __LINE__, __FILE__, __VA_ARGS__);
/** See above. */
#define ERROR_OUT(...) FUDebug::DebugOut(FUError::ERROR_LEVEL, __LINE__, __FILE__, __VA_ARGS__);

#endif // _FU_DEBUG_H_
#line 127 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
#endif // _FU_DEBUG_H_
#ifndef _FU_ERROR_H_
// #include "FUtils/FUError.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUError.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FUError.h
	This file contains the FUError class.
*/

#ifndef _FU_ERROR_H_
#define _FU_ERROR_H_

#ifndef _FU_EVENT_H_
// #include "FUtils/FUEvent.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUEvent.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/
/*
	This file was taken off the Protect project on 26-09-2005
*/

/**
	@file FUEvent.h
	This file contains templates to contain and trigger callback events.
*/


#ifndef _FU_EVENT_H_
#define _FU_EVENT_H_

#ifndef _FU_FUNCTOR_H_
// #include "FUtils/FUFunctor.h"   (already above)
#endif // _FU_FUNCTOR_H_

/**
	An event with no argument.
	@ingroup FUtils
*/
class FUEvent0
{
private:
	typedef IFunctor0<void> Handler;
	typedef fm::pvector<Handler> HandlerList;
	HandlerList handlers;

public:
	/** Constructor. */
	FUEvent0() {}

	/** Destructor. */
	~FUEvent0()
	{
		FUAssert(handlers.empty(), CLEAR_POINTER_VECTOR(handlers));
	}

	/** Retrieves the number of callbacks registered for this event.
		@return The number of callbacks registered. */
	size_t GetHandlerCount() { return handlers.size(); }

	/** Adds a new callback that handles the event.
		@param handle The object that contains the member function.
		@param _function The member function to callback. */
	template <class Class>
	void InsertHandler(Class* handle, void (Class::*_function)())
	{
		handlers.push_back(new FUFunctor0<Class, void>(handle, _function));
	}

	/** Adds a functor that handles the event.
		Note that the event will own the memory for the functor.
		@param functor The functor that handlers the event. */
	void InsertHandler(Handler* functor)
	{
		handlers.push_back(functor);
	}

	/** Adds a new callback that handles the event.
		@param _function The static function to callback. */
	void InsertHandler(void (*_function)())
	{
		handlers.push_back(new FUStaticFunctor0<void>(_function));
	}

	/** Releases and unregisters a callback that handles the event.
		@param handle The handle of the function container.
			This pointer will be NULL for static functions.
		@param function The address of the function callback to unregister. */
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

	/** Releases and unregisters a callback that handles the event.
		@param handle The object that contains the member function.
		@param _function The member function callback to unregister. */
	template <class Class>
	void ReleaseHandler(Class* handle, void (Class::*_function)())
	{
		void* function = *(void**)(size_t)&_function;
		ReleaseHandler((void*) handle, function);
	}

	/** Releases and unregisters a callback that handles the event.
		@param _function The static function callback to unregister. */
	void ReleaseHandler(void (*_function)())
	{
		void* function = *(void**)(size_t)&_function;
		ReleaseHandler(NULL, function);
	}

	/** Triggers the event.
		All the registered callbacks will be called, in reverse-order
		of their registration. */
	void operator()()
	{
		intptr_t index = handlers.size() - 1;
		for (; index >= 0; --index)
		{
			(*handlers[index])();
		}
	}
};

/**
	An event with one argument.
	@ingroup FUtils
*/
template <class Arg1>
class FUEvent1
{
private:
	typedef IFunctor1<Arg1, void> Handler;
	typedef fm::pvector<Handler> HandlerList;
	HandlerList handlers;

public:
	/** Constructor. */
	FUEvent1() {}

	/** Destructor. */
	~FUEvent1()
	{
		FUAssert(handlers.empty(), CLEAR_POINTER_VECTOR(handlers));
	}

	/** Retrieves the number of callbacks registered for this event.
		@return The number of callbacks registered. */
	size_t GetHandlerCount() { return handlers.size(); }

	/** Adds a new callback that handles the event.
		@param handle The object that contains the member function.
		@param _function The member function to callback. */
	template <class Class>
	void InsertHandler(Class* handle, void (Class::*_function)(Arg1))
	{
		handlers.push_back(NewFUFunctor1(handle, _function));
	}

	/** Adds a functor that handles the event.
		Note that the event will own the memory for the functor.
		@param functor The functor that handlers the event. */
	void InsertHandler(Handler* functor)
	{
		handlers.push_back(functor);
	}

	/** Adds a new callback that handles the event.
		@param _function The static function to callback. */
	void InsertHandler(void (*_function)(Arg1))
	{
		handlers.push_back(new FUStaticFunctor1<Arg1, void>(_function));
	}

	/** Releases and unregisters a callback that handles the event.
		@param handle The handle of the function container.
			This pointer will be NULL for static functions.
		@param function The address of the function callback to unregister. */
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

	/** Releases and unregisters a callback that handles the event.
		@param handle The object that contains the member function.
		@param _function The member function callback to unregister. */
	template <class Class>
	void ReleaseHandler(Class* handle, void (Class::*_function)(Arg1))
	{
		void* function = *(void**)(size_t)&_function;
		ReleaseHandler((void*) handle, function);
	}

	/** Releases and unregisters a callback that handles the event.
		@param _function The static function callback to unregister. */
	void ReleaseHandler(void (*_function)(Arg1))
	{
		void* function = *(void**)(size_t)&_function;
		ReleaseHandler(NULL, function);
	}

	/** Triggers the event.
		All the registered callbacks will be called, in reverse-order
		of their registration.
		@param argument1 A first argument. */
	void operator()(Arg1 argument1)
	{
		intptr_t index = handlers.size() - 1;
		for (; index >= 0; --index)
		{
			(*handlers[index])(argument1);
		}
	}
};

/**
	An event with two argument.
	@ingroup FUtils
*/
template <class Arg1, class Arg2>
class FUEvent2
{
private:
	typedef IFunctor2<Arg1, Arg2, void> Handler;
	typedef fm::pvector<Handler> HandlerList;
	HandlerList handlers;

public:
	/** Constructor. */
	FUEvent2() {}

	/** Destructor. */
	~FUEvent2()
	{
		FUAssert(handlers.empty(), CLEAR_POINTER_VECTOR(handlers));
	}

	/** Retrieves the number of callbacks registered for this event.
		@return The number of callbacks registered. */
	size_t GetHandlerCount() { return handlers.size(); }

	/** Adds a new callback that handles the event.
		@param handle The object that contains the member function.
		@param _function The member function to callback. */
	template <class Class>
	void InsertHandler(Class* handle, void (Class::*_function)(Arg1, Arg2))
	{
		handlers.push_back(new FUFunctor2<Class, Arg1, Arg2, void>(handle, _function));
	}

	/** Adds a functor that handles the event.
		Note that the event will own the memory for the functor.
		@param functor The functor that handlers the event. */
	void InsertHandler(Handler* functor)
	{
		handlers.push_back(functor);
	}

	/** Adds a new callback that handles the event.
		@param _function The static function to callback. */
	void InsertHandler(void (*_function)(Arg1, Arg2))
	{
		handlers.push_back(new FUStaticFunctor2<Arg1, Arg2, void>(_function));
	}

	/** Releases and unregisters a callback that handles the event.
		@param handle The handle of the function container.
			This pointer will be NULL for static functions.
		@param function The address of the function callback to unregister. */
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

	/** Releases and unregisters a callback that handles the event.
		@param handle The object that contains the member function.
		@param _function The member function callback to unregister. */
	template <class Class>
	void ReleaseHandler(Class* handle, void (Class::*_function)(Arg1, Arg2))
	{
		void* function = *(void**)(size_t)&_function;
		ReleaseHandler((void*) handle, function);
	}

	/** Releases and unregisters a callback that handles the event.
		@param _function The static function callback to unregister. */
	void ReleaseHandler(void (*_function)(Arg1, Arg2))
	{
		void* function = *(void**)(size_t)&_function;
		ReleaseHandler(NULL, function);
	}

	/** Triggers the event.
		All the registered callbacks will be called, in reverse-order
		of their registration.
		@param argument1 A first argument.
		@param argument2 A second argument. */
	void operator()(Arg1 argument1, Arg2 argument2)
	{
		intptr_t index = handlers.size() - 1;
		for (; index >= 0; --index)
		{
			(*handlers[index])(argument1, argument2);
		}
	}
};


/**
	An event with three argument.
	@ingroup FUtils
*/
template <class Arg1, class Arg2, class Arg3>
class FUEvent3
{
private:
	typedef IFunctor3<Arg1, Arg2, Arg3, void> Handler;
	typedef fm::pvector<Handler> HandlerList;
	HandlerList handlers;

public:
	/** Constructor. */
	FUEvent3() {}

	/** Destructor. */
	~FUEvent3()
	{
		FUAssert(handlers.empty(), CLEAR_POINTER_VECTOR(handlers));
	}

	/** Retrieves the number of callbacks registered for this event.
		@return The number of callbacks registered. */
	size_t GetHandlerCount() { return handlers.size(); }

	/** Adds a new callback that handles the event.
		@param handle The object that contains the member function.
		@param _function The member function to callback. */
	template <class Class>
	void InsertHandler(Class* handle, void (Class::*_function)(Arg1, Arg2, Arg3))
	{
		handlers.push_back(new FUFunctor3<Class, Arg1, Arg2, Arg3, void>(handle, _function));
	}

	/** Adds a functor that handles the event.
		Note that the event will own the memory for the functor.
		@param functor The functor that handlers the event. */
	void InsertHandler(Handler* functor)
	{
		handlers.push_back(functor);
	}

	/** Adds a new callback that handles the event.
		@param _function The static function to callback. */
	void InsertHandler(void (*_function)(Arg1, Arg2, Arg3))
	{
		handlers.push_back(new FUStaticFunctor3<Arg1, Arg2, Arg3, void>(_function));
	}

	/** Releases and unregisters a callback that handles the event.
		@param handle The handle of the function container.
			This pointer will be NULL for static functions.
		@param function The address of the function callback to unregister. */
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

	/** Releases and unregisters a callback that handles the event.
		@param handle The object that contains the member function.
		@param _function The member function callback to unregister. */
	template <class Class>
	void ReleaseHandler(Class* handle, void (Class::*_function)(Arg1, Arg2, Arg3))
	{
		void* function = *(void**)(size_t)&_function;
		ReleaseHandler((void*) handle, function);
	}

	/** Releases and unregisters a callback that handles the event.
		@param _function The static function callback to unregister. */
	void ReleaseHandler(void (*_function)(Arg1, Arg2, Arg3))
	{
		void* function = *(void**)(size_t)&_function;
		ReleaseHandler(NULL, function);
	}

	/** Triggers the event.
		All the registered callbacks will be called, in reverse-order
		of their registration.
		@param argument1 A first argument.
		@param argument2 A second argument.
		@param argument3 A third argument. */
	void operator()(Arg1 argument1, Arg2 argument2, Arg3 argument3)
	{
		intptr_t index = handlers.size() - 1;
		for (; index >= 0; --index)
		{
			(*handlers[index])(argument1, argument2, argument3);
		}
	}
};

#endif // _FU_EVENT_H_
#line 19 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUError.h"
#endif // _FU_EVENT_H_
#ifndef _FU_CRITICAL_SECTION_H_
// #include "FUtils/FUCriticalSection.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUCriticalSection.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FUCriticalSection.h
	This file contains the FUCriticalSection class.
*/

#ifndef _FU_CRITICAL_SECTION_H_
#define _FU_CRITICAL_SECTION_H_

#ifdef __APPLE__
// #include <CoreServices/CoreServices.h>
#endif

/**
	An OS dependent critical section.

	Currently only supported for WIN32.

	@ingroup FUtils
*/
class FCOLLADA_EXPORT FUCriticalSection
{
private:
#ifdef WIN32
	CRITICAL_SECTION criticalSection; // WIN32
#elif defined (__APPLE__)
	//Do something here.
	MPCriticalRegionID criticalSection;
#elif defined (LINUX)
#else
#warning "FUCriticalSection: Critical section not implemented for other platforms."
#endif

public:
	/** Constructor. */
	FUCriticalSection();

	/** Destructor. */
	~FUCriticalSection();

	/** Enters the critical section, blocking if another thread is already in.
		Note: a thread may call Enter multiple times and it will still enter to prevent it from deadlocking itself. It
				must then call Leave the same number of times. */
	void Enter();

	/** Leaves the critical section, allowing other threads to enter. */
	void Leave();
};

#endif // _FU_CRITICAL_SECTION_H_
#line 22 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUError.h"
#endif // _FU_CRITICAL_SECTION_H_

/** Windows API defines this. */
#undef ERROR

/**
	This class deals with error message generated by FCollada.
	The constructor and the destructor are private: this class is meant to be used as a namespace.
	All error handler is wrapped around a critical section to work correctly in a multi-threaded environment.
	@ingroup FUtils
*/
class FCOLLADA_EXPORT FUError
{
public:
	/**
		Error code used to retrieve localized error message.
	*/
	enum Code
	{
		//
		// Errors
		//
		ERROR_DEFAULT_ERROR = 0, ERROR_MALFORMED_XML, ERROR_PARSING_FAILED, ERROR_INVALID_ELEMENT, ERROR_MISSING_ELEMENT, /*[0, 4]*/
		ERROR_UNKNOWN_ELEMENT, ERROR_MISSING_INPUT, ERROR_INVALID_URI, ERROR_WRITE_FILE, ERROR_MISSING_PROPERTY, /*[5, 9]*/
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

		// max only errors
		ERROR_MAX_CANNOT_RESIZE_MUT_LIST,

        //
		//Warnings
		//
		WARNING_UNSUPPORTED_TEXTURE_UVS,

		// Warnings
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

		//
		//Debug
		//
		DEBUG_LOAD_SUCCESSFUL,
		DEBUG_WRITE_SUCCESSFUL,

		ERROR_CUSTOM_STRING = 5000
	};

	/**
		Error level defines supported error message levels in FCollada
	*/
	enum Level
	{
		DEBUG_LEVEL = 0,
		WARNING_LEVEL = 1,
		ERROR_LEVEL = 2,

		LEVEL_COUNT
	};

	/** Callback functor definition. */
	typedef IFunctor3<FUError::Level, uint32, uint32, void> FUErrorFunctor;

private:
	static FUCriticalSection criticalSection;
	static FUEvent3<FUError::Level, uint32, uint32> onErrorEvent;
	static FUEvent3<FUError::Level, uint32, uint32> onWarningEvent;
	static FUEvent3<FUError::Level, uint32, uint32> onDebugEvent;
	static fm::string customErrorString;
	static FUError::Level fatalLevel;

	// This class is not meant to be constructed.
	FUError();
	~FUError();

public:
	/** Logs and error message.
		@param errorLevel The error level of this error. Different callback is
		called for corresponding error level.
		@param errorCode The error code for the error message
		@param line The line number to indicate where the error has occured
		@return Whether the error is non-fatal. */
	static bool Error(FUError::Level errorLevel, uint32 errorCode, uint32 line = 0);

	/** Add callback for error messages.
		@param errorLevel The error level whose callback is to be set.
		@param callback Callback to be called when FCollada generates error message. */
	static void AddErrorCallback(FUError::Level errorLevel, FUErrorFunctor* callback);

	/** Adds a new callback that handles the event.
		@param errorLevel The error level whose callback is to be set.
		@param handle The object that contains the member function.
		@param _function The member function to callback. */
	template <class Class>
	static void AddErrorCallback(FUError::Level errorLevel, Class* handle, void (Class::*_function)(FUError::Level, uint32, uint32))
	{
		AddErrorCallback(errorLevel, new FUFunctor3<Class, FUError::Level, uint32, uint32, void>(handle, _function));
	}

	/** Adds a new callback that handles the event.
		@param errorLevel The error level whose callback is to be set.
		@param _function The static function to callback. */
	static void AddErrorCallback(FUError::Level errorLevel, void (*_function)(FUError::Level, uint32, uint32))
	{
		AddErrorCallback(errorLevel, new FUStaticFunctor3<FUError::Level, uint32, uint32, void>(_function));
	}

	/** Removes and releases a callback for error messages.
		@param errorLevel The error level whose callback is to be removed.
		@param object The object that contains the callback.
		@param function Callback that was registered to be called when FCollada generates error message. */
	static void RemoveErrorCallback(FUError::Level errorLevel, void* object, void* function);

	/** Removes and releases a callback for error messages.
		@param errorLevel The error level whose callback is to be removed.
		@@param handle The object that contains the member function.
		@param _function The member function callback to unregister. */
	template <class Class>
	static void RemoveErrorCallback(FUError::Level errorLevel, Class* handle, void (Class::*_function)(FUError::Level, uint32, uint32))
	{
		void* function = *(void**)(size_t)&_function;
		RemoveErrorCallback(errorLevel, (void*) handle, function);
	}

	/** Removes and releases a static callback for error messages.
		@param errorLevel The error level whose callback is to be removed.
		@@param _function The static function callback to unregister. */
	static void RemoveErrorCallback(FUError::Level errorLevel, void (*_function)(FUError::Level, uint32, uint32))
	{
		void* function = *(void**)(size_t)&_function;
		RemoveErrorCallback(errorLevel, NULL, function);
	}

	/** Retrieves the string description of the error code
		@param errorCode The error code whose string description is to be obtained.
		@Return The string description in raw pointer to array of characters. */
	static const char* GetErrorString(FUError::Code errorCode);

	/** Sets the error string for the custom error (ERROR_CUSTOM_STRING)
		Used mainly for the FUDebug structure. We encourage applications
		to also use it in conjunction with the FUErrorLog class.
		@param customErrorString. */
	static void SetCustomErrorString(const char* customErrorString);

	/** Retrieves the level at which errors are considered fatal.
		@return The fatality level. */
	static FUError::Level GetFatalityLevel() { return fatalLevel; }

	/** Sets the level at which errors will cancel the processing of a COLLADA document.
		@param _fatalLevel The fatality level. Is it highly recommended to leave this value at 'FUError::ERROR_LEVEL'. */
	static void SetFatalityLevel(FUError::Level _fatalLevel) { fatalLevel = _fatalLevel; }
};

/**
	This class is used as an example of error-handling.
	It simply retrieves and concatenates the english error strings.

	@ingroup FUtils
*/
class FCOLLADA_EXPORT FUErrorSimpleHandler
{
private:
	FUSStringBuilder message;
	FUError::Level localFatalityLevel;
	bool fails;

public:
	/** Constructor.
		@param fatalLevel The minimum error level which will cause the simple handler to
			consider the process to be a failure. */
	FUErrorSimpleHandler(FUError::Level fatalLevel = FUError::ERROR_LEVEL);

	/** Destructor. */
	~FUErrorSimpleHandler();

	/** Retrieves the complete error string.
		The complete error string is the concatenation of all the indivual
		errors encountered.
		@see FUError::GetErrorString
		@return The complete error string. */
	inline const char* GetErrorString() const { return message.ToCharPtr(); }

	/** Retrieves whether the process was successful.
		@return Whether the process was successful. */
	inline bool IsSuccessful() const { return !fails; }

private:
	void OnError(FUError::Level errorLevel, uint32 errorCode, uint32 lineNumber);
};

#endif // _FU_ERROR_H_
#line 130 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUtils.h"
#endif // _FU_ERROR_H_

#ifndef RETAIL
#define ENABLE_TEST /**< Used by FCollada, enables the compilation and gives access to the unit tests. Disabled in the retail configurations. */
#endif

#endif // _F_UTILS_H_
#line 13 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\futils\\StdAfx.h"

#endif // _STD_AFX_H_
#line 10 ".\\FUtils\\FUFunctorTest.cpp"
// #include "FUTestBed.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\futils\\FUTestBed.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

#ifndef _FU_TESTBED_H_
#define _FU_TESTBED_H_

#ifndef _FU_LOG_FILE_H_
// #include "FUtils/FULogFile.h"   (FCollada 3.05B, pasted in place)
#line 1 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FULogFile.h"
/*
	Copyright (C) 2005-2007 Feeling Software Inc.
	Portions of the code are:
	Copyright (C) 2005-2007 Sony Computer Entertainment America

	MIT License: http://www.opensource.org/licenses/mit-license.php
*/

/**
	@file FULogFile.h
	This file contains the FULogFile class.
*/

#ifndef _FU_LOG_FILE_H_
#define _FU_LOG_FILE_H_

class FUFile;

/**
	A log file.
	This class simply makes writing out text file easier.

	@ingroup FUtils
*/
class FCOLLADA_EXPORT FULogFile
{
private:
	FUFile* file;

public:
	/** Constructor.
		This opens, for writing, the file with the given filename.
		Relative filepaths are recommended for log files.
		@param filename The log filename. */
	FULogFile(const fchar* filename);

	/** Destructor. */
	~FULogFile();

	/** Returns the underlying FUFile.
		@return The FUFile.*/
	inline FUFile* GetFile() { return file; }
	inline const FUFile* GetFile() const { return file; } /**< See above.*/

	/** Writes out a log message.
		This version of this function is useful for code-base assertions and
		error messages aimed at programmers.
		@param filename A filename.
		@param linenum A line number.
		@param message The message to write out. */
	void WriteLine(const char* filename, uint32 linenum, const char* message, ...);
#ifdef UNICODE
	void WriteLine(const char* filename, uint32 line, const fchar* message, ...); /**< See above. */
#endif // UNICODE

	/** Writes out a log message.
		This version of this function is useful for messages aimed at users.
		@param message The message to write out. */
	void WriteLine(const char* message, ...);
#ifdef UNICODE
	void WriteLine(const fchar* message, ...); /**< See above. */
#endif // UNICODE

	/** Writes out a log message.
		The variable-list version of this function.
		@param message The message to write out.
		@param vars A variable list object. */
	void WriteLineV(const char* message, va_list& vars);
#ifdef UNICODE
	void WriteLineV(const fchar* message, va_list& vars); /**< See above. */
#endif // UNICODE

	/** Flushes the log file. */
	void Flush();
};

#endif // _FU_LOG_FILE_H_
#line 14 "e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\futils\\FUTestBed.h"
#endif // _FU_LOG_FILE_H_
#ifndef _FU_ASSERT_H_
// #include "FUtils/FUAssert.h"   (already above)
#endif // _FU_ASSERT_H_

class FUTestSuite;

/**
	A test suite runner.
	This class is used to run test suites and compile the results.
	@ingroup FUtils
*/
class FCOLLADA_EXPORT FUTestBed
{
private:
	size_t testPassed, testFailed;
	FULogFile fileOut;
	fstring filename;
	bool isVerbose;

public:
	/** Constructor.
		@param filename The filename of the logfile to open.
		@param isVerbose Whether to enable more logging.
			Currently, this means writing one line to the log when
			starting any test suite starts. */
	FUTestBed(const fchar* filename, bool isVerbose);

	/** Retrieves whether verbose logging is enabled.
		@return Whether verbose logging is enabled. */
	inline bool IsVerbose() const { return isVerbose; }

	/** [INTERNAL] Retrieves the log file.
		Used by test suites to write out custom output.
		@return The log file structure. */
	FULogFile& GetLogFile() { return fileOut; }

	/** Runs a test suite and returns the results.
		@param headTestSuite The top-level test suite to start.
		@return Whether all the tests have passed. */
	bool RunTestbed(FUTestSuite* headTestSuite);

	/** [INTERNAL] Runs a test suite and compiles the results.
		This is used recursively to run a full hierarchy of test suites.
		@param testSuite A test suite to run. */
	void RunTestSuite(FUTestSuite* testSuite);
};

extern FCOLLADA_EXPORT bool FUTestBed_skipAsserts;

/**
	A test suite.
	This class is derived by all the test suites and provides the interface
	for running test suites and setting up results.
	@ingroup FUtils
*/
class FUTestSuite
{
public:
	/** Destructor. */
	virtual ~FUTestSuite() {}

	/** [INTERNAL] Runs one test.
		Called by the FUTestBed.
		@param testBed The test bed compiling the results.
		@param fileOut The log file of the test bed.
		@param __testSuiteDone Out parameter: whether the test suite has no more tests after this one.
		@param testIndex An increasing index used to run all the tests.
		@return Whether the current test has passed. */
	virtual bool RunTest(FUTestBed& testBed, FULogFile& fileOut, bool& __testSuiteDone, size_t testIndex) = 0;
};

///////////////////////////////////////////////////////////////////////////////
// Helpful Macros
//
#if defined(_FU_ASSERT_H_) && defined(_DEBUG)
#define FailIf(a) \
	if ((a)) { \
		fileOut.WriteLine(__FILE__, __LINE__, " Test('%s') failed: %s.", szTestName, #a); \
		if (!FUTestBed_skipAsserts) { \
			FUBreak; \
			FUTestBed_skipAsserts = ignoreAssert; } \
		return false; }

#else // _FU_ASSERT_H_ && _DEBUG

#define FailIf(a) \
	if ((a)) { \
		fileOut.WriteLine(__FILE__, __LINE__, " Test('%s') failed: %s.", szTestName, #a); \
		return false; }

#endif // _FU_ASSERT_H_

#define PassIf(a) FailIf(!(a))

#define Fail { bool b = true; FailIf(b); }

///////////////////////////////////////////////////////////////////////////////
// TestSuite Generation Macros.
// Do use the following macros, instead of writing your own.
//
#ifdef ENABLE_TEST
#define TESTSUITE_START(suiteName) \
FUTestSuite* _test##suiteName; \
static class FUTestSuite##suiteName : public FUTestSuite \
{ \
public: \
	FUTestSuite##suiteName() : FUTestSuite() { _test##suiteName = this; } \
	virtual ~FUTestSuite##suiteName() {} \
	virtual bool RunTest(FUTestBed& testBed, FULogFile& fileOut, bool& __testSuiteDone, size_t testIndex) \
	{ \
		switch (testIndex) { \
			case ~0 : { \
				if (testBed.IsVerbose()) { \
					fileOut.WriteLine("Running %s...", #suiteName); \
				}

#define TESTSUITE_TEST(testIndex, testName) \
			} return true; \
		case testIndex: { \
			static const char* szTestName = #testName;

#define TESTSUITE_END \
			} return true; \
		default: { __testSuiteDone = true; return true; } \
		} \
		fileOut.WriteLine(__FILE__, __LINE__, " Test suite implementation error."); \
		return false; \
	} \
} __testSuite;

#define RUN_TESTSUITE(suiteName) \
	extern FUTestSuite* _test##suiteName; \
	testBed.RunTestSuite(_test##suiteName);

#define RUN_TESTBED(testBedObject, szTestSuiteHead, testPassed) { \
	extern FUTestSuite* _test##szTestSuiteHead; \
	testPassed = testBedObject.RunTestbed(_test##szTestSuiteHead); }

#else // ENABLE_TEST

// The code will still be compiled, but the linker should take it out.
#define TESTSUITE_START(suiteName) \
	extern FUTestSuite* _test##suiteName = NULL; \
	inline bool __testCode##suiteName(FULogFile& fileOut, const char* szTestName) { { fileOut; szTestName;
#define TESTSUITE_TEST(testIndex, testName) } {
#define TESTSUITE_END } return true; }
#define RUN_TESTSUITE(suiteName)
#define RUN_TESTBED(testBedObject, szTestSuiteHead, testPassed) testPassed = true;

#endif

#endif // _FU_TESTBED_H_
// @baa 0x01865a70
#line 11 ".\\FUtils\\FUFunctorTest.cpp"
// #include "FUFunctor.h"   (already above)

///////////////////////////////////////////////////////////////////////////////
class FUTestClass
{
public:
	long iTestValue[3];

	FUTestClass()
	{
		for (long i = 0; i < 3; ++i)
		{
			iTestValue[i] = 0;
		}
	}

	long GetTestValue(long i)
	{ return iTestValue[i]; }

	void TestFunction0()
	{ iTestValue[0]++; }

	void TestFunction1(long i)
	{ iTestValue[1] += i; }

	void TestFunction2(long i, const long j)
	{ iTestValue[j] += i; }

	bool VerifyValues(long v0, long v1, long v2)
	{
		return v0 == iTestValue[0] && v1 == iTestValue[1] && v2 == iTestValue[2];
	}
};

class FUTestClass2
{
public:
	long iTestValue[3];

	FUTestClass2()
	{
		for (long i = 0; i < 3; ++i)
		{
			iTestValue[i] = 0;
		}
	}

	void TestFunction0()
	{ iTestValue[0]++; }

	void TestFunction1(long i)
	{ iTestValue[1] += i; }

	void TestFunction2(long i, const long j)
	{ iTestValue[j] += i; }

	bool VerifyValues(long v0, long v1, long v2)
	{
		return v0 == iTestValue[0] && v1 == iTestValue[1] && v2 == iTestValue[2];
	}
};

///////////////////////////////////////////////////////////////////////////////
TESTSUITE_START(FUFunctor)

TESTSUITE_TEST(0, DirectUtilisation)
	FUTestClass sTestClass;
	FailIf(sTestClass.iTestValue[0] != 0);
	FUFunctor0<FUTestClass, void> sFunctor1(&sTestClass, &FUTestClass::TestFunction0);
	FailIf(sTestClass.iTestValue[0] != 0);
	sFunctor1();
	FailIf(sTestClass.iTestValue[0] != 1);

	FailIf(sTestClass.iTestValue[1] != 0);
	FUFunctor1<FUTestClass, long , void> sFunctor2(&sTestClass, &FUTestClass::TestFunction1);
	FailIf(sTestClass.iTestValue[1] != 0);
	sFunctor2(2);
	FailIf(sTestClass.iTestValue[1] != 2);

	FailIf(sTestClass.iTestValue[2] != 0);
	FUFunctor2<FUTestClass, long , const long, void> sFunctor3(&sTestClass, &FUTestClass::TestFunction2);
	FailIf(sTestClass.iTestValue[2] != 0);
	sFunctor3(4, 2);
	FailIf(sTestClass.iTestValue[2] != 4);

	FUFunctor1<FUTestClass, long, long> sFunctor4(&sTestClass, &FUTestClass::GetTestValue);
	FailIf(sFunctor4(1) != sTestClass.iTestValue[1]);
	FailIf(sFunctor4(2) != sTestClass.iTestValue[2]);

TESTSUITE_TEST(1, QueuedUsage)
	typedef IFunctor0<void> TIntFunctor0;
	fm::pvector<TIntFunctor0> g_xFunctors0;

	typedef IFunctor1<long, void> TIntFunctor1;
	fm::pvector<TIntFunctor1> g_xFunctors1;

	typedef IFunctor2<long, const long, void> TIntFunctor2;
	fm::pvector<TIntFunctor2> g_xFunctors2;

	FUTestClass sTestClass;
	FUTestClass2 sTestClass2;

	FailIf(sTestClass.iTestValue[0] != 0 || sTestClass2.iTestValue[0] != 0);
	FUFunctor0<FUTestClass, void> sFunctor1(&sTestClass, &FUTestClass::TestFunction0);
	FUFunctor0<FUTestClass2, void> sFunctor2(&sTestClass2, &FUTestClass2::TestFunction0);
	g_xFunctors0.push_back(&sFunctor1);
	g_xFunctors0.push_back(&sFunctor2);
	fm::pvector<TIntFunctor0>::iterator it;
	for (it = g_xFunctors0.begin(); it != g_xFunctors0.end(); ++it)
	{
		(*(*it))();
	}
	FailIf(sTestClass.iTestValue[0] != 1 || sTestClass2.iTestValue[0] != 1);

	FailIf(sTestClass.iTestValue[1] != 0 || sTestClass2.iTestValue[1] != 0);
	FUFunctor1<FUTestClass, long, void> sFunctor3(&sTestClass, &FUTestClass::TestFunction1);
	FUFunctor1<FUTestClass2, long, void> sFunctor4(&sTestClass2, &FUTestClass2::TestFunction1);
	g_xFunctors1.push_back(&sFunctor3);
	g_xFunctors1.push_back(&sFunctor4);
	fm::pvector<TIntFunctor1>::iterator it1;
	for (it1 = g_xFunctors1.begin(); it1 != g_xFunctors1.end(); ++it1)
	{
		(*(*it1))(2);
	}
	FailIf(sTestClass.iTestValue[1] != 2 || sTestClass2.iTestValue[1] != 2);

	FailIf(sTestClass.iTestValue[2] != 0 || sTestClass2.iTestValue[2] != 0);
	FUFunctor2<FUTestClass, long, const long, void> sFunctor5(&sTestClass, &FUTestClass::TestFunction2);
	FUFunctor2<FUTestClass2, long, const long, void> sFunctor6(&sTestClass2, &FUTestClass2::TestFunction2);
	g_xFunctors2.push_back(&sFunctor5);
	g_xFunctors2.push_back(&sFunctor6);
	fm::pvector<TIntFunctor2>::iterator it2;
	for (it2 = g_xFunctors2.begin(); it2 != g_xFunctors2.end(); ++it2)
	{
		(*(*it2))(4, 2);
	}
	FailIf(sTestClass.iTestValue[2] != 4 || sTestClass2.iTestValue[2] != 4);

TESTSUITE_END
