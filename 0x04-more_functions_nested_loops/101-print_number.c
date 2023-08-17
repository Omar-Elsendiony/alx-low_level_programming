#include "main.h"

/**
 * print_number - returns the alphabet
 * @n: the number of rimes to print '\'
 * Description: The description
 * Return: 0
*/
void print_number(int n)
{
	unsigned int i, size, tempNumber, numberToPrint, result1, result2;

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	size = 0;
	tempNumber = n;
	while (tempNumber != 0)
	{
		tempNumber = tempNumber / 10;
		size = size + 1;
	}
	while (size > 1)
	{
		result1 = 1;
		result2 = 1;
		for (i = 0; i < size - 1; i++)
		{
			result2 = result2 * 10;
		}
		result1 = result2 * 10;
		numberToPrint = (n % result1) / (result2);
		size = size - 1;
		_putchar(numberToPrint + 48);
	}
	_putchar((n % 10) + 48);
}
