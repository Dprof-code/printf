#include "main.h"
/**
 * print_custom - implement a custom function from scratch
 * @arg_list: argument
 * Return: always
 */
int print_custom(va_list arg_list)
{
	char *p;
	int i, value, temp, width = 0, justify = 1, length = 0;

	while (*p)
	{
		if (*(p + 1) == '-')
			p += 2;
		while (*p >= '0' && *p <= '9')
		{
			width = width * 10 + (*p - '0');
			p++;
		}
		if (width < 0)
		{
			width = -width;
		}
		else
		{
			justify = 0;
		}
			value = va_arg(arg_list, int);
		if (*p == 'd' || *p == 'i')
		{
			length = 0;
			temp = value;
		}
		do
		{
			length++;
			temp /= 10;
		}
		while (temp != 0);
		if (justify)
		{
			for (i = 0; i < length; i++)
			{
				_putchar('0' + (value % 10));
			}
				value /= 10;
			for (i = length; i < width; i++)
				_putchar(' ');
		}
		else
			for (i = 0; i < width - length; i++)
				_putchar(' ');
	}
	p++;
	return (0);
}
