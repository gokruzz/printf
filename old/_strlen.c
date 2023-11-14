#include "main.h"
/**
  * _strlen - length of a string
  * @str: parameter
  * Return: c
  */

int _strlen(char *str)
{
	int c = 0;

	for (c = 0; str[c] != 0; c++)
		;
	return (c);
}
