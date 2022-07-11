#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a : a is pointer to int to be swaped
 * @b : b is poinet to int to be swaped
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
