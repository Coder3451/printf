#include "main.h"
/**
 * _printf - produces output according to the format
 * @format: character string
 *
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
			spec_handle(*(++f), args, &chnum);
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
