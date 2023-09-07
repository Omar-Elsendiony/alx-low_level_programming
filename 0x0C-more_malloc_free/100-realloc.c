#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - prints buffer in hexa
 * @old_size: the address of memory to print
 * @new_size: the address of memory to print
 * @ptr: the address of memory to print
 *
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newMem;
	unsigned int minimumSize;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	newMem = malloc(new_size * sizeof(ptr));
	if (newMem == NULL)
		return (NULL);
	if (new_size >= old_size)
		minimumSize = old_size;
	else
		minimumSize = new_size;
	memcpy(newMem, ptr, minimumSize);
	free(ptr);
	return (newMem);
}
