#include "holberton.h"

/**
 * print_alphabet_x10 - print lower case alphabets.
 * Description: encapsulates the fuction to print lowercase alphabets 10 times
 * Return: no return value.
 */
void print_alphabet_x10(void)
{
int i;

i = 0;
while (i < 10)
{
int j = 'a';
while (j <= 'z')
{
_putchar(j);
}
_putchar('\n');
}
}
