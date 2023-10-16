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
	int testBit = 0x01, numBits = 0;
	unsigned long int temp = n;

	if (n == 0)
		_putchar('0');
	else
	{
		while (temp != 0)
		{
			temp = temp >> 1;
			numBits += 1;
		}
		numBits--;
		while (numBits >= 0)
		{
			_putchar(((n >> numBits) & testBit) + '0');
			numBits--;
		}
	}
}
