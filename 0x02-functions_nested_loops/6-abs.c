#include <stdio.h>
#include "main.h"
/**
 * _abs - returns the absolute value of an int
 * @int: argument
 *
 * Return: (int)
 */
int _abs(int n)
{
	int i;

	if (n < 0)
	{
		i = -n;
	       _putchar(i + '0');
	}
	else
		_putchar(n);
}
