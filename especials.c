#include "holberton.h"
/**
 * _printbi - this function prints a number in base 2.
 * @a: the number.
 * @b: the counter.
 */
void _printbi(int a, int *b)
{
	int c[1000], d, e;

	for (d = 0; a > 0; d++)
	{
		c[d] = a % 2;
		a = a / 2;
	}
	e = d - 1;
	for (d = e; d >= 0; d--)
	{
		_putchar(c[d] + '0');
		*b = *b + 1;
	}
}
/**
 * _printo - this function prints a number in octal base.
 * @a: the number.
 * @b: the counter.
 */
void _printo(int a, int *b)
{
	int c[1000], d, e;

	for (d = 0; a > 0; d++)
	{
		c[d] = a % 8;
		a = a / 8;
	}
	e = d - 1;
	for (d = e; d >= 0; d--)
	{
		_putchar(c[d] + '0');
		*b = *b + 1;
	}
}
/**
 * _unint - this function prints a unsigned int.
 * @a: is the number.
 * @b: counter pointer.
 */
void _unint(unsigned int a, int *b)
{
	if (a / 10)
	{
		_unint(a / 10, b);
	}
	_putchar(a % 10 + '0');
	*b = *b + 1;
}

/**
 * _printh - this function prints a numbers in hex in cap.
 * @a: this is the number.
 * @b: this is the counter.
 */
void _printh(int a, int *b)
{
	int  d, e;
	char c[1000];

	for (d = 0; a > 0; d++)
	{
		e = a % 16;
		if (e >= 10)
		{
			c[d] = (55 + e);
		}
		else
		{
			c[d] = (48 + e);
		}
		a = a / 16;
	}
	e = d - 1;
	for (d = e; d >= 0; d--)
	{
		_putchar(c[d]);
		*b = *b + 1;
	}
}

/**
 * _printhm - this function prints a numbers in hex in min.
 * @a: this is the number.
 * @b: this is the counter.
 */
void _printhm(int a, int *b)
{
	int  d, e;
	char c[1000];

	for (d = 0; a > 0; d++)
	{
		e = a % 16;
		if (e >= 10)
		{
			c[d] = (87 + e);
		}
		else
		{
			c[d] = (48 + e);
		}
		a = a / 16;
	}
	e = d - 1;
	for (d = e; d >= 0; d--)
	{
		_putchar(c[d]);
		*b = *b + 1;
	}
}
