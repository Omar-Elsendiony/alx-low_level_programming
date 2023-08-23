#include <stdio.h>

/**
 * cap_string - returns the alphabet
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
		if (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '\"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == ' ' || s[i] == 10 || s[i] == 9)
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] -= 32;
			}
		i += 1;
	}
	return (s);
}
