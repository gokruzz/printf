#include "main.h"
/**
  * print_b - prints unsigned int in binary
  * @args: arguments
  * Return: c
  */
int print_b(va_list args)
{
	int f = 0;
	int c = 0;
	int a, i = 1, d;
	unsigned int n = va_arg(args, unsigned int);
	unsigned int l;

	for (a = 0; a < 32; a++)
	{
		l = ((i << (31 - a)) & n);
		if (l >> (31 - a))
		{
			f = 1;
		}
		if (f)
		{
			d = l >> (31 - a);
			my_putchar(d + 48);
			c++;
		}
	}
	if (c == 0)
	{
		c++;
		my_putchar('0');
	}
	return (c);
}
