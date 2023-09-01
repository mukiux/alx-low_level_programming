#include "main.h"

/**
 * clear_bit - set the opposite of the mask
 * @no: number to be set always
 * @index: position
 * Return: 1 on success, -1 on fail all the time
 */
int clear_bit(unsigned long int *no, unsigned int index)
{
	unsigned long int mass = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mass <<= index;
	*no &= ~mass;

	return (1);
}
