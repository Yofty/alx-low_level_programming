#include <stdio.h>
/**
 * main - entry point
 * prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char c, d;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	for (d = 'A' ; d <= 'Z' ; d++)
	{
		putchar(d);
	}
	putchar('\n');

	return (0);
}
