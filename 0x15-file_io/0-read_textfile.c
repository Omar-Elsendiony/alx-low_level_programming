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
	FILE *myFile;
	char currentChar;
	size_t iter;
	int resWrite;

	if (filename == NULL)
		return (0);
	myFile = fopen(filename, O_RDONLY);
	if (myFile == NULL)
		return (0);
	while (getc(myFile) != EOF && letters != iter)
	{
		currentChar = getc(myFile);
		resWrite = write(1, &currentChar, 1);
		if (resWrite == -1)
			return (0);
		iter++;
	}
	if (getc(myFile) == EOF)
		return (iter - 1);
	return (iter);
}
