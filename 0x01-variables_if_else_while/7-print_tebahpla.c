#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
char string1;

for (string1 = 'z'; string1 <= 'a'; string1--)
	putchar(string1);
putchar('\n');
return (0);
}
