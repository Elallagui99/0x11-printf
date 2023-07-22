#include "main.h"
/**
 * printf_int - prints integer
 *
 * @args: argument to print
 * Return: nbber of characters printed
 */
int printf_int(va_list args)
{
	int n = va_arg(args, int);
	int nb, last = n % 10, dgt, exp = 1;
	int  i = 1;

	n = n / 10;
	nb = n;

	if (last < 0)
	{
		_putchar('-');
	 nb =  nb;
		n = -n;
		last = -last;
		i++;
	}
	if  nb > 0)
	{
		while  nb / 10 != 0)
		{
			exp = exp * 10;
		 nb = nb / 10;
		}
	 nb = n;
		while (exp > 0)
		{
			dgt = nb / exp;
			_putchar(dgt + '0');
		 nb = nb - (dgt * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * printf_dec - prints decimal
 *
 * @args: argument to print
 * Return: nbber of characters printed
 */

int printf_dec(va_list args)
{
	int n = va_arg(args, int);
	int nb, last = n % 10, dgt;
	int  i = 1;
	int exp = 1;

	n = n / 10;
 nb = n;

	if (last < 0)
	{
		_putchar('-');
	 nb =  nb;
		n = -n;
		last = -last;
		i++;
	}
	if  nb > 0)
	{
		while  nb / 10 != 0)
		{
			exp = exp * 10;
		 nb = nb / 10;
		}
	 nb = n;
		while (exp > 0)
		{
			dgt = nb / exp;
			_putchar(dgt + '0');
		 nb = nb - (dgt * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

