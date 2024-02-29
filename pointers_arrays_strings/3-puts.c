#include "main.h" // Assuming _putchar is declared in main.h
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: string
 */
void _puts(char *str)
{
    int l;

    l = 0;
    while (str[l] != '\0')
    {
        _putchar(str[l]); // Call _putchar from main.h
        l++;
    }
    _putchar('\n'); // Call _putchar from main.h
}
