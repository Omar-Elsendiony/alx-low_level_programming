#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_diagsums - prints buffer in hexa
 * @a: the address of memory to print
 * @size: pp
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	unsigned int i, j, sum1, sum2;

	i = 0;
	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 +=  *(a + (size - 1) * i + i);
		sum2 +=  *(a + (size - 1) * i + (size - 1 - i));
	}
	printf("%d, %d", sum1, sum2);
}
