#include <stdio.h>
/**
 * main - Entry point
 * prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
	return (0);
}
