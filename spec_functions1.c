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
