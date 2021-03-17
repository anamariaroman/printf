#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_c - print a character
 * @print_c: list of arguments
 * Return: 1
 */
int print_c(va_list print_c)
{
	char c;

	c = (char)va_arg(print_c, int); /** cambia de tipo char a tipo int **/
	/*casteo*/
	_putchar(c);
	return (0);
}
