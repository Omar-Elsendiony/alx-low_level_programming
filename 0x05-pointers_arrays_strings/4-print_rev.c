#include "main.h"

/**
 * print_rev - returns the alphabet
 * @s: pointer to the start of string
 * Description: The description
 * Return: void
*/
void print_rev(char *s)
{
	int i, length;

	i = 0;
	length = 0;
	while (s[i] != '\0')
	{
		length += 1;
		i += 1;
	}
	i = length - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i -= 1;
	}
	_putchar('\n');
}

