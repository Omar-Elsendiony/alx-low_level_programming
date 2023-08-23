#include <stdio.h>

/**
 * _strncat - returns the alphabet
 * @dest: pointer to integer
 * @s: pointer to second number
 * Description: The description
 * Return: void
*/
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
    {
        if (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '\"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == ' ' || s[i] == '\\t' || s[i] == '\\n')
            if (s[i + 1] != '\0' && s[i + 1] >= 97 && s[i+1] <= 122)
            {
                s[i + 1] -= 32;
            }
        i += 1;
    }
	return (s);
}
