#include <stdio.h>
/**
 * print_sign - checks an int if +ve -ve or zero
 * @n: argument
 *
 * Return: -1 || 0 || 1
 */
int print_sign(int n)
{
	if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
