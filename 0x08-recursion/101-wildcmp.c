#include "main.h"
/**
 * utility2 - prints buffer in hexa
 * @s1: the address of memory to print
 * @s2: the address of memory to print
 * @i1: the address of memory to print
 * @i2: the address of memory to print
 *
 * Return: Nothing.
 */
int utility2(char *s1, char *s2, int i1, int i2)
{
	if (s1[i1] != s2[i2])
	{
		while (s1[i1] != '\0' && s1[i1] != s2[i2])
			i1++;
	}
	return (i1);
}
/**
 * utility - prints buffer in hexa
 * @s1: the address of memory to print
 * @s2: the address of memory to print
 * @i1: the address of memory to print
 * @i2: the address of memory to print
 *
 * Return: Nothing.
 */
int utility(char *s1, char *s2, int i1, int i2)
{
	int res;

	res = 0;
	if (s2[i2] == '*')
	{
		while (s2[i2 + 1] != '\0' && s2[i2 + 1] == s2[i2])
			i2++;
		i1 = utility2(s1, s2, i1, i2 + 1);
		if (s1[i1] != '\0')
			res = utility(s1, s2, i1 + 1, i2);
		i2++;
	}
	if (s1[i1] == '\0' && s2[i2] == '\0')
		return (1);
	if (s1[i1] == '\0' || s2[i2] == '\0')
		return (0);
	if (s1[i1] == s2[i2])
		return (res || utility(s1, s2, i1 + 1, i2 + 1));
	return (0);
}
/**
 * wildcmp - prints buffer in hexa
 * @s1: the address of memory to print
 * @s2: the address of memory to print
 *
 * Return: Nothing.
 */
int wildcmp(char *s1, char *s2)
{
	return (utility(s1, s2, 0, 0));
}
