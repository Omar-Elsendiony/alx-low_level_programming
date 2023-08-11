#include <stdio.h>

/**
 * main - starting point
 * Description: The description
 * Return: 0
*/
int main(void)
{
	int i;
	char* string;

	string ="alphabet_";
	for (i = strlen(string) - 1; i >= 0; i--)
		putchar(string[i]);
	putchar('\n');
	return (0);
}
