#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates string parameter
 * @str: input parameter to be duplicated
 *
 * Return: pointer s to the string on success, otherise return NULL
 */
char *_strdup(char *str)
{
char *s, *start;
int i = 0, count = 0;

if (str == NULL)
	return (NULL);
start = str;
while (*str)
{
	count++;
	str++;
}
str = start;
s = malloc(sizeof(char) * (count + 1));
start = s;
if (s != NULL)
{
	for (; i < count; i++)
	{
		s[i] = *str;
		str++;
	}
	s[i] = '\0';
	return (start);
}
else
	return (NULL);
}
