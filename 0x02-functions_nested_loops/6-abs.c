#include "main.h"
#include <inttypes.h>
#include <stdlib.h>

/**
 * _abs - Computes absolute value of int
 *
 * @n: integer value
 * Return: abs value of integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
