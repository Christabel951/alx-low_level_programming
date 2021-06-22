#include "holberton.h"

/**
 * print_alphabet - print lower case alphabets.
 * Description: encapsulates the fuction to print lowercase alphabets
 * Return: no return value.
 */
void print_alphabet(void)
{
int i;

for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
