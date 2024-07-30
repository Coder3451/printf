#include "main.h"

/**
 * wbinary - converts an unsigned integer to a binary string and prints it
 * @n: 
 * @chnum:
 */

void wbinary(unsigned int n, int *chnum)
{
	if(n == 0)
	{
		wchar('0', chnum);
		return;
	}

	char buffer[32];
	int i = 0;

	while (n > 0)
	{
		buffer[i++] = (n % 2) + '0';
		n /= 2;
	}

	while (i > 0)
		wchar(buffer[--i], chnum);
}
