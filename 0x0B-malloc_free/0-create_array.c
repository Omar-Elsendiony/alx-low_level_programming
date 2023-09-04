#include "main.h"
#include <stdlib.h>
/**
 * _memcpy - prints buffer in hexa
 * @size: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *allocatedMemory;

	allocatedMemory = malloc(size);
	if (allocatedMemory == NULL)
		return (allocatedMemory);
	for (i = 0; i < size; i++)
	{
		allocatedMemory[i] = c;
	}
	return (allocatedMemory);
}
