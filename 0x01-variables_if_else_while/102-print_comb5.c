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

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			a = y + 1;
			z = x;
			while (z < 10)
			{
				while (a < 10)
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
					a++;
				}
				a = 0;
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
