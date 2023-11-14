#include "main.h"
/**
  * print_str - prints strings
  * @args: arguements
  * Return: len
  */
int print_str(va_list args)
{
	char *str;
	int b;
	int len;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (b = 0; b < len; b++)
		{
			my_putchar(str[b]);
		}
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (b = 0; b < len; b++)
		{
			my_putchar(str[b]);
		}
		return (len);
	}
}
