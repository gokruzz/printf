#include "main.h"
/**
  * print_hexa - prints an hexagecimal number
  * @num: number to print
  * Return: count
  */
int print_hexa(unsigned long int num)
{
	long int a;
	long int *arr;
	long int count = 0;
	unsigned long int tem = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(long int));

	for (a = 0; a < count; a++)
	{
		arr[a] = tem % 16;
		tem = tem / 16;
	}
	for (a = count - 1; a >= 0; a--)
	{
		if (arr[a] > 9)
		{
			arr[a] = arr[a] + 39;
		}
		my_putchar(arr[a] + '0');
	}
	free(arr);
	return (count);
}
