#include "main.h"

/**
 * _printf - ...
 * @format: a character string composing of zero or directives
 * 
 * Return: number of character printed
*/

int _printf(const char *format, ...)
{

    int print_char;
    print_char = 0;

    va_list fmats;
     
    if (format == NULL)
    return (-1);

    va_start(fmats, format);

    
    while (*format)
    {
        if (*format != '%')
        {
            write(1, format, 1);
            print_char++;
        }
        else
        {
            format++;
            if (*format == '\0')
            break;
            
            if (*format == '%')
            {
                write(1, format, 1);
                print_char++;
            }
            else if (*format == 'c')
            {
                char c = va_arg(fmats, int);
                write(1, &c, 1);
                print_char++;
            }
            else if (*format == 's')
            {
                char *str = va_arg(fmats, char*);
                int str_len = 0;
                
                while (str[str_len] != '\0')
                str_len++;
                
                write(1, str, str_len);
                print_char += str_len;
            }

        }
        format++;
    }
    va_end(fmats);
    return print_char;
}

int main()
{
    _printf("Hello World");
    _printf("I am %s years old", "Nneka");
    return 0;
}

