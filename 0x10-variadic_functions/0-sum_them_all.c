#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Adds series of numbers
 * @n: Series of integer numbers
 *
 * Return: sum of n if n is not 0, otherwise return 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int sum;

sum = 0;
if (n == 0)
	return (0);
va_start(ap, n);
for (i =0; i < n; i++)
	sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
