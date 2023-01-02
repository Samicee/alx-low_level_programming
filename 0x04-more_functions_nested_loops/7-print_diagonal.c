#include "main.h"
/**
 * print_diagonal - draws diagonal line
 * @n: argument
 */
void print_diagonal(int n)
{
	int i, j;

	j = 0;
	while (n > 0)
	{
		for (i = 0; i < j; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		n--;
		j++;
		_putchar('\n');
	}
}
