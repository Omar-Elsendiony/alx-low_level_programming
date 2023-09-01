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
	for (i = 0; s[i] != '\0'; i++)
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
	int firstArg, secondArg;

	if (argc < 3)
		printf("Error\n");
	else
	{
		firstArg = convertToNumber(argv[1]);
		secondArg = convertToNumber(argv[2]);
		printf("%d\n", firstArg * secondArg);
	}
	return (0);
}
