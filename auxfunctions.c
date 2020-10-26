#include "holberton.h"
/**
 *  _putchar - A function that prints a character.
 *@a: Character.
 *
 * Return: a integer.
 */

int _putchar(char a)
{
	write(1, &a, 1);
	return (0);
}

void putstring(char *str, int *b)
{
	int a;

	for(a = 0; str[a]; a++)
	{
		_putchar(str[a]);
		*b = *b + 1;
	}
}