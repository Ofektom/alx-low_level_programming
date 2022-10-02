#include <stdio.h>

/**
 * main - Prints all the arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
