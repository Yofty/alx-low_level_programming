#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n : is the array of parameters
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int s = 0, x;
	va_list y;

	if (n == 0)
		return (0);

	va_start(y, n);

	for (x = 0 ; x < n ; x++)
	{
		s = s + va_arg(y, int);
	}
	va_end(y);
	return (s);
}
