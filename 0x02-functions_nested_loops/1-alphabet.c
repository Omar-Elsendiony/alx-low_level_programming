#include "main.h"
#include "string.h"
/**
 * print_alphabet - returns the alphabet
 * Description: The description
 * Return: 0
*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}