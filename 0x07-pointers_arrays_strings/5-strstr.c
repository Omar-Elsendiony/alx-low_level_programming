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
		unsigned int i, j;

		i = 0;
		if (strlen(needle) > strlen(haystack))
			return (NULL);
		while (haystack[i] != '\0')
		{
			j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[i] != needle[j])
					break;
				j++;
			}
			if (needle[j] == '\0')
				return (haystack + i);
			i++;
		}
		return (NULL);
}
