#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints buffer in hexa
 * @width: the address of memory to print
 * @height: the address of memory to print
 *
 * Return: Nothing.
 */
void freeAll(int **arg, int lasti)
{
    int i;

    for (i = 0; i < lasti; i++)
    {
        free(arg[i]);
    }
    free(arg);
}
/**
 * alloc_grid - prints buffer in hexa
 * @width: the address of memory to print
 * @height: the address of memory to print
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **allocatedMemory;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	allocatedMemory = (int **)malloc(sizeof(int *) * height);
	if (allocatedMemory == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		allocatedMemory[i] = (int *)malloc(sizeof(int) * width);
		if (allocatedMemory[i] == NULL)
        {
            freeAll(allocatedMemory,i);
			return (NULL);
        }
	}
	return (allocatedMemory);
}
