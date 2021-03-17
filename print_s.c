#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_s - prints the string, char by char
 * @print_s: list of arguments, va_list
 * Return: the number of printed chars, int
 */
int print_s(va_list print_s)
{
	int i;
	char *str = va_arg(print_s, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}
