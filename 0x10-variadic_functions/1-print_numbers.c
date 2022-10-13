#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by newline
 * @n: unsigned constant integer argument
 * @seperator: character pointer to comma seperators
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

va_start(ap, n);
for (i = 0; i < n; i++)
{
	if (separator == NULL)
		continue;
	printf("%d", va_arg(ap, int));
	printf("%s", separator);
}
printf("\n");
va_end(ap);
}
