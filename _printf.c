#include "holberton.h"
#include <stdlib.h>
/**
 * print_format - our printf function
 * @format: is a %argument
 * Return: int number arguments
 */
int (*print_format(const char *format))(va_list)
{
	unsigned int i;
	pr_t sformat[] = {
		{"c", print_c},
		{"i", print_i},
		{"s", print_s},
		{"d", print_i},
		{"%", Percent_sign},
		{NULL, NULL}};

	for (i = 0; sformat[i].s != NULL; i++)
	{
		if (*(sformat[i].s) == *format)
		{
			return (sformat[i].n);
		}
	}

	return (NULL);
}
/**
 * _printf - funtion to print anything
 * @format: format
 * Return: date type int
 **/

int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		unsigned int i = 0, c = 0;

		va_list argm;

		int (*argme)(va_list);

		va_start(argm, format);
		while (format[i])
		{
			while (format[i] != '%' && format[i])
			{
				_putchar(format[i]);
				i++;
				c++;
			}
			if (!format[i])
				return (c);

			argme = print_format(&format[i + 1]);

			if (argme != NULL)
			{
				c += argme(argm);
				i = i + 2;
				continue;
			}

			if (!format[i + 1])
				return (-1);

			_putchar(format[i]);

			c++;

			if (format[i + 1] == '%')
				i = i + 2;
			else
				i++;
		}
		va_end(argm);
		return (c);
	}
	else
	{
		return (0);
	}
}
