#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - prints buffer in hexa
 * @s1: the address of memory to print
 * @s2: the address of memory to print
 * @n: the address of memory to print
 *
 * Return: Nothing.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *allocatedMem;
	unsigned int i = 0, j = 0, comparator = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	allocatedMem = malloc(strlen(s1) + strlen(s2) + 1);
	if (allocatedMem == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		allocatedMem[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0' && comparator < n && comparator < strlen(s2))
	{
		allocatedMem[i] = s2[j];
		i++;
		j++;
		comparator++;
	}
	allocatedMem[i] = '\0';
	return (allocatedMem);
}
