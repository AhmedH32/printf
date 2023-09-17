#ifndef MAIN_H
#define MAIN_H
#define UNUSED(x) (void)(x)


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


void choosefn(va_list ap, char *buffer,
		int *chrcount, const char *format, int *i);
int _printf(const char *format, ...);
void printc(va_list ap, char *buffer,
		int *chrcountptr, int width, int precision, int flags);
int _putchar(char c);
void prints(va_list ap, char *buffer,
		int *chrcountptr, int width, int precision, int flags);



#endif
