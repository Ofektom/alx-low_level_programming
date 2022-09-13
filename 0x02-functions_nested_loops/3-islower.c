#include "main.h"

/**
 *_islower -checks for lower case characters
 *
 *@c: int variable for checking
 *
 *Return: 1 if it is lower and 0 it it is not
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')

	return (1);
else
	return (0);
}
