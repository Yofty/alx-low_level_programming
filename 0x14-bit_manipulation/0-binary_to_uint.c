#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b : b is the binary number to be converted
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a;
	int x, y;

	if (!b)
		return (0);

	a = 0;
	x = 0;
	while (b[x] != '\0' )
	{
		x++;
	}
	for (x--, y =  1 ; x >= 0 ; x--, y *= 2)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);

		if (b[x] & 1)
			a = a + y;
	}
	return (a);
}
