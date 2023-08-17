#include "main.h"
#include "string.h"
/**
 * _isdigit - starting point
 * @c: the character
 * Description: The description
 * Return: 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
