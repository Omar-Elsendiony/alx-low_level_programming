#include "main.h"

/**
 * print_utility - prints buffer in hexa
 * @s: the address of memory to print
 * @i: the address of memory to print
 *
 * Return: Nothing.
 */
int print_utility(char *s, int i)
{
	if (s[i] == '\0')
		return (0);
	return (1 + print_utility(s, i + 1));
}
/**
 * _strlen_recursion - prints buffer in hexa
 * @s: the address of memory to print
 *
 * Return: Nothing.
 */
int _strlen_recursion(char *s)
{
	return (print_utility(s, 0));
}
