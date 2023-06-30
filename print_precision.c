#include "main.h"
/**
 * print_precision - function that calculate divisor
 * by multiplying 10 precision times
 * @value: value of interger
 * @prec: precision
 * Return: void
 */
void print_precision(int value, int prec)
{
	char digit;
	int i, div = 1, inT, dec;

	if (value < 0)
	{
		_putchar('-');
		value = -value;
	}
	for (i = 0; i < prec; i++)
	div *= 10;

	inT = value / div;
	while (div > 1)
	{
		digit = '0' + inT % 10;
		_putchar(digit);
		inT /= 10;
		div /= 10;
	}
	_putchar('0' + inT);
	dec = value % div;
	if (dec != 0)
	{
		_putchar('.');
	}
	for (i = 0; i < prec; i++)
	{
		dec *= 10;
		digit = '0' + dec / div;
		_putchar(digit);
		dec %= div;
	}
}
