#include "main.h"

/**
 * absolute - returns the alphabet
 * @n: the number of rimes to print '\'
 * Description: The description
 * Return: 0
*/
int absolute(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
/**
 * power10 - returns the alphabet
 * @exponent: the number of rimes to print '\'
 * Description: The description
 * Return: 0
*/
int power10(int exponent)
{
	int i, result;

	result = 1;
	for (i = 0; i < exponent; i++)
	{
		result = result * 10;
	}
	return (result);
}
/**
 * print_number - returns the alphabet
 * @n: the number of rimes to print '\'
 * Description: The description
 * Return: 0
*/
void print_number(int n)
{
	int size, tempNumber, numberToPrint;

	if (n < 0)
		_putchar(45);
	size = 0;
	tempNumber = n;
	while (tempNumber != 0)
	{
		tempNumber = tempNumber / 10;
		size = size + 1;
	}
	while (size > 1)
	{
		numberToPrint = absolute(n % power10(size)) / absolute(power10((size - 1)));
		size = size - 1;
		_putchar(numberToPrint + 48);
	}
	_putchar(absolute(n % 10) + 48);
}
