#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct pr - Struct to a funtion pointer pr
 *
 * @s: Data
 * @n: format define
 */
typedef struct pr
{
	char *s;
	int (*n)(va_list);
} pr_t;

int _putchar(char c);
int (*print_format(const char *format))(va_list);
int _printf(const char *format, ...);
int print_c(va_list print);
int print_s(va_list print);
int Percent_sign(__attribute__((unused)) va_list print);
int print_i(va_list print);

#endif /* _HOLBERTON_H */
