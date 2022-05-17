#include <unistd.h>
/**
 * _putchar - writes char c to stdout
 * @c: character to print
 * on error, -1 is returned
 * Return: 1 on sucess
 */
int _putchar(const char c)
{
	return (write(1, &c, 1));
}
