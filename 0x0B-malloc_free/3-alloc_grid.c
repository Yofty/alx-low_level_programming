#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width : width is width of the grid
 * @height : height is the height os the grid
 * Return: int (g)
 */
int **alloc_grid(int width, int height)
{
	int **g, x, y;

	if (width < 1 || height < 1)
		return (NULL);;
	g = malloc(height * sizeof(int *));
	if (g == NULL)
	{
		free(g);
		return (NULL);
	}
	for (x = 0 ; x < height ; x++)
	{
		g[x] = malloc(width *sizeof(int));
		if (g[x] == NULL)
		{
			while ( x >= 0 )
			{
				free(g[x]);
				x--;
			}
			free(g);
			return (NULL);
		}
	}
	for (x = 0 ; x < height ; x++)
		for (y = 0 ; y < width ; y++)
			g[x][y] = 0;
	return (g);
}
