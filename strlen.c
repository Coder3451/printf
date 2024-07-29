#include "main.h"

/**
 * _strlen - find length of a string
 * @s: character pointer
 * 
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
    int length = 0;

    while (*s != '\0')
    {
        length++;
        s++;
    }
    return (length);
}
