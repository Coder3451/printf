#include "main.h"

/**
 * _printf - produces output according to format
 * @format: character string
 *
 * Return: chnum
 */


int _printf(const char *format, ...)
{
	int len = strlen(format);
	int chnum = 0;
	int i;
	va_list args;

	va_start(args, format);

	for (i = 0; i < len; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				wchar((char)va_arg(args, int), &chnum);
			}
			else if (format[i] == 's')
			{
				wstring(va_arg(args, char *), &chnum);
			}
			else if (format[i] == '%')
			{
				wchar('%', &chnum);
				wchar(format[i], &chnum);
			}
			else if (format[i] == 'd' ||  format[i] == 'i')
			{
				wchar(va_arg(args, int), &chnum);
			}
		}
		else
		{
			wchar(format[i], &chnum);
		}
	}
	va_end(args);
	return (chnum);
}
