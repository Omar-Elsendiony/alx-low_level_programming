#include "main.h"
#include <stdlib.h>

/**
 * free_grid - prints buffer in hexa
 * @grid: the address of memory to print
 * @height: the address of memory to print
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0 || grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
