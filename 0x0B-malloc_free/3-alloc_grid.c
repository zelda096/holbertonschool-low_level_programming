#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - entry point
 * @width: width-2D
 * @height: height-2D
 * Return: Pointer-2D array of int
 */
int **alloc_grid(int width, int height)
{
	int **ptr = NULL;
	int x;
	int y;

	if ((width < 1) || (height < 1))
		return (NULL);

	ptr = (int **)malloc((height) * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(width * sizeof(int));
		if (ptr[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(ptr[x]);
			free(ptr);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			ptr[x][y] = 0;

	return (ptr);
}
