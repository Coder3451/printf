#include "main.h"

/**
 * woctal - unsigned int as octal number
 * @num: input number
 * @chnum: counts printed characters
 * Return: void
 */

void woctal(unsigned int num, int *chnum)
{
	char buffer[50];
	int ln = 0;

	if (num == 0)
	{
		buffer[ln++] = '0';
	}
	else
	{
		while (num > 0)
		{
			buffer[ln++] = (num % 8) + '0';
			num = num / 8;
		}
	}
	while (--ln >= 0)
	{
		wchar(buffer[ln], chnum);
	}
}
