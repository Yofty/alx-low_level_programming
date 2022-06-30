#include <stdio.h>
/**
 * main - Entry point
 * print the size of various types on the computer
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	char b;
	float c;
	long int d;
	long long int e;

	printf("Size of a char: %lu.\n", sizeof(b));
	printf("Size of an int: %lu.\n", sizeof(a));
	printf("Size of a long int: %lu.\n", sizeof(d));
	printf("Size of a long long int: %lu.\n", sizeof(e));
	printf("Size of a float: %lu.\n", sizeof(c));
	return (0);
}
