#include "main.h"

/**
 * print_octal - prints an unsigned integer in octal
 * @args: arguments
 *
 * Return: the number of character to be printed
 */
int print_octal(va_list args)
{
	int o;
	int *arr;
	int len = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		len++;
	}
	len++;
	arr = malloc(len * sizeof(int));

	for (o = 0; o < len; o++)
	{
		arr[o] = temp % 8;
		temp /= 8;
	}
	for (o = len - 1; o >= 0; o--)
	{
		my_putchar(arr[o] + '0');
	}
	free(arr);
	return (len);
}
