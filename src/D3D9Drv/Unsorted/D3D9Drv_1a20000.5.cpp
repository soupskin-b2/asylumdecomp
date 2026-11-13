// D3D9Drv_1a20000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
/* An MD5 class of a statically linked library (the RSA reference implementation, RFC 1321, as a
 * C++ class). The library and the class's own name are not known; the members are the
 * reference implementation's. */
#include <string.h>

typedef unsigned char BYTE;

typedef unsigned int UINT4;

class MD5
{
public:
	MD5();

	void sub_01a27740(const BYTE* input, unsigned int inputLen);
	void sub_01a27800();

private:
	void sub_01a27060(const BYTE block[64]);

	/* The round operations as functions (the transformation itself uses the macros). */
	static void sub_01a26f30(UINT4& a, UINT4 b, UINT4 c, UINT4 d, UINT4 x, UINT4 s, UINT4 ac);
	static void sub_01a26f60(UINT4& a, UINT4 b, UINT4 c, UINT4 d, UINT4 x, UINT4 s, UINT4 ac);
	static void sub_01a26fa0(UINT4& a, UINT4 b, UINT4 c, UINT4 d, UINT4 x, UINT4 s, UINT4 ac);
	static void sub_01a26fd0(UINT4& a, UINT4 b, UINT4 c, UINT4 d, UINT4 x, UINT4 s, UINT4 ac);

	UINT4 state[4];   /* state (ABCD) */
	UINT4 count[2];   /* number of bits, modulo 2^64 (lsb first) */
	BYTE buffer[64];  /* input buffer */
	BYTE digest[16];  /* the result */
	bool finalized;
};

enum {S11=7};
enum {S12=12};
enum {S13=17};
enum {S14=22};
enum {S21=5};
enum {S22=9};
enum {S23=14};
enum {S24=20};
enum {S31=4};
enum {S32=11};
enum {S33=16};
enum {S34=23};
enum {S41=6};
enum {S42=10};
enum {S43=15};
enum {S44=21};
// Basic MD5 transformations.
#define F(x, y, z) (((x) & (y)) | ((~x) & (z)))
#define G(x, y, z) (((x) & (z)) | ((y) & (~z)))
#define H(x, y, z) ((x) ^ (y) ^ (z))
#define I(x, y, z) ((y) ^ ((x) | (~z)))
// Rotates X left by N bits.
#define ROTLEFT(x, n) (((x) << (n)) | ((x) >> (32-(n))))
// Rounds 1, 2, 3, and 4 MD5 transformations.
// Rotation is separate from addition to prevent recomputation.
#define FF(a, b, c, d, x, s, ac) { \
	(a) += F ((b), (c), (d)) + (x) + (UINT4)(ac); \
	(a) = ROTLEFT ((a), (s)); \
	(a) += (b); \
}
#define GG(a, b, c, d, x, s, ac) { \
	(a) += G ((b), (c), (d)) + (x) + (UINT4)(ac); \
	(a) = ROTLEFT ((a), (s)); \
	(a) += (b); \
}
#define HH(a, b, c, d, x, s, ac) { \
	(a) += H ((b), (c), (d)) + (x) + (UINT4)(ac); \
	(a) = ROTLEFT ((a), (s)); \
	(a) += (b); \
}
#define II(a, b, c, d, x, s, ac) { \
	(a) += I ((b), (c), (d)) + (x) + (UINT4)(ac); \
	(a) = ROTLEFT ((a), (s)); \
	(a) += (b); \
}
/* Decodes input (unsigned char) into output (UINT4). Assumes len is a multiple of 4. */
static inline void Decode(UINT4* output, const BYTE* input, unsigned int len)
{
	unsigned int i, j;

	for (i = 0, j = 0; j < len; i++, j += 4)
		output[i] = ((UINT4)input[j]) | (((UINT4)input[j+1]) << 8) |
		(((UINT4)input[j+2]) << 16) | (((UINT4)input[j+3]) << 24);
}

static inline void MD5_memcpy(BYTE* output, const BYTE* input, unsigned int len)
{
	unsigned int i;

	for (i = 0; i < len; i++)
		output[i] = input[i];
}

/* Encodes input (UINT4) into output (unsigned char). Assumes len is a multiple of 4. */
static inline void Encode(BYTE* output, const UINT4* input, unsigned int len)
{
	unsigned int i, j;

	for (i = 0, j = 0; j < len; i++, j += 4) {
		output[j] = (BYTE)(input[i] & 0xff);
		output[j+1] = (BYTE)((input[i] >> 8) & 0xff);
		output[j+2] = (BYTE)((input[i] >> 16) & 0xff);
		output[j+3] = (BYTE)((input[i] >> 24) & 0xff);
	}
}

extern BYTE g_02604248[64];
 /* PADDING: 0x80 and zeros */
/* MD5 initialization. Begins an MD5 operation, writing a new context. */
MD5::MD5()
{
	finalized = false;

	count[0] = 0;
	count[1] = 0;

	/* Load magic initialization constants. */
	state[0] = 0x67452301;
	state[1] = 0xefcdab89;
	state[2] = 0x98badcfe;
	state[3] = 0x10325476;

	memset(buffer, 0, sizeof(buffer));
	memset(digest, 0, sizeof(digest));
}

/* MD5 finalization. Ends an MD5 message-digest operation, writing the message digest and
 * zeroizing the context. */
void MD5::sub_01a27800()
{
	BYTE bits[8];
	unsigned int index, padLen;

	/* Save number of bits */
	Encode(bits, count, 8);

	/* Pad out to 56 mod 64. */
	index = (unsigned int)((count[0] >> 3) & 0x3f);
	padLen = (index < 56) ? (56 - index) : (120 - index);
	sub_01a27740(g_02604248, padLen);

	/* Append length (before padding) */
	sub_01a27740(bits, 8);

	/* Store state in digest */
	Encode(digest, state, 16);

	/* Zeroize sensitive information. */
	memset(buffer, 0, sizeof(*buffer));

	finalized = true;
}

void MD5::sub_01a26f30(UINT4& a, UINT4 b, UINT4 c, UINT4 d, UINT4 x, UINT4 s, UINT4 ac)
{
	a += F(b, c, d) + x + ac;
	a = ROTLEFT(a, s);
	a += b;
}

void MD5::sub_01a26f60(UINT4& a, UINT4 b, UINT4 c, UINT4 d, UINT4 x, UINT4 s, UINT4 ac)
{
	a += G(b, c, d) + x + ac;
	a = ROTLEFT(a, s);
	a += b;
}

void MD5::sub_01a26fa0(UINT4& a, UINT4 b, UINT4 c, UINT4 d, UINT4 x, UINT4 s, UINT4 ac)
{
	a += H(b, c, d) + x + ac;
	a = ROTLEFT(a, s);
	a += b;
}

void MD5::sub_01a26fd0(UINT4& a, UINT4 b, UINT4 c, UINT4 d, UINT4 x, UINT4 s, UINT4 ac)
{
	a += I(b, c, d) + x + ac;
	a = ROTLEFT(a, s);
	a += b;
}

/* MD5 block update operation. Continues an MD5 message-digest operation, processing another
 * message block, and updating the context. */
void MD5::sub_01a27740(const BYTE* input, unsigned int inputLen)
{
	unsigned int i, index, partLen;

	/* Compute number of bytes mod 64 */
	index = (unsigned int)((count[0] >> 3) & 0x3F);

	/* Update number of bits */
	if ((count[0] += ((UINT4)inputLen << 3)) < ((UINT4)inputLen << 3))
		count[1]++;
	count[1] += ((UINT4)inputLen >> 29);

	partLen = 64 - index;

	/* Transform as many times as possible. */
	if (inputLen >= partLen) {
		MD5_memcpy(&buffer[index], input, partLen);
		sub_01a27060(buffer);

		for (i = partLen; i + 63 < inputLen; i += 64)
			sub_01a27060(&input[i]);

		index = 0;
	}
	else
		i = 0;

	/* Buffer remaining input */
	MD5_memcpy(&buffer[index], &input[i], inputLen-i);
}

// @baa 0x01a27000
/* MD5 basic transformation. Transforms state based on block. */
void MD5::sub_01a27060(const BYTE block[64])
{
	UINT4 a = state[0], b = state[1], c = state[2], d = state[3], x[16];

	Decode(x, block, 64);

	// Round 1
	FF (a, b, c, d, x[ 0], S11, 0xd76aa478); /* 1 */
	FF (d, a, b, c, x[ 1], S12, 0xe8c7b756); /* 2 */
	FF (c, d, a, b, x[ 2], S13, 0x242070db); /* 3 */
	FF (b, c, d, a, x[ 3], S14, 0xc1bdceee); /* 4 */
	FF (a, b, c, d, x[ 4], S11, 0xf57c0faf); /* 5 */
	FF (d, a, b, c, x[ 5], S12, 0x4787c62a); /* 6 */
	FF (c, d, a, b, x[ 6], S13, 0xa8304613); /* 7 */
	FF (b, c, d, a, x[ 7], S14, 0xfd469501); /* 8 */
	FF (a, b, c, d, x[ 8], S11, 0x698098d8); /* 9 */
	FF (d, a, b, c, x[ 9], S12, 0x8b44f7af); /* 10 */
	FF (c, d, a, b, x[10], S13, 0xffff5bb1); /* 11 */
	FF (b, c, d, a, x[11], S14, 0x895cd7be); /* 12 */
	FF (a, b, c, d, x[12], S11, 0x6b901122); /* 13 */
	FF (d, a, b, c, x[13], S12, 0xfd987193); /* 14 */
	FF (c, d, a, b, x[14], S13, 0xa679438e); /* 15 */
	FF (b, c, d, a, x[15], S14, 0x49b40821); /* 16 */

	// Round 2
	GG (a, b, c, d, x[ 1], S21, 0xf61e2562); /* 17 */
	GG (d, a, b, c, x[ 6], S22, 0xc040b340); /* 18 */
	GG (c, d, a, b, x[11], S23, 0x265e5a51); /* 19 */
	GG (b, c, d, a, x[ 0], S24, 0xe9b6c7aa); /* 20 */
	GG (a, b, c, d, x[ 5], S21, 0xd62f105d); /* 21 */
	GG (d, a, b, c, x[10], S22,  0x2441453); /* 22 */
	GG (c, d, a, b, x[15], S23, 0xd8a1e681); /* 23 */
	GG (b, c, d, a, x[ 4], S24, 0xe7d3fbc8); /* 24 */
	GG (a, b, c, d, x[ 9], S21, 0x21e1cde6); /* 25 */
	GG (d, a, b, c, x[14], S22, 0xc33707d6); /* 26 */
	GG (c, d, a, b, x[ 3], S23, 0xf4d50d87); /* 27 */
	GG (b, c, d, a, x[ 8], S24, 0x455a14ed); /* 28 */
	GG (a, b, c, d, x[13], S21, 0xa9e3e905); /* 29 */
	GG (d, a, b, c, x[ 2], S22, 0xfcefa3f8); /* 30 */
	GG (c, d, a, b, x[ 7], S23, 0x676f02d9); /* 31 */
	GG (b, c, d, a, x[12], S24, 0x8d2a4c8a); /* 32 */

	// Round 3
	HH (a, b, c, d, x[ 5], S31, 0xfffa3942); /* 33 */
	HH (d, a, b, c, x[ 8], S32, 0x8771f681); /* 34 */
	HH (c, d, a, b, x[11], S33, 0x6d9d6122); /* 35 */
	HH (b, c, d, a, x[14], S34, 0xfde5380c); /* 36 */
	HH (a, b, c, d, x[ 1], S31, 0xa4beea44); /* 37 */
	HH (d, a, b, c, x[ 4], S32, 0x4bdecfa9); /* 38 */
	HH (c, d, a, b, x[ 7], S33, 0xf6bb4b60); /* 39 */
	HH (b, c, d, a, x[10], S34, 0xbebfbc70); /* 40 */
	HH (a, b, c, d, x[13], S31, 0x289b7ec6); /* 41 */
	HH (d, a, b, c, x[ 0], S32, 0xeaa127fa); /* 42 */
	HH (c, d, a, b, x[ 3], S33, 0xd4ef3085); /* 43 */
	HH (b, c, d, a, x[ 6], S34,  0x4881d05); /* 44 */
	HH (a, b, c, d, x[ 9], S31, 0xd9d4d039); /* 45 */
	HH (d, a, b, c, x[12], S32, 0xe6db99e5); /* 46 */
	HH (c, d, a, b, x[15], S33, 0x1fa27cf8); /* 47 */
	HH (b, c, d, a, x[ 2], S34, 0xc4ac5665); /* 48 */

	// Round 4
	II (a, b, c, d, x[ 0], S41, 0xf4292244); /* 49 */
	II (d, a, b, c, x[ 7], S42, 0x432aff97); /* 50 */
	II (c, d, a, b, x[14], S43, 0xab9423a7); /* 51 */
	II (b, c, d, a, x[ 5], S44, 0xfc93a039); /* 52 */
	II (a, b, c, d, x[12], S41, 0x655b59c3); /* 53 */
	II (d, a, b, c, x[ 3], S42, 0x8f0ccc92); /* 54 */
	II (c, d, a, b, x[10], S43, 0xffeff47d); /* 55 */
	II (b, c, d, a, x[ 1], S44, 0x85845dd1); /* 56 */
	II (a, b, c, d, x[ 8], S41, 0x6fa87e4f); /* 57 */
	II (d, a, b, c, x[15], S42, 0xfe2ce6e0); /* 58 */
	II (c, d, a, b, x[ 6], S43, 0xa3014314); /* 59 */
	II (b, c, d, a, x[13], S44, 0x4e0811a1); /* 60 */
	II (a, b, c, d, x[ 4], S41, 0xf7537e82); /* 61 */
	II (d, a, b, c, x[11], S42, 0xbd3af235); /* 62 */
	II (c, d, a, b, x[ 2], S43, 0x2ad7d2bb); /* 63 */
	II (b, c, d, a, x[ 9], S44, 0xeb86d391); /* 64 */

	state[0] += a;
	state[1] += b;
	state[2] += c;
	state[3] += d;
}

// @baa 0x01a27800
