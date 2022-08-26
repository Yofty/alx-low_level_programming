#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc : is the number of argument
 * @argv : is the string of argument
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x, y, z, i, n;
	char a[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}
	x = open(argv[1], O_RDONLY);
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(97);
	}
	y = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((z = read(x, a, BUFSIZ)) > 0)
	{
		if (y < 0 || write(y, a, z) != x)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			close(x);
			exit(99);
		}
	}
	if (z < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	i = close(x);
	n = close(y);
	if (i < 0 || n < 0)
	{
		if ( i < 0)
			dprintf(STDERR_FILENO, "Error: can't close fd %d\n", x);
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: can't close fd %d\n", y);
		exit(100);
	}
	return (0);
}
