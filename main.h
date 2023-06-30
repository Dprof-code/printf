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
int print_signed_int(va_list arg_list);
int print_unsigned_integer(va_list arg_list);
int print_binary(va_list arg_list);
int print_str_rev(va_list arg_list);
int print_rot13(va_list arg_list);
int print_custom(va_list arg_list);

/** used functions */
void print_precision(int value, int prec);
void print_non_custom(const char* c, int num);
char *itoa(int num, char *str, int base);
char *rev_str(char *str);
int _strlen(const char *str);
char *_strcpy(char *dest, const char *src);
#endif
