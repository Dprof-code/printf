#include "main.h"
/**
 * print_str_rev - function that print string in reverse
 * @arg_list: arguments
 * Return: string
 */

int print_str_rev(va_list arg_list)
{
	char *c = va_arg(arg_list, char*);
	int i;
	int n;
	int j;
	int length;

	if (c == NULL)
	{
		c = "(null)";
	}
	for (i = 0; c[i] != '\0'; i++)
		length++;
	n = length;

	for (j = n - 1; j >= 0; j--)
		_putchar(c[j]);
	return (length);

}
