#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - prints buffer in hexa
 * @haystack: the address of memory to print
 * @needle: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_strstr(char *haystack, char *needle)
{
		unsigned int i, j, oldI;

		i = 0;
		while (haystack[i] != '\0')
		{
			j = 0;
			oldI = i;
			while (needle[j] != '\0')
			{
				if (haystack[i] != needle[j])
					break;
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return (haystack + oldI);
			i = oldI;
			i++;
		}
		return (NULL);
}
