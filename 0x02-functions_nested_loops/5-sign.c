#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n : n is the number user inters
 *
 * Return : 1 (possetive) 0 (zero) or -1 (negative)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
