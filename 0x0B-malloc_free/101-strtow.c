#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * getActualWords - prints buffer in hexa
 * @str: the address of memory to print
 * @words: the address of memory to print
 * @numberWords: the address of memory to print
 *
 * Return: Nothing.
 */
void getActualWords(char *str, char **words, int numberWords)
{
	int i, j, index, startL, endL, tempI, iterator;

	i = 0;
	index = 0;
	for (iterator = 0; iterator < numberWords; iterator++)
	{
		while (str[i] == ' ')
			i++;
		startL = i;
		tempI = i;
		while (str[i] != ' ' && str[i] != '\0')
		{
			endL = i;
			i++;
		}
		words[index] = malloc(sizeof(char) * ((endL - startL + 1) + 1));
		for (j = 0; j < (endL - startL + 1); j++)
		{
			words[index][j] = str[tempI++];
		}
		i = tempI;
		words[index][j] = '\0';
		index++;
	}
}

/**
 * getNumberWords - prints buffer in hexa
 * @str: the address of memory to print
 *
 * Return: Nothing.
 */
int getNumberWords(char *str)
{
	int i, numberWords;

	numberWords = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == ' ')
		{
			i++;
		}
		if (!(str[i] == '\0'))
		{
			numberWords++;
			while (str[i] != ' ' && str[i] != '\0')
			{
				i++;
			}
		}
	}
	return (numberWords);
}


/**
 * strtow - prints buffer in hexa
 * @str: the address of memory to print
 *
 * Return: Nothing.
 */
char **strtow(char *str)
{
	int numberWords;
	char **words;

	if (str == NULL || (str[0] == '\0'))
	{
		return (NULL);
	}
	numberWords = getNumberWords(str);
	if (numberWords == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (numberWords + 1));
	getActualWords(str, words, numberWords);
	words[numberWords] = NULL;
	return (words);
}
