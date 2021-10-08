#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} _flags;

/**
 * struct  print_specifiers - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct print_specifiers
{
	char c;
	int (*f)(va_list list, _flags *f);
} spec;

int (*get_print(char s))(va_list, _flags *);
int get_flag(char s, _flags *f);
int _printf(const char *format, ...);
int _putchar(char c);
char* _itoa(int value, char* buffer, int base);
int _strlen(char* str);
int putstr(char* str);

#endif
