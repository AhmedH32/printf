#include "main.h"

/**
 * printc - used to print a character
 * @buffer: the buffer where the char will be stored
 * @ap: va_list
 * @chrcountptr: pointer to the number of characters
 * @width: width
 * @precision: precision
 * @flags: flags
 */
void printc(va_list ap, char *buffer,
		int *chrcountptr, int width, int precision, int flags)
{
	char c = va_arg(ap, int);

	UNUSED(width);
	UNUSED(precision);
	UNUSED(flags);

	buffer[*chrcountptr] = c;
	*chrcountptr += 1;
}
/**
 * prints - used to print a string
 * @ap: va_list
 * @precision: precision
 * @flags: flags total
 * @buffer: the buffer where the string will be stored
 * @width: width
 * @chrcountptr: pointer to the number of characters
 */
void prints(va_list ap, char *buffer,
		int *chrcountptr, int width, int precision, int flags)
{
	char *str = va_arg(ap, char *);
	int i = 0;

	UNUSED(width);
	UNUSED(precision);
	UNUSED(flags);

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
