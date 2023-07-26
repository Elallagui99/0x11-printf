#include "main.h"

/**
 * print_add - print address
 * @add: address to print
 * Return: count printed
 */
int print_add(void *add)
{
	int count;
	long unsigned int p;

	p = (long unsigned int)add;
	count = print_string("0x");
	count += print_hex(p, 'x');
	return (count);
}
