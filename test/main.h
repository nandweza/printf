#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

int (*get_print(char s))(va_list/*_flags **/);
int _putchar(char c);
char *convert(unsigned int num, int base, int lowercase);
int _printf(const char *format, ...);

#endif
