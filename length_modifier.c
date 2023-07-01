#include "main.h"
/**
 * lengthmod - function that handle length modifier
 * @value: value of length
 * @width: width
 * @spec: specifier
 * @length: length mod
 * Return: void
 */
void lengthmod(int value, int width, char spec, int length)
{
	char digit;
	int base = 0, dig;
	unsigned int prec;

	if (value < 0)
	{
		_putchar('-');
		value = -value;
		width--;
	}
	switch (spec)
	{
		case 'd':
		case 'i':
		case 'u':
		base = 10;
		break;
		case 'o':
		base = 8;
		break;
		case 'x':
		case 'X':
		base = 16;
		break;
	}
	if (length == 1)
		prec = value;

	while (width > 0)
	{
		dig = prec % base;
		prec /= base;
		width--;

		if (dig < 10)
			digit = '0' + dig;
		else
		{
			if (spec == 'x')
				digit = 'a' + dig - 10;
			else if (spec == 'X')
				digit = 'A' + dig - 10;
		}
		_putchar(digit);

		if (prec == 0)
			break;
	}
	while (width > 0)
	{
		dig = value % base;
		value /= base;
		width--;

		if (dig < 10)
		{
			digit = '0' + dig;
		}
		else
		{
			if (spec == 'x')
				digit = 'a' + dig - 10;
			else if (spec == 'X')
				digit = 'A' + dig - 10;
		}
		_putchar(digit);

		if (value == 0)
			break;
	}
}
