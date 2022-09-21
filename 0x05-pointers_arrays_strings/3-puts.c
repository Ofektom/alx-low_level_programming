#include "main.h"

/**
 * _puts - Prints string to standard output
 * @str: input string
 * Return: 0
 */
void _puts(char *str)
{
int n = 0;

while (str[n] != '\0')
{
	_putchar(str[n]);
	n++;
}
_putchar ('\n');
}
