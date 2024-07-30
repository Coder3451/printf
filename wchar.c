#include "main.h"

/**
 * wchar - wtres single char and updates count
 * @chnum: counts number of characters
 * @c: char
 *
 * Return: void
 */

void wchar(char c, int *chnum)
{
	write(1, &c, 1);
	(*chnum)++;
}
