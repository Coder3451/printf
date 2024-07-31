#include "main.h"

/**
 * wbinary - converts an unsigned integer to a binary string and prints it
 * @n: the integer to be converted
 * @chnum: points to the counter
 */

void wbinary(unsigned int n, int *chnum)
{
	char buffer[32];
	int i = 0;

	if (n == 0)
	{
		wchar('0', chnum);
		return;
	}

	while (n > 0)
	{
		buffer[i++] = (n % 2) + '0';
		n /= 2;
	}

	while (i > 0)
		wchar(buffer[--i], chnum);
}
