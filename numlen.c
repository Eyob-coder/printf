#include <stdio.h>
/**
 * _numlen - Counts number.
 * @n: Passed number.
 * Return: Returns number of digits n.
**/
int _numlen(int n)
{
int cnt = 0;

while (n != 0)
{
	n = n / 10;
	cnt++;
}

return (cnt);
}
