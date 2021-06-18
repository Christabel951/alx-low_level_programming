#include <stdio.h>
/**
 * main - Prints string
 * Description: Prints random specified string
 * Return: 0
 */
int main(void)
{
	char i;
	char j;
	int ctrl_var = 0;

	i = 'a';
	while (i <= 'z')
	{
		j = i;
		if ((j == 'e') || (j == 'q'))
		{
			ctrl_var+=1;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
