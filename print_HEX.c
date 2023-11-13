#include "main.h"
/**
  * print_HEX - prints an hexadecimal number
  * @args: arguments
  * Return: count
  */
int print_HEX(va_list args)
{
	int a;
	int *arr;
	int count = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (a = 0; a < count; a++)
	{
		arr[a] = tem % 16;
		tem /= 16;
	}
	for (a = count - 1; a >= 0; a--)
	{
		if (arr[a] > 9)
		{
			arr[a] = arr[a] + 7;
		}
		my_putchar(arr[a] + '0');
	}
	free(arr);
	return (count);
}
