#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
void *malloc_checked(unsigned int b)
{
	int *x = malloc(b);

	if (x == 0)
		exit(98);

	return (x);
}
