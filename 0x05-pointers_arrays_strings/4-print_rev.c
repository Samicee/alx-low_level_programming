#include "main.h"
#include <string.h>
/**
 * print_rev - print string in reverse
 * @s: pointer parameter
 */
void print_rev(char *st)
{
	int len, i;

	char *start, *end, temp;
	len = str_len (st);
	start = st;
	end = st;
	for (i = 0; i < len - 1; i++)
	{
		end++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
	printf("%s", st);
	_putchar('\n');
}
int str_len (char *ptr)
{
	int i = 0;

	 while ( *(ptr + i) != '\0') 
		 i++;
	 return (i);
}
