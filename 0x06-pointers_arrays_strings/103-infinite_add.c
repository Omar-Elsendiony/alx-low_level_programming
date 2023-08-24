#include "main.h"
#include <stdio.h>


/**
 * getLength - returns the alphabet
 * @n: the number of rimes to print '\'
 * Description: The description
 * Return: 0
*/
int getLength(char *n)
{
	int i, length;

	i = 0;
	length = 0;
	while (n[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
/**
 * reverseString - returns the alphabet
 * @n: the number of rimes to print '\'
 * Description: The description
 * Return: 0
*/
char *reverseString(char *n)
{
	int i, length, temp;

	i = 0;
	length = getLength(n);
	for (i = 0; i < length / 2; i++)
	{
		temp = n[i];
		n[i] = n[length - 1 - i];
		n[length - 1 - i] = temp;
	}
	return (n);
}
/**
 * returnAddition - returns the alphabet
 * @n1: the number of rimes to print '\'
 * @n2: the number of rimes to print '\'
 * @r: the number of rimes to print '\'
 * @size_r: the number of rimes to print '\'
 * Description: The description
 * Return: 0
*/
char *returnAddition(char *n1, char *n2, char *r, int size_r)
{
	int i, arg1, arg2, addRes, carry, sum, n1Length, n2Length;

	n1Length = getLength(n1);
	n2Length = getLength(n2);
	carry = 0;
	for (i = 0; i < n2Length; i++)
	{
		arg1 = n1[n1Length - 1 - i] - '0';
		arg2 = n2[n2Length - 1 - i] - '0';
		addRes = arg1 + arg2 + carry;
		sum = addRes % 10;
		carry = addRes / 10;
		r[i] = sum + '0';
	}
	for (i = n2Length; i < size_r && i < n1Length; i++)
	{
		if (carry != 0)
		{
			addRes = n1[n1Length - 1 - i] - '0' + carry;
			sum = addRes % 10;
			carry = addRes / 10;
			r[i] = sum + '0';
		}
		else
		{
			r[i] = n1[n1Length - 1 - i];
		}
	}
	if (carry != 0)
	{
		if (i + 1 == size_r)
			return (0);
		r[i] = carry + '0';
		r[i + 1] = '\0';
	}
	else
		r[i] = '\0';
	return (r);
}

/**
 * returnAddition2 - returns the alphabet
 * @n1: the number of rimes to print '\'
 * @n2: the number of rimes to print '\'
 * @r: the number of rimes to print '\'
 * @size_r: the number of rimes to print '\'
 * Description: The description
 * Return: 0
*/
char *returnAddition2(char *n1, char *n2, char *r, int size_r)
{
	int i, arg1, arg2, addRes, carry, sum, n1Length, n2Length;

	n1Length = getLength(n1);
	n2Length = getLength(n2);
	carry = 0;
	for (i = 0; i < n2Length; i++)
	{
		arg1 = n1[n1Length - 1 - i] - '0';
		arg2 = n2[n2Length - 1 - i] - '0';
		addRes = arg1 + arg2 + carry;
		sum = addRes % 10;
		carry = addRes / 10;
		r[i] = sum + '0';
	}
	if (carry != 0)
	{
		if (i + 1 == size_r)
			return (0);
		r[i] = carry + '0';
		r[i + 1] = '\0';
	}
	else
		r[i] = '\0';
	return (r);
}
/**
 * infinite_add - returns the alphabet
 * @n1: the number of rimes to print '\'
 * @n2: the number of rimes to print '\'
 * @r: the number of rimes to print '\'
 * @size_r: the number of rimes to print '\'
 * Description: The description
 * Return: 0
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1Length, n2Length;

	n1Length = getLength(n1);
	n2Length = getLength(n2);
	if (n1Length > size_r || n2Length > size_r)
		return (0);
	if (n1Length > n2Length)
	{
		r = returnAddition(n1, n2, r, size_r);
	}
	else if (n2Length > n1Length)
	{
		r = returnAddition(n2, n1, r, size_r);
	}
	else
	{
		r = returnAddition2(n2, n1, r, size_r);
	}
	if (r != 0)
		r = reverseString(r);
	return (r);
}
