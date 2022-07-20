#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n : n is the int to be updated
 *
 * Return: int (factorial og n)
 */
int factorial(int n)
{
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
