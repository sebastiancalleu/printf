#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _number - this function prints numbers.
 * @a: is the number.
 * @b: counter pointer.
 */
void _number(int a, int *b)
{
	int c;

	if (a < 0)
	{
		c = -a;
		_putchar('-');
		*b = *b + 1;
	}
	else
		c = a;
	if (c / 10)
	{
		_number(c / 10, b);
	}
	_putchar(c % 10 + '0');
	*b = *b + 1;
}