sammykingx
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x0B-malloc_free/3-alloc_grid.c

sammykingx completed all task
 0 contributors
43 lines (38 sloc)  689 Bytes
#include "main.h"
/**
 * alloc_grid - allocates a grid, make space and free space
 * @width: takes in width of grid
 * @height: height of grid
 * Return: grid with freed spaces
 */

int **alloc_grid(int width, int height)
{
	/*Declaring variables*/
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height); /*malloc*/

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(grid[i]);
			}
		free(grid);
		return (NULL);
		}
	}
	for (i = 0; j < width; j++)
	grid[i][j] = 0;
	return (grid);
}
