#ifndef _MAIN_H_
#define _MAIN_H_
<<<<<<< HEAD
int _printf(const char *format, ...);
int _putchar(const char c);
int _strlen(const char *s);
void _puts(const char *str);
int _numlen(int n);
#endif
=======
#include <stdarg.h>
void _printd(int n);
int _tobinoct(unsigned int n, int m, unsigned s);
void _printstr(char *s);
void format_int(va_list list, int *printed);
void format_string(va_list list, int *printed, char sr);
void format_values(va_list list, const char *format, int *printed, int *count);
#endif

>>>>>>> f1268cd5db29dae33d9b51e161a7ab073695d412
