

/**
 * flip_bits - writes the character c to stdout
 * @n: The character to print
 * @m: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int testBit = 0x01;
	int i, numberBits = 32;
	unsigned int countFlips = 0;

	for (i = 0; i < numberBits; i++)
	{
		if ((testBit & n) == (testBit & m))
			countFlips += 1;
		testBit << 1;
	}
	return (countFlips);
}
