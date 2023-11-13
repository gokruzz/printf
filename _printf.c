#include "main.h"
/**
 * _printf - print function
 * @format: a character string composing of zero or directives
 * Return: len
*/
int _printf(const char *format, ...)
{
	fmt m[] = {
		{"%c", print_char}, {"%s", print_str}, {"%%", print_per},
		{"%i", print_int}, {"%d", print_dec}, {"%b", print_b}
	};

	va_list args;
	int k = 0, l, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[k] != '\0')
	{
		l = 5;
		while (l >= 0)
		{
			if (m[l].spec[0] == format[k] && m[l].spec[1] == format[k + 1])
			{
				len += m[l].i(args);
				k = k + 2;
				goto Here;
			}
			l--;
		}
		my_putchar(format[k]);
		k++;
		len++;
	}
	va_end(args);
	return (len);
}
