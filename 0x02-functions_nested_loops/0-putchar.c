#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char *c;

	c = "_putchar\n";
	write(1, c, 9);
	return (0);
}
