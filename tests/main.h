#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
int _printf(const char *format, ...);

void wstring(char *s, int *chnum);
void wchar(char c, int *chnum);
void wnum(int num, int *chnum);
void wuns(unsigned int num, int *chnum);
void woctal(unsigned int num, int *chnum);
void whexadec(unsigned int num, int *chnum, int upper);
void wptr(void *ptr, int *chnum);
void wbinary(unsigned int n, int *chnum);

void spec_handle(char specifier, va_list args, int *chnum);
#endif
