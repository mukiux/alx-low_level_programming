#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: string parameter
 *
 * Return: 0 (String)
 */

int _strlen(char *s)
{
	int x;

	x = 0;
	while (*s != '\0')
	{
	x++;
	s++;
	}
	return (x);
}
