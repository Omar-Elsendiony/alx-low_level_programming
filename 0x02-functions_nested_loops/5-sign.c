#include "main.h"

/**
 * print_sign - returns the alphabet
 * @n: input
 * Description: The description
 * Return: 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
