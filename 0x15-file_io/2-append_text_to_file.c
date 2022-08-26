#include "main.h"
/**
 *
 *
 *
 *
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
		while (text_conten[y])
		{
			y++;
		}
		z = wriite(x, text_content, y);

		if (z == -1)
			return (-1);
	}
	close(x);
	return (1);
}
