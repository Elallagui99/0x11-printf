#include "main.h"
#include <unistd.h>
/**
 * print_char - print char
 * @c: char to print
 * Return: number of char printed
 */

int print_char(int c)
{
	return (write(1, &c, 1));
}
