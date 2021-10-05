#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
char* _itoa(int value, char* buffer, int base);
int _strlen(char* str);
int putstr(char* str);

#endif
