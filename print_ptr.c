#include "main.h"
/**
  * print_ptr - pointer to argument
  * @args: arguments
  * Return: y+2
  */
int print_ptr(va_list args)
{
	void *a;
	char *str = "(nil)";
	long int x;
	int y;
	int i;

	a = va_arg(args, void*);
	if (a == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			my_putchar(str[i]);
		}
		return (i);
	}

	x = (unsigned long int)a;
	my_putchar('0');
	my_putchar('x');
	y = print_hexa(x);
	return (y + 2);
}
