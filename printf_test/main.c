#include <limits.h>
#include <stdio.h>
#include <limits.h>
#include "../main.h"
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n = _printf("%s\n", "");
	int m = _printf("%r\n", "");

	printf("%d, %d\n", n, m);

	return (0);

}
