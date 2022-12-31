#include <stdio.h>
#include "main.h"
/**
 * _abs - returns the absolute value of an int
 * @n: argument
 *
 * Return: (int)
 */
int _abs(int n)
{
	int i;

	if (n < 0)
	{
		i = -n;
		return (i);
	}
	else
		return (n);
}
