#include "main.h"
#include <stdarg.h>
/**
 * _printf - print function
 * @format: a character string composing of zero or directives
 * Return: print
*/
int _printf(const char *format, ...)
{
	int print = 0;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			print++;
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				write(1, &c, 1);
				print++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);
				int str_len = 0;

				while (str[str_len] != '\0')
					str_len++;
				write(1, str, str_len);
				print += str_len;
			}
		}
		format++;
	}
	va_end(args);
	return (print);
}
