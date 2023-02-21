#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the character of c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set approprietly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
