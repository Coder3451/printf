#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
int _printf(const char *format, ...);

int _strlen(char *s);
void wstring(char *s, int *chnum);
void wchar(char c, int *chnum);

#endif
