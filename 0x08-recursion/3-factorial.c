#include "main.h"
/**
 * factorial - returns the factorial of an int
 * @n: int parameter
 * Return: factorial
 */

int factorial(int n)
{
	int _factorial;

	if (n < 0)
		_factorial = -1;
	else if (n == 0)
		return (1);
	else
	{
		_factorial = n * factorial(n - 1);
	}
	return (_factorial);
}
