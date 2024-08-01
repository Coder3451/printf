#include "main.h"

/**
 * whexadec - Writes an unsigned integer as a hexadecimal number
 * @num: input number
 * @chnum: counts printed
 * @upper: checks for uppercase
 *
 * Return: void
 */

void whexadec(unsigned int num, int *chnum, int upper)
{
	char buffer[50];
	int ln = 0;
	char off;

	if (upper)
	{
		off = 'A' - 10;
	}
	else
	{
		off = 'a' - 10;
	}
	if (num == 0)
	{
		buffer[ln++] = '0';
	}
	else
	{
		while (num > 0)
		{
			int d = num % 16;

			if (d < 10)
			{
				buffer[ln++] = d + '0';
			}
			else
			{
				buffer[ln++] = d + off;
			}

			num = num / 16;
		}
	}
	while (--ln >= 0)
	{
		wchar(buffer[ln], chnum);
	}
}
