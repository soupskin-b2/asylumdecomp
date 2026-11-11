// UnVcWin32.cpp: 6 functions
// Placed here by: neighbours 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

typedef uint size_t;

typedef char * va_list;

extern "C" __declspec(dllimport) int _vsnwprintf_s(...);
// @baa 0x005ec920
void sub_005ec920(wchar_t * param_1, size_t param_2, size_t param_3, undefined4 * param_4, va_list param_5)
{
                    
                    
  _vsnwprintf_s(param_1,param_2,param_3,(wchar_t *)*param_4,param_5);
  return;
}

extern "C" __declspec(dllimport) int _vsnprintf_s(...);
// @baa 0x005ec930
void sub_005ec930(char * param_1, size_t param_2, size_t param_3, undefined4 * param_4, va_list param_5)
{
                    
                    
  _vsnprintf_s(param_1,param_2,param_3,(char *)*param_4,param_5);
  return;
}

extern "C" __declspec(dllimport) int __stdcall Sleep(unsigned long);
// @baa 0x005eca10
void sub_005eca10(void)
{
  Sleep(0xffffffffu);
}

extern char g_025d68b8[];
// @baa 0x005ecd50
int sub_005ecd50(void) { return (int)g_025d68b8; }

void sub_005f9b90();
// @baa 0x005f9e60
void sub_005f9e60(void) { sub_005f9b90(); }

// A window procedure that keeps Windows from suspending or entering standby while the game runs.
struct HWND__ { int unused; };

typedef HWND__* HWND;

typedef unsigned int UINT;

typedef unsigned int WPARAM;

typedef long LPARAM;

typedef long LRESULT;

#define CALLBACK __stdcall
#define WM_POWERBROADCAST       0x0218
#define PBT_APMQUERYSUSPEND     0x0000
#define PBT_APMQUERYSTANDBY     0x0001
#define BROADCAST_QUERY_DENY    0x424D5144
extern "C" __declspec(dllimport) LRESULT __stdcall DefWindowProcW(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
// @baa 0x005ecee0
LRESULT CALLBACK sub_005ecee0( HWND hWnd, UINT Message, WPARAM wParam, LPARAM lParam )
{
	if( Message == WM_POWERBROADCAST )
	{
		switch( wParam )
		{
			case PBT_APMQUERYSUSPEND:
			case PBT_APMQUERYSTANDBY:
				return BROADCAST_QUERY_DENY;
		}
	}
	return DefWindowProcW( hWnd, Message, wParam, lParam );
}
