#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *n: positive or negative integer
 *Return: Always 0 (Correct)
 *
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
	printf(n, "is positive %d\n");
else if (n == 0)
	printf(n, "is zero %d\n");
else
	printf(n, "is negative %d\n");
return (0);
}
