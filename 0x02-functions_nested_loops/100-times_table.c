#include "main.h"
/**
 * print_times_table - prints the n times table
 * starts with 0
 * @n : n is the integer user inters
 *
 * Return: void
 */
void print_times_table(int n)
{
	int x, y, r;

	if (n > 0 && n < 15)
	{
		for (x = 0 ; x <= n ; x++)
		{
			for (y = 0 ; y <= n ; y++)
			{
				r = x * y;
				if (y == 0)
				{
					_putchar(r + '0');
				}
				else if (r < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(r + '0');
				}
				else if (r < 100)
				{
					_putchar(' ');
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
				else
				{
					_putchar((r / 100) + '0');
					_putchar(((r % 100) / 10) + '0');
					_putchar((r % 10) + '0');
				}

				if (y < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
