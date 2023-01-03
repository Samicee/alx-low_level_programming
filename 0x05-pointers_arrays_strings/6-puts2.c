#include "main.h"
/**
 * puts2 - prints every other char of a stirng from [0]
 * @str: pointer parameter
 */
void puts2(char *str)
{
	char *temp;
	int len, i;

	len = str_len(str);
	temp = str;

	for (i = 0; i < len - 1; i++)
	{
		if (i % 2 == 0)
			_putchar(*temp);
		temp++;
	}
	_putchar('\n');
}
/**
 * str_len - returns length of string
 * @ptr: parameteer
 * Return: i
 */
int str_len(char *ptr)
{
	int i = 0;

	while (*(ptr + i) != '\0')
		i++;
	return (i);
}
