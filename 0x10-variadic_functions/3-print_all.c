#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - prints buffer in hexa
 * @format: the address of memory to print
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int i, length, tempI;
	char *str;

	va_start(valist, format);
	i = 0, length = strlen(format);
	while (format != NULL && format[i] != '\0')
	{
		tempI = 0;
		switch (format[i])
		{
			case ('c'):
				printf("%c", va_arg(valist, int));
				break;
			case ('s'):
				str = va_arg(valist, char *);
				while (str == NULL && tempI == 0)
				{
					tempI++;
					printf("(nil)");
				}
				if (str != NULL)
					printf("%s", str);
				break;
			case ('f'):
				printf("%f", va_arg(valist, double));
				break;
			case ('i'):
				printf("%d", va_arg(valist, int));
				break;
			default:
				i++;
				continue;
		}
		if (i != (length - 1))
			printf(", ");
		i++;
	}
	va_end(valist);
	printf("\n");
}
