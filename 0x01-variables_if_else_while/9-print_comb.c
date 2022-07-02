#include <stdio.h>
/**
 * main - Entry point
 * prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int y;

	for (y = 0 ; y < 10 ; y++)
	{
		putchar(y + '0');
		putchar(' ');
		putchar(',');
	}
	putchar('\n');
	return (0);
}
