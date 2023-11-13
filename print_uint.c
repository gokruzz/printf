#include "main.h"
/**
 * print_uint - prints unsigned integer
 * @args: arguments
 *
 * Return: length of character printed
 */
int print_uint(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int temp = n;
	int count = 0;

	if (n == 0)
	{
		my_putchar('0');
		return (1);
	}

	while (temp != 0)
	{
		temp = temp / 8;
		count++;
	}

	while (count > 0)
	{
		count--;
		temp = n >> (count * 3);
		my_putchar((temp & 7) + '0');
	}
	return (count + 1);
}

