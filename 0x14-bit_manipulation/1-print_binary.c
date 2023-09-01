#include "main.h"

/**
 * print_binary - converting the decimal formating number into binary
 * @s: decimal number example
 */
void print_binary(unsigned long int s)
{
	int mark;
	static int count;

	if (s == 0 && count > 0)
		return;
	else if (s == 0)
	{
		_putchar('0');
		return;
	}

	mark = (s & 1);
	++count;
	print_binary(s >>= 1);
	_putchar(mark + '0');
}
