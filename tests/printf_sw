#include "main.h"
/**
 * _printf - produces output according to format
 * @format: character string
 * Return: chnum
 */
int _printf(const char *format, ...)
{
	const char *f = format;
	int chnum = 0;
	va_list args;

	va_start(args, format);
	while (*f != '\0')
	{
		if (*f == '%')
		{
			char nextchar = *(++f);

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
					wchar(*f, &chnum);
			}
		}
		else
		{
			wchar(*f, &chnum);
		}
		f++;
	}
	va_end(args);
	return (chnum);
}
