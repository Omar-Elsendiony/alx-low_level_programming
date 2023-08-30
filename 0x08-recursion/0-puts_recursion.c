#include "main.h"

/**
 * set_string - prints buffer in hexa
 * @s: the address of memory to print
 * @to: the address of memory to print
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
    int i;

	for (i = 0; s[i] < '\0'; i++)
    {
        _putchar(s[i]);
    }
    _putchar('\n');
}
