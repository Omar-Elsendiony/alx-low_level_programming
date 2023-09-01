#include "main.h"
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * convertToNumber - starting point
 * @s: count
 * Description: The description
 * Return: number
*/
int convertToNumber(char *s)
{
	int i, theNumber;

	theNumber = 0;
	if (s[0] == '-')
		i = 1;
	else
		i = 0;
	for (; s[i] != '\0'; i++)
	{
		theNumber = theNumber * 10 + (s[i] - '0');
	}
	return (theNumber);
}

/* betty style doc for function main goes there */
/**
 * main - starting point
 * @argc: count
 * @argv: arguments
 * Description: The description
 * Return: 0
*/
int main(int argc, char **argv)
{
	int firstArg, secondArg, signFirstArg, signSecondArg;

	signFirstArg = 1;
	signSecondArg = 1;
	if (argc < 3)
		printf("Error\n");
	else
	{
		if (argv[1][0] == '-')
			signFirstArg = -1;
		if (argv[2][0] == '-')
			signSecondArg = -1;
		firstArg = convertToNumber(argv[1]) * signFirstArg;
		secondArg = convertToNumber(argv[2]) * signSecondArg;
		printf("%d\n", firstArg * secondArg);
	}
	return (0);
}
