#include "main.h"
/**
  * _strlen - length of a string
  * @str: parameter
  * Return: c
  */

int _strlen(char *str)
{
	int c = 0;

	while (*str++)
	{
		c++;
	}

	return (c);
}
