// FCollada_1bf0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
/* libxml2 (bundled with FCollada 3.05b), xmlIO.c: xmlFileFlush */
#include <stdio.h>

typedef enum {
    XML_FROM_NONE = 0,
    XML_FROM_PARSER,    /* The XML parser */
    XML_FROM_TREE,      /* The tree module */
    XML_FROM_NAMESPACE, /* The XML Namespace module */
    XML_FROM_DTD,       /* The XML DTD validation with parser context */
    XML_FROM_HTML,      /* The HTML parser */
    XML_FROM_MEMORY,    /* The memory allocator */
    XML_FROM_OUTPUT,    /* The serialization code */
    XML_FROM_IO         /* The Input/Output stack */
} xmlErrorDomain;

void __xmlIOErr(int domain, int code, const char *extra);
/**
 * xmlIOErr:
 * @code:  the error number
 * @extra:  extra information
 *
 * Handle an I/O error
 */
static void
xmlIOErr(int code, const char *extra)
{
    __xmlIOErr(XML_FROM_IO, code, extra);
}

// @baa 0x01bf9d10
/**
 * xmlFileFlush:
 * @context:  the I/O context
 *
 * Flush an I/O channel
 */
int
xmlFileFlush (void * context) {
    int ret;

    if (context == NULL)
        return(-1);
    ret = ( fflush((FILE *) context) == EOF ) ? -1 : 0;
    if (ret < 0)
        xmlIOErr(0, "fflush()");
    return(ret);
}
