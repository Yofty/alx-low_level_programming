#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename : is the file to be readen
 * @letter : is the letters in the file
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t y, z;
	char *a;

	if (!filename)
		return (0);

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);

	a = malloc(sizeof(char) * (letters));
	if (!a)
		return (0);

	y = read(x, a, letters);
	z = write(STDOUT_FILENO, a, y);

	close(x);
	free(a);

	return (z);
}
