#include "holberton.h"
/**
 * putstringsp - this function prints a especial string.
 * @str: the string.
 * @b: the counter.
 */
void putstringsp(char *str, int *b)
{
	int c;

	if (str == NULL)
	{
		str = "(null)";
	}
	for (c = 0; str[c]; c++)
	{
		if ((str[c] > 0 && str[c] < 32) || str[c] > 126)
		{
			_putchar('\\');
			*b = *b + 1;
			_putchar('x');
			*b = *b + 1;
			if (str[c] < 16)
			{
				_putchar('0');
				*b = *b + 1;
			}
			_printh(str[c], b);
		}
		else
		{
			_putchar(str[c]);
			*b = *b + 1;
		}
	}
}

/**
 * printrod13 - this function encrypt a script in rod13.
 * @str: the string to encrypt.
 * @b: the counter.
 */
void printrod13(char *str, int *b)
{
	char *s;
	int a, c;
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (c = 0; str[c]; c++)
	{
	}
	s = malloc(sizeof(char) * c);
	for (c = 0; str[c]; c++)
	{
		s[c] = str[c];
	}
	for (c = 0; s[c]; c++)
	{
		for (a = 0; l[a]; a++)
		{
			if (s[c] == l[a])
			{
				s[c] = n[a];
				break;
			}
		}
	}
	for (c = 0; s[c]; c++)
	{
		_putchar(s[c]);
		*b = *b + 1;
	}
	free(s);
}
