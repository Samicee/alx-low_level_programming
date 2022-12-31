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
	int ld;

	ld = n % 10;
	return (ld);
}
