#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename : is the name of the file
 * @text_conten : is the content of the file
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, z;

	if (!filename)
		return (-1);

	x = open(filename, O_WRONLY | O_APPEND);

	if ( x == -1)
		return (-1);

	if (text_content)
	{
		y = 0;
		while (text_content[y])
		{
			y++;
		}
		z = write(x, text_content, y);

		if (z == -1)
			return (-1);
	}
	close(x);
	return (1);
}
