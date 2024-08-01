#include "main.h"
#include <string.h>

/**
 * wnum - converts int into string
 * @num: input number
 * @chnum: counts number cof characters printed
 * Return: void
 */

void wnum(int num, int *chnum)
{
	char buffer[50];
	int i = 0;
	int n = i - 1;

	if (num < 0)
	{
		wchar('-', chnum);
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

	buffer[i] = '\0';

	while (n >= 0) 
	{
		wchar(buffer[n], chnum);
		n--;
	}
}
