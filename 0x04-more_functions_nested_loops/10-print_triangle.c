#include "main.h"
#include "string.h"
/**
 * print_triangle - returns the alphabet
 * @size: the number of rimes to print '\'
 * Description: The description
 * Return: 0
*/
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < (i + 1); j++)
		{
			_putchar('#');
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');

}
