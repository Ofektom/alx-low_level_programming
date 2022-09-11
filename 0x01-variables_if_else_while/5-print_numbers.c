#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int number;

number = 0;
while (number < 10)
{
	printf("%d", number);
	number += 1;
}
printf("\n");
return (0);
}
