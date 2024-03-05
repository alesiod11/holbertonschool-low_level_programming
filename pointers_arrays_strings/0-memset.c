#include "main.h"

char *_memset(char *s, char b, unsigned int n) // s is a pointer to the memory area to be filled.
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);

}
