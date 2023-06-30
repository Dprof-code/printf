#include "main.h"
/**
 * print_non_custom - print a non-custom conversion of Zero padding
 * @c: constant char
 * @num: integer
 * Return: always
 */
void print_non_custom(const char* c, int num)
{
	char buffer[20];
	int j, i = 0, zeropad = 0, digits = 0, temp = num, numb, index = 0;

	while (c[i] != '\0')
	{
		if (c[i] == '%' && c[i + 1] != '\0')
		{
			i++;
		}
		if (c[i] == '0')
		{
			zeropad = 1;
			i++;
		}
		if (c[i] != 'd' && c[i] != 'i' && c[i] != 'u' && c[i] != 'o' && c[i] != 'x' && c[i] != 'X')
		{
			_putchar('%');
			_putchar(zeropad ? '0' : ' ');
			_putchar(c[i]);
			i++;
			continue;
		}
		if (c[i] == 'd' || c[i] == 'i' || c[i] == 'u' || c[i] == 'o' || c[i] == 'x' || c[i] == 'X')
		{
			digits++;
			temp /= 10;
		}
		while (temp != 0);

                if (zeropad)
		{
			if (num < 0)
			putchar('-');
			for (j = 0; j < digits - (num < 0 ? 1 : 0); j++)
			{
				_putchar('0');
			}
			numb = num < 0 ? -num : num;
			while (numb > 0)
			{	
				buffer[index++] = numb % 10 + '0';
			}
			numb /= 10;
			for (j = index - 1; j >= 0; j--)
			{
				_putchar(buffer[j]);
			}
		}
		else
			_putchar(c[i]);
	}
	i++;
}
