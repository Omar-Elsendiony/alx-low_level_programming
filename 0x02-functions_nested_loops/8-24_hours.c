#include "main.h"

/**
 * jack_bauer - returns the timing ticking
 *
 * Description: The description
 * Return: 0
*/
void jack_bauer(void)
{
	int i, j, tens, units;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			units = i % 10;
			tens = i / 10;
			if (tens == 0)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else
			{
				_putchar(tens + '0');
				_putchar(units + '0');
			}
			_putchar(':');
			units = j % 10;
			tens = i / 10;
			if (tens == 0)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else
			{
				_putchar(tens + '0');
				_putchar(units + '0');
			}
			j = j + 1;
			_putchar('\n');
		}
		i = i + 1;
	}
}
