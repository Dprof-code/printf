#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int count1, count2, len1, len2 = 0;

	char name[] = "Damola";

	count1 = printf("%s\n", name);
	count2 = _printf("%s\n", name);

	printf("%d\n%d\n", count1, count2);

	len1 = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");

	printf("%d\n%d\n", len1, len2);

	return (0);
}
