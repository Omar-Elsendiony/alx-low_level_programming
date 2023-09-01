#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - starting point
 * @argc: count
 * @argv: arguments
 * Description: The description
 * Return: 0
*/
int main(int argc, char **argv)
{
	int i, count;

	count = 0;
	for (i = 0; argv[i] != NULL; i++)
		count++;
	printf("%d\n", argc);
	return (0);
}
