#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a : a is the int to be updated
 * @n : n is the number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int *x, *y , z, i;
	
	x = a;
	y = a;
	for (i = 0; i < n - 1; i++)
	{
		y++;
	}
	for (i = 0; i < n / 2; i++)
	{
		z = *y;
		*y = *x;
		*x = z;
		x++;
		y--;
	}
}

