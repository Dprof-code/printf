#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int count1, count2, len, len2 = 0, num = 30;

	char name[] = "Damola";

	count1 = printf("%s\n", name);
	count2 = _printf("%s\n", name);

	printf("%d\n%d\n", count1, count2);

	printf("------------MAIN.C--------------\n");

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
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
	printf("Number: %03d\n", num);


	return (0);
}
