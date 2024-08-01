#include "main.h"

/**
 * wstring - writes string and counts printed char
 * @chnum: updates printedd count
 * @s: string
 *
 * Return: void
 */

void wstring(char *s, int *chnum)
{
	int ln = 0;

	while (*s)
	{
		write(1, s, 1);
		ln++;
		s++;
	}
	*chnum = *chnum + ln;
}
