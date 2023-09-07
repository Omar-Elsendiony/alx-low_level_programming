#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the address of memory to print
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int *allocatedMem;
	int i, diff;

	if (min > max)
		return (NULL);
	allocatedMem = malloc((max - min + 1) * sizeof(int));
	if (allocatedMem == NULL)
	{
		return (NULL);
	}
	diff = max - min + 1;
	for (i = min; i <= max; i++)
	{
		allocatedMem[i - min] = i;
	}
	return (allocatedMem);
}
