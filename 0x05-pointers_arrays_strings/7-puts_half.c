#include "main.h"

/**
 * puts_half - returns the alphabet
 * @str: pointer to the start of string
 * Description: The description
 * Return: void
*/
void puts_half(char *str)
{
	int i, length;

	i = 0;
	length = 0;
	while (str[i] != '\0')
	{
		length += 1;
		i += 1;
	}
	i = (length - 1) / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 1;
	}
	_putchar('\n');
}

