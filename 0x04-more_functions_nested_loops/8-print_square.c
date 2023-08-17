#include "main.h"
#include "string.h"
/**
 * print_square - returns the alphabet
 * @size: the number of rimes to print '\'
 * Description: The description
 * Return: 0
*/
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
