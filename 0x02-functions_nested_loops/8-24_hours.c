#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints all the minutes of the day
 *
 */
void jack_bauer(void)
{
	char i, j;

	for (i = '0'; i <= '24'; i++)
	{
		for (j = '0'; j <= '60'; j++)
		{
			if (i < 10)
				_putchar('0');
			_putchar(i);
			_putchar(' ');
			_putchar(':');
			_putchar(' ');
			if (j < 10)
				_putchar('0');
			_putchar(j);
			_putchar('\n');
		}
	}
}
