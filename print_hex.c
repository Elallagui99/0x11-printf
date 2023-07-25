#include "main.h"

/**
 * print_hex - print int
 * @n: number to print
 * @format: flages to print in order from
 * Return: number of number printed
 */

int print_hex(unsigned int n, char format)
{
	int count;
	char *sym;

	if (format == 'x')
		sym = "0123456789abcdef";
	else if (format == 'X')
		sym = "0123456789ABCDEF";
	if (n < 16)
		return (print_char(sym[n]));
	else
	{
		count = print_hex(n / 16, format);
		return (count + print_hex(n % 16, format));
	}
}
