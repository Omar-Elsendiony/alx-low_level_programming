#include "main.h"
#include <stdlib.h>

/**
 * getLength - prints buffer in hexa
 * @str: the address of memory to print
 *
 * Return: Nothing.
 */
int getLength(char *str)
{
	int i, length;

	length = 0;
	for (i = 0; str != NULL && str[i] != '\0'; i++)
	{
		length += 1;
	}
	return (length);
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
	int i, j;
	int **allocatedMemory;

	if (width <= 0 || height <= 0)
	{
		return NULL;
	}
	allocatedMemory = malloc(sizeof(int) * height * width);
	if (allocatedMemory == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		allocatedMemory[i] = malloc(width * sizeof(int));
		if (allocatedMemory[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			allocatedMemory[i][j] = 0;
	}
	return (allocatedMemory);
}
