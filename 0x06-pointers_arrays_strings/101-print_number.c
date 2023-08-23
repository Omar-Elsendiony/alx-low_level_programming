#include "main.h"

/**
 * absolute - returns the alphabet
 * @n: the number of rimes to print '\'
 * Description: The description
 * Return: 0
*/
void absolute(int n)
{
	int toPrint;
	if (n == 0) return;
	toPrint = (n % 10);
	absolute(n / 10);
	_putchar(toPrint + '0');
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
	unsigned int modifiedN;

	if (n < 0)
	{
		_putchar(45);
		n = - n;
	}
	modifiedN = n;
	absolute(modifiedN);
	
}
