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
/**
 * putstring - this function prints a string.
 * @str: this is the string.
 * @b: this is the character counter.
 */
void putstring(char *str, int *b)
{
	int a;
	if (str == NULL)
	{
		str = "(null)";
	}
	for (a = 0; str[a]; a++)
	{
		_putchar(str[a]);
		*b = *b + 1;
	}
}

