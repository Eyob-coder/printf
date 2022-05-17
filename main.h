#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

#define BUF_SIZE 1024
#define BUF_FLUSH -1

#define FLAGS_INIT {0, 0, 0, 0, 0}
void _printd(int n);
int _tobinoct(unsigned int n, int m, unsigned s);
void _printstr(char *s);
void format_int(va_list list, int *printed);
void format_string(va_list list, int *printed, char sr);
void format_values(va_list list, const char *format, int *printed, int *count);
int _printf(const char *format, ...);
int _putchar(const char c);
int _strlen(const char *s);
void _puts(const char *str);
int _numlen(int n);
#endif
