#include "main.h"
#include <stdio.h>
/**
 * main - print the name of the program
 * @argc : the number of arguments used
 * @argv : the string of arguments
 * Return: Always 0
 */
int main(int argc, char* argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
