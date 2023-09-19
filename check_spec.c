#include "main.h"
/**
 * check_spec - check the next specifier
 * @format: string
 * @list: arguments
 * Return: number of prints
 **/
int check_spec(const char *format, va_list list)
{
	int count = 0, i = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				count += _putchar('%');
			else if (format[i] == 'c')
			{
				count += _putchar(va_arg(list, int));
				if (count == -1)
					return (-1);
			}
			else if (format[i] == 's')
			{
				count += print_str(list);
				if (count == -1)
					return (-1);
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				count += print_int(list);
				if (count == -1)
					return (-1);
			}
			else
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		else
			count += _putchar(format[i]);
		i++;
		}
	return (count);
}
