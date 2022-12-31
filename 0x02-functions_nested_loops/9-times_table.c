#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * times_table - prints times table form 0 to 9
 */
void times_table(void)
{
	int i, j, k, count;
	for (i = 0; i <= 9; i++)
	{
		printf("%d, ", 0);
	}
	putchar('\n');
	for (j = 0; j < 9; j++)
	{
		count = 0;
		for (k = 0; k <= 9; k++)
		{
			printf("%d, ", count);
			if (j == 0)
				count++;
			else if (j == 1)
				count=+2;
			else if (j == 2)
				count =+ 3;
			else if (j == 3)
				count=+ 4;
			else if (j == 4)
				count=+5;
			else if (j == 5)
				count=+6;
			else if (j == 6)
				count=+7;
			else if (j == 7)
				count=+8;
			else if (j == 8)
				count=+9;
		}
		putchar('\n');
	}
}
