#include "main.h"

/**
 * _strcmp - returns the alphabet
 * @s1: pointer to integer
 * @s2: pointer to second number
 * Description: The description
 * Return: void
*/
int _strcmp(char *s1, char *s2)
{
	int i, diff;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	diff = s1[i] - s2[i];
	return (diff);
}

