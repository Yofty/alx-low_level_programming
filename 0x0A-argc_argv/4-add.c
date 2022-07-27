#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the sum of the numbers
 * @argc : argc is the nimber of srguments
 * @argv : argv is the string of arguments
 * Return: 0 or 1 
 */
int main(int argc, char* argv[])
{
	int  x, y;

	y = 0;
	
	for (x = 0 ; x < argc ; x++)
	{
		if (argv[x] == NULL)
		{
			printf("0\n");
		}
		else
		{
			if (atoi(argv[x]) == 1)
			{
				y = y + atoi(argv[x]);
				printf("%d\n", y);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	return (0);
}
