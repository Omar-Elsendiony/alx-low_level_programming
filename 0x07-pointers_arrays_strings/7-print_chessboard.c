#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_chessboard - prints buffer in hexa
 * @a: the address of memory to print
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j, oldI;

	i = 0;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
