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
		putchar('-' + '0');
	}
	else if (n == 0)
	{
		return (0);
		putchar('0' + '0');
	}
	else
	{
		putchar('+' + '0');
		return (1);
	}
}
