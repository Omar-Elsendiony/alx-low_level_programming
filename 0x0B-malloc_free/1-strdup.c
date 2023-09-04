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

	if (str == NULL)
	{
		return (NULL);
	}
	size = getLength(str);
	allocatedMemory = malloc(size + 1);
	if (str == NULL || allocatedMemory == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		allocatedMemory[i] = str[i];
	}
	allocatedMemory[i] ='\0';
	return (allocatedMemory);
}
