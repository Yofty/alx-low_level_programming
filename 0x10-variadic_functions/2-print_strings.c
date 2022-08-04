#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator : is the string to be printed between the strings
 * @n : is the number of strings passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *a;
	unsigned int x;
	va_list y;

	va_start(y, n);

	for (x = 0 ; x < n ; x++)
	{
		a = va_arg(y, char *);
		if (a)
			printf("%s", a);
		else
			printf("(nil)");

		if (x < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(y);
}
