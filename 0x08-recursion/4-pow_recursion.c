#include "main.h"
/**
 * _pow_recursion - returns the value of an int raised to another
 * @x: base parameter
 * @y: index parameter
 * Return: power
 */

int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	if (y == 0)
		return (1);
	y--;
	power = x * _pow_recursion(x, y);
	return (power);
}
