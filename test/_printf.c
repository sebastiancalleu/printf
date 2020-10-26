#include "holberton.h"
/**
 * _printf - this function works like the printf function.
 * format - string to print.
 * Return: character count.
 */
int main(void)
{
	_printf("Char: [%c] another char: %c\n", 'd', 'j');
	return (0);
}
int _printf(const char *format, ...)
{
	int a; /* contador de caracteres */
	va_list(list);
	va_start(list, format);
	for (a = 0; format[a] != '\0'; a++)
	{
		if(format[a] != '%')
			putchar(format[a]);
		else
		{
			switch (format[a + 1])
			{
			case 'c':
				putchar((char) va_arg(list, int));
				a++;
			}
		}

	}
	va_end(list);
	return (a);
}
