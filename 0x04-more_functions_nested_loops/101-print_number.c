#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_number -  prints an integer
 * @n : n is an int
 *
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int x = 0;

	if (n < 0)
	{
		x = -n;
		_putchar('-');
	}
	else
	{
		x = n;
	}

	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
