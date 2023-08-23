#include <stdio.h>

/**
 * cap_string - returns the alphabet
 * @s: pointer to second number
 * Description: The description
 * Return: void
*/
char *cap_string(char *s)
{
	int i, fS, sS, tS;

	if (s[0] != '\0' && s[0] >= 97 && s[0] <= 122)
		s[0] -= 32;
	i = 1;
	while (s[i] != '\0')
	{
		fS = s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?';
		sS = s[i] == '\"' || s[i] == '(' || s[i] == ')' || s[i] == '{';
		tS = s[i] == '}' || s[i] == ' ' || s[i] == 10 || s[i] == 9 || s[i] == 13;
		if (fS || sS || tS)
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] -= 32;
			}
		i += 1;
	}
	return (s);
}
