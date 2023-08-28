#include <stdio.h>

/**
 * _memset - returns the alphabet
 * @b: pointer to second number
 * @s: pointer to second number
 * @n: pointer to second number
 * Description: The description
 * Return: void
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
