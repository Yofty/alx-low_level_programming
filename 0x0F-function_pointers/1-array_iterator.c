#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array : array is the array to be iterated
 * @size : size is the size of array
 * @action : action is th funtion the poiner used
 *
 * Return:nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action)
	{
		for (c = 0 ; x < size ; x++)
		{
			action(array[x]);
		}
	}
}
