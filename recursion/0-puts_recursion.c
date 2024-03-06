#include "main.h"
/**
*_puts_recursion - function that prints a string
*@s: string
*Return: NULL
*/
void _puts_recursion(char *s)
{
    int i;

    for (i=0; s[i] != '\0'; i++)
        _putchar(s[i]);
    
    _putchar('\n');

    if (*s == '\0')
        _putchar(*s);
        _puts_recursion(s + 1);
    }
}