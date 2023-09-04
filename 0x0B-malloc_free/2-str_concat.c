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
 * str_concat - prints buffer in hexa
 * @s1: the address of memory to print
 * @s2: the address of memory to print
 *
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, size1, size2;
	char *allocatedMemory;

	size1 = getLength(s1);
	size2 = getLength(s2);
	allocatedMemory = malloc(size1 + size2 + 1);
	if (allocatedMemory == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		allocatedMemory[i] = s1[i];
	}
	for (; i < size2; i++)
	{
		allocatedMemory[i] = s2[i];
	}
	allocatedMemory[i] = '\0';
	return (allocatedMemory);
}
