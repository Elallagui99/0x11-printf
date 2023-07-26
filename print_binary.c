#include "main.h"

/**
 * print_binary - print number in binary
 * @num: number to print
 * Return: number of char printed
 */

int print_binary(unsigned int num)
{
	int count;

	if (num > 1)
		count = print_binary(num / 2);
	return (count + print_char(num % 2) + '0');
}
