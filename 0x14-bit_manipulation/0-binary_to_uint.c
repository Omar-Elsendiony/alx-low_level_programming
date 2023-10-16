

/**
 * binary_to_uint - writes the character c to stdout
 * @b: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int binary_to_uint(const char *b)
{
	int length = 0, i;
	unsigned int convertedNum = 0, weight = 0x01;

	if (b == ((void *) 0))
		return (0);
	while (b[i] != '\0')
		length++;
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		convertedNum = (b[i] - '0') * weight;
		weight = weight << 1;
	}
	return (convertedNum);
}
