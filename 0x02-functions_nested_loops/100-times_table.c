#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n : n is the integer user inters
 * Return: void
 */
void print_times_table(int n)
{
	int x, y;

	if (n >= 0 && n <= 15)
	{
		for (x = 0 ; x <= n ; x++)
		{
			for (y = 0 ; y <= n ; y++)
			{
				if ((x * y) < 100 && y > 0)
				{
					_putchar(' ');
					if ((x * y) < 10 && y > 0)
						_putchar(' ');
					else
						_putchar(((x * y) / 10) + '0');
				}
				else if ((x * y) >= 100 && y > 0)
				{
					_putchar(((x * y) / 100) + '0');
					_putchar((((x * y) % 100) / 10) + '0');
				}
				_putchar(((x * y) % 10) + '0');
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
