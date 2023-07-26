#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int check_flags(char format, va_list ap);
int print_char(int c);
int print_string(char *str);
int print_int(long int n);
int print_hex(unsigned int num, char format);
int print_uint(unsigned int n);
int print_octal(unsigned int n);
int print_add(void *add);
int print_binary(unsigned int num);

#endif
