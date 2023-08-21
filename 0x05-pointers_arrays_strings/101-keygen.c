#include <stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - returns the alphabet
 * Description: The description
 * Return: void
*/
int main(void)
{
	char s[65];
	int i, accumulative, goal, generatedNum;

	i = 0;
	goal = 0xad4;
	accumulative = 0;
	srand(time(NULL));
	while (i < 64)
	{
		if ((goal - accumulative) > 126)
		{
			generatedNum = rand() % 83 + 44;
		}
		else if ((goal - accumulative) >= 44 && (goal - accumulative) <= 126)
		{
			s[i] = (goal - accumulative);
			s[i + 1] = '\0';
			break;
		}
		else
		{
			i = 0;
			accumulative = 0;
			continue;
		}
		accumulative += generatedNum;
		s[i] = generatedNum;
		i += 1;
	}
	printf("%s", s);
	return (0);
}
