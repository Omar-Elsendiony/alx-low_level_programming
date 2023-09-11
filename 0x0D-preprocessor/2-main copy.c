#include <stdio.h>

#define ABS(x) ((x < 0)?(-x):(x))


/**
 * main - starting point
 * Description: The description
 * Return: 0
*/
int main(void)
{
    int c = ABS(98) + 88;
	printf("%d\n", c);
	return (0);
}
