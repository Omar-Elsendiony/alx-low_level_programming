#include "function_pointers.h"
/**
 * print_name - returns the alphabet
 * @name: ny
 * @f: pointer
 * Description: The description
 * Return: 0
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
