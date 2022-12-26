#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int x, y, z, i;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 9; y++)
		{
			for (z = y; z < 10; z++)
			{
				for (i = z + 1; i < 10; i++)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(' ');
					putchar(z + '0');
					putchar(i + '0');
					if (y < 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
