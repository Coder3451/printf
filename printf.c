#include "main.h"

/**
 * _printf - the replica of printf
 * 
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
    int i, count = 0;
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
                count++;
            }
            else if (format[i+1] == 's')
            {
                char* s = va_arg(args, char*);
                int len = _strlen(s);
                write(1, s, len);
                i++;
                count += len;
            }
            else if (format[i] == '%')
            {
                char per = '%';
                write(1, &per, 1);
                i++;
                count++;
            }
        }
        else
        {
            write(1, &format[i], 1);
            count++;
        }
    }
    va_end(args);
    return (count);
}
