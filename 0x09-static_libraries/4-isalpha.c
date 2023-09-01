#include "main.h"
#include "string.h"
/**
 * _isalpha - starting point
 * @c: the character
 * Description: The description
 * Return: 0
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c <= 122 && c >= 97)
		return (1);
	return (0);
}
