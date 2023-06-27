#include "main.h"

/**
 * itoa - converts an integer to a string
 *
 * @num: integer number
 * @str: character array to store the resulting string
 * @base: conversion base
 * Return: converted string
 */

char *itoa(int num, char *str, int base)
{
	int is_negative = 0;
	char *ptr;

	if (base < 2 || base > 36)
	{
		*str = '\0';

		return (str);
	}

	if (num == 0)
	{
		*str++ = '0';
		*str = '\0';

		return (str);
	}

	if (num < 0 && base == 10)
	{
		is_negative = 1;
		num = -num;
	}

	ptr = str;

	while (num != 0)
	{
		int remainder = num % base;
		*ptr++ = (remainder < 10) ? remainder + '0' : remainder - 10 + 'A';
		num /= base;
	}

	if (is_negative)
		*ptr++ = '-';
	*ptr = '\0';

	str = rev_str(str);

	return (str);
}

/**
 * rev_str - reverses a string
 *
 * @str: string to reverse
 * Return: reversed string
 */

char *rev_str(char *str)
{
	int i, j;
	int len = _strlen(str);
	char temp;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}

	return (str);
}

/**
 * _strlen - counts the length of a given string
 *
 * @str: string
 * Return: length of string
 */

int _strlen(const char *str)
{
	int length;

	length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * _strcpy - copies a string from a source to a destination
 *
 * @dest: destination
 * @src: source
 * Return: copied string
 */

char *_strcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
