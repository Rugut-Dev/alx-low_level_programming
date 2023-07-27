#include "main.h"

/**
 * reverse_array - reverses content of an aray of ints
 * @a: array of integers
 * @n: number of elements to swap
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int res;

	for (i = 0; i < n / 2; i++)
	{
		res = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = res;
	}
}
