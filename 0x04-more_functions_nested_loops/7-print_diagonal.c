#include "main.h"

/**
* print_diagonal - prints diagonal line on the terminal
*@n: numbers of lines and columns
* Return: none
**/

void print_diagonal(int n)
{
	int k, c;

	for (k = 0; k < n; k++)
	{
		for (c = 0; c <= k; c++)
		{
			if (c != k)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}

		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
