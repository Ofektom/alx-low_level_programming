#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 success
 */
int main(void)
{
int numberz;

for (numberz = '0'; numberz <= '9'; numberz++)
	putchar(numberz);
putchar('\n');
return (0);
}
