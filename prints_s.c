#include "main.h"

/**
 * prints_s - prints a string
 * @str: string to be printed
 *
 * Return: Nothing
 */
void prints_s(char *str)
{
	write(1, str, strlen(str));
}
