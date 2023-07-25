#include "main.h"

/**
 * print_octal - print number as octal
 * @n: number to print
 * Return: count of printing
 */

int print_octal(unsigned int n)
{
	int count;

	if (n > 7)
		count = print_octal(n / 8);
	return (count + print_char(n % 8 + '0'));
}
