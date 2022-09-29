#include "main.h"

/**
 *_memcpy - copies the content of memory
 *@dest: where to copy  to
 *@src: where to copy from
 *@n: size in memory
 *Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *start = dest;

while (n--)
{
	*dest = *src;
	src++;
	dest++;
}
return (start);
}
