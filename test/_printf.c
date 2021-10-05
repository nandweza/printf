#include "main.h"

/**
 * _printf - is a function that produces output according to a format
 * @format: is a character string
 * @char: character
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int(*pfunc)(va_list/*_flags **/);
	const char *p;
	va_list list;

	register int count = 0;

	va_start(list, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			/**while (get_flag(*p, &flags))
				p++;
			pfunc = get_print(*p);
			count += (pfunc)
				? pfunc(list, &flags)
				: _printf("%%%c", *p);
			*/}else
			count += _putchar(*p);
	}
	_putchar(-1);
	va_end(list);
	return (count);
}
