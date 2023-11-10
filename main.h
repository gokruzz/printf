#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/* Print Function */
int _printf(const char *format, ...);
/* Function for non-custom conversion specifiers */
int handle_flags(const char *format, int *a);
int handle_width(const char *format, int *a, va_list list);
int handle_precision(const char *format, int *a, va_list list);
int handle_size(const char *format, int *a);

#endif
