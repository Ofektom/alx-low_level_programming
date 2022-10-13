#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings from list of arguments
 * @n: unsigned number of strings
 * @separator: character that separates strings
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *word;

va_start(ap,n);
for (i = 0; i < n; i++)
{
	word = va_arg(ap, char*);
	if (separator == NULL)
		continue;
	if (word == NULL)
		printf("(nil)");
	printf("%s", word);
	printf("%s", separator);
}
printf("\n");
va_end(ap);
}
