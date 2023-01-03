#include "main.h"
/**
 * _puts -  prints a sting
 * @str: parameter
 */
void _puts(char *str)
{
	char *i;

	for (i = str; *i != '\0'; i++)
	{
		_putchar(*i);
	}
	_putchar('\n');
}
