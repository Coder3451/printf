#include <unistd.h>

/**
 * wchar - wtres single char and updates count
 * @chnum: counts number of characters
 * @c: char
 * Return: void
 */

void wchar(char c, int *chnum)
{
	write(1, &c, 1);
	(*chnum)++;
}
<<<<<<< HEAD
=======

>>>>>>> aa6f29656bc4eff0afd64a34c2f4a2f35cafcb09