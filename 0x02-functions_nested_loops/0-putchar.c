#include "main.h"
#include "string.h"
/**
 * main - starting point
 * Description: The description
 * Return: 0
*/
int main(void)
{
	char *stringName = "_putchar";
	int i, length;

	length = strlen(stringName);
	for (i = 0; i < length; i++)
		_putchar(stringName[i]);
	_putchar('\n');
	return (0);
}
