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
 * @ap: va_list
 * @chrcountptr: pointer to the number of characters
 */
void prints(va_list ap, char *buffer, int *chrcountptr)
{
	char *str = va_arg(ap, char *);
	int i = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i])
	{
		buffer[*chrcountptr] = str[i];
		i++;
		*chrcountptr += 1;
	}
}
