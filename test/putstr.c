#include "main.h"
#include <unistd.h>

/**
 * putstr - Prints out a string.
 * @str: String to be printed out.
 * Return: On success - 1.
 * On error, -1.
 */
int putstr(char* str)
{
	int length;
	length = _strlen(str);

	return (write(1, str, length));
}

