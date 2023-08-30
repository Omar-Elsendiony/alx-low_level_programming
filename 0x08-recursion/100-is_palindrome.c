#include "main.h"
#include <string.h>
/**
 * utility - prints buffer in hexa
 * @s: the address of memory to print
 * @start: the address of memory to print
 * @end: the address of memory to print
 *
 * Return: Nothing.
 */
int utility(char *s, int start, int end)
{
	if (end < start)
		return (1);
	if (s[start] != s[end])
		return (0);
	else
		return (utility(s, start + 1, end - 1));
}
/**
 * is_palindrome - prints buffer in hexa
 * @s: the address of memory to print
 *
 * Return: Nothing.
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);
	return (utility(s, 0, len - 1));
}
