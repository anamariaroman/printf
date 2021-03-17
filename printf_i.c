#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_i - prints int
 * @print: entire
 * Return: 1
 **/
int print_i(va_list print)
{
	int numero, digito = 1; /** digito es la variable que me cuenta el numero de digitos que tiene lo que el usuario quiere imprimir**/
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
