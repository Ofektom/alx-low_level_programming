#include "main.h"

/**
 * _strlen - Gives the length of a string
 * @s: string
 * Return: Lenth of string
 */
int _strlen(char *s)
{
int len;

len = 0;
while (s[len] != '\0')
	len++;
return (len);
}
