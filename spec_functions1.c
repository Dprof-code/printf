#include "main.h"

/**
 * print_char - output a character
 *
 * @arg_list: arguement character list to print
 * Return: number of characters printed
 */

int print_char(va_list arg_list)
{
	_putchar(va_arg(arg_list, int));
	return (1);
}

/**
 * print_string - outputs a string
 * @arg_list: arguement character list to print
 * Return: number of characters printed
 */

int print_string(va_list arg_list)
{
	int i;
	char *str;

	str = va_arg(arg_list, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}

/**
 * print_percent - output percent symbol
 * @arg_list: arguement character list to print
 * Return: number of characters printed
 */

int print_percent(va_list arg_list)
{
	_putchar('%');
	(void)arg_list;

	return (1);
}

/**
 * print_signed_int - output signed integer
 * @arg_list: arguement character list to print
 * Return: number of characters printed
 */

int print_signed_int(va_list arg_list)
{
	int i;
	int num = va_arg(arg_list, int);
	char buffer[12];

	itoa(num, buffer, 10);

	for (i = 0; buffer[i] != '\0'; i++)
		_putchar(buffer[i]);

	return (i);
}

/**
 * print_unsigned_integer - output unsigned integer
 *
 * @arg_list: arguement character list to print
 * Return: number of characters printed
 */

int print_unsigned_integer(va_list arg_list)
{
	int i;
	unsigned int num = va_arg(arg_list, unsigned int);
	char buffer[12];

	itoa(num, buffer, 10);

	for (i = 0; buffer[i] != '\0'; i++)
		_putchar(buffer[i]);

	return (i);
}
