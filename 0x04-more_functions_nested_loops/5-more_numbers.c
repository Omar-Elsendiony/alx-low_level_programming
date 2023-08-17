#include "main.h"
#include "string.h"
/**
 * print_most_numbers - returns the alphabet
 * Description: The description
 * Return: 0
*/
void print_most_numbers(void)
{
	int i, number;

	for (i = 48; i <= 57; i++)
	{
		number = (i - 48);
		if (number / 10)
		{
			_putchar(number / 10 + '0');
			number = number % 10;
		}
		_putchar(number + '0');
	}
	_putchar('\n');
}
