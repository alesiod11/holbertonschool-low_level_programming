#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: input string
 */
void puts_half(char *str)
{
    int len, idx;

    len = 0;

    while (str[len] != '\0')
        len++;

    if (len % 2 == 0)
        idx = len / 2;
    else
        idx = (len + 1) / 2;

    while (str[idx] != '\0')
    {
        _putchar(str[idx]);
        idx++;
    }
    _putchar('\n');
}
