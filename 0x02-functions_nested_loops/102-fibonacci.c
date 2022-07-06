#include <stdio.h>
/**
 * main - peirnts the 1st 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int a, x, y, z;

	x = 1;
	y = 2;

	for (a = 0 ; a < 50 ; a++)
	{
		z = x + y;
		x = y;
		z = y;

		printf("%d", z);
		if (a < 49)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
