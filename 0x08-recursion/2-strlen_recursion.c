#include "main.h"

/**
 * _strlen_recursion - returns the length if a string
 *
 * @s: pointer to string
 * Return: Number of characters in string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
