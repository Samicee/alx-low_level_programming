#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 9; x++)
	{
		for (y = x + 1; y < 9; y++)
		{
			for (z = x + 2; z < 10; z++)
			{
			putchar(x + '0');
			putchar(y + '0');
			putchar(z + '0');
			if (x < 7)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
