#include "main.h"

/**
 * binary_to_uint - converts binary num to unsigned int
 * @b: string containing binary
 *
 * Return: uint or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			res <<= 1;
		else if (b[i] == '1')
		{
			res <<= 1;
			res |= 1;
		} else
		{
			return (0);
		}
	}
	return (res);
}
