#include "main.h"

/**
 *string_toupper - Prints uppercase letters of a string
 *@str: pointer to  character parameter
 *
 * Return: Character string
 */
char *string_toupper(char *str)
{
char *a;

a = str;
while (*str)
{
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	str++;
}
return (a);
}
