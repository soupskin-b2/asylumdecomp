// libjpeg_1a10000.c: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
/*
 * jdhuff.c (IJG libjpeg 6b): the restart-marker handler of the Huffman decoder.
 */
#define JPEG_INTERNALS
#include "jinclude.h"
#include "jpeglib.h"
#include "jdhuff.h"

/* The savable_state subrecord contains fields that change within an MCU,
 * but must not be updated permanently until we complete the MCU. */
typedef struct {
  int last_dc_val[MAX_COMPS_IN_SCAN]; /* last DC coef for each component */
} savable_state;

typedef struct {
  struct jpeg_entropy_decoder pub; /* public fields */
  bitread_perm_state bitstate;	/* Bit buffer at start of MCU */
  savable_state saved;		/* Other state at start of MCU */
  /* These fields are NOT loaded into local working state. */
  unsigned int restarts_to_go;	/* MCUs left in this restart interval */
} huff_entropy_decoder_prefix;

typedef huff_entropy_decoder_prefix * huff_entropy_ptr;

LOCAL(boolean)
process_restart (j_decompress_ptr cinfo)
{
  huff_entropy_ptr entropy = (huff_entropy_ptr) cinfo->entropy;
  int ci;

  /* Throw away any unused bits remaining in bit buffer; */
  /* include any full bytes in next_marker's count of discarded bytes */
  cinfo->marker->discarded_bytes += entropy->bitstate.bits_left / 8;
  entropy->bitstate.bits_left = 0;

  /* Advance past the RSTn marker */
  if (! (*cinfo->marker->read_restart_marker) (cinfo))
    return FALSE;

  /* Re-initialize DC predictions to 0 */
  for (ci = 0; ci < cinfo->comps_in_scan; ci++)
    entropy->saved.last_dc_val[ci] = 0;

  /* Reset restart counter */
  entropy->restarts_to_go = cinfo->restart_interval;

  /* Reset out-of-data flag, unless read_restart_marker left us smack up
   * against a marker.  In that case we will end up treating the next data
   * segment as empty, and we can avoid producing bogus output pixels by
   * leaving the flag set.
   */
  if (cinfo->unread_marker == 0)
    entropy->pub.insufficient_data = FALSE;

  return TRUE;
}

// @baa 0x01a19060
/* jdhuff.c's decode_mcu calls this; here nothing does, and the compiler drops an unreferenced
 * static function, so this call keeps it (taking its address instead would give it the C
 * calling convention and the arguments would no longer come in registers). */
boolean keep_process_restart (j_decompress_ptr cinfo)
{
  return process_restart(cinfo);
}
