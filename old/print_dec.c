#include "main.h"
/**
  * print_dec - prints decimal
  * @args: arguments
  * Return: a
  */
int print_dec(va_list args)
{
	int i = va_arg(args, int);
	int n, end = i % 10, d, e = 1;
	int a = 1;

	i = i / 10;
	n = i;

	if (end < 0)
	{
		my_putchar('-');
		n = -n;
		i = -i;
		end = -end;
		a++;
	}
	if (n > 0)
	{
		while (n / 10 != 0)
		{
			e = e * 10;
			n = n / 10;
		}
		n = i;
		while (e > 0)
		{
			d = n / e;
			my_putchar(d + '0');
			n = n - (d * e);
			e = e / 10;
			a++;
		}
	}
	my_putchar(end + '0');
	return (a);
}
