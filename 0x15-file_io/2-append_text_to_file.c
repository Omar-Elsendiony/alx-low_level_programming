#include "main.h"

/**
 * append_text_to_file - returns the alphabet
 * @filename: pointer to second number
 * @text_content: pointer to second number
 * Description: The description
 * Return: void
*/
int append_text_to_file(const char *filename, char *text_content)
{
	size_t iter = 0;
	int fd, resWrite;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
