#include "main.h"
#include <string.h>

/**
 * wnum - converts int into string
 * @num: input number
 * @chnum: counts number cof characters printed
 *
 * Return: void
 */

void wnum(int num, int *chnum)
{
	char buffer[50];
	int i = 0;
	int neg = 0;

	if (num < 0)
	{
		neg = 1;
		num = -num;
	}

	if (num == 0)
	{
		buffer[i++] = '0';
	}
	else
	{
		while (num > 0)
		{
			buffer[i++] = (num % 10) + '0';
			num = num / 10;
		}
	}

	if (neg)
	{
		wchar('-', chnum);
	}
	while (i > 0)
	{
		wchar(buffer[--i], chnum);
	}
}
