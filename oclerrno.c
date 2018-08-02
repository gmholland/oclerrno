#include "oclerrno.h"

#include <stdio.h>
#include <string.h>

static const char *oclerrlist[] = {
	"success",
	"device not found",
	"device not available",
	"compiler not available",
	"mem object allocation failure",
	"out of resources",
	"out of host memory",
	"profiling info not available",
	"mem copy overlap",
	"image format mismatch",
	"image format not supported",
	"build program failure",
	"map failure",
	"misaligned sub buffer offset",
	"exec status error for events in wait list",
	"compile program failure",
	"linker not available",
	"link program failure",
	"device partition failed",
	"kernel arg info not available",
	"unknown error",
	"unknown error",
	"unknown error",
	"unknown error",
	"unknown error",
	"unknown error",
	"unknown error",
	"unknown error",
	"unknown error",
	"unknown error",
	"invalid value",
	"invalid device type",
	"invalid platform",
	"invalid device",
	"invalid context",
	"invalid queue properties",
	"invalid command queue",
	"invalid host ptr",
	"invalid mem object",
	"invalid image format descriptor",
	"invalid image size",
	"invalid sampler",
	"invalid binary",
	"invalid build options",
	"invalid program",
	"invalid program executable",
	"invalid kernel name",
	"invalid kernel definition",
	"invalid kernel",
	"invalid arg index",
	"invalid arg value",
	"invalid arg size",
	"invalid kernel args",
	"invalid work dimension",
	"invalid work group size",
	"invalid work item size",
	"invalid global offset",
	"invalid event wait list",
	"invalid event",
	"invalid operation",
	"invalid GL object",
	"invalid buffer size",
	"invalid MIP level",
	"invalid global work size",
	"invalid property",
	"invalid image descriptor",
	"invalid compiler options",
	"invalid linker options",
	"invalid device partition count",
	"invalid pipe size",
	"invalid device queue",
	"invalid spec id",
	"max size restriction exceeded",
};

static const cl_int oclnerr = 73;

const char *oclstrerror(cl_int errnum)
{
	cl_int index = -errnum;
	if (index < 0 || index > oclnerr-1) {
		return "unkown error";
	}
	return oclerrlist[index];
}

void oclperror(cl_int errnum, const char *s)
{
	if (!s && s != '\0') {
		fprintf(stderr, "%s: %s\n", s, oclstrerror(errnum));
	} else {
		fprintf(stderr, "%s\n", oclstrerror(errnum));
	}
}
