#include <stdio.h>

/**
 * _strcat - returns the alphabet
 * @dest: pointer to integer
 * @src: pointer to second number
 * Description: The description
 * Return: void
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

