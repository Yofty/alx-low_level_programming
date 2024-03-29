#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc : argc is the number of arguments
 * @argv : argv is the string of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int c, m;

	m = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	c = atoi(argv[1]);

	while (c > 0)
	{
		if (c >= 25)
			c = c - 25;
		else if (c >= 10)
			c = c - 10;
		else if (c >= 5)
			c = c - 5;
		else if (c >= 2)
			c = c - 2;
		else 
			c = c - 1;
		m = m + 1;
	}
	printf("%d\n", m);
	return (0);
}
