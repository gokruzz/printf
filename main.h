#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
  * struct format - converts for printf
  * @spec: specifier
  * @i: function for conversion specifier
  */
typedef struct format
{
	char *spec;
	int (*i)();
} fmt;

int  _printf(const char *format, ...);
int _puts(char *c);
int my_putchar(char c);
int prints_char(char c);
int prints_str(char *str);
int print_per(void);
int print_char(va_list args);
int _strlen(char *str);
int print_str(va_list args);

#endif
