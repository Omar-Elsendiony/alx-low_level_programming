#include "main.h"
/**
 * more_numbers - returns the alphabet
 * Description: The description
 * Return: none
*/
void more_numbers(void)
{
	int i, j, number;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			number = i;
			if (number / 10)
			{
				_putchar(number / 10 + '0');
				number = number % 10;
			}
			_putchar(number + '0');
		}
		_putchar('\n');
	}
}
