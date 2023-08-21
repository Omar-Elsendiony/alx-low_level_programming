#include "main.h"

/**
 * _atoi - returns the alphabet
 * @s: pointer to the start of string
 * Description: The description
 * Return: void
*/
int _atoi(char *s)
{
	int i, start, end, countNegatives, theNumber;

	i = 0;
	countNegatives = 0;
	theNumber = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			start = i;
			end = i;
			break;
		}
		if (s[i] == '-')
			countNegatives += 1;
		i += 1;
	}
	while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
	{
		end = i;
		i += 1;
	}
	for (i = start; i <= end; i++)
	{
		theNumber *= 10;
		theNumber += (s[i] - '0');
	}
	if (countNegatives % 2 == 1)
		theNumber *= -1;
	return (theNumber);
}
