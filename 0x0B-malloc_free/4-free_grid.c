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
	int i;

	if (grid != NULL && height != 0)
	{
		i = 0;
		while (i < height)
		{
			free((int *)grid[i++]);
		}
		free(grid);
	}
}
