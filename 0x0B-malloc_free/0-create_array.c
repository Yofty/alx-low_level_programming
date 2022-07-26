#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size : size of array
 * @c : c is the character to be updated
 * Return: char (m)
 */
char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);

	while (size--)
	{
		m[size] = c;
	}
	return (m);
}
