#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: int being tested
 * Return: 1 if is uppercase else 0
 */
int _isupper(int c)
{
	if  (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
