#include "main.h"

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
			switch (format[i])
			{
				case 'c':
					printc(buffer, va_arg(ap, int), &chrcount);
					i++;
					break;
				case 's':
					prints(buffer, va_arg(ap, char *), &chrcount);
					i++;
					break;
				case '%':
					buffer[chrcount] = format[i];
					chrcount++;
					i++;
					break;
			}
		}
		else
		{
			buffer[chrcount] = format[i];
			i++;
			chrcount++;
		}
	}
	buffer[chrcount] = '\0';
	write(1, buffer, chrcount);
	va_end(ap);
	return (chrcount);
}
