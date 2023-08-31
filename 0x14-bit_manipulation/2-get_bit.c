#include "main.h"

/**
 * get_bit - returns value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value ofthe bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1ul << index;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	if (n & mask)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
