#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Checks for alphabetic character
 *
 * @c: character being checked
 * Return: 1 if  is alpha, else 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
