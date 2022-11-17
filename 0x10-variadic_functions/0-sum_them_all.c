#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all -  a function that returns the sum of all its parameters
 * @n: unsigned int
 * Return: sum, 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(args, int);
		}
	}
	va_end(args);
	return (sum);
}
