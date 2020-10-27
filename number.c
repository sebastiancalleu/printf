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
/**
 * _putchars - this function prints characters
 * @a: this is the char.
 * @b: counter pointer.
 * Return: is 0.
 */
int _putchars(char a, int *b)
{
	write(1, &a, 1);
	*b = *b + 1;
	return (0);
}
