#include "main.h"

/**
 * _printf- produces output according to a format
 *
 * @format: format, string of characters to be outputted
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int chars_count;

	def_fmt_list fmt_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_signed_int},
		{"i", print_unsigned_integer},
		{"b", print_binary},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	chars_count = handle_print(format, fmt_list, arg_list);

	va_end(arg_list);

	return (chars_count);
}
