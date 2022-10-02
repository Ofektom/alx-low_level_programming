#include "main.h"
#include <unistd.h>

/**
 * _putchar - outputs ASCII characters
 * @c: character to be output
 *
 * Return: 1 on success
 * on error, -1, and errno is set appropriate
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
