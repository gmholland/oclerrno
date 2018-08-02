#ifndef OCLERRNO_H
#define OCLERRNO_H

#ifdef __cplusplus
extern "C" {
#endif

#include <CL/cl.h>

/**
 * oclstrerror - Return a string describing an OpenCL error number
 *
 * Returns a pointer to a astring that describes the OpenCL error code passed in
 * the argument errnum.
 */
const char *oclstrerror(cl_int errnum);

/**
 * oclperror - Print an OpenCL error message to stderr
 *
 * If s is not NULL and *s is not a null byte ('\0'), the argument string s is
 * printed, followed by a colon and a blank. Then an error message corresponsing
 * to the errnum argument and a new-line.
 */
void oclperror(cl_int errnum, const char *s);

#ifdef __cplusplus
}
#endif

#endif /* OCLERRNO_H */
