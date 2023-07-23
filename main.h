#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int print_format(char format, va_list ap);
int print_char(int c);
int print_string(char *str);
int print_int(va_list args);
int print_dec(va_list args);

#endif
