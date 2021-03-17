#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_i - prints int
 * @print: integer
 * Return: 1
 **/
int print_i(va_list print)
{
	int numero, digito = 1; /** digito que cuenta el numero de caracteres**/
	unsigned int aux_num;
	char p;

	numero = va_arg(print, int);
	if (numero < 0)
	{
		p = '-';
		_putchar(p);
		aux_num = numero * -1;
	}
	else
		aux_num = numero;
	while (aux_num / digito >= 10)
	{
		digito *= 10; /** cumple la funcion de exponente base 10**/
	}
	while (digito != 0)
	{
		p = aux_num / digito + 48;
		_putchar(p);
		aux_num = aux_num % digito; /** actualizacion**/
		digito = digito / 10;		/** actualizacion**/
	}
	return (p);
}
