#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @type: Data type
 * @function: function associated
 */
typedef struct op
{
	char *type;
	int (*function)(va_list);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list v);

#endif /* _HOLBERTON_H */
