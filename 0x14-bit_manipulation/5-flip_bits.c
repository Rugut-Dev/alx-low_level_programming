#include "main.h"

/**
 * flip_bits - retuns no. of bits you'd need to flip to realize another num
 * @n: num
 * @m: num 2
 *
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xr = n ^ m, i = 0;

	while (xr)
	{
		i += xr & 1;
		xr >>= 1;
	}

	return (i);
}
