#include "main.h"

/**
 * _puts - returns the alphabet
 * @str: pointer to the start of string
 * Description: The description
 * Return: void
*/
void _puts(char *str)
{
    int i;

    i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
        i += 1;
	}
    _putchar('\n');
}

