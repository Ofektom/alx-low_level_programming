#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of input array
 * @c: input array character
 *
 * Return:Pointer to array of character, or null if 0
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i = 0;

s = malloc(size * sizeof(char));
if (s == NULL)
	return (NULL);
if (size == 0)
	return (NULL);
while (i < size)
{
	s[i] = c;
	i++;
}
return (s);
}
