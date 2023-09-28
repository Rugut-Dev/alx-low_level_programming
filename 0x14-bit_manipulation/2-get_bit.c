#include "main.h"

/**
 * get_bit - retuns the value of a bit at a given index
 * @n: num
 * @index: index
 *
 * Return: value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{

	int bit_val;
	unsigned int num_bits = sizeof(n) * 8;
	unsigned long int mask = 1UL << index;

	if (index >= num_bits)
		return (-1);

	bit_val = (n & mask) ? 1 : 0;

	return (bit_val);
}
