#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: integer one
 * @b: integer two
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int b4 = *a;
	*a = *b;
	*b = b4;
}
