#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * getLength - prints buffer in hexa
 * @argv: the address of memory to print
 * @argc: the address of memory to print
 *
 * Return: Nothing.
 */
int getLength(char **argv, int argc)
{
	int i, length, j, sumLengths;

	sumLengths = 0;
	for (i = 0; i < argc; i++)
	{
		length = 0;
		j = 0;
		while (argv[i][j] != '\0')
		{
			length += 1;
			j++;
		}
		sumLengths += length;
	}
	return (sumLengths);
}

/**
 * argstostr - prints buffer in hexa
 * @ac: the address of memory to print
 * @av: the address of memory to print
 *
 * Return: Nothing.
 */
char *argstostr(int ac, char **av)
{
	int i, j, totalsize, index;
	char *str;

	if (ac <= 0)
		return (NULL);
	totalsize = getLength(av, ac);
	totalsize += ac;
	str = malloc(totalsize + 1);
	if (str == NULL)
		return (NULL);
	index = 0;
	for (i = 0; i < totalsize; i++)
	{
		j = 0;
		while (av[index][j] != '\0')
		{
			str[i] = av[index][j];
			i++;
			j++;
		}
		str[i] = '\n';
		index += 1;
	}
	str[i] = '\0';
	return (str);
}
