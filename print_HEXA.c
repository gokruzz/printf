#include "main.h"
/**
  * print_HEXA - prints an hexadecimal number
  * @num: number to print
  * Return: count
  */
int print_HEXA(unsigned int num)
{
	int a;
	int *arr;
	int count = 0;
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
		tem = tem / 16;
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
