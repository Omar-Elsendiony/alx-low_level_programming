#include "main.h"
#include "string.h"
/**
 * _islower - starting point
 * @c: the character
 * Description: The description
 * Return: 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
