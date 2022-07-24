#include <stdio.h>
/**
 * main  - prints the number of arguments
 * @argc : argc is the number of argument
 * @argv : argv is the string of argument
 *
 * Return: Always 0
 */
int main(int argc, char* argv[])
{
	if (argv != NULL)
		printf("%d\n", argc - 1);
	else
		printf("%d\n", 0);

	return (0);
}
