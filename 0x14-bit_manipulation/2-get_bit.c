#include "main.h"
/**
 * get_bit - return value of bit at given index position
 * @n: number
 * @index: 0-index system
 *
 * Description: gets the value of the bit of a number in binary
 * at a specified index
 * Return: bit in index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int _bit;

	if (index > 63)
		return (-1);
	_bit = (n >> index) & 1;
	return (_bit);
}
