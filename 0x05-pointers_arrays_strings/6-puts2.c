#include "main.h"

/**
 * puts2 - returns the alphabet
 * @str: pointer to the start of string
 * Description: The description
 * Return: void
*/
void puts2(char *str)
{
	int i, length;

	i = 0;
	length = 0;
	while (str[i] != '\0')
	{
		length += 1;
		i += 1;
	}
	i = 0;
	while (i < length)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
