#include "main.h"

/**
 * printc - used to print a character
 * @buffer: the buffer where the char will be stored
 * @arg: the char to print
 * @chrcountptr: pointer to the number of characters
 */
void printc(char *buffer, char arg, int *chrcountptr)
{
	buffer[*chrcountptr] = arg;
	*chrcountptr += 1;
}
/**
 * prints - used to print a string
 * @buffer: the buffer where the string will be stored
 * @arg: the point to the string to print
 * @chrcountptr: pointer to the number of characters
 */
void prints(char *buffer, char *arg, int *chrcountptr)
{
	int i = 0;

	while (arg[i])
	{
		buffer[*chrcountptr] = arg[i];
		i++;
		*chrcountptr += 1;
	}
}
