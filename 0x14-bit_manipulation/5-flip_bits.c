#include "main.h"

unsigned int get_length(unsigned long int num);
/**
 * flip_bits -  returning the number of bits to be flipped in 'n' to give 'm'
 * @p: first number provided always
 * @q: second number provided always
 * Return: number of bits to be flipped in both numbers to make them equal
 */
unsigned int flip_bits(unsigned long int p, unsigned long int q)
{
	unsigned int i, count, length1, length3, total_length;
	int bit1, bit3;

	length1 = get_length(p);
	length3 = get_length(q);
	total_length = (length1 > length3) ? length1 : length3;

	count = 0;
	for (i = 0; i < total_length; i++)
	{
		bit1 = p & 1;
		bit3 = q & 1;
		if (bit1 != bit3)
			++count;
		p >>= 1;
		q >>= 1;
	}
	return (count);
}

/**
 * get_length - returning the number of bits in a number
 * @num: number to consider always
 *
 * Return: length of number above
 */
unsigned int get_length(unsigned long int num)
{
	unsigned int count;

	if (num == 0)
		return (1);
	for (count = 0; num != 0; ++count)
		num >>= 1;
	return (count);
}
