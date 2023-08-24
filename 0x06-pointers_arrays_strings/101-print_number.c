#include "main.h"

/**
 * absolute - returns the alphabet
 * @n: the number of rimes to print '\'
 * Description: The description
 * Return: 0
*/
void absolute(unsigned int n)
{
	unsigned int toPrint;
	if (n == 0) return;
	toPrint = (n % 10);
	absolute(n / 10);
	_putchar(toPrint + '0');
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
