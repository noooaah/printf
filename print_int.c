#include "main.h"
/**
 * print_int - prints out given number
 * using _putchar function
 * @list: list given
 * Return: number of prints
*/
int print_int(va_list list)
{
	int n, tr = 1, count = 0;
	unsigned int check;

	n = va_arg(list, int);

	if (n < 0)
	{
		count += _putchar('-');
		n *= -1;
	}

	check = n;

	while ((check / tr) > 9)
		tr *= 10;
	while (tr != 0)
	{
		count += _putchar((check / tr) + '0');
		check %= tr;
		tr /= 10;
	}
	return (count);
}
