#include "main.h"
/**
 * spec_handle - fucntion to handle conversion specifier
 * @specifier: character string
 * @args: list list of arguments
 * @chnum: couts printed
 *
 * Return: void
 */
void spec_handle(char specifier, va_list args, int *chnum)
{
	switch (specifier)
	{
		case 'c':
			wchar((char)va_arg(args, int), chnum);
			break;
		case 's':
			wstring(va_arg(args, char *), chnum);
			break;
		case 'd':
			wnum(va_arg(args, int), chnum);
			break;
		case 'i':
			wnum(va_arg(args, int), chnum);
			break;
		case '%':
			wchar('%', chnum);
			break;
		case 'b':
			wbinary(va_arg(args, unsigned int), chnum);
			break;
		case 'u':
			wuns(va_arg(args, unsigned int), chnum);
			break;
		case 'x':
			whexadec(va_arg(args, unsigned int), chnum, 0);
			break;
		case 'X':
			whexadec(va_arg(args, unsigned int), chnum, 1);
			break;
		case 'o':
			woctal(va_arg(args, unsigned int), chnum);
			break;
		default:
			wchar('%', chnum);
			wchar(specifier, chnum);
	}
}
