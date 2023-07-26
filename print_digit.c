#include "main.h"

/**
 * print_int - print int
 * @n: number to print
 * Return: number of number printed
 */

int print_digit(int n, int base, char format)
{
	int count = 0;
	char *sym = "0123456789abcdef";

	if (format == 'x')
		sym = "0123456789abcdef";
	else if (format == 'X')
		sym = "0123456789ABCDEF";
	if (n < 0)
	{
		print_char('-');
		return (print_digit(-n, base, format) + 1);
	}
	else if(n < base)
		return(print_char(sym[n]));
	else
	{
		count = print_digit(n / base, base, format);
		return (print_digit(n % base, base, format) + count);
	}
}
