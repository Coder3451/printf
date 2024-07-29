#include "main.h"

/**
 * _printf - the replica of printf
 * 
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
    int i;
    va_list args;
    va_start(args, format);
    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            if (format[i+1] == 'c')
            {
                int c = va_arg(args, int);
                write (1, &c, 1);
                i++;
            }
            else if (format[i+1] == 's')
            {
                char* s = va_arg(args, char*);
                write(1, s, _strlen(s));
                i++;
            }
            else if (format[i+1] == '%')
            {
                char per = '%';
                write(1, &per, 1);
                i++;
            }
            else
            {
                int j;
		char *error = "invalid specifier";
                for (j = 0; error[j] != '\0'; i++)
                {
                    write(1, &error[j], 1);
                    i++;
                }
            }
        }
        else
        {
            write(1, &format[i], 1);
        }
    }
    return i;
}
