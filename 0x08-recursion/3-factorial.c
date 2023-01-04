#include "main.h"
/**
 * factorial - returns the factorial of an int
 * @n: int parameter
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
