#include "main.h"
#include <ctype.h>

/**
 * _islower - checks for lowercase
 *
 * @c: character to be checked
 * Return: 1 (if c is lowercase) else 0
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
