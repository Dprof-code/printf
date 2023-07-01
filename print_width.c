#include "main.h"
/**
 * print_width - function to print the specified field width
 * @value: value of width
 * @width: size of width
 * Return: void
 */
void print_width(int value, int width)
{
	int i, pad, temp, digit = 1;

	if (value < 0)
	{
		_putchar('-');
		value = -value;
		width--;
	}
	temp = value;
	while (temp /= 10)
	{
		digit++;
	}
	pad = width - digit;
	for (i = 0; i < pad; i++)
	{
		_putchar(' ');
	}
	while (digit > 0)
	{
		putchar('0' + value / base10(digit - 1));
		value %= base10(digit - 1);
		digit--;
	}
}
/**
 * base10 - calling function to calculate the power of 10
 * @base: integer
 * Return: result
 */
int base10(int base)
{
	int result = 1;

	while (base--)
	result *= 10;
	return (result);
}
