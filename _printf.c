#include "main.h"

void print_buffer(char buffer[], int *buff_index);

/**
  * _printf - Print function
  * @format: format
  * Return: -1 or y
  */
int _printf(const char *format, ...)
{
	int a, x = 0, y = 0;
	int flags, width, precision, size, buff_index = 0;

	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
	{
		return (-1);
	}

	va_start(list, format);

	for (a =  0; format && format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			buffer[buff_index++] = format[a];
			if (buff_index == BUFF_SIZE)
			{
				print_buffer(buffer, &buff_index);
			}
			y++;
		}
		else
		{
			print_buffer(buffer, &buff_index);
			flags = handle_flags(format, &a);
			width = handle_width(format, &a, list);
			precision = handle_precision(format, &a, list);
			size = handle_size(format, &a);
			++a;
			x = handle_print(format, &a, list, buffer, flags, width, precision, size);
			if (x == -1)
			{
				return (-1);
			}
			y += x;
		}
	}
	print_buffer(buffer, &buff_index);
	va_end(list);

	return (y);
}
/**
  * print_buffer - prints content of the buffer
  * @buffer: array of chars
  * @buff_index: buffer index
  * Return: void
  */
void print_buffer(char buffer[], int *buff_index)
{
	if (*buff_index > 0)
	{
		write(1, &buffer[0], *buff_index);
	}
	*buff_index = 0;
}
