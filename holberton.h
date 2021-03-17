#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct pr - Struct pr
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
int print_c(va_list print_c);
int print_s(va_list print_s);
int print_i(va_list print_i);
/**
 * Percent_sign - prints percent symbol
 **/
int Percent_sign(__attribute__((unused)) va_list Percent)



#endif /* _HOLBERTON_H */
