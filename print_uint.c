#include "main.h"
/**
 * print_uint - print unsigned integer
 * @n: number to print
 * Return: number of int printed
 */

int print_uint(unsigned int n)
{
	int count = 0;

	if (n < 10)
		count += print_char(n + '0');

	else
	{
		print_uint(n / 10);
		print_uint(n % 10);
	}
	return (count);
}
