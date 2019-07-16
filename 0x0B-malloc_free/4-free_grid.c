#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - returns a pointer to a 2 dimensional
 * @grid: matrix
 * @height: grid
 *
 * Return: pointer.
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
