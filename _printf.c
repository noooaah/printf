#include "main.h"
/**
 * _printf - prints output according to format
 * @format: passed string
 * Return: number of prints & -1 otherwise
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list p;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(p, format);

	count += check_spec(format, p);
	va_end(p);
	return (count);
}
