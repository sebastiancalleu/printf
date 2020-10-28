#include "holberton.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
void putstringsp(char *, int *);
void printrod13(char *, int *);
/**
 * _printf - this function works like the printf function.
 * @format: string to print.
 * Return: character count.
 */
int _printf(const char *format, ...)
{
	int a, b = 0;

	va_list(list);

	va_start(list, format);
	if (!format || (format[0] == '%' && _strlen(format) == 1))
		return (-1);
	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			_putchars(format[a], &b);
		}
		else
		{
			switch (format[a + 1])
			{
			case 'c':
				_putcharp((char) va_arg(list, int), &a, &b);
				break;
			case 's':
				putstring(va_arg(list, char *), &b, &a);
				break;
			case 'i':
			case 'd':
				_number(va_arg(list, int), &b);
				a++;
				break;
			case '%':
				_printd(&a, &b);
				break;
			case 'b':
				_printbi(va_arg(list, int), &b);
				a++;
				break;
			case 'o':
				_printo(va_arg(list, int), &b);
				a++;
				break;
			case 'u':
				_unint(va_arg(list, unsigned int), &b);
				a++;
				break;
			case 'X':
				_printh(va_arg(list, int), &b);
				a++;
				break;
			case 'x':
				_printhm(va_arg(list, int), &b);
				a++;
				break;
			case 'S':
				putstringsp(va_arg(list, char *), &b);
				a++;
				break;
			case 'R':
				printrod13(va_arg(list, char *), &b);
				a++;
				break;
			default:
				_putchars('%', &b);
				break;
			}
		}
	}
	va_end(list);
	return (b);
}
