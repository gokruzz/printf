#include "main.h"
/**
 * _printf - prints to the standard output
 * @format: character or string composing of directives or zero
 *
 * Return: number of character printed
*/
int _printf(const char *format, ...)
{
	int char_count = 0;
	va_list format_lists;

	va_start(format_lists, format);

	while (*format)
	{
		if (*format != '%')
			write(1, format++, 1), chr_count++;
		else if (*format == 'c')
		{
			char c = va_arg(format_lists, int);

			write(1, &c, 1, char_count++;
		}
		else if (*format == 's')
		{
		char *str = va_arg(format_lists, char*);
		
		for ( ; *str; char_count++, str++)
		write(1, str, 1);
		}
		else if (*format == 'd' || *format == 'i')
		{
		int num = va_arg(format_lists, int);
		if (num < 0)
		write(1, " - ", 1), char_count++, num =- num;
		for ( ; num; char_count++, num / = 10)
		write(1, &"0123456789"[num % 10], 1);
		}
		format++
       }

   va_end(format_lists);
   return (char_count);
}
