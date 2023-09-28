#include "main.h"

/**
 * clear_bit - sets val of bit to 0 at a given index
 * @n: num
 * @index: index
 *
 * Return: 1 if succes else 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num_bits = sizeof(*n) * 8;
	unsigned long int mask = 1UL << index;

	if (index >= num_bits)
		return (-1);

	*n &= ~mask;

	return (1);
}
