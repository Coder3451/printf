#include "main.h"
/**
 * _printf - produces output according to format
 * @format: character string
 * Return: chnum
 */
int _printf(const char *format, ...)
{
	int len = strlen(format);
	int i, chnum = 0;
	va_list args;

	va_start(args, format);
	for (i = 0; i < len; i++)
	{
		if (format[i] == '%')
		{
			char nextchar = format[++i];

			switch (nextchar)
			{
				case 'c':
					wchar((char)va_arg(args, int), &chnum);
					break;
				case 's':
					wstring(va_arg(args, char *), &chnum);
					break;
				case 'd' || 'i':
					wnum(va_arg(args, int), &chnum);
					break;
				case '%':
					wchar('%', &chnum);
					break;
				case 'b':
					wbinary(va_arg(args, unsigned int), &chnum);
					break;
				default:
					wchar('%', &chnum);
					wchar(format[i], &chnum);
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
