#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * check_flags - specifie which function to use
 * according to the format
 * @format: character string
 * @ap: list of arguments
 * Return: number of charachters printed
 */
int check_flags(const char format, va_list ap)
{
	int count = 0;

	if (format == 'c')
		count =  print_char((char)va_arg(ap, int));
	else if (format == 's')
		count = print_string(va_arg(ap, char *));
	else if (format == '%')
		count += print_char(format);
	else if (format == 'd' || format == 'i')
		count += print_int(va_arg(ap, int));
	else if (format == 'x' || format == 'X')
		count += print_hex(va_arg(ap, int), format);
	else if (format == 'u')
		count += print_uint(va_arg(ap, unsigned int));
	else if (format == 'o')
		count += print_octal(va_arg(ap, unsigned int));

	return(count);
}

/**
 * _printf - print any type of variable
 * @format: is a character string
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;

	int count = 0;

	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
			count += check_flags(*(++format), ap);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}
