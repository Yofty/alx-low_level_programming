#include "main.h"
#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples of 3 or 5
 *
 * Return: always 0
 */
int main(void)
{
	int x, y, z, a;

	y = 0;
	z = 0;
	a = 0;

	for (x = 0 ; x < 1024 ; x++)
	{
		if ((x % 3) == 0)
			y = y + x;
		else if ((x % 5) == 0)
			z = z + x;
	}
	a = y + z;
	printf("%lu\n", a);
	return (0);
}
