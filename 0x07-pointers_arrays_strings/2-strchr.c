#include "main.h"
#include <stdio.h>

/**
 * _strchr - prints buffer in hexa
 * @s: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{
		unsigned int i;

		i = 0;
		while (s[i] != '\0')
		{
			if (s[i] == c)
			{
				return (s + i);
			}
			i++;
		}
		return (NULL);
}
