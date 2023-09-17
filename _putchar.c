#include "main.h"
#include <unistd.h>

/**
 * _putchar - function that prints a character to output
 * @c: character to print
 *
 * Return: 1 on success, 0 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
