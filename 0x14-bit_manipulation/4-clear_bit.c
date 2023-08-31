#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to teh nunmber to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}

	*n &= ~(1ul << index);

	return (1);
}
