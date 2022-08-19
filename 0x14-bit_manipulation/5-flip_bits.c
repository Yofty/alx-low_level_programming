#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n : n is number to be flipped
 * @m : m is the out put
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x, y = 0;
	unsigned long int z = sizeof(unsigned long int) * 8;

	for (x = 0 ; x < z ; x++)
	{
		if ((m & 1) != (n & 1))
			y = y + 1;

		n = n >> 1;
		m = m >> 1;
	}
	return (y);
}
