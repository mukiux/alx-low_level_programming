#include "main.h"

/**
 * get_endianness - checking the endianness
 *
 * Return: 0 if big endian, 1 if little endian all the time
 */
int get_endianness(void)
{
	unsigned int z;
	char *c;

	z = 1;
	c = (char *) &z;

	return ((int)*c);
}
