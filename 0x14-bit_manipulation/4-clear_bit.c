#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index : index is the index, starting from 0 of the bit
 * @n :  n is the number set
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;
	if (*n & x)
	       *n ^= x;

	return (1);
}
