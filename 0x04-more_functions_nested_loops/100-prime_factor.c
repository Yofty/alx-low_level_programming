#include <stdio.h>
/**
 *
 *
 *
 */
int main(void)
{
	long int x;
	long int y = 612852475143;

	for (x = 2 ; x < y ; x++)
	{
		if (y % x == 0)
		{
			y = y / x;
		}
	}
	printf("%ld\n", x);
	return (0);
}
