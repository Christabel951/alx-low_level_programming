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
		f_digit = (i / 10);
		s_digit = (i % 10);
		if ((f_digit != s_digit) && (s_digit != 0) && (f_digit < s_digit))
		{
			putchar(f_digit + '0');
			putchar(s_digit + '0');
			if (i != 89)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
