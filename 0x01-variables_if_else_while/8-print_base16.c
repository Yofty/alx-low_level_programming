#include <stdio.h>
/**
 * main - entry point
 * prints all the numbers of base 16 in lowercase,
 *
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 0 ; x < 16 ; x++)
	{
		if (x < 10)
			putchar(x + '0');
		else
			putchar(x - 10 + 'a');
	}
	putchar('\n');
	return (0);
}
