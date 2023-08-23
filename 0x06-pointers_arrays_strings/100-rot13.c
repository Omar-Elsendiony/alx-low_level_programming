#include <stdio.h>

/**
 * rot13 - returns the alphabet
 * @s: pointer to second number
 * Description: The description
 * Return: void
*/
char *rot13(char *s)
{
	int i, j;
	int lowerAndUpper[2];

	i = 0;
	j = 0;
	lowerAndUpper[0] = 65;
	lowerAndUpper[1] = 97;
	while (s[i] != '\0')
	{
		for (j = 0; j < 2; j++)
			if ((s[i] - lowerAndUpper[j]) <= 25 && (s[i] - lowerAndUpper[j]) >= 0)
				s[i] = ((s[i] + 13 - lowerAndUpper[j]) % 26) + lowerAndUpper[j];
		i += 1;
	}
	return (s);
}
