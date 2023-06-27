#include "main.h"

/**
 * print_binary - convert unsigned int to binary
 *
 * @arg_list: arguement character list to print
 * Return: number of characters printed
 */

int print_binary(va_list arg_list)
{
	int i, j;
	unsigned int num = va_arg(arg_list, unsigned int);
	char buffer[32];

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; num > 0; i++)
	{
		buffer[i] = (num % 2 == 0) ? '0' : '1';
		num /= 2;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(buffer[j]);

	return (i);
}
