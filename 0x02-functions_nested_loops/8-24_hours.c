#include "holberton.h"

/**
 * jack_bauer - prints all the 24 hours.
 * Description: prints in hrs:mins format
 * @void: Does not accept arguments.
 * Return: Has no return value -type void.
 */
void jack_bauer(void)
{
int h, m, fdh, sdh, fdm, sdm;

for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
fdh = h / 10;
sdh = h % 10;
fdm = m / 10;
sdm = m % 10;
_putchar(fdh + 48);
_putchar(sdh + 48);
_putchar(58);
_putchar(fdm + 48);
_putchar(sdm + 48);
_putchar('\n');
}
}
}
