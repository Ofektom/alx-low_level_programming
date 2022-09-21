#include "main.h"

/**
 * swap_int - swapsthe values of 2 integers
 * @a: takes an integer
 * @b: takes the second integer input
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
int swp;

swp = *a;
*a = *b;
*b = swp;
}
