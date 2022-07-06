#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n : n is an intiger input
 *
 * Return: x
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (n < 0)
	{
		x = x * -1;
	}
	_putchar(x + '0');
	return (x);
}
