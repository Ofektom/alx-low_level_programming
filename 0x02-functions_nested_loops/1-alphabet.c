#include "main.h"

/**
 * main - Prints lower case alphabets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char alph;

for (alph = 'a'; alph <= 'z'; alph++)
	_putchar(alph);
_putchar('\n');
}
