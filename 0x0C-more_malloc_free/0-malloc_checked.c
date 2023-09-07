#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - prints buffer in hexa
 * @b: the address of memory to print
 *
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	int *allocatedMem;

	allocatedMem = malloc(b);
	if (allocatedMem == NULL)
	{
		*allocatedMem = 0x98;
	}
	return (allocatedMem);
}
