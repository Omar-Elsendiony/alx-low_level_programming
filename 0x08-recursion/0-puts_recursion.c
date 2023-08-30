#include "main.h"

/**
 * print_utility - prints buffer in hexa
 * @s: the address of memory to print
 * @i: the address of memory to print
 *
 * Return: Nothing.
 */
void print_utility(char *s, int i)
{
	if (s[i] == '\0')
		return;
	_putchar(s[i]);
	print_utility(s, i++);
}
/**
 * _puts_recursion - prints buffer in hexa
 * @s: the address of memory to print
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	print_utility(s, 0);
	_putchar('\n');
}
