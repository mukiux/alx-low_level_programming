#include "main.h"

/**
 * binary_to_uint - convert the binary number to a decimal
 * @k: pointing to a string of 0's and 1's
 * Return: decimal format of the binary all the time
 */
unsigned int binary_to_uint(const char *k)
{
	unsigned int deci = 0; /* deci is a variable to hold the decimal format */

	if (k == NULL)
		return (0);

	while (*k)
	{
		if (*k == '1')
			deci = (deci << 1) | 1;
		else if (*k == '0')
			deci <<= 1;
		else
			return (0);
		++k;
	}

	return (deci);
}

