#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array : is the array to be searched
 * @size : is the size of the array
 * @cmp : the function used with pointer
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0 ; x < size ; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}
	return (-1);
}
