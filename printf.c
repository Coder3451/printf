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
			char nextchar = format[++i];

			if (nextchar == 'c')
			{
				wchar((char)va_arg(args, int), &chnum);
<<<<<<< HEAD
                        }
=======
			}
>>>>>>> 27e47f3272d3c4414129eeba03e35663b1cacb3e
			else if (nextchar == 's')
			{
				wstring(va_arg(args, char *), &chnum);
			}
			else if (nextchar  == 'd' ||  nextchar == 'i')
<<<<<<< HEAD
                        {
                                wnum(va_arg(args, int), &chnum);
                        }
                        else if (nextchar == '%')
                        {
                                wchar('%', &chnum);
                        }
                        else
                        {
                                wchar('%', &chnum);
                                wchar(format[i], &chnum);
                        }
                }
=======
			{
				wnum(va_arg(args, int), &chnum);
			}
			else if (nextchar == '%')
			{
				wchar('%', &chnum);
			}
			else
			{
				wchar('%', &chnum);
				wchar(format[i], &chnum);
			}
		}
>>>>>>> 27e47f3272d3c4414129eeba03e35663b1cacb3e
		else
                {
                        wchar(format[i], &chnum);
                }
        }
        va_end(args);
        return (chnum);
}

