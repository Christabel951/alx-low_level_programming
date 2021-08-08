#include "main.h"
/**
 * get_endianness - check endianness
 *
 * Description: get the type of endiannes used for storing
 * multibyte data-type [little endian and big endian]
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
