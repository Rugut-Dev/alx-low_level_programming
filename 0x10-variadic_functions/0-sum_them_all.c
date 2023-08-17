#include "variadic_fucntions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of its parameters
 * @n: The num of parameters passed
 * @...: A variable num of parameterss to calculate sum
 *
 * Return: if n == 0, then 0 else sum of params
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
