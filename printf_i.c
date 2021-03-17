#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_i - prints int
 * @print: integer
 * Return: digito
 **/
int print_i(va_list print)
{
	int numero, digito = 1; /** digito que cuenta el numero de caracteres**/
	int aux_num, cambios = 0;
	char p;

	numero = va_arg(print, int);
	if (numero < 0)
	{
		p = '-';
		_putchar(p);
    cambios++;
		aux_num = -numero;
	}
	else
		aux_num = numero;
	while (aux_num / digito >= 10)
	{
		digito *= 10; /** cumple la funcion de exponente base 10**/
	}
	while (digito != 0)
	{
		p = (aux_num / digito) + 48;
		_putchar(p);
   cambios++;
		aux_num = aux_num % digito; /** actualizacion**/
		digito = digito / 10;		/** actualizacion**/
	}
  
	return (cambios);
}
