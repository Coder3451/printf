#include <unistd.h>

/**
 * wchar - wtres single char and updates count
 * @chnum: counts number of characters
 *
 * Return: void
 */

void wchar(char c, int *chnum)
{
	write(1, &c, 1);
	(*chnum)++;
}
