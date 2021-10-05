#include "main.h"

/**
 * _strlen - Generates length of a string.
 * @s: String.
 * Return: String length.
 */
int _strlen(char* str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

