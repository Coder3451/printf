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
	char offset;

	if (upper)
	{
		offset = 'A' - 10;
	}
	else
	{
		offset = 'a' - 10;
	}
	if (num == 0)
	{
		buffer[ln++] = '0';
	}
	while (num > 0)
	{
		int digit = num % 16;

		if (digit < 10)
		{
			buffer[ln++] = digit + '0';
		}
		else
		{
			buffer[ln++] = digit + offset;
		}

		num = num / 16;
	}
	while (--ln >= 0)
	{
		wchar(buffer[ln], chnum);
	}
}
