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
struct format
{
	char *spec;
	int (*i)();
};
typedef struct format fmt;

int  _printf(const char *format, ...);
int my_putchar(char c);
int prints_char(char c);
int prints_str(char *str);
int print_per(void);
int print_char(va_list args);
int _strlen(char *str);
int print_str(va_list args);
int print_int(va_list args);
int print_dec(va_list args);
int print_b(va_list args);
int print_uint(va_list args);
int print_hexa(va_list args);
int print_octal(va_list args);
int print_custom(va_list args);

#endif
