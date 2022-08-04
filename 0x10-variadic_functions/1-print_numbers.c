#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @n : is the number of integers passed to the function
 * @separator : is the string to be printed between numbers
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list y;

	va_start(y, n);

	for (x = 0 ; x < n ; x++)
	{
		printf("%d", va_arg(y, int));
		if (separator && x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(y);
}
