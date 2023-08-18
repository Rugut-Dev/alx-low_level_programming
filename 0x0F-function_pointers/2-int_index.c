#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an int
 * @array: pointer
 * @size: size
 * @cmp: pointer
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
/**
 * compare_even - checks even
 * @num: num being checked
 *
 * Return: int
 */
int compare_even(int num)
{
	return (num % 2 == 0);
}
