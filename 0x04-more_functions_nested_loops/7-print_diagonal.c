#include "main.h"
/**
 * print_diagonal - draws diagonal line
 * @n: argument
 */
void print_diagonal(int n)
{
	int i, j, k;

	j = 0;
	k = n;
	while (k > 0)
	{
		for (i = 0; i < j; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		k--;
		j++;
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
