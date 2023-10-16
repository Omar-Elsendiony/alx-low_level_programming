

/**
 * clear_bits - writes the character c to stdout
 * @n: The character to print
 * @index: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int testBit = 0x01;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		testBit = testBit << 1;
	}
	*n = (*n) & (~testBit);
	return (1);
}
