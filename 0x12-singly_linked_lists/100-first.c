#include <stdio.h>

void print_s(void)__attribute__((constructor));
/**
 * print_s - prints a sentence before main
 *
 * Return: void
 */
void print_s(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
