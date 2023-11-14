#include "main.h"
/**
  * print_char - prints sprcifier c
  * @args: arguements
  * Return: 1
  */
int print_char(va_list args)
{
	char str;

	str = va_arg(args, int);
	my_putchar(str);
	return (1);
}
