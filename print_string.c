#include "main.h"
#include <unistd.h>
/**
 * print_string - print a string
 * @str: string to print
 * Return: number of char printed
 */

int print_string(char *str)
{
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		count += write(1, str, 1);
		++str;
	}
	return (count);
}
