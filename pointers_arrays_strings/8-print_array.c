#include "main.h"
#include "stdio.h"
/**
 * puts_half -  print the second half of the string
 * @str: input string
 */
 void print_array(int *a, int n) 
{
    int i;

    for (i=0; i<n; i++)
    {
        if (1 < n - 1)
            printf("%d, ", a[i]);
        else
            printf("%d", a[i]);
    }
    printf("\n");
}