#include <stdio.h>
/**
 * main - Entry point
 * prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z, a;

	for (x = 0 ; x < 10 ; x++)
	{
		for (y = 0 ; y < 10 ; y++)
		{
			a = 0;
			for (z = x ; z < 10 ; z++)
			{
				for (a = y + 1 ; a < 10 ; a++)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(' ');
					putchar(z + '0');
					putchar(a + '0');

					if (x < 9 || y < 8 || z < 9 || a < 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
