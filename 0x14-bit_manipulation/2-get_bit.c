

/**
 * get_bit - writes the character c to stdout
 * @n: The character to print
 * @index: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int res;

	if (index > 63)
		return (-1);
	n = n >> index;
	res = (n) & 0x01;
	return (res);
}
