#include "main.h"
#include <stdio.h>

/**
 * reverse_array - prints the reverse of an array
 * @a: an integer array
 * @n: size of array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int i;
int aux;

i = 0;
while (i < n--)
{
	aux = a[i];
	a[i++] = a[n];
	a[n] = aux;
}
}
