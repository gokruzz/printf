#include "main.h"
/**
  * my_putchar - prints a character
  * @c: character
  * Return: 1
  */
int my_putchar(char c)
{
	return (write(1, &c, 1));
}
