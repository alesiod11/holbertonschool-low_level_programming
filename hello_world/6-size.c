#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number = 4;
printf("Size of a char: %ld 1 byte(s)\n", sizeof(char));
printf("Size of an int: %li 4 byte(s)\n", sizeof(int));
printf("Size of a long int: %li 4 byte(s)\n", sizeof(int));
printf("Size of a long long int: %li 8 byte(s)\n", sizeof(int));
printf("Size of a float: %ld 4 byte(s)\n", sizeof(float));
}
