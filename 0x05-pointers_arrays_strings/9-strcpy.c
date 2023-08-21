#include "main.h"

/**
 * _strcpy - returns the alphabet
 * @dest: pointer to the start of string
 * @src: pointer to the start of string
 * Description: The description
 * Return: void
*/
char *_strcpy(char *dest, char *src)
{
	int i, length;

	i = 0;
	length = 0;
	while (src[i] != '\0')
	{
		length += 1;
		i += 1;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = '\0';
	return (dest);
}
