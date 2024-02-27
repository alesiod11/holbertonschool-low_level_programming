#include "main.h"

/**
 * 1-swap - swaps the value of two integers
 * @a: value of first number
 * @b: value of second number
 */
void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b =tmp;
}
