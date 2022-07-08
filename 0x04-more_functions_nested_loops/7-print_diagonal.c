#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n : n is the int to determine size of line
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0 ; x < n ; x++)
		{
			for (y = 0 ; y < x ; y++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
