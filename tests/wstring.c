#include <string.h>
#include <unistd.h>
/**
 * wstring - writes string and counts printed char
 * @chnum: updates printedd count
 * @s: string
 * Return: void
 *
 */

void wstring(char *s, int *chnum)
{
	int ln = strlen(s);

	write(1, s, ln);
	*chnum = *chnum + ln;
}
<<<<<<< HEAD
=======

>>>>>>> aa6f29656bc4eff0afd64a34c2f4a2f35cafcb09
