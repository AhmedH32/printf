#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
void choosefn(va_list ap, char *buffer, int *chrcount, const char *format, int *i);
int _printf(const char *format, ...);
void printc(char *buffer, char arg, int *chrcountptr);
void prints(char *buffer, char *arg, int *chrcountptr);
int _putchar(char c);




#endif
