#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int count1, count2, len, len2 = 0;
	unsigned int ui;
	char name[] = "Damola";

	count1 = printf("%s\n", name);
	count2 = _printf("%s\n", name);

	printf("%d\n%d\n", count1, count2);

	printf("------------MAIN.C--------------\n");

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("%b\n", 98);
	_printf("%r\n", "Reverse");
	_printf("%R\n", "String");
	printf("Negative:[%d]\n", -762534);
	_printf("Negative:[%d]\n", -762534);
	printf("Length: [%03d]\n", len);
	_printf("Negative:[%d]\n", -762534);
	printf("Length[%d]\n", len);
	_printf("Negative:[%d]\n", -762534);
        printf("Length[%d]\n", len);
	printf("Character:[%c]\n", 'd');
	printf("Len:[%d]\n", len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Length[%d]\n", len);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");

	return (0);
}
