#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *n: random number
 *Return: Always 0 (success)
 */
int main(void)
{
int n, digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
digit = n % 10;

printf("Last digit of %d is ", digit);
if (digit > 5)
	printf("%d and is greater than 5", digit);
if (digit == 0)
	printf("%d and is 0", digit);
if (digit < 6 && digit != 0)
	printf("%d and is less than 6 and not 0", digit);
printf("\n");
return (0);
}
