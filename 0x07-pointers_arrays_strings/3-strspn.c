#include "main.h"
#include <stdio.h>

/**
 * _strspn - prints buffer in hexa
 * @s: the address of memory to print
 * @accept: the size of the memory to print
 *
 * Return: Nothing.
 */
unsigned int _strspn(char *s, char *accept)
{
		unsigned int i, count, j;

		i = 0;
		count = 0;
		while (s[i] != '\0')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (accept[j] == s[i])
				{
					count++;
					break;
				}
			}
			i++;
		}
		return (count);
}
