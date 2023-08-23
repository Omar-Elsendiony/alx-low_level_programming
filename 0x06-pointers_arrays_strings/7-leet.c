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
	char letters2 [] = {'A', 'E', 'O', 'T', 'L'};
	char conversions [] = {4, 3, 0, 7, 1};

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == letters[j] || s[i] == letters2[j])
			{
				s[i] = conversions[j] + '0';
				break;
			}
		}
		i += 1;
	}
	return (s);
}
