#include "main.h"
#include <stdlib.h>

/**
* free_grid - a function that frees a 2 dimensional array grid
* created in the previous alloc_grid function
* @grid: the 2D array to be freed
* @height: the number of rows of the 2D array
* Return: returns nothing
*/
void free_grid(int **grid, int height)
{
	if (grid != NULL || height != 0)
	{
		for (height = 0; height >= 0; height--)
		{
			free((int *)grid[height]);
		}
		free(grid);
	}
}
