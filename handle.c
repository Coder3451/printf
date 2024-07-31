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
		case 'd' || 'i':
			wnum(va_arg(args, int), chnum);
			break;
		case '%':
			wchar('%', chnum);
			break;
		case 'b':
			wbinary(va_arg(args, unsigned int), chnum);
			break;
		default:
			wchar('%', chnum);
			wchar(specifier, chnum);
	}
}
