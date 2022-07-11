#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s : s is the pointer that will be updated
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int x;
	char *a;

	a = s;
	x = 0;
	while (a[x] != '\0')
	{
		x++;
	}
	for (x = x - 1 ; x >= 0  ; x--)
	{
		_putchar(a[x]);
	}
	_putchar('\n');
}
