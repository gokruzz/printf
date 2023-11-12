#include "main.h"
/**
  * _puts - prints string
  * @c: string
  * Return: count
  */
int _puts(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			my_putchar(c[count]);
		}
	}
	return (count);
}
