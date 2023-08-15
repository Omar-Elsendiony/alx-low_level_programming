#include "main.h"

/**
 * print_last_digit - returns the absolute
 * @c: input
 * Description: The description
 * Return: 0
*/
int print_last_digit(int c)
{
	int mod;

	mod = c % 10;
	_putchar(mod + '0');
	return (mod);
}
