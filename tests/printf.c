#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * _printf - produces output according to format
 *
 * @format: character string
 *
 * Return: chnum
 */


int _printf(const char *format, ...)
{

	int ln = strlen(format);
	int chnum = 0;
	int i;
	va_list args;

	va_start(args, format);

	for (i = 0; i < ln; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				char c = (char) va_arg(args, int);
				write(1, &c, 1);
				chnum++;
			}
			else if (format[i] == 's')
			{
				char *s = va_arg (args, char *);
				int strln = strlen(s);
				write(1, s, strln);
				chnum = chnum + strln;
			}
			else if (format[i] == '%')
			{
				char c = '%';
				write(1, &c, 1);
				chnum++;		
			}
			else
			{
				char c1 = '%';
				char c2 = format[i];
				write(1, &c1, 1);
				write(1, &c2, 1);
				chnum = chnum + 2;
			}
		}
		else 
		{
			write(1, &format[i], 1);
			chnum++;
		}
	}
	va_end(args);
	return (chnum);
}
