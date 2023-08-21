#include "main.h"

/**
 * rev_string - returns the alphabet
 * @s: pointer to the start of string
 * Description: The description
 * Return: void
*/
void rev_string(char *s)
{
	int i, length, end, temp;

	i = 0;
	length = 0;
	while (s[i] != '\0')
	{
		length += 1;
		i += 1;
	}
	end = (length - 1) / 2;
	for (i = 0; i < end; i++)
	{
		temp = s[(length - 1) - i];
		s[(length - 1) - i] = s[i];
		s[i] = temp;
	}
}

