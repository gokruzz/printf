#include "main.h"

/**
 * print_custom - prints a sting with special formatting
 * @args: arguments
 *
 * Return: number of characters printed
 */
int print_custom(va_list args)
{
	char *str;
	int i, count = 0;
	int a;

	str =  va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			my_putchar('\\');
			my_putchar('x');
			count = count + 2;
			a = str[i];
			if (a < 16)
			{
				my_putchar('0');
				count++;
			}

			count = count + print_HEXA(a);
		}
		else
		{
			my_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
