#include "main.h"

/**
 * create_file - returns the alphabet
 * @filename: pointer to second number
 * @text_content: pointer to second number
 * Description: The description
 * Return: void
*/
int create_file(const char *filename, char *text_content)
{
	size_t iter = 0;
	int fd, resWrite;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 600);
	if (fd == -1)
		return (-1);
	while (*(text_content + iter) != '\0')
	{
		resWrite = write(fd, text_content + iter, 1);
		if (resWrite == -1)
			return (-1);
		iter++;
	}
	return (1);
}
