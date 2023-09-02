#include "main.h"
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * checkOnlyDigits - starting point
 * @s: count
 * Description: The description
 * Return: number
*/
int checkOnlyDigits(char *s)
{
	int i, isValid;

	isValid = 1;
	for (i = 0; s[i] != '\0'; i++)
		if (!(s[i] - '0' >= 0 && s[i] - '0' <= 9))
		{
			isValid = 0;
			break;
		}
	return (isValid);
}
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
	int i, Arg, signArg, sum, isValid;

	signArg = 1;
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (argv[i][0] == '-')
			signArg = -1;
		isValid = checkOnlyDigits(argv[i]);
		if (isValid == 0)
		{
			printf("Error\n");
			return (1);
		}
		Arg = convertToNumber(argv[i]) * signArg;
		sum += Arg;
	}
	printf("%d\n", sum);
	return (0);
}
