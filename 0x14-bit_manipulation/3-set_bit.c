#include "main.h"
/**
 * set_bit - set the value of bit to 1 at given index position
 * @n: pointer to the number
 * @index: 0-index system
 *
 * Description: sets the value of the bit of a number in binary to 1
 * at a specified index
 * Return: 1 if success else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
