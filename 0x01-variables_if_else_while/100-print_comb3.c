#include <stdio.h>
/**
 * main - Prints string
 * Description: Prints random specified string
 * Return: 0
 */
int main(void)
{
	int i;
	int f_digit;
	int s_digit;

	for (i = 1; i <= 89; i++)
	{
		f_digit = ((i/10) + '0');
		s_digit = ((i%10) + '0');
		putchar(f_digit);
		putchar(s_digit);
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
