#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a, *b;
	unsigned int x;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));
	else 
		a = ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	b = malloc(new_size);

	if (b == NULL)
		return (0);

	for (x = 0 ; x < (old_size || new_size) ; x++)
	{
		*(b + x) = a[x];
	}
	free(ptr);

	return (b);
}
