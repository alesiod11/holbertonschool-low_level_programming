#include "main.h"
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
_putchar(str[l]);
l++;
}
_putchar('\n');
}
