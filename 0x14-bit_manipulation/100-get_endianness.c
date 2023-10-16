#include "main.h"

/**
 * get_endianness - writes the character c to stdout
 * Return: int
 */
int get_endianness(void)
{
unsigned int little_endian = 1;
	char *big_endian = (char *)&little_endian;

	if (*big_endian)
	return (1);
	else
	return (0);
}
