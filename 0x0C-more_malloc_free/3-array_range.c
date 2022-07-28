#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min : min is the minimum int value
 * @max : max is the maximum int value
 * Return: int (z)
 */
int *array_range(int min, int max)
{
	int x = 0, y, *z;

	if (min > max)
		return (NULL);

	x = ((max + 1) - min);

	z = malloc(x * sizeof(int));

	if (z == NULL)
		return (NULL);

	y = 0;
	while (y < x)
	{
		*(z + y) = min + y;
		y++;
	}
	return (z);
}
