#include "main.h"
#include "string.h"
/**
 * print_line - returns the alphabet
 * @n: the number of rimes to print '_'
 * Description: The description
 * Return: 0
*/
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n = n - 1;
	}
	_putchar('\n');
}
