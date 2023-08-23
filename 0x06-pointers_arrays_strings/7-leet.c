#include <stdio.h>

/**
 * leet - returns the alphabet
 * @s: pointer to second number
 * Description: The description
 * Return: void
*/
char *leet(char *s)
{
	int i, j;

	char letters [] = {'a', 'e', 'o', 't', 'l'};
	char conversions [] = {4, 3, 0, 7, 1};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == letters[j] || s[i] == letters[j] - 32)
			{
				s[i] = conversions[j];
			}
		}
	}
	return (s);
}
