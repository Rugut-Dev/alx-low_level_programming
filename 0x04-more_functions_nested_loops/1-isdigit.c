#include "main.h"

/**
 * _isdigit - checks if is digit
 *
 *@c: character being checked
 *Return: 1 if is digit else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
