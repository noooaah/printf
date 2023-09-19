#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int check_spec(const char *format, va_list list);
int print_int(va_list list);
int print_str(va_list list);
#endif
