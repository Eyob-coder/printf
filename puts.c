#include "main.h"

/**
 * _puts - Swaps integers and pointers.
 *
 * @str: pointer to char
 *
 * Return: Always 0.
 */

void _puts(const char *str)
{
int i = 0;

while (*(str + i) != '\0')
{
_putchar(*(str + i));
i++;
}
}
