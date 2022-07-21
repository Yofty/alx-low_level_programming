#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n : n is the number to be updated
 *
 * Return: int(square root)
 */
int square(int n, int x);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * suare - finds the square root of the number
 * @n : n is the number to be updated
 * @x : x is the square root of n
 *
 * Return: int 
 */
int square(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if ( x * x < n)
	{
		return (square(n, x + 1));
	}
	else
	{
		return (-1);
	}
}
