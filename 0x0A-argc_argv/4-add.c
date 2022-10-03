#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints sum of numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: o if success, otherwise return 1
 */
int main(int argc, char **argv)
{
int i, num, sum;

sum = 0;
while (argc-- > 1)
{
	for (i = 1; argv[argc][i]; i++)
	{
		if (!(isdigit(argv[argc][i])))
		{
			printf("Error\n");
			return (1);
		}
	}
	num = atoi(argv[argc]);
	sum += num;
}
printf("%d\n", sum);
return (0);
}
