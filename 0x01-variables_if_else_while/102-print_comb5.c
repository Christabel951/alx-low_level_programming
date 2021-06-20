#include <stdio.h>
/**
 * main - Prints string
 * Description: Prints all combinations of two-digit number
 * Return: 0 if program execution successful
 */
int main(void)
{
	int i, j;
	int i_f_digit, i_s_digit, j_f_digit, j_s_digit;


	for (i = 0; i <= 99; i++)
	{
		for (j = 1; j <= 99; j++)
		{
			if (i < j)
			{
				i_f_digit = i / 10;
				i_s_digit = i % 10;
				putchar(i_f_digit + '0');
				putchar(i_s_digit + '0');
				putchar(32);
				j_f_digit = j / 10;
				j_s_digit = j % 10;
				putchar(j_f_digit + '0');
				putchar(j_s_digit + '0');
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
