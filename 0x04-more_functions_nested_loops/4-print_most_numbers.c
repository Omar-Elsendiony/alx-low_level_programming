#include "main.h"
#include "string.h"
/**
 * print_most_numbers - returns the alphabet
 * Description: The description
 * Return: 0
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != (2 + 48) && i != (4 + 48))
			_putchar(i);
	}
	_putchar('\n');
}
