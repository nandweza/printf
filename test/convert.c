#include "main.h"

/**
 * convert - converts numbers and base into strings
 * @num: number to input
 * @base: base to input
 * @lowercase: flag if hexa values need to be lowercase
 * Return: resulting string
 */
char *convert(unsigned int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef";
		? "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = rep[num % base];
		num /= base;
	}
	while (num != 0);

	return (ptr);
}
