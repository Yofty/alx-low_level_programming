#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array : array is the array to be iterated
 * @size : the size of array
 * @action : funtion the poiner used
 *
 * Return:nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action)
	{
		for (x = 0 ; x < size ; x++)
		{
			action(array[x]);
		}
	}
}
