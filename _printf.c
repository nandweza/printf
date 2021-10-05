#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - is a function that produces output according to a format
 * @format: is a character string
 * @char: character
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	char *traverse;
	unsigned int i;
	char *str;

	va_list list;

	va_start(list, format);
	for (traverse = format; traverse != '\0'; traverse++)
	{
		while (*traverse != '%')
		{
			_putchar(*traverse);
				traverse++;
		}
		traverse++;

		switch(*traverse)
		{
		case 'c':
			i = va_arg(list, int);
			_putchar(i);
			break;
		case 's':
			str = va_arg(list, char *str);
			puts(str);
			break;
		}
	}
	va_end(list);

	_print("\n");

	return (0);
}
