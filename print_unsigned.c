#include "main.h"
/**
 * print_uint - prints an unsigned integer in decimal
 * @args: the unsigned integer to print
 *
 * Return: the number of characters printed
 */
int print_uint(va_list args)
{
	unsigned int u = va_arg(args, unsigned int);
	int len = 0;

	while (u > 0)
	{
		my_putchar('0' + (u % 10));
		u /= 10;
		len++;
	}
	return (len);
}

/**
 * print_octal - prints an unsigned integer in octal
 * @args: the unsigned integer to print
 *
 * Return: the number of characters printed
 */
int print_octal(va_list args)
{
	unsigned int o = va_arg(args, unsigned int);
	int len = 0;

	while (o > 0)
	{
		my_putchar('0' + (o % 8));
		o /= 8;
		len++;
	}
	return (len);
}

/**
 * print_hexa - prints an unsigned integer in headecimal
 * @args: the unsigned integer to print
 *
 * Return: the number nof characters printed
 */
int print_hexa(va_list args)
{
	unsigned int h = va_arg(args, unsigned int);
	int len = 0;

	while (h > 0)
	{
		unsigned int num = h % 16;

		if (num < 10)
		{
			my_putchar('0' + num);
		}
		else
		{
			my_putchar('a' + num - 10);
		}
		h /= 16;
		len++;
	}
	return (len);
}
