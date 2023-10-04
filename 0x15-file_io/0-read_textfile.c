#include "main.h"

/**
 * read_textfile - returns the alphabet
 * @filename: pointer to second number
 * @letters: pointer to second number
 * Description: The description
 * Return: void
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char currentChar;
	size_t iter = 0;
	int fd, resWrite, resRead, closeRes;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	resRead = read(fd, &currentChar, 1);
	while (resRead != 0 && resRead != -1  && letters != iter)
	{
		resWrite = write(1, &currentChar, 1);
		if (resWrite != 1)
			return (0);
		resRead = read(fd, &currentChar, 1);
		iter++;
	}
	closeRes = close(fd);
    if (closeRes == -1)
        return (-1);
	return (iter);
}
