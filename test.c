#include <stdio.h>
#include <CL/cl.h>
#include "oclerrno.h"

int main(void)
{
	for (cl_int i = 0; i > -75; i--)
	{
		oclperror(i, NULL);
	}
	oclperror(-1, "message");
	oclperror(-2, NULL);
	oclperror(-3, "\0");
}
