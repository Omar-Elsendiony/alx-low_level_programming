#include <stdio.h>

/**
 * printString - returns the alphabet
 * @b: pointer to second number
 * @i: pointer to second number
 * @startI: pointer to second number
 * Description: The description
 * Return: void
*/
void printString(char *b, int startI, int i)
{
	int l;

	for (l = startI; l < i ; l++)
	{
		if (b[l] >= 0 && b[l] <= 31)
		{
			printf(".");
		}
		else
			printf("%c", b[l]);
	}
}
/**
 * getLengthZeros - returns the alphabet
 * @n: pointer to second number
 * Description: The description
 * Return: void
*/
int getLengthZeros(int n)
{
	int non_zero;

	non_zero = 0;
	if (n == 0)
		non_zero = 1;
	else
		while (n != 0)
		{
			non_zero += 1;
			n = n / 16;
		}
	return (8 - non_zero);
}
/**
 * print_buffer - returns the alphabet
 * @b: pointer to second number
 * @size: pointer to second number
 * Description: The description
 * Return: void
*/
void print_buffer(char *b, int size)
{
	int i, j, lengthZeros, startI, countTakenSpaces;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i++)
	{
		startI = i;
		countTakenSpaces = 0;
		lengthZeros = getLengthZeros(i);
		for (j = 0; j < lengthZeros; j++)
			printf("0");
		printf("%x", i);
		printf(":");
		for (j = 0; j < 10 && i < size; j++)
		{
			if (j % 2 == 0)
			{
				printf(" ");
				countTakenSpaces += 1;
			}
			if (b[i] / 0x10 == 0)
				printf("0");
			printf("%x", b[i]);
			countTakenSpaces += 2;
			i += 1;
		}
		while (25 - countTakenSpaces != 0)
		{
			printf(" ");
			countTakenSpaces += 1;
		}
		printf(" ");
		printString(b, startI, i);
		i -= 1;
		printf("\n");
	}
}
