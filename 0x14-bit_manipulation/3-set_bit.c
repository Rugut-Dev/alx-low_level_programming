#include "main.h"

/**
 * set_bit  - sets value of a bit to 1 at a given index
 * @n: num
 * @index: given index
 *
 * Return: 1 of success else 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num_bits = sizeof(n) * 8;
	unsigned long int mask = 1UL << index;

	if (index >= num_bits)
		return (-1);

	*n |= mask;

	return (1);
}
