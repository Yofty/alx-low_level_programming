#include "main.h"
/**
 * puts_half -  prints half of a string
 * @str : str is the pointer to be updated
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0' )
	{
		x++;
	}
	for (x = (x + 1) / 2 ; str[x] ; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
