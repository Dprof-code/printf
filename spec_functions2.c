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

/**
 * print_unsigned_int - ptint unsigned int
 *
 * @arg_list: arguement character list to print
 * Return: number of characters printed
 */

int print_unsigned_int(va_list arg_list)
{
	int i;
	unsigned int num = va_arg(arg_list, unsigned int);
	char buffer[12];

	itoa(num, buffer, 10);

	for (i = 0; buffer[i] != '\0'; i++)
		_putchar(buffer[i]);

	return (i);
}

/**
 * print_octal - print Octal representation
 *
 * @arg_list: arguement character list to print
 * Return: number of characters printed
 */

int print_octal(va_list arg_list)
{
	int i, j;
	unsigned int num = va_arg(arg_list, unsigned int);
	char octal[100];
	int index = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		octal[index++] = (num % 8) + '0';
		num /= 8;
	}

	for (i = index - 1, j = 0; i >= 0; i--, j++)
	{
		_putchar(octal[i]);
	}

	return (j);
}
