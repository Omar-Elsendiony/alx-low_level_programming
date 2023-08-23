#include <stdio.h>

/**
 * _strncat - returns the alphabet
 * @dest: pointer to integer
 * @s: pointer to second number
 * Description: The description
 * Return: void
*/
char *string_toupper(char * s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
    {
        s[i] -= 32;
    }
	return (s);
}
