#include <stdio.h>
/**
 * main - prints the arguments
 * @argc : argc is the number of argument
 * @argv[] : @argv is the string of argumenti
 * Return: Always 0
 */
int main(int argc, char* argv[])
{
	int x;

	for (x = 0 ; x < argc ; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
