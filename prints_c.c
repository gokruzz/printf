#include "main.h"
/**
 * prints_c - prints a character
 * @c: character to be printed
 *
 * Return: Nothing
 */
void prints_c(char c)
{
	write(1, &c, c);
}
