#include "main.h"
/**
 * print_uint - prints unsigned integer
 * @args: arguments
 *
 * Return: length of character printed
 */
int print_uint(va_list args)
{
	unsigned int u = va_arg(args, unsigned int);
	int num, end = u % 10, a, e = 1;
	int i = 1;

	u = u / 10;
	num = u;

	if (end < 0)
	{
		my_putchar('-');
		num = -num;
		u = -u;
		end = -end;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			e = e * 10;
			num = num / 10;
		}
		num = u;
		while (e > 0)
		{
			a = num / e;
			my_putchar(a + '0');
			num = num - (a * e);
			e = e / 10;
			i++;
		}

	}
	my_putchar(end + '0');
	return (i);
}
