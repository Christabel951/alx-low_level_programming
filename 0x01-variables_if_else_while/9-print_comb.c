#include <stdio.h>
/**
 * main - Prints string
 * Description: Prints random specified string
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 56; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar(57);
	return (0);
}
