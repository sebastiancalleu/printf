#include "holberton.h"
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
	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			_putchar(format[a]);
			b++;
		}
		else
		{
			switch (format[a + 1])
			{
			case 'c':
				_putchar((char) va_arg(list, int));
				a++;
				b++;
				break;
			case 's':
				putstring(va_arg(list, char *), &b);
				a++;
				break;
			case '%':
				_putchar('%');
				b++;
				a++;
				break;
			}
		}

	}
	printf("%d\n", b);
	va_end(list);
	return (b);
}
