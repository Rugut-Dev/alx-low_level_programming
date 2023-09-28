#include "main.h"

/**
 * get_endianness - checks machine
 *
 * Return: 0 for bifg else little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *com = (char *) &i;

	return (*com);
}
