#include "main.h"



/**
 * choosefn - choosest the fn to be used  to print
 * @ap: variadic list
 * @buffer: the buffer where we store the characters
 * @chrcount: pointer to number of characters to print
 * @format: the format string
 * @i: the iterator
 */
void choosefn(va_list ap, char *buffer, int *chrcount,
		const char *format, int *i)
{
	switch (format[*i])
	{
		case 'c':
			printc(buffer, va_arg(ap, int), chrcount);
			*i += 1;
			break;
		case 's':
			prints(ap, buffer, chrcount, 0, 0, 0);
			*i += 1;
			break;
		case '%':
			buffer[*chrcount] = format[*i];
			*chrcount += 1;
			*i += 1;
			break;
	}

}
/**
 * _printf - prints the arguments it is called with using a format string
 * @format: the format string
 * Return: number of character to be printed
 */
int _printf(const char *format, ...)
{
	int i = 0, chrcount = 0;
	va_list ap;
	char buffer[1024];

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			choosefn(ap, buffer, &chrcount, format, &i);
		}
		else
		{
			buffer[chrcount] = format[i];
			i++;
			chrcount++;
		}
	}
	write(1, buffer, chrcount);
	va_end(ap);
	return (chrcount);
}
