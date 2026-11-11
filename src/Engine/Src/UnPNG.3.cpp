// UnPNG.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include <time.h>
#include "png.h"

/* The library was built against MSVCR80, whose 32-bit time_t gmtime is _gmtime32;
   the vc71 headers name it gmtime. */
__declspec(dllimport) struct tm * __cdecl _gmtime32(const time_t *);
// @baa 0x01adfca0
void PNGAPI
png_convert_from_time_t(png_timep ptime, time_t ttime)
{
   struct tm *tbuf;

   tbuf = _gmtime32(&ttime);
   ptime->year = (png_uint_16)(1900 + tbuf->tm_year);
   ptime->month = (png_byte)(tbuf->tm_mon + 1);
   ptime->day = (png_byte)tbuf->tm_mday;
   ptime->hour = (png_byte)tbuf->tm_hour;
   ptime->minute = (png_byte)tbuf->tm_min;
   ptime->second = (png_byte)tbuf->tm_sec;
}
