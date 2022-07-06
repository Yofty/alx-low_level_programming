#include "main.h"
/**
 * times_table - prints the 9 times table
 * starts with 0
 *
 * Return: nothing
 */
void times_table(void)
{
	int x, y;

	for (x = 0 ; x < 10 ; x++)
	{
		for (y = 0 ; y < 10 ; y++)
		{
			if (y == 0)
			{
				_putchar((x * y) + '0');
			}
			else if ((x * y) < 10)
			{
				_putchar(' ');
				_putchar((x * y) + '0');
			}
			else
			{
				_putchar(((x * y) / 10) + '0');
				_putchar(((x * y) % 10) + '0');
			}

			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
