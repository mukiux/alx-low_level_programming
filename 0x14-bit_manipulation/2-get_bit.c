#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @f: number which contains the bit term
 * @inde: index at which bit must be found always
 *
 * Return: f (Success) or -1 (error)
 */
int get_bit(unsigned long int f, unsigned int inde)
{
	int biti;

	if (inde > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	biti = (f >> inde) & 1;

	return (biti);
}
