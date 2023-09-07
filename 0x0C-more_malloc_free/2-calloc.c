#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the address of memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *allocatedMem;
	unsigned int i;

	i = 0;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	allocatedMem = malloc(nmemb * size);
	if (allocatedMem == NULL)
	{
		return (NULL);
	}
	for (; i < nmemb * size; i++)
	{
		allocatedMem[i] = 0;
	}
	return (allocatedMem);
}
