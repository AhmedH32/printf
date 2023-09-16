#include "main.h"


int _printf(const char *format, ...)
{
	int i = 0m chrcount = 0;
	va_list ap;

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
					i++;
					break;
				case 's':
					i++;
					break;
				case '%':
					i++;
					break;
				default:
					write(1,"Unkown specifier",16);
					break;
			}
		}
		_putchar(format[i]);
		chrcount++;
	}
	_putchar('\n');
	va_end(ap);
	return (chrcount);
}
