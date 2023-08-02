#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);
/**
 * is_prime_number - checks if num is prime number
 * @n: number being checked
 * Return: Integer
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - Check if num is prime
 * @n: the num to be checked
 * @i: iterator
 *
 * Return: 1 if prime, otherise 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (check_prime(n, i + 1));
}
