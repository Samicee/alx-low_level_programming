#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - returns the last digit of a number
 * @n: argument
 *
 * Return: (int)
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		return ((-n) % 10);
	}
	else
	{
		return (n % 10);
	}
}
