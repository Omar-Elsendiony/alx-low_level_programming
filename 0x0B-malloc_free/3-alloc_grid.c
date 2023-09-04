#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints buffer in hexa
 * @width: the address of memory to print
 * @height: the address of memory to print
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **allocatedMemory;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	allocatedMemory = (int**)malloc(sizeof(int*) * height);
	if (allocatedMemory == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		allocatedMemory[i] = (int *)malloc(sizeof(int) * width);
		if (allocatedMemory[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			allocatedMemory[i][j] = 0;
	}
	return (allocatedMemory);
}
