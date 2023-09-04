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
	for (i = 0; str[i] != '\0'; i++)
	{
		length += 1;
	}
	return (length);
}

/**
 * _strdup - prints buffer in hexa
 * @str: the address of memory to print
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *allocatedMemory;

	size = getLength(str);
	allocatedMemory = malloc(size);
	if (str == NULL || allocatedMemory == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		allocatedMemory[i] = str[i];
	}
	return (allocatedMemory);
}
