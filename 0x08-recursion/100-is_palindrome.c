#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if string is palindrome
 *
 * @s: pointer to string being checked
 * Return: 1 i string is palindromic else 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns string length
 * @s: string being checked
 *
 * Return: len of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks the character recursively
 * @s: string to check
 * @i: iterator
 * @len: length returned
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}
	return (check_pal(s, i + 1, len - 1));
}
