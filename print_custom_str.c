#include "main.h"

int print_custom_recur(unsigned int num);

/**
 * print_custom - prints a sting with special formatting
 * @args: arguments
 *
 * Return: number of characters printed
 */
int print_custom(va_list args)
{
	char *str =  va_arg(args, char *);
	int count = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			my_putchar('\\');
			my_putchar('x');
			count += 2;

			if (*str < 16)
			{
				my_putchar('0');
				count++;
			}

			count += print_custom_recur(*str);
		}
		else
		{
			my_putchar(*str);
			count++;
		}

		str++;
	}
	return (count);

}

/**
 * print_custom_recur - recursive function to print special formats
 * @num: unsigned integer to print
 *
 * Return: number of characters to print
 */
int print_custom_recur(unsigned int num)
{
	int count = 0;

	if (num == 0)
		return (0);

	count += print_custom_recur(num / 16);

	if (num % 16 < 10)
	{
		my_putchar((num % 16) + '0');
	}
	else
	{
		my_putchar((num % 16) - 10 + 'A');
	}
	return (count + 1);
}
