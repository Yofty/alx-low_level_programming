#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n : n is the number to be updated
 *
 * Return: int(square root)
 */
int _sqrt_recursion(int n)
{
	return (root(n, 1));
}
/**
 * root - finds the square root of the number
 * @n : n is the number to be updated
 * @x : x is the square root of n
 *
 * Return: int
 */
int root(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x < n)
	{
		return (root(n, x + 1));
	}
	else
	{
		return (-1);
	}
}
