#include "main.h"
/**
  * _strlenc - finds length of a string but for constant characters
  * @s: string
  * Return: integer
  */
int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
