#include "main.h"
/**
 * set_bit -  sets the value of a bit to 1 at a given index
 * @index : index is the index, starting from 0 of the bit
 * @n : n is the number set
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;
	*n = (*n | x);

	return (1);
}
