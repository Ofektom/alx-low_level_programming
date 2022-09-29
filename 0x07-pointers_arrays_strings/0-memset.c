#include "main.h"

/**
 *_memset - changes value of memory
 *
 * @s: pointer to memory
 * @b: constant byte replacement
 * @n: size of memory alocated
 *
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *start = s;

while (n--)
{
	*s = b;
	s++;
}
return (start);
}
