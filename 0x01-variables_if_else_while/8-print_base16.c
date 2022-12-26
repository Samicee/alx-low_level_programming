#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Alwways 0
 */
int main(void)
{
	char ch, chr;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (chr = 'a'; chr <= 'f'; chr++)
		putchar(chr);
	putchar('\n');
	return (0);
}
