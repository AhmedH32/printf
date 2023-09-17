#include "main.h"

/**
 * choosefn - choosest the fn to be used  to print
 * @ap: variadic list
 * @buffer: the buffer where we store the characters
 * @chrcount: pointer to number of characters to print
 * @format: the format string
 * @i: the iterator
 * @width: matloob odam
 * @precision: matloob odam
 * @flag: odam bardo
 */
void choosefn(va_list ap, char *buffer, int *chrcount,
		const char *format, int *i, int width, int precision, int flag)
{
	switch (format[*i])
	{
		case 'c':
			printc(ap, buffer, chrcount, width, precision, flag);
			*i += 1;
			break;
		case 's':
			prints(ap, buffer, chrcount, width, precision, flag);
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
	int flags, width, precision, size = 0;
	va_list ap;
	char buffer[1024];

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			choosefn(ap, buffer, &chrcount, format, &i, width, precision, flag);
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
