#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format : is a list of types of arguments passed
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int x;
	char *a, *s;
	va_list b;

	va_start(b, format);
	s = "";

	x = 0;
	while (format && format[x])
	{
		switch (format[x])
		{
			case 'c':
				printf("%s%c", s, va_arg(b, int));
				break;
			case 'i':
				printf("%s%d", s, va_arg(b, int));
				break;
			case 'f':
				printf("%s%f", s, va_arg(b, double));
				break;
			case 's':
				a = va_arg(b, char *);
				if (a == NULL)
					printf("(nil)");
				printf("%s%s", s, a);
				break;
			default:
				x++;
				continue;
		}
		s = ", ";
		x++;
	}
	printf("\n");
	va_end(b);
}
