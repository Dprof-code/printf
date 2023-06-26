#include "main.h"

/**
 * handle_print - this function iterates through the format string
 * and handles the print according to the format specifier
 *
 * @format: format string
 * @fmt_list: list of format specifiers and functions
 * @arg_list: list of arguments
 * Return: number of printed characters
 */

int handle_print(const char *format, def_fmt_list fmt_list[], va_list arg_list)
{
	int i, j, ret_val, printed_chars = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; fmt_list[j].fmt != NULL; j++)
			{
				if (format[i + 1] == fmt_list[j].fmt[0])
				{
					ret_val = fmt_list[j].func(arg_list);
					if (ret_val == -1)
						return (-1);
					printed_chars += ret_val;
					break;
				}
			}
			if (fmt_list[j].fmt == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
	}

	return (printed_chars);
}
