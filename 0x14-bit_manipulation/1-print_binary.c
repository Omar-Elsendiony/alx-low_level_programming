#include "main.h"

/**
 * print_binary - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_binary(unsigned long int n)
{
	int testBit = 0x01;

	while (n != 0)
	{
		_putchar(n & testBit);
		n >> 1;
	}
	_putchar('\n');
}
