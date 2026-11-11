// libjpeg_1a10000.c: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

/* jcparam.c (IJG libjpeg 6b) */
typedef int boolean;

typedef struct jpeg_compress_struct * j_compress_ptr;

#define DCTSIZE2 64
extern void jpeg_add_quant_table(j_compress_ptr cinfo, int which_tbl,
				 const unsigned int *basic_table,
				 int scale_factor, boolean force_baseline);
/*
 * Set or change the 'quality' (quantization) setting, using default tables
 * and a straight percentage-scaling quality scale.  In most cases it's better
 * to use jpeg_set_quality (below); this entry point is provided for
 * applications that insist on a linear percentage scaling.
 */
/* In jcparam.c these two tables are static locals of jpeg_set_linear_quality
 * (JPEG spec section K.1); defined here, `verify` reports their data as
 * different even though it is byte-identical, so they are declared instead. */
extern const unsigned int std_luminance_quant_tbl[DCTSIZE2];
extern const unsigned int std_chrominance_quant_tbl[DCTSIZE2];
// @baa 0x01a14d70
void
jpeg_set_linear_quality (j_compress_ptr cinfo, int scale_factor,
			 boolean force_baseline)
{
  /* Set up two quantization tables using the specified scaling */
  jpeg_add_quant_table(cinfo, 0, std_luminance_quant_tbl,
		       scale_factor, force_baseline);
  jpeg_add_quant_table(cinfo, 1, std_chrominance_quant_tbl,
		       scale_factor, force_baseline);
}
