#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - print the sum of the numbers
 * @argc : argc is the nimber of srguments
 * @argv : argv is the string of arguments
 * Return: 0 or 1
 */
int main(int argc, char* argv[])
{
	unsigned int  x, y, z;

	y = 0;
	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc > 0)
	{
		for (x = 0 ; argv[argc][x] != '\0' ; x++)
		{
			if (!(isdigit(argv[argc][x])))
			{
				printf("Error\n");
				return (1);
			}
		}
		z = atoi(argv[argc]);
		y = y + z
	}
	printf("%d\n", y);
	return (0);
}
