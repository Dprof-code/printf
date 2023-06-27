#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct def_fmt_list - defines a structure for the format specifiers and their functions
 *
 * @fmt: format specifier symbol
 * @func: function
 */

typedef struct def_fmt_list
{
	char *fmt;
	int (*func)(va_list);
} def_fmt_list;

int _printf(const char *format, ...);
int handle_print(const char *format, def_fmt_list fmt_list[], va_list arg_list);
int _putchar(char c);

/* format specifiers functions */
int print_char(va_list arg_list);
int print_string(va_list arg_list);
int print_percent(va_list arg_list);

#endif
