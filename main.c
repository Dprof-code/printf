#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int count1, count2 = 0;
	count1 = _printf("c\n");
	count2 = printf("c\n");

	printf("%d\n%d\n", count1, count2);
	return (0);
}
