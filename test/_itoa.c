#include <stdio.h>
#include <stdlib.h>
/**
 * swap - Swaps two characters.
 * @x: The first character.
 * @y: The second character.
 */
void swap(char *x, char *y)
{
	char t = *x; *x = *y; *y = t;
}

/**
 * reverse - Reverse 'buffer[i...j]'.
 * @buffer: buffer to be reversed.
 * @i:
 * @j:
 * Return: Buffer
 */
char* reverse(char *buffer, int i, int j)
{
	while (i < j)
	{
		swap(&buffer[i++], &buffer[j--]);
	}
	return (buffer);
}

/**
 * _itoa - Converts input number to it's
 * corresponding string using the specified base.
 *
 * @value: Value to be converted to a string.
 * @buffer: Array to store the resulting
 *          null-terminated string.
 *@base: Numerical base used to represent the value
 *       as a string, between 2 and 36.
 *
 * Return: Value.
 */
char* _itoa(int value, char* buffer, int base)
{
	int i = 0, n, r;
	if (base < 2 || base > 32)
		return (buffer);

	n = abs(value);

	while (n)
	{
		r = n % base;
		if (r >= 10)
			buffer[i++] = 65 + (r - 10);
		else
			buffer[i++] = 48 + r;

		n = n / base;
	}

	if (i == 0)
		buffer[i++] = '0';

	buffer[i] = '\0';

	return reverse(buffer, 0, i - 1);
}

