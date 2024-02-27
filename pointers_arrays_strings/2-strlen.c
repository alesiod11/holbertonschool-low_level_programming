#include "main.h"

/**
 * _strlen - finds length of string
 * @s: string to find length
 * Return: returns length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
