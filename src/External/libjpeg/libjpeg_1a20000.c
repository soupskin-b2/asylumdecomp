// libjpeg_1a20000.c: 3 functions
// Placed here by: library 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01a24190
void sub_01a24190(void)
{
}

/* jcmainct.c (IJG libjpeg 6b): main buffer controller for compression, start_pass_main.
 * The parts of jpeglib.h, jpegint.h and jerror.h this function uses are repeated here as the
 * library declares them (the headers themselves, "jpeglib.h" ..., may be included too). */
typedef unsigned char boolean;

  /* this build's boolean is a byte (raw_data_in is tested with cmp byte) */
#define FALSE 0
#define TRUE 1
typedef unsigned int JDIMENSION;

typedef unsigned char UINT8;

typedef unsigned short UINT16;

typedef unsigned char JSAMPLE;

typedef JSAMPLE* JSAMPROW;

typedef JSAMPROW* JSAMPARRAY;

#define NUM_QUANT_TBLS      4
#define NUM_HUFF_TBLS       4
#define NUM_ARITH_TBLS      16
#define MAX_COMPS_IN_SCAN   4
#define C_MAX_BLOCKS_IN_MCU 10
#define MAX_COMPONENTS      10
typedef enum { JCS_UNKNOWN, JCS_GRAYSCALE, JCS_RGB, JCS_YCbCr, JCS_CMYK, JCS_YCCK } J_COLOR_SPACE;

typedef enum { JDCT_ISLOW, JDCT_IFAST, JDCT_FLOAT } J_DCT_METHOD;

typedef enum { JBUF_PASS_THRU, JBUF_SAVE_SOURCE, JBUF_CRANK_DEST, JBUF_SAVE_AND_PASS } J_BUF_MODE;

typedef struct jpeg_compress_struct* j_compress_ptr;

typedef struct jpeg_common_struct* j_common_ptr;

struct jpeg_error_mgr {
  void (*error_exit)(j_common_ptr cinfo);
  void (*emit_message)(j_common_ptr cinfo, int msg_level);
  void (*output_message)(j_common_ptr cinfo);
  void (*format_message)(j_common_ptr cinfo, char* buffer);
  void (*reset_error_mgr)(j_common_ptr cinfo);
  int msg_code;
};

struct jpeg_c_main_controller {
  void (*start_pass)(j_compress_ptr cinfo, J_BUF_MODE pass_mode);
  void (*process_data)(j_compress_ptr cinfo, JSAMPARRAY input_buf,
                       JDIMENSION* in_row_ctr, JDIMENSION in_rows_avail);
};

struct jpeg_compress_struct {
  struct jpeg_error_mgr* err;
  struct jpeg_memory_mgr* mem;
  struct jpeg_progress_mgr* progress;
  void* client_data;
  boolean is_decompressor;
  int global_state;
  struct jpeg_destination_mgr* dest;
  JDIMENSION image_width;
  JDIMENSION image_height;
  int input_components;
  J_COLOR_SPACE in_color_space;
  double input_gamma;
  int data_precision;
  int num_components;
  J_COLOR_SPACE jpeg_color_space;
  struct jpeg_component_info* comp_info;
  struct JQUANT_TBL* quant_tbl_ptrs[NUM_QUANT_TBLS];
  struct JHUFF_TBL* dc_huff_tbl_ptrs[NUM_HUFF_TBLS];
  struct JHUFF_TBL* ac_huff_tbl_ptrs[NUM_HUFF_TBLS];
  UINT8 arith_dc_L[NUM_ARITH_TBLS];
  UINT8 arith_dc_U[NUM_ARITH_TBLS];
  UINT8 arith_ac_K[NUM_ARITH_TBLS];
  int num_scans;
  const struct jpeg_scan_info* scan_info;
  boolean raw_data_in;
  boolean arith_code;
  boolean optimize_coding;
  boolean CCIR601_sampling;
  int smoothing_factor;
  J_DCT_METHOD dct_method;
  unsigned int restart_interval;
  int restart_in_rows;
  boolean write_JFIF_header;
  UINT8 JFIF_major_version;
  UINT8 JFIF_minor_version;
  UINT8 density_unit;
  UINT16 X_density;
  UINT16 Y_density;
  boolean write_Adobe_marker;
  JDIMENSION next_scanline;
  boolean progressive_mode;
  int max_h_samp_factor;
  int max_v_samp_factor;
  JDIMENSION total_iMCU_rows;
  int comps_in_scan;
  struct jpeg_component_info* cur_comp_info[MAX_COMPS_IN_SCAN];
  JDIMENSION MCUs_per_row;
  JDIMENSION MCU_rows_in_scan;
  int blocks_in_MCU;
  int MCU_membership[C_MAX_BLOCKS_IN_MCU];
  int Ss, Se, Ah, Al;
  struct jpeg_comp_master* master;
  struct jpeg_c_main_controller* main;
  /* ... the rest of the struct is not used here */
};

#define JERR_BAD_BUFFER_MODE 4
#define ERREXIT(cinfo,code) \
  ((cinfo)->err->msg_code = (code), \
   (*(cinfo)->err->error_exit) ((j_common_ptr) (cinfo)))
typedef struct {
  struct jpeg_c_main_controller pub; /* public fields */

  JDIMENSION cur_iMCU_row;   /* number of current iMCU row */
  JDIMENSION rowgroup_ctr;   /* counts row groups received in iMCU row */
  boolean suspended;         /* remember if we suspended output */
  J_BUF_MODE pass_mode;      /* current operating mode */

  JSAMPARRAY buffer[MAX_COMPONENTS];
} my_main_controller;

typedef my_main_controller* my_main_ptr;

void process_data_simple_main(j_compress_ptr cinfo, JSAMPARRAY input_buf,
                              JDIMENSION* in_row_ctr, JDIMENSION in_rows_avail);
// @baa 0x01a21530
/*
 * Initialize for a processing pass.
 */
void start_pass_main(j_compress_ptr cinfo, J_BUF_MODE pass_mode)
{
  my_main_ptr main = (my_main_ptr) cinfo->main;

  /* Do nothing in raw-data mode. */
  if (cinfo->raw_data_in)
    return;

  main->cur_iMCU_row = 0;       /* initialize counters */
  main->rowgroup_ctr = 0;
  main->suspended = FALSE;
  main->pass_mode = pass_mode;  /* save mode for use by process_data */

  switch (pass_mode) {
  case JBUF_PASS_THRU:
    main->pub.process_data = process_data_simple_main;
    break;
  default:
    ERREXIT(cinfo, JERR_BAD_BUFFER_MODE);
    break;
  }
}

typedef JSAMPLE *JSAMPROW_01a240b0;

typedef JSAMPROW_01a240b0 *JSAMPARRAY_01a240b0;

typedef JSAMPARRAY_01a240b0 *JSAMPIMAGE;

typedef int boolean_01a240b0;

/* The start of jpeg_compress_struct_01a240b0, up to the fields this file reads. */
struct jpeg_compress_struct_01a240b0 {
  struct jpeg_error_mgr *err;
  struct jpeg_memory_mgr *mem;
  struct jpeg_progress_mgr *progress;
  void *client_data;
  boolean_01a240b0 is_decompressor;
  int global_state;
  struct jpeg_destination_mgr *dest;
  JDIMENSION image_width;
  JDIMENSION image_height;
  int input_components;
};

typedef struct jpeg_compress_struct_01a240b0 *j_compress_ptr_01a240b0;

// @baa 0x01a240b0
/*
 * Convert some rows of samples to the JPEG colorspace.
 * This version handles grayscale output with no conversion.
 * The source can be either plain grayscale or YCbCr (since Y == gray).
 */
void
grayscale_convert (j_compress_ptr_01a240b0 cinfo,
                   JSAMPARRAY_01a240b0 input_buf, JSAMPIMAGE output_buf,
                   JDIMENSION output_row, int num_rows)
{
  register JSAMPROW_01a240b0 inptr;
  register JSAMPROW_01a240b0 outptr;
  register JDIMENSION col;
  JDIMENSION num_cols = cinfo->image_width;
  int instride = cinfo->input_components;

  while (--num_rows >= 0) {
    inptr = *input_buf++;
    outptr = output_buf[0][output_row];
    output_row++;
    for (col = 0; col < num_cols; col++) {
      outptr[col] = inptr[0];   /* don't need GETJSAMPLE() here */
      inptr += instride;
    }
  }
}
