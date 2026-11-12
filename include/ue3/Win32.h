/* The Windows API the game calls, declared as the Platform SDK declares it (the kit has no
 * <windows.h>): the import names (__imp__EnterCriticalSection@4 ...) come out the same. Usable from
 * C and C++, with or without Core.h. Add what you need, the SDK's way (WINAPI = __stdcall, A/W pairs). */
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#define WINAPI      __stdcall
#define WINBASEAPI  __declspec(dllimport)
#define WINUSERAPI  __declspec(dllimport)

typedef unsigned char   BYTE;
typedef unsigned short  WORD;
typedef unsigned long   DWORD;
typedef int             BOOL;
typedef long            LONG;
typedef unsigned long   ULONG_PTR;   /* 32-bit build */
typedef void*           HANDLE;
typedef void*           HWND;
typedef void*           HLOCAL;
typedef void*           LPVOID;
typedef const char*     LPCSTR;
typedef const wchar_t*  LPCWSTR;
typedef union _LARGE_INTEGER { struct { DWORD LowPart; LONG HighPart; } u; __int64 QuadPart; } LARGE_INTEGER;

#define INFINITE            0xFFFFFFFF
#define WAIT_OBJECT_0       0
#define TLS_OUT_OF_INDEXES  ((DWORD)0xFFFFFFFF)
#define MB_OK               0x00000000L
#define MB_ICONERROR        0x00000010L

typedef struct _RTL_CRITICAL_SECTION {
    void*     DebugInfo;
    LONG      LockCount;
    LONG      RecursionCount;
    HANDLE    OwningThread;
    HANDLE    LockSemaphore;
    ULONG_PTR SpinCount;
} CRITICAL_SECTION, *LPCRITICAL_SECTION;

/* synchronization */
WINBASEAPI void  WINAPI InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
WINBASEAPI void  WINAPI DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
WINBASEAPI void  WINAPI EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
WINBASEAPI void  WINAPI LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
typedef ULONG_PTR SIZE_T;
typedef struct _MEMORYSTATUS {
    DWORD dwLength;
    DWORD dwMemoryLoad;
    SIZE_T dwTotalPhys;
    SIZE_T dwAvailPhys;
    SIZE_T dwTotalPageFile;
    SIZE_T dwAvailPageFile;
    SIZE_T dwTotalVirtual;
    SIZE_T dwAvailVirtual;
} MEMORYSTATUS, *LPMEMORYSTATUS;
WINBASEAPI void  WINAPI GlobalMemoryStatus(LPMEMORYSTATUS lpBuffer);
WINBASEAPI LONG  WINAPI InterlockedIncrement(LONG volatile* Addend);
WINBASEAPI LONG  WINAPI InterlockedDecrement(LONG volatile* Addend);
WINBASEAPI LONG  WINAPI InterlockedExchange(LONG volatile* Target, LONG Value);
WINBASEAPI LONG  WINAPI InterlockedExchangeAdd(LONG volatile* Addend, LONG Value);
WINBASEAPI LONG  WINAPI InterlockedCompareExchange(LONG volatile* Destination, LONG Exchange, LONG Comperand);
WINBASEAPI DWORD WINAPI WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds);
WINBASEAPI BOOL  WINAPI SetEvent(HANDLE hEvent);
WINBASEAPI BOOL  WINAPI ResetEvent(HANDLE hEvent);
WINBASEAPI BOOL  WINAPI CloseHandle(HANDLE hObject);
WINBASEAPI void  WINAPI Sleep(DWORD dwMilliseconds);

/* threads and thread-local storage */
WINBASEAPI DWORD  WINAPI GetCurrentThreadId(void);
WINBASEAPI DWORD  WINAPI TlsAlloc(void);
WINBASEAPI BOOL   WINAPI TlsFree(DWORD dwTlsIndex);
WINBASEAPI LPVOID WINAPI TlsGetValue(DWORD dwTlsIndex);
WINBASEAPI BOOL   WINAPI TlsSetValue(DWORD dwTlsIndex, LPVOID lpTlsValue);

/* time, memory, errors, debugging */
WINBASEAPI BOOL   WINAPI QueryPerformanceCounter(LARGE_INTEGER* lpPerformanceCount);
WINBASEAPI BOOL   WINAPI QueryPerformanceFrequency(LARGE_INTEGER* lpFrequency);
WINBASEAPI DWORD  WINAPI GetTickCount(void);
WINBASEAPI HLOCAL WINAPI LocalFree(HLOCAL hMem);
WINBASEAPI DWORD  WINAPI GetLastError(void);
WINBASEAPI void   WINAPI OutputDebugStringA(LPCSTR lpOutputString);
WINBASEAPI void   WINAPI OutputDebugStringW(LPCWSTR lpOutputString);
WINUSERAPI int    WINAPI MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, unsigned int uType);
WINUSERAPI int    WINAPI MessageBoxW(HWND hWnd, LPCWSTR lpText, LPCWSTR lpCaption, unsigned int uType);
WINUSERAPI HWND   WINAPI GetActiveWindow(void);
#ifndef UNICODE
#define MessageBox MessageBoxA   /* C files (libjpeg's jerror.c) are built without UNICODE */
#endif

#ifdef __cplusplus
}
#endif
