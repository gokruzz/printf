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
			/* Handle c & s specifiers */
			switch (*++format)
			{
				case 'c':
					print += fprintf(stdout, "%c", va_arg(args, int));
					break;
				case 's':
					print += fprintf(stdout, "%s", va_arg(args, char*));
					break;
				default:
					/* Handle unknown format specifiers */
					putchar('%');
					write(1, format, 1);
					print += 2;
					break;
			}
		}
		format++;
	}

	va_end(args);
	return (print);
}
