#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a : a is the int pointer to be updated
 * @n : n is the number of elements of the array to be printed
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n ; x++)
	{
		if (x < n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	_putchar('\n');
}
