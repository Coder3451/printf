#include "main.h"


/**
 * wunsigned - writes unsigned integer
 * @num: input unsigned integer
 * @chnum: couts printed
 * Return: void
 */

void wunsigned(unsigned int num, int *chnum)
{
	char buffer[50];
	int ln = 0;

	if (num == 0)
	{
		buffer[ln++] = '0';
	}
	while (num > 0)
	{
		buffer[ln++] = (num % 10) + '0';
		num /= 10;
	}
	while (--ln >= 0)
	{
		wchar(buffer[ln], chnum);
	}
}
