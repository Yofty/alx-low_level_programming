#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * @a : a is the array
 * @size : size is the matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int x, y, z;

	y = 0;
	z = 0;

	for (x = 0 ; x < size ; x++)
	{
		y = y + *(a + x * size + x);
		z = z + *(a + x * size + size - x - 1);
	}
	printf("%i, %i\n", y, z);
}
