#include "holberton.h"
/**
 * _printf - this function works like the printf function.
 * format - string to print.
 * Return: character count.
 */
int main(void)
{
	_printf("String:[%s]\n");
	return (0);
}
int _printf(const char *format)
{
	int a, b; /* contador de caracteres */
	char *str;
	for (a = 0; format[a] != '\0'; a++)
	{
	}
	str = malloc(sizeof(char) * a);
	for (b = 0; format[b] != '\0'; b++)
	{
		str[b] = format[b];
	}
	for (b = 0; str[b]; b++)
	{
		if (str[b - 1] == '%')
		{
			str[b] = 'h';
		}
	}
	write(1, str, a);
	free(str);
	return (a);
}
