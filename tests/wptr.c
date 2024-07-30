#include "main.h"

/**
 * wptr - writes pointer address in hexadecimail format
 * @chnum: counts printed character
 * @ptr: input pointer address
 *
 * Return: void
 */

void wptr(void *ptr, int *chnum)
{
	unsigned long num = (unsigned long) ptr;

	wstring("0x", chnum);
	whexadec(num, chnum, 0);
}
