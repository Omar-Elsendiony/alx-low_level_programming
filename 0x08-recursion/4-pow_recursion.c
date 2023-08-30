#include "main.h"

/**
 * _pow_recursion - prints buffer in hexa
 * @x: the address of memory to print
 * @y: the address of memory to print
 *
 * Return: Nothing.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
