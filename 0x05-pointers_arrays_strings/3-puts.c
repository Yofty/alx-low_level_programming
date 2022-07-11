#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str : str is a pointer that will be updated
 *
 * Return: nothing
 */
void _puts(char *str)
{
	char *a;
	int x;

	a = str;
	for (x = 0 ; a[x] ; x++)
	{
		_putchar(a[x]);
	}
	_putchar('\n');
}
