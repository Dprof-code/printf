#include "main.h"
/**
 * print_rot13 - print string to rotation 13 position
 * @arg_list: argument passed
 * Return: always
 */

int print_rot13(va_list arg_list)
{
	char *c;
	char arr[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char rra[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
	int i;
	int n;
	int m = 0;
	int rot = 0;

	c = va_arg(arg_list, char*);
	if (c == NULL)
		c = "(null)";
	for (i = 0; c[i] != '\0'; i++)
	{
		m = 0;
		for (n = 0; arr[n] && !m; n++)
		{
			if (c[i] == arr[n])
			{
				_putchar(rra[n]);
					rot++;
				m = 1;
			}
		}
		if (m != '\0')
		{
			_putchar(c[i]);
			rot++;
		}
	}
	return (rot);
}

