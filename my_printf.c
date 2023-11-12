#include "main.h"
/**
 * _printf - Prints to standard output
 * @format: a character string composing of zero or directives
 *
 * Return: number of character printed
*/
int _printf(const char *format, ...)
{
	int print_char = 0;
	va_list fmat_lists;

	if (format == NULL)
		return (-1);
	va_start(fmat_lists, format);
	while (*format)
	{
		if (*format != '%')
		{
			print_char++;
			prints_c(*format);
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				print_char++;
				prints_c(*format);
			}
			else if (*format == 'c')
			{
				char c = va_arg(fmat_lists, int);

				print_char++;
				prints_c(c);
			}
			else if (*format == 's')
			{
				char *str = va_arg(fmat_lists, char*);

				print_char += strlen(str);
				prints_s(str);
			}
		}
		format++;
	}
	va_end(fmat_lists);
	return (print_char);
}

