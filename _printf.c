#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 */
int _printf(const char *format, ...)
{
	int count = 0;
	int num;
	char intString[10];
	char *str;
	va_list list;

	va_start(list, format);

	while(*format)
	{
		if(*format == '%')
		{
			format++;
			switch (*format)
			{
				case 's':
					str = va_arg(list, char*);
					putstr(str);
					format++;
					count += _strlen(str);
					break;

				case 'c':
					_putchar(va_arg(list, int));
					break;

				case 'i':
					num = va_arg(list, int);

					if (num < 0)
						putstr("-");
					_itoa(num, intString, 10);
					putstr(intString);
					format++;
					count += strlen(intString);
					break;

				case 'd':
					num = va_arg(list, int);
					if (num < 0)
						putstr("-");
					_itoa(num, intString, 10);
					putstr(intString);
					format++;
					count += strlen(intString);
					break;

				case 'b':
					num = va_arg(list, int);
					if (num < 0)
						putstr("-");
					_itoa(num, intString, 2);
					putstr(intString);
					format++;
					count += strlen(intString);
					break;

				case 'u':
					num = va_arg(list, int);
					_itoa(num, intString, 10);
					putstr(intString);
					format++;
					count += strlen(intString);
					break;

				case 'o':
					num = va_arg(list, int);
					if (num < 0)
						putstr("-");
					_itoa(num, intString, 10);
					putstr(intString);
					format++;
					count += strlen(intString);
					break;

				case '%':
					_putchar('%');
					format++;
					count++;
					break;

				case '\0':
					break;

				default:
					_putchar('%');
					_putchar(*format);
					format++;
					count += 2;
			}
		}
		else
		{
			_putchar(*format);
			format++;
			count++;
		}

	}

	va_end(list);

	return (count);
}

