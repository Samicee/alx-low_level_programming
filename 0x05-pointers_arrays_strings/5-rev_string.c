#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string to mirror view
 * @s: pointer parameter
 * str_len - returns the length of the string
 * @ptr: pointer  parameter
 */
void rev_string(char *s)
{
	int len, i;
	char *start, *end, temp;

	len = str_len(s);
	start = s;
	end = s;

	for (i = 0; i < len - 1; i++)
		end++;
	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}
}
int str_len(char *ptr)
{
	int i = 0;
	while (*(ptr + i) != '\0')
		i++;
	return (i);
}
