#include <stdio.h>

/**
 * _strlen - returns the alphabet
 * @s: pointer to integer
 * Description: The description
 * Return: int
*/
int _strlen(char *s)
{
	int i, length;

	i = 0;
	length = 0;
	while (s[i] != '\0')
	{
		length += 1;
		i += 1;
	}
	return (length);
}
