#include "main.h"
/**
 * _printf - print function
 * @format: a character string composing of zero or directives
 * Return: count
*/
int _printf(const char *format, ...)
{
	int b, str_count, count = 0;
	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	for (b = 0; format[b] != '\0'; b++)
	{
		if (format[b] != '%')
		{
			my_putchar(format[b]);
		}
		else if (format[b + 1] == 'c')
		{
			my_putchar(va_arg(args, int));
			b++;
		}
		else if (format[b + 1] == 's')
		{
			str_count = _puts(va_arg(args, char *));
			b++;
			count += (str_count - 1);
		}
		else if (format[b + 1] == '%')
		{
			my_putchar('%');
		}
		count += 1;
	}
	va_end(args);
	return (count);
}
