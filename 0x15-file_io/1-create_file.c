#include "main.h"
/**
 * create_file -  creates a file
 * @filename : is the name of the file
 * @text_content : is the file content
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int x, y, z;

	if (!filename)
		return (-1);

	x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_contnt)
		text_content = "";

	y = 0;
	while (text_content[y])
	{
		y++;
	}
	z = write(x, text_content, y);

	if (z == -1)
		return (-1);

	close(x);
	return (1);
}
