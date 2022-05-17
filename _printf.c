#include <stdarg.h>
#include "main.h"
/**
<<<<<<< HEAD
 * format_val - format string
 * @list: list of args
 * @printed: number of printed chars
 * @format: string format
 * @count: iterator count
 * return: operator that coresponds to a function pointer
=======
 *_prinf - print formated strings
 *@format: format of the string
 *Return: number of character printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	int count = 0, printed = 0;

	if (!format)
		return (-1);
	va_start(list, format);
	while (format && format[count])
	{
		if (format[count] == '%')
		{
			if (format[count + 1] == '\0')
				return (-1);
			format_val(list, format, &printed, &count);
		}
		else
		{
			_putchar(format[count]);
			printed += 1;
			count += 1;
		}
	}
	va_end(list);
	return (printed);
}
/**
 * format_val - format string
 * @list: list of args
 * @format: format string
 * @printed: number of chars printed
 * @count: count iterator
 * Return: pointer to func that correspond to operator
>>>>>>> 14c87300d3db7a681bfdff19b7293a7f060367ef
 */
void format_val(va_list list, const char *format, int *printed, int *count)
{
	int f = 0, tobi = 0, tooc = 0;
	unsigned int num = 0;

	switch (format[*count + 1])
	{
		case '%':
			_putchar(format[*count + 1]);
			*printed += 1;
			break;
		case 'c':
			_putchar(va_arg(list, int));
			*printed += 1;
			break;
		case 's':
			format_string(list, printed, 's');
			break;
		case 'd': case 'i':
				format_int(list, printed);
				break;
		case 'b':
			num = va_arg(list, unsigned int);
			tobi = _tobinoct(num, 0, 2);
			*printed  += tobi;
			break;
		case 'o':
			num = va_arg(list, unsigned int);
			tooc = _tobinoct(num, 0, 8);
			*printed += tooc;
			break;
		case 'r':
			format_string(list, printed, 'r');
			break;
		default:
			*count += 1;
			*printed += 1;
			_putchar('%');
			f = 1;
	}
	if (!f)
		*count += 2;
}
/**
<<<<<<< HEAD
 * -printf - print any formated string
 * @format: string format
 * return: the number of the character printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int count = 0, printed = 0;

	if (!format)
		return (-1);
	va_start(list, format);
	while (format && format[count])
	{
		if (format[count] == '%')
		{
			if (format[count + 1] == '\0')
				return (-1);
			format_values(list, format, &printed, &count);
		}
		else
		{
			_putchar(format[count]);
			printed += 1;
			count += 1;
		}
	}
	va_end(list);
	return (printed);
}
/**
 * format_int - test number formats
 * @list: args list
 * @printed: pointer to amount of printed chars
 * return void
=======
 * format_string - test string format
 * @list: list of argument
 * @printed: pointer to printed chars
 * Return: void
 */
void format_string(va_list list, int *printed, char sr)
{
        char *s;
        s = va_arg(list, char *);

        if (s)
        {
                *printed += _strlen(s);
                if (sr == 's')
                        _puts(s);
                else
                        _printstr(s);
        }
        else
        {
                *printed += _strlen("(null)");
                if (sr == 's')
                        _puts("(null)");
                else
                        _printstr("(null)");
        }

/**
 * format_int - tests formats
 * @list: list of argument
 * @printed: pointer to printed chars
 * Return: void
>>>>>>> 14c87300d3db7a681bfdff19b7293a7f060367ef
 */
void format_int(va_list list, int *printed)
{
	int num = va_arg(list, int);

	if (num <= 0)
		*printed += 1;
	_printd(num);
	*printed += _numlen(num);
}
<<<<<<< HEAD
/**
 * format_string - test string format
 * @list: list of args
 * @printed: pointer to amount of printed chars
 * Return: void
 */
void format_string(va_list list, int *printed, char sr)
{
	char *s;
	s = va_arg(list, char *);

	if (s)
	{
		*printed += _strlen(s);
		if (sr == 's')
			_puts(s);
		else
			_printstr(s);
	}
	else
	{
		*printed += _strlen("(null)");
		if (sr == 's')
			_puts("(null)");
		else
			_printstr("(null)");
	}
=======
>>>>>>> 14c87300d3db7a681bfdff19b7293a7f060367ef
}
