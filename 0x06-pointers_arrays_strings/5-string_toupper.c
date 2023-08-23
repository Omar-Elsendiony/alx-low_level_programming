#include <stdio.h>

/**
 * string_toupper - returns the alphabet
 * @s: pointer to integer
 * Description: The description
 * Return: void
*/
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] -= 32;
	}
	return (s);
}
