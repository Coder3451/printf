#include <string.h>
#include <unistd.h>
/**
 * wstring - writes string and counts printed char
 * @chnum: updates printedd count
 *
 * Return: void
 *
 */

void wstring(char *s, int *chnum)
{
	int ln = strlen(s);

	write(1, s, ln);
	*chnum = *chnum + ln;
}
