#include "main.h"
/**
 * print_str - print string
 * @list: arguments
 * Return: total string
 */
int print_str(va_list list)
{
	int count = 0;
	char *str = va_arg(list, char*);

	if (str == NULL)
		str = "(null)";

	while (str[count] != '\0')
		count += _putchar(str[count]);

	return (count);
}
