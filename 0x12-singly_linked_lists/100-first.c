#include <stdio.h>

void print_before_main(void) __attribute__ ((constructor));
/**
 * print_before_main - use constructor attribute to enable itself
 * to print before main function executes
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
